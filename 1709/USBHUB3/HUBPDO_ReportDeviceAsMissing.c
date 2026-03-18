/*
 * XREFs of HUBPDO_ReportDeviceAsMissing @ 0x1C0016500
 * Callers:
 *     HUBDSM_ReportingDeviceMissing @ 0x1C0019990 (HUBDSM_ReportingDeviceMissing.c)
 *     HUBDSM_ReportingFailedDeviceAsMissing @ 0x1C00199E0 (HUBDSM_ReportingFailedDeviceAsMissing.c)
 *     HUBDSM_WaitingForReportedMissingOnDetachInConfigured @ 0x1C001A280 (HUBDSM_WaitingForReportedMissingOnDetachInConfigured.c)
 *     HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured @ 0x1C001A2C0 (HUBDSM_WaitingForReportedMissingOnDetachInUnConfigured.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBPDO_ReportDeviceAsMissing(__int64 a1)
{
  KIRQL v2; // bl
  __int64 v3; // rax
  int v4; // eax
  int v5; // [rsp+28h] [rbp-10h]

  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1752))(WdfDriverGlobals, v3);
  if ( v4 < 0 )
  {
    v5 = v4;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      2u,
      0x7Cu,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      v5);
  }
  KeLowerIrql(v2);
}
