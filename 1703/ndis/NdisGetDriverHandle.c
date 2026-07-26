/*
 * XREFs of NdisGetDriverHandle @ 0x1C005BE50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 */

void __fastcall NdisGetDriverHandle(__int64 a1, _QWORD *a2)
{
  char v4; // cl

  v4 = byte_1C009260D;
  if ( (unsigned __int8)byte_1C009260D >= 4u )
  {
    WPP_SF_q(0x1Du, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1);
    v4 = byte_1C009260D;
  }
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 3784LL);
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_766e1c326e8d3beaf7bd49aa3741dac3_Traceguids, a1);
}
