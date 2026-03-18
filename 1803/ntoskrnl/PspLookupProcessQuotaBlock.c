/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x140572048
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140571E7C (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaListShared @ 0x1400C51F8 (PspUnlockQuotaListShared.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 *     PspUnlockQuotaListExclusive @ 0x140187064 (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x140572144 (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x1405722E8 (PspSafeReferenceQuotaBlock.c)
 */

__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v8; // eax
  __int64 v9; // rbx
  signed __int64 *v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  signed __int64 *i; // rdi
  signed __int64 *v15; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  signed __int64 **v20; // rdx

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
          v17 = (_QWORD *)(v9 + 520);
          v18 = *v17;
          if ( *(_QWORD **)(*v17 + 8LL) != v17 || (v19 = (_QWORD *)v17[1], (_QWORD *)*v19 != v17) )
            __fastfail(3u);
          *v19 = v18;
          *(_QWORD *)(v18 + 8) = v19;
          *v17 = 0LL;
        }
        v9 = 0LL;
      }
    }
  }
  if ( a4 )
  {
    if ( !v9 )
    {
      v15 = (signed __int64 *)(a4 + 520);
      if ( a3 )
      {
        PspDefaultQuotaBlock = a4;
        *v15 = 1LL;
      }
      else
      {
        v20 = (signed __int64 **)v10[2];
        if ( *v20 != v10 + 1 )
          __fastfail(3u);
        *v15 = (signed __int64)(v10 + 1);
        *(_QWORD *)(a4 + 528) = v20;
        *v20 = v15;
        v10[2] = (signed __int64)v15;
      }
    }
    PspUnlockQuotaListExclusive((__int64)CurrentThread, (unsigned __int64)v10, v11, v12);
  }
  else
  {
    PspUnlockQuotaListShared((__int64)CurrentThread, v10);
  }
  return v9;
}
