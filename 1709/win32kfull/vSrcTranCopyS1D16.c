/*
 * XREFs of vSrcTranCopyS1D16 @ 0x1C026D920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vSrcTranCopyS1D16(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, __int16 a9)
{
  int v9; // ebx
  char *v10; // r11
  int v11; // esi
  char *v12; // r9
  char result; // al
  char *v14; // rdi
  __int64 v15; // r14
  char *v16; // r10
  char v17; // r8
  char *v18; // rcx
  char *v19; // rcx

  v9 = a2 & 7;
  v10 = (char *)(a4 + 2LL * a5);
  v11 = a6 - a5;
  v12 = (char *)(a1 + ((__int64)a2 >> 3));
  result = 8 - v9;
  v14 = &v10[a8 * a7];
  v15 = a3 - ((v9 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v9 )
    v11 = 8 - v9;
  do
  {
    v16 = &v10[2 * (a6 - a5)];
    if ( (a2 & 7) != 0 )
    {
      v17 = *v12 << v9;
      result = v11;
      ++v12;
      v18 = &v10[2 * v11];
      do
      {
        if ( v17 < 0 )
          *(_WORD *)v10 = a9;
        v10 += 2;
        v17 *= 2;
      }
      while ( v10 != v18 );
    }
    v19 = &v10[(v16 - v10) & 0xFFFFFFFFFFFFFFF0uLL];
    while ( v10 != v19 )
    {
      result = *v12;
      if ( *v12 < 0 )
        *(_WORD *)v10 = a9;
      if ( (result & 0x40) != 0 )
        *((_WORD *)v10 + 1) = a9;
      if ( (result & 0x20) != 0 )
        *((_WORD *)v10 + 2) = a9;
      if ( (result & 0x10) != 0 )
        *((_WORD *)v10 + 3) = a9;
      if ( (result & 8) != 0 )
        *((_WORD *)v10 + 4) = a9;
      if ( (result & 4) != 0 )
        *((_WORD *)v10 + 5) = a9;
      if ( (result & 2) != 0 )
        *((_WORD *)v10 + 6) = a9;
      if ( (result & 1) != 0 )
        *((_WORD *)v10 + 7) = a9;
      ++v12;
      v10 += 16;
    }
    if ( v10 != v16 )
    {
      result = *v12++;
      do
      {
        if ( result < 0 )
          *(_WORD *)v10 = a9;
        result *= 2;
        v10 += 2;
      }
      while ( v10 != v16 );
    }
    v10 += a7 - 2 * (a6 - a5);
    v12 += v15;
  }
  while ( v10 != v14 );
  return result;
}
