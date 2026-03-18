/*
 * XREFs of ExSvmBeginDeviceReset @ 0x1402BBC70
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

__int64 __fastcall ExSvmBeginDeviceReset(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int8 v8; // cf
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 *v12; // rcx
  unsigned int v13; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&ExpSvmDeviceListLock, 0LL, 0);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&ExpSvmDeviceListLock, 0LL);
  v9 = v5;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, v5, (ULONG_PTR)&ExpSvmDeviceListLock);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (__int64 *)ExpSvmDevices;
  v11 = &ExpSvmDevices;
  if ( (__int64 *)ExpSvmDevices == &ExpSvmDevices )
  {
    v13 = -1073741810;
  }
  else
  {
    do
    {
      v12 = v10;
      if ( v10[2] == a1 )
        break;
      v10 = (__int64 *)*v10;
    }
    while ( v10 != &ExpSvmDevices );
    v13 = ((__int64 (__fastcall *)(__int64, __int64))HalIommuDispatch[17])(v12[14], a2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock, (__int64)v11, v6, v7);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v13;
}
