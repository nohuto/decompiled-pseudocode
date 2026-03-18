/*
 * XREFs of ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C012FEA0
 * Callers:
 *     ConvertPointCoordinates @ 0x1C012FFF4 (ConvertPointCoordinates.c)
 *     ?ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z @ 0x1C0131C38 (-ConvertCoordinatesWithRounding@@YAHJJJJJPEAJ@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C00EF538 (LongLongToLong.c)
 */

__int64 __fastcall ConvertCoordinatesWithRoundingNoBounding(int a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  int v6; // edx
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r9d

  v6 = a2 - a1;
  v7 = (a4 - a3) * (__int64)(a5 - a1);
  if ( v7 <= 0 )
  {
    v9 = (2 * v7 - v6) / (2LL * v6);
    v8 = a3;
  }
  else
  {
    v8 = (v6 + 2 * v7) / (2LL * v6);
    v9 = a3;
  }
  LOBYTE(v10) = LongLongToLong(v9 + v8, plResult) == 0;
  return v10;
}
