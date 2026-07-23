/*
 * XREFs of SeIsParentOfChildAppContainer @ 0x14044DA80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     SepGetTokenSessionMapEntry @ 0x14025FE7C (SepGetTokenSessionMapEntry.c)
 *     RtlIsParentOfChildAppContainer @ 0x1404485C8 (RtlIsParentOfChildAppContainer.c)
 *     SepFindMatchingLowBoxNumberEntries @ 0x140731310 (SepFindMatchingLowBoxNumberEntries.c)
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v5 )
    goto LABEL_13;
  return IsParentOfChildAppContainer;
}
