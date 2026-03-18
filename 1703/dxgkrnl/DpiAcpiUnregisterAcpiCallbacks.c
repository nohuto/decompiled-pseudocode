/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C01CC648
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01C41B0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C006FB50 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PDEVICE_OBJECT, unsigned int, __int64)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_1C006FB50 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C006FA08, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
