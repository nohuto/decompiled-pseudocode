/*
 * XREFs of NdisGetDriverHandle @ 0x1C005BA80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

void __fastcall NdisGetDriverHandle(__int64 a1, _QWORD *a2)
{
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0x1Du, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1);
  *a2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 3784LL);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_qq(0x1Eu, &WPP_4a5d38b576c633146a968e2982301690_Traceguids, a1);
}
