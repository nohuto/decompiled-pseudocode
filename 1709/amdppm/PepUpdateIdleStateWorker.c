/*
 * XREFs of PepUpdateIdleStateWorker @ 0x1C0023A20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepUpdateIdleStateWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  _BYTE *DeviceExtension; // rbx
  __int64 v3; // rax
  PWDF_DRIVER_GLOBALS v4; // rcx

  DeviceExtension = DeviceObject->DeviceExtension;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113F0,
    0LL);
  v3 = WdfFunctions_01015;
  v4 = WdfDriverGlobals;
  DeviceExtension[1144] = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(v3 + 2512))(v4, qword_1C00113F0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *((_QWORD *)DeviceExtension + 26),
    0LL);
  ((void (__fastcall *)(_BYTE *))qword_1C0011780)(DeviceExtension);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *((_QWORD *)DeviceExtension + 26));
}
