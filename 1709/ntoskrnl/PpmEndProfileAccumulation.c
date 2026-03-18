/*
 * XREFs of PpmEndProfileAccumulation @ 0x14070B95C
 * Callers:
 *     PpmEventTraceProfiles @ 0x1405E0F98 (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x14070B748 (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[677];
  a1[681] += v2;
  if ( a1[679] < v2 )
    a1[679] = v2;
  if ( a1[680] > v2 )
    a1[680] = v2;
  ++a1[678];
  a1[677] = 0LL;
}
