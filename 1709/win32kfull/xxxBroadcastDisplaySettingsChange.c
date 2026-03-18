/*
 * XREFs of xxxBroadcastDisplaySettingsChange @ 0x1C0049830
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C00497C0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     xxxBroadcastModernAppRedraw @ 0x1C01F3B80 (xxxBroadcastModernAppRedraw.c)
 * Callees:
 *     GetPrimaryMonitorRect @ 0x1C0049BEC (GetPrimaryMonitorRect.c)
 *     xxxBroadcastMessageEx @ 0x1C009D190 (xxxBroadcastMessageEx.c)
 */

__int64 __fastcall xxxBroadcastDisplaySettingsChange(__int64 a1, int a2, int a3)
{
  __m128i *PrimaryMonitorRect; // rax
  __m128i v7; // xmm0
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  EtwTraceChangeDisplayModeBroadcast(0LL);
  PrimaryMonitorRect = (__m128i *)GetPrimaryMonitorRect(v9);
  v7 = _mm_srli_si128(*PrimaryMonitorRect, 8);
  result = xxxBroadcastMessageEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
             126LL,
             *(unsigned __int16 *)(gpsi + 9972LL),
             (unsigned __int16)(v7.m128i_i16[0] - *(_OWORD *)PrimaryMonitorRect) | ((unsigned __int16)(v7.m128i_i16[2] - HIDWORD(PrimaryMonitorRect->m128i_i64[0])) << 16),
             1,
             0LL,
             1,
             a3);
  if ( a2 )
  {
    xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 26LL, 0LL, 0LL, 1, 0LL, 1, a3);
    return xxxBroadcastMessageEx(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), 21LL, 0LL, 0LL, 1, 0LL, 1, a3);
  }
  return result;
}
