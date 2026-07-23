/*
 * XREFs of SeIsParentOfChildAppContainer @ 0x14041F820
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x140248758 (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x14041E978 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x1406F98C0 (SepFindMatchingLowBoxNumberEntries.c)
 */

BOOLEAN __fastcall SeIsParentOfChildAppContainer(unsigned int a1, int a2, int a3)
{
  BOOLEAN IsParentOfChildAppContainer; // di
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rax
  ULONG_PTR v9; // rsi
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+38h] [rbp-8h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+48h] BYREF

  BugCheckParameter2 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  IsParentOfChildAppContainer = 0;
  v5 = 0;
  if ( !a2 || !a3 )
    return 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&LowboxSessionMapLock, 0LL);
    v5 = 1;
    if ( (int)SepGetTokenSessionMapEntry(a1, 0, &BugCheckParameter2) < 0 )
    {
LABEL_13:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
      KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return IsParentOfChildAppContainer;
    }
  }
  else
  {
    BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
  }
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v9 = BugCheckParameter2;
  ExAcquirePushLockExclusiveEx(BugCheckParameter2, 0LL);
  if ( (int)SepFindMatchingLowBoxNumberEntries(*(PRTL_DYNAMIC_HASH_TABLE *)(v9 + 24), (__int64)&v10) >= 0 )
    IsParentOfChildAppContainer = RtlIsParentOfChildAppContainer(*(PSID *)(v11 + 32), *(PSID *)(v10 + 32));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5 )
    goto LABEL_13;
  return IsParentOfChildAppContainer;
}
