/*
 * XREFs of Controller_InUseByDebugger @ 0x1C0011070
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0001C10 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0005680 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_LPEEnterExitCallback @ 0x1C0011790 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0014620 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 264))(
                        WdfDriverGlobals,
                        *a1)
                    + 48) & 0x2000000) != 0;
}
