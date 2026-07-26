/*
 * XREFs of ndisSriovQueryLuid @ 0x1C00F5440
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovQueryLuid(__int64 a1, _QWORD *a2)
{
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x6Bu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1);
  *a2 = *(_QWORD *)(a1 + 4908);
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x6Cu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1, 0);
  return 0LL;
}
