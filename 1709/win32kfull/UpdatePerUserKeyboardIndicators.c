/*
 * XREFs of UpdatePerUserKeyboardIndicators @ 0x1C0120240
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UpdatePerUserKeyboardIndicators(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = gProtocolType;
  v2 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( !gProtocolType )
  {
    FastGetProfileIntW(a1, 13LL, L"InitialKeyboardIndicators");
    if ( (gklpBootTime[1] & 2) != 0 )
    {
      *(_BYTE *)(v2 + 260) |= 2u;
      gafAsyncKeyState[36] |= 2u;
      gafRawKeyState[36] |= 2u;
    }
    else
    {
      *(_BYTE *)(v2 + 260) &= ~2u;
      gafAsyncKeyState[36] &= ~2u;
      gafRawKeyState[36] &= ~2u;
    }
    gfKanaToggle = 0;
    *(_BYTE *)(v2 + 229) &= ~8u;
    gafAsyncKeyState[5] &= ~8u;
    gafRawKeyState[5] &= ~8u;
    return UpdateKeyLights(0LL);
  }
  return result;
}
