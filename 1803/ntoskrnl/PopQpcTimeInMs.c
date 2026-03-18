/*
 * XREFs of PopQpcTimeInMs @ 0x140470CD8
 * Callers:
 *     PopPowerTransitionTimesInMs @ 0x14014E0B4 (PopPowerTransitionTimesInMs.c)
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopDiagTracePerfTrackData @ 0x1405EAE58 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x1405EAF78 (PopDiagTraceHiberStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopQpcTimeInMs(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9

  v2 = 0;
  if ( *a2 )
  {
    v3 = *a2 - *a1;
    if ( is_mul_ok(v3, 0x3E8uLL) )
      return (unsigned int)(v3 * (unsigned __int128)0x3E8uLL / (unsigned __int64)PopQpcFrequency);
    else
      return (unsigned int)(v3 / (PopQpcFrequency / 0x3E8uLL));
  }
  return v2;
}
