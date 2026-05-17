/*
 * XREFs of sub_1800F8C24 @ 0x1800F8C24
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9A60 (RtlSetProcessDebugInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F8C24(unsigned int a1, int a2, _QWORD *a3)
{
  if ( a1 >= 3 )
    return 3221225711LL;
  if ( a1 )
    return 3221225474LL;
  if ( a2 != 24 )
    return 3221225712LL;
  if ( a3 )
    return sub_1800F9098(*a3, a3[1], a3[2]);
  return 3221225713LL;
}
