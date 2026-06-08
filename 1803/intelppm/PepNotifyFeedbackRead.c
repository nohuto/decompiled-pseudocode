/*
 * XREFs of PepNotifyFeedbackRead @ 0x1C000E0E4
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x1C000DEF0 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x1C000DF70 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x1C000DFF0 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C000E070 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001D9C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+28h] [rbp-10h]

  v2 = PoFxProcessorNotification(a1, 10LL, a2);
  v3 = v2;
  if ( v2 < 0 )
  {
    v5 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x24u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v5);
  }
  return v3;
}
