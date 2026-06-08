/*
 * XREFs of PepNotifyFeedbackRead @ 0x1C00099C8
 * Callers:
 *     PepInstantaneousFrequencyRead @ 0x1C0009D20 (PepInstantaneousFrequencyRead.c)
 *     PepDifferentialFrequencyRead @ 0x1C0009DB0 (PepDifferentialFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C0009E40 (PepInstantaneousPerfRead.c)
 *     PepDifferentialPerfRead @ 0x1C0009ED0 (PepDifferentialPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(unsigned int a1)
{
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    2u,
    0x24u,
    (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
    a1);
  return a1;
}
