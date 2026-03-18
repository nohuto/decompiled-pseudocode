/*
 * XREFs of ClearKeyboardToggleStates @ 0x1C00B80E8
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     ClearKeyboardStates @ 0x1C00B9C64 (ClearKeyboardStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 ClearKeyboardToggleStates()
{
  __int64 v0; // r8
  unsigned int v1; // r10d
  __int64 v2; // r9
  __int64 result; // rax
  unsigned int v4; // r10d
  __int64 v5; // r9
  _BYTE v6[16]; // [rsp+0h] [rbp-28h]

  v0 = *(_QWORD *)gafAsyncKeyState;
  v1 = 0;
  v2 = 0LL;
  do
  {
    ++v1;
    v6[v2] = gafAsyncKeyState[(unsigned __int64)byte_1C02E5AB0[v2] >> 2] & (1 << (2 * (byte_1C02E5AB0[v2] & 3) + 1));
    ++v2;
  }
  while ( v1 < 0xE );
  result = 0LL;
  while ( 1 )
  {
    *(__m128i *)(result + v0) = _mm_and_si128(
                                  _mm_load_si128((const __m128i *)&_xmm),
                                  _mm_loadu_si128((const __m128i *)(result + v0)));
    result += 16LL;
    if ( result >= 64 )
      break;
    v0 = *(_QWORD *)gafAsyncKeyState;
  }
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( v6[v5] )
    {
      result = 2 * (byte_1C02E5AB0[v5] & 3u) + 1;
      gafAsyncKeyState[(unsigned __int64)byte_1C02E5AB0[v5] >> 2] |= 1 << (2 * (byte_1C02E5AB0[v5] & 3) + 1);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0xE );
  return result;
}
