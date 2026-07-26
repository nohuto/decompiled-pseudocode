/*
 * XREFs of NdisGetReceivedPacket @ 0x1C005DBC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

__int64 __fastcall NdisGetReceivedPacket(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  if ( (unsigned __int8)byte_1C009874B >= 4u )
    WPP_SF_qq(0x3Eu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v2, a2);
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) == a2 && a2 )
    v4 = *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 96);
  if ( (unsigned __int8)byte_1C009874B >= 4u )
    WPP_SF_qq(0x3Fu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v2, a2);
  return v4;
}
