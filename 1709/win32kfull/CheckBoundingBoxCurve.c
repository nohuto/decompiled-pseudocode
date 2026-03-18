/*
 * XREFs of CheckBoundingBoxCurve @ 0x1C02BEF48
 * Callers:
 *     Misoriented @ 0x1C02BF974 (Misoriented.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckBoundingBoxCurve(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int16 a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // r11d
  unsigned __int64 v8; // r10
  int v9; // r8d
  bool v10; // cc

  v5 = HIDWORD(a2);
  v6 = a2;
  if ( (int)a3 < (int)a2 )
    v6 = a3;
  v7 = a2;
  if ( (int)a4 < v6 )
    v6 = a4;
  v8 = HIDWORD(a3);
  if ( SHIDWORD(a3) < SHIDWORD(a2) )
    v5 = HIDWORD(a3);
  if ( SHIDWORD(a4) < v5 )
    v5 = HIDWORD(a4);
  if ( (int)a3 > (int)a2 )
    v7 = a3;
  v9 = HIDWORD(a2);
  if ( (int)a4 > v7 )
    v7 = a4;
  if ( (int)v8 > SHIDWORD(a2) )
    v9 = v8;
  if ( SHIDWORD(a4) > v9 )
    v9 = HIDWORD(a4);
  if ( !a5 )
  {
    if ( v5 > SHIDWORD(a1) || v9 < SHIDWORD(a1) )
      return 0LL;
    return v6 <= (int)a1;
  }
  if ( a5 != 1 )
  {
    if ( a5 != 2 )
    {
      if ( a5 != 3 )
        return 1LL;
      if ( v6 > (int)a1 || v7 < (int)a1 )
        return 0LL;
      v10 = v9 < SHIDWORD(a1);
      return !v10;
    }
    if ( v6 > (int)a1 || v7 < (int)a1 )
      return 0LL;
    return v5 <= SHIDWORD(a1);
  }
  if ( v5 > SHIDWORD(a1) || v9 < SHIDWORD(a1) )
    return 0LL;
  v10 = v7 < (int)a1;
  return !v10;
}
