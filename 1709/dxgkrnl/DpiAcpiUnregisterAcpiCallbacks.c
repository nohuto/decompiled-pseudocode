/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C01E6A24
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01DDBA0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C00609D0 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PDEVICE_OBJECT, unsigned int, __int64)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_1C00609D0 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C0060888, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
