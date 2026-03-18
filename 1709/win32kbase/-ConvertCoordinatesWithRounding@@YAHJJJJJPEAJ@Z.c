/*
 * XREFs of ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C0131C38
 * Callers:
 *     ?ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z @ 0x1C0131C74 (-ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z.c)
 * Callees:
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C012FEA0 (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  __int64 result; // rax
  LONG v7; // r11d

  result = ConvertCoordinatesWithRoundingNoBounding(a1, a2, a3, a4, a5, plResult);
  if ( (_DWORD)result )
  {
    if ( *plResult >= v7 )
      *plResult = v7 - 1;
  }
  return result;
}
