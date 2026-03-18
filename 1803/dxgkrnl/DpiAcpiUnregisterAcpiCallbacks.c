/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C020807C
 * Callers:
 *     DpiFdoHandleRemoveDevice @ 0x1C01F5450 (DpiFdoHandleRemoveDevice.c)
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C007A8D0 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, unsigned int, __int64)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_1C007A8D0 )
    {
      IoUnregisterPlugPlayNotification(qword_1C007A8C8);
      qword_1C007A8C8 = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  return KeReleaseMutex((PRKMUTEX)Mutex, 0);
}
