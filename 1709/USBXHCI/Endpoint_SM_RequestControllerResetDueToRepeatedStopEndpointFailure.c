/*
 * XREFs of Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure @ 0x1C001AA64
 * Callers:
 *     ESM_ResettingControllerDueToRepeatedStopEndpointFailure @ 0x1C003F0B0 (ESM_ResettingControllerDueToRepeatedStopEndpointFailure.c)
 * Callees:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 */

void __fastcall Endpoint_SM_RequestControllerResetDueToRepeatedStopEndpointFailure(__int64 *a1)
{
  WPP_RECORDER_SF_q(a1[10], 1u, 0xDu, 0x75u, (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids, a1[3]);
  Controller_HwVerifierBreakIfEnabled(
    (_QWORD *)*a1,
    a1[1],
    a1[3],
    1024LL,
    "Stop Endpoint command repeatedly failed with context state error",
    0LL,
    0LL);
  Controller_ReportFatalError(*a1, 2, 4100, a1[2], (__int64)a1, 0LL);
}
