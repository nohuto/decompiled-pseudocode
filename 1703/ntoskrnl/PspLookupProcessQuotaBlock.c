/*
 * XREFs of PspLookupProcessQuotaBlock @ 0x140448804
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140448638 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspUnlockQuotaListShared @ 0x14002F5A0 (PspUnlockQuotaListShared.c)
 *     RtlEqualSid @ 0x1400EDD10 (RtlEqualSid.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     PspUnlockQuotaListExclusive @ 0x14016836C (PspUnlockQuotaListExclusive.c)
 *     PspHashKeyValue @ 0x1404488FC (PspHashKeyValue.c)
 *     PspSafeReferenceQuotaBlock @ 0x140448AA0 (PspSafeReferenceQuotaBlock.c)
 */

__int64 __fastcall PspLookupProcessQuotaBlock(void *a1, __int64 a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // eax
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  _QWORD *i; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rax

  CurrentThread = KeGetCurrentThread();
  v8 = PspHashKeyValue();
  --CurrentThread->KernelApcDisable;
  v9 = 0LL;
  v10 = PspQuotaBlockTable + 24LL * v8;
  if ( a4 )
    ExAcquirePushLockExclusiveEx(v10, 0LL);
  else
    ExAcquirePushLockSharedEx(v10, 0LL);
  if ( a1 )
  {
    for ( i = *(_QWORD **)(v10 + 8); i != (_QWORD *)(v10 + 8); i = (_QWORD *)*i )
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
          v16 = (_QWORD *)v14[1];
          if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v16 != v14 )
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
        v17 = *(_QWORD **)(v10 + 16);
        v18 = (_QWORD *)(a4 + 520);
        if ( *v17 != v10 + 8 )
          __fastfail(3u);
        *v18 = v10 + 8;
        *(_QWORD *)(a4 + 528) = v17;
        *v17 = v18;
        *(_QWORD *)(v10 + 16) = v18;
      }
    }
    PspUnlockQuotaListExclusive((__int64)CurrentThread, v10);
  }
  else
  {
    PspUnlockQuotaListShared((__int64)CurrentThread, (volatile signed __int64 *)v10);
  }
  return v9;
}
