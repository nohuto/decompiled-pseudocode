/*
 * XREFs of NdisGetDriverHandle @ 0x1C005C1D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

void __fastcall NdisGetDriverHandle(__int64 a1, _QWORD *a2)
{
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0x1Du, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1);
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 3784LL);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, a1);
}
