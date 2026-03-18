/*
 * XREFs of Controller_WdfEvtDeviceWakeFromS0Triggered @ 0x1C00147A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceWakeFromS0Triggered(__int64 a1)
{
  char v1; // di
  __int64 v2; // rbx
  int v3; // edx

  v1 = a1;
  v2 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  LOBYTE(v3) = 4;
  WPP_RECORDER_SF_q(*(_QWORD *)(v2 + 72), v3, 4, 89, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v1);
  return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C004F870)(
           *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
           **(_QWORD **)(v2 + 152));
}
