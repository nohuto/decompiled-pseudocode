/*
 * XREFs of PepNotifyFeedbackRead @ 0x1C000A864
 * Callers:
 *     PepInstantaneousFrequencyRead @ 0x1C000AA00 (PepInstantaneousFrequencyRead.c)
 *     PepDifferentialFrequencyRead @ 0x1C000AA90 (PepDifferentialFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C000AB20 (PepInstantaneousPerfRead.c)
 *     PepDifferentialPerfRead @ 0x1C000ABB0 (PepDifferentialPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(unsigned int a1)
{
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    2u,
    0x16u,
    (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids,
    a1);
  return a1;
}
