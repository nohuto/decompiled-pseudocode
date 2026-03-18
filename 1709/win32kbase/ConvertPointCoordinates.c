/*
 * XREFs of ConvertPointCoordinates @ 0x1C012FFF4
 * Callers:
 *     InjectLegacyISMTouch @ 0x1C013007C (InjectLegacyISMTouch.c)
 *     SynthesizeMitTouchInput @ 0x1C01302D8 (SynthesizeMitTouchInput.c)
 * Callees:
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C012FEA0 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // r11
  unsigned int v8; // edi
  int v9; // [rsp+44h] [rbp+Ch]
  __int64 plResult; // [rsp+48h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  result = ConvertCoordinatesWithRoundingNoBounding(*a2, a2[2], *a3, a3[2], a1, (LONG *)&plResult);
  v8 = result;
  if ( (_DWORD)result )
  {
    ConvertCoordinatesWithRoundingNoBounding(
      a2[1],
      a2[3],
      *(_DWORD *)(v7 + 4),
      *(_DWORD *)(v7 + 12),
      v9,
      (LONG *)&plResult + 1);
    result = v8;
    *a4 = plResult;
  }
  return result;
}
