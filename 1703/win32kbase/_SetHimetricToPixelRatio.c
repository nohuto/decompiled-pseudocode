/*
 * XREFs of _SetHimetricToPixelRatio @ 0x1C012F060
 * Callers:
 *     <none>
 * Callees:
 *     LongLongToLong @ 0x1C00EAE68 (LongLongToLong.c)
 */

HRESULT __fastcall SetHimetricToPixelRatio(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // r11
  HRESULT result; // eax
  __int64 v6; // r11
  LONG plResult; // [rsp+30h] [rbp+8h] BYREF

  if ( LongLongToLong(1000LL * (a2[2] - *a2) / (a1[2] - *a1), &plResult) >= 0 )
    *(_DWORD *)(v4 + 184) = plResult;
  result = LongLongToLong(1000LL * (a2[3] - a2[1]) / (a1[3] - a1[1]), &plResult);
  if ( result >= 0 )
  {
    result = plResult;
    *(_DWORD *)(v6 + 188) = plResult;
  }
  return result;
}
