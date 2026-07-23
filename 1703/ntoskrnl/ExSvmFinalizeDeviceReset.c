/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x14025DF60
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  PRTL_BALANCED_NODE v3; // rax
  signed __int8 v4; // cf
  PRTL_BALANCED_NODE v5; // rdi
  __int64 *v6; // rax
  __int64 *v7; // rcx
  unsigned int v8; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v3, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v5 )
    BYTE2(v5[1].Left) |= 1u;
  v6 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v8 = -1073741810;
  }
  else
  {
    do
    {
      v7 = v6;
      if ( v6[2] == a1 )
        break;
      v6 = (__int64 *)*v6;
    }
    while ( v6 != &ExpSvmDevices );
    v8 = ((__int64 (__fastcall *)(__int64))HalIommuDispatch[18])(v7[13]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v8;
}
