/*
 * XREFs of vSrcTranCopyS1D32 @ 0x1C00D4130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall vSrcTranCopyS1D32(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // edi
  char *result; // rax
  char *v11; // rbx
  int v12; // r15d
  char *v13; // rsi
  __int64 v14; // r11
  char *v15; // r10
  char v16; // dl
  char *v17; // r8
  char *i; // rdx
  char v19; // cl
  char v20; // cl

  v9 = a2 & 7;
  result = (char *)(a4 + 4LL * a5);
  v11 = (char *)(a1 + ((__int64)a2 >> 3));
  v12 = a6 - a5;
  v13 = &result[a8 * a7];
  v14 = a3 - ((v9 + a6 - a5 + 7) >> 3);
  if ( a6 - a5 >= 8 - v9 )
    v12 = 8 - v9;
  do
  {
    v15 = &result[4 * (a6 - a5)];
    if ( v9 )
    {
      v16 = *v11++ << v9;
      v17 = &result[4 * v12];
      do
      {
        if ( v16 < 0 )
          *(_DWORD *)result = a9;
        result += 4;
        v16 *= 2;
      }
      while ( result != v17 );
    }
    for ( i = &result[(v15 - result) & 0xFFFFFFFFFFFFFFE0uLL]; result != i; result += 32 )
    {
      v19 = *v11;
      if ( *v11 < 0 )
        *(_DWORD *)result = a9;
      if ( (v19 & 0x40) != 0 )
        *((_DWORD *)result + 1) = a9;
      if ( (v19 & 0x20) != 0 )
        *((_DWORD *)result + 2) = a9;
      if ( (v19 & 0x10) != 0 )
        *((_DWORD *)result + 3) = a9;
      if ( (v19 & 8) != 0 )
        *((_DWORD *)result + 4) = a9;
      if ( (v19 & 4) != 0 )
        *((_DWORD *)result + 5) = a9;
      if ( (v19 & 2) != 0 )
        *((_DWORD *)result + 6) = a9;
      if ( (v19 & 1) != 0 )
        *((_DWORD *)result + 7) = a9;
      ++v11;
    }
    if ( result != v15 )
    {
      v20 = *v11++;
      do
      {
        if ( v20 < 0 )
          *(_DWORD *)result = a9;
        v20 *= 2;
        result += 4;
      }
      while ( result != v15 );
    }
    result += a7 - 4 * (a6 - a5);
    v11 += v14;
  }
  while ( result != v13 );
  return result;
}
