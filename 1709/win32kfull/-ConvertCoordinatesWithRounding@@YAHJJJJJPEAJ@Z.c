/*
 * XREFs of ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C01A9A64
 * Callers:
 *     ConvertPointCoordinates @ 0x1C01AA3A8 (ConvertPointCoordinates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertCoordinatesWithRounding(int a1, int a2, int a3, int a4, int a5, int *a6)
{
  int v6; // edx
  __int64 v7; // r10
  unsigned int v8; // r11d
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r8

  v6 = a2 - a1;
  v7 = a5 - a1;
  v8 = 0;
  v9 = v6;
  v10 = (a4 - a3) * v7;
  if ( v10 <= 0 )
    v11 = 2 * v10 - v6;
  else
    v11 = v6 + 2 * v10;
  v12 = -1;
  v13 = a3 + v11 / (2 * v9);
  if ( (unsigned __int64)(v13 + 0x80000000LL) <= 0xFFFFFFFF )
    v12 = v13;
  *a6 = v12;
  if ( (unsigned __int64)(v13 + 0x80000000LL) <= 0xFFFFFFFF && v12 >= a4 )
    *a6 = a4 - 1;
  LOBYTE(v8) = (unsigned __int64)(v13 + 0x80000000LL) <= 0xFFFFFFFF;
  return v8;
}
