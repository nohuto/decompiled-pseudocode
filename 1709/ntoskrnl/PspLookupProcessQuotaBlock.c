/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x140582C24
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140582A58 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     RtlEqualSid @ 0x140087C60 (RtlEqualSid.c)
 *     PspUnlockQuotaListShared @ 0x140125A34 (PspUnlockQuotaListShared.c)
 *     PspUnlockQuotaListExclusive @ 0x14015D198 (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x140582D1C (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x140582EC0 (PspSafeReferenceQuotaBlock.c)
 */

__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // eax
  __int64 v9; // rbx
  signed __int64 *v10; // rsi
  signed __int64 *i; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  signed __int64 **v17; // rdx
  signed __int64 *v18; // rax

  CurrentThread = KeGetCurrentThread();
  v8 = PspHashKeyValue();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = (signed __int64 *)(PspQuotaBlockTable + 24LL * v8);
  if ( a4 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v10, 0LL);
  else
    ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
  if ( a1 )
  {
    for ( i = (signed __int64 *)v10[1]; i != v10 + 1; i = (signed __int64 *)*i )
    {
      if ( RtlEqualSid(a1, i + 7) )
      {
        v9 = (__int64)(i - 65);
        goto LABEL_12;
      }
    }
  }
  else if ( a3 )
  {
    v9 = PspDefaultQuotaBlock;
LABEL_12:
    if ( v9 )
    {
      if ( (unsigned int)PspSafeReferenceQuotaBlock(v9) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 516));
      }
      else
      {
        if ( a4 && !a3 )
        {
          v14 = (_QWORD *)(v9 + 520);
          v15 = *v14;
          if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14) )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          *v14 = 0LL;
        }
        v9 = 0LL;
      }
    }
  }
  if ( a4 )
  {
    if ( !v9 )
    {
      if ( a3 )
      {
        PspDefaultQuotaBlock = a4;
        *(_QWORD *)(a4 + 520) = 1LL;
      }
      else
      {
        v17 = (signed __int64 **)v10[2];
        v18 = (signed __int64 *)(a4 + 520);
        if ( *v17 != v10 + 1 )
          __fastfail(3u);
        *v18 = (signed __int64)(v10 + 1);
        *(_QWORD *)(a4 + 528) = v17;
        *v17 = v18;
        v10[2] = (signed __int64)v18;
      }
    }
    PspUnlockQuotaListExclusive((__int64)CurrentThread, (unsigned __int64)v10);
  }
  else
  {
    PspUnlockQuotaListShared((__int64)CurrentThread, v10);
  }
  return v9;
}
