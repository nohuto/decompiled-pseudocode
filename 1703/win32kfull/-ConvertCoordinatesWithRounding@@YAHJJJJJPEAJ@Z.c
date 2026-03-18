/*
 * XREFs of ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01A1F58
 * Callers:
 *     ConvertPointCoordinates @ 0x1C01A28A0 (ConvertPointCoordinates.c)
 *     UpdatePointerDeviceScalingInfo @ 0x1C01A7810 (UpdatePointerDeviceScalingInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  __int64 v7; // r11
  int v8; // edx
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx

  v7 = a3;
  v8 = a2 - a1;
  v9 = a4 - a3;
  v10 = 0;
  v11 = v9 * (__int64)(a5 - a1);
  if ( v11 <= 0 )
    v12 = 2 * v11 - v8;
  else
    v12 = v8 + 2 * v11;
  v13 = v7 + v12 / (2LL * v8);
  if ( (unsigned __int64)(v13 + 0x80000000LL) > 0xFFFFFFFF )
  {
    v14 = -2147024362;
    *a6 = -1;
  }
  else
  {
    v14 = 0;
    *a6 = v13;
    if ( (int)v13 >= a4 )
      *a6 = a4 - 1;
  }
  LOBYTE(v10) = v14 == 0;
  return v10;
}
