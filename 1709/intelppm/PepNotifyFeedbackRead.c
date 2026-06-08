/*
 * XREFs of PepNotifyFeedbackRead @ 0x1C000DD54
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x1C000DB60 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x1C000DBE0 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x1C000DC60 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C000DCE0 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
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
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
      v5);
  }
  return v3;
}
