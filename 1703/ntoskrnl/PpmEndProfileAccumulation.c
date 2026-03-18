/*
 * XREFs of PpmEndProfileAccumulation @ 0x1406D5BE8
 * Callers:
 *     PpmEventTraceProfiles @ 0x1405CCBA0 (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x1406D59E4 (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[355];
  a1[359] += v2;
  if ( a1[357] < v2 )
    a1[357] = v2;
  if ( a1[358] > v2 )
    a1[358] = v2;
  ++a1[356];
  a1[355] = 0LL;
}
