/*
 * XREFs of ExpWaitForBootDevices @ 0x1402842A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeFreezeExecution @ 0x1402093B0 (KeFreezeExecution.c)
 *     KeThawExecution @ 0x1402097E0 (KeThawExecution.c)
 */

void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // esi
  __int64 *v2; // rbx
  KIRQL v3; // al
  KIRQL v4; // di

  while ( 1 )
  {
    KeWaitForSingleObject(&ExBootDevicesRemovedEvent, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      v2 = &ExBootDeviceList;
      do
      {
        v3 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v2 = (__int64 *)v2[1];
        v4 = v3;
        KxReleaseSpinLock(&ExBootDeviceListSpinLock);
        __writecr8(v4);
      }
      while ( v2 != &ExBootDeviceList
           && (!*((_DWORD *)v2 - 1)
            || !((unsigned __int8 (__fastcall *)(__int64, __int64))v2[5])(v2[4], v2[6])
            || _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 1, 0xFFFFFFFF) != 1
            || _InterlockedExchangeAdd(&ExNumMissingBootDevices, 0xFFFFFFFF) != 1) );
      if ( !ExNumMissingBootDevices )
        break;
      KeFreezeExecution();
      KeStallExecutionProcessor(0xF4240u);
      KeThawExecution(1);
      if ( !--v1 )
        KeBugCheckEx(0x7Bu, 0LL, 0LL, 3uLL, 0LL);
    }
  }
}
