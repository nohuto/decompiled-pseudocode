/*
 * XREFs of PepNotifyFeedbackRead @ 0x1C000AD18
 * Callers:
 *     PepInstantaneousFrequencyRead @ 0x1C000B080 (PepInstantaneousFrequencyRead.c)
 *     PepDifferentialFrequencyRead @ 0x1C000B110 (PepDifferentialFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C000B1A0 (PepInstantaneousPerfRead.c)
 *     PepDifferentialPerfRead @ 0x1C000B230 (PepDifferentialPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(unsigned int a1)
{
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    2u,
    0x24u,
    (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
    a1);
  return a1;
}
