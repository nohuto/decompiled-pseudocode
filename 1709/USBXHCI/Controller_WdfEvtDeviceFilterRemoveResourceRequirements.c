/*
 * XREFs of Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x1C0059F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0015C5C (WPP_RECORDER_SF_qq.c)
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C005C3BC (Interrupter_FilterRemoveResourceRequirements.c)
 */

__int64 __fastcall Controller_WdfEvtDeviceFilterRemoveResourceRequirements(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx

  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C004E408)
                 + 8);
  WPP_RECORDER_SF_qq(
    *(_QWORD *)(v4 + 72),
    4u,
    4u,
    0xC9u,
    (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
    a1,
    a2);
  return Interrupter_FilterRemoveResourceRequirements(*(_QWORD *)(v4 + 128), a2);
}
