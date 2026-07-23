/*
 * XREFs of ExSvmBeginDeviceReset @ 0x14025DE30
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

__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  PRTL_BALANCED_NODE v5; // rax
  signed __int8 v6; // cf
  PRTL_BALANCED_NODE v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rcx
  unsigned int v10; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v5, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v7 )
    BYTE2(v7[1].Left) |= 1u;
  v8 = (__int64 *)ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v10 = -1073741810;
  }
  else
  {
    do
    {
      v9 = v8;
      if ( v8[2] == a1 )
        break;
      v8 = (__int64 *)*v8;
    }
    while ( v8 != &ExpSvmDevices );
    v10 = ((__int64 (__fastcall *)(__int64, __int64))HalIommuDispatch[17])(v9[13], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v10;
}
