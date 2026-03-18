/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C000CB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004B408)
                 + 8);
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 72), 4u, 4u, 0x59u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, a1);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C004C870)(
           *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
           **(_QWORD **)(v2 + 152));
}
