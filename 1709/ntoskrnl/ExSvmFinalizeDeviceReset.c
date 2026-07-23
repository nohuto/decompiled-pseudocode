/*
 * XREFs of ExSvmFinalizeDeviceReset @ 0x140287AB0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14005D890 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
    ExfAcquirePushLockExclusiveEx(&ExpSvmDeviceListLock, (__int64)v3, (__int16 *)&ExpSvmDeviceListLock);
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
    v8 = ((__int64 (__fastcall *)(__int64))HalIommuDispatch[18])(v7[15]);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpSvmDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&ExpSvmDeviceListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v8;
}
