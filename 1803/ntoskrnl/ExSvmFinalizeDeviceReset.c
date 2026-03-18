/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x1402BBDB0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140008AF0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExSvmFinalizeDeviceReset(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  unsigned int v11; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v7 = v3;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v3, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = (__int64 *)ExpSvmDevices;
  v9 = &ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v11 = -1073741810;
  }
  else
  {
    do
    {
      v10 = v8;
      if ( v8[2] == a1 )
        break;
      v8 = (__int64 *)*v8;
    }
    while ( v8 != &ExpSvmDevices );
    v11 = ((__int64 (__fastcall *)(__int64))HalIommuDispatch[18])(v10[14]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock, (__int64)v9, v4, v5);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v11;
}
