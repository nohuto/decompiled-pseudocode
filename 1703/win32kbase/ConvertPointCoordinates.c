/*
 * XREFs of ConvertPointCoordinates @ 0x1C013066C
 * Callers:
 *     InjectLegacyISMTouch @ 0x1C01306F0 (InjectLegacyISMTouch.c)
 *     SynthesizeMitTouchInput @ 0x1C01309D8 (SynthesizeMitTouchInput.c)
 * Callees:
 *     rimConvertCoordinatesWithRounding @ 0x1C01089FC (rimConvertCoordinatesWithRounding.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v8; // esi
  int v9; // [rsp+54h] [rbp+Ch]
  __int64 plResult; // [rsp+58h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  result = rimConvertCoordinatesWithRounding(*a2, a2[2], *a3, a3[2], a1, (LONG *)&plResult);
  v8 = result;
  if ( (_DWORD)result )
  {
    rimConvertCoordinatesWithRounding(a2[1], a2[3], a3[1], a3[3], v9, (LONG *)&plResult + 1);
    *a4 = plResult;
    return v8;
  }
  return result;
}
