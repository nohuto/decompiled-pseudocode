/*
 * XREFs of ExpWaitForBootDevices @ 0x1402B88C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeFreezeExecution @ 0x140246F28 (KeFreezeExecution.c)
 *     KeThawExecution @ 0x14024738C (KeThawExecution.c)
 */

void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // esi
  __int64 *v2; // rdi
  KIRQL v3; // al
  unsigned __int64 v4; // rbx

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
