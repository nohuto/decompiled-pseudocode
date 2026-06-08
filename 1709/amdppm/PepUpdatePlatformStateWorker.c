/*
 * XREFs of PepUpdatePlatformStateWorker @ 0x1C0023AE0
 * Callers:
 *     <none>
 * Callees:
 *     UpdateKernelPlatformStates @ 0x1C000818C (UpdateKernelPlatformStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepUpdatePlatformStateWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  _QWORD *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    DeviceExtension[26],
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113F0,
    0LL);
  byte_1C0011960 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113F0);
  UpdateKernelPlatformStates((__int64)DeviceExtension, 0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    DeviceExtension[26]);
}
