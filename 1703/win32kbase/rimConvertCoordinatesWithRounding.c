/*
 * XREFs of rimConvertCoordinatesWithRounding @ 0x1C01089FC
 * Callers:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000BAA0 (RIMUpdatePointerDeviceScalingInfo.c)
 *     RIMConvertPointCoordinates @ 0x1C0107D4C (RIMConvertPointCoordinates.c)
 *     ConvertPointCoordinates @ 0x1C013066C (ConvertPointCoordinates.c)
 *     ?ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z @ 0x1C0132594 (-ConvertPointCoordinates@CMouseAsTouchAdapter@@AEAAHUtagPOINT@@UtagRECT@@1PEAU2@@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C00EAE68 (LongLongToLong.c)
 */

__int64 __fastcall rimConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  int v6; // edx
  __int64 v7; // r11
  __int64 v8; // rax
  _DWORD *v9; // rdx
  unsigned int v10; // r9d
  int v11; // r10d

  v6 = a2 - a1;
  v7 = (a4 - a3) * (__int64)(a5 - a1);
  if ( v7 <= 0 )
    v8 = 2 * v7 - v6;
  else
    v8 = v6 + 2 * v7;
  if ( !LongLongToLong(a3 + v8 / (2LL * v6), plResult) )
  {
    if ( *v9 >= v11 )
      *v9 = v11 - 1;
    return 1;
  }
  return v10;
}
