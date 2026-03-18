/*
 * XREFs of Controller_InUseByDebugger @ 0x1C00082D0
 * Callers:
 *     Controller_LPEEnterExitCallback @ 0x1C0008AC0 (Controller_LPEEnterExitCallback.c)
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C000BB80 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000C380 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C000C9B0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Controller_InUseByDebugger(_QWORD *a1)
{
  return (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 264))(
                        WdfDriverGlobals,
                        *a1)
                    + 48) & 0x2000000) != 0;
}
