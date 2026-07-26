/*
 * XREFs of ndisSriovQueryLuid @ 0x1C00F28F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovQueryLuid(__int64 a1, _QWORD *a2)
{
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x6Bu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1);
  *a2 = *(_QWORD *)(a1 + 4908);
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(0x6Cu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, a1, 0);
  return 0LL;
}
