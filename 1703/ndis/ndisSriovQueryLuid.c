/*
 * XREFs of ndisSriovQueryLuid @ 0x1C00E9390
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisSriovQueryLuid(__int64 a1, _QWORD *a2)
{
  char v4; // cl

  v4 = byte_1C0092621;
  if ( (unsigned __int8)byte_1C0092621 >= 4u )
  {
    WPP_SF_q(0x6Bu, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1);
    v4 = byte_1C0092621;
  }
  *a2 = *(_QWORD *)(a1 + 4908);
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qD(0x6Cu, &WPP_e97265b1e1743feddb6afdd4d4a609a3_Traceguids, a1, 0);
  return 0LL;
}
