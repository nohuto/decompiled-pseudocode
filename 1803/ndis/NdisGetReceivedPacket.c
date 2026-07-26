/*
 * XREFs of NdisGetReceivedPacket @ 0x1C005E5B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 */

__int64 __fastcall NdisGetReceivedPacket(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  if ( (unsigned __int8)byte_1C009960B >= 4u )
    WPP_SF_qq(0x41u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v2, a2);
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 1600) + 8LL * KeGetPcr()->Prcb.Number) == a2 && a2 )
    v4 = *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 96);
  if ( (unsigned __int8)byte_1C009960B >= 4u )
    WPP_SF_qq(0x42u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v2, a2);
  return v4;
}
