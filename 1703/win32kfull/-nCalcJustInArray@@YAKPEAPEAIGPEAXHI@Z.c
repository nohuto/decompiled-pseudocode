/*
 * XREFs of ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C02980FC
 * Callers:
 *     GreGetCharacterPlacementW @ 0x1C0298268 (GreGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 */

__int64 __fastcall nCalcJustInArray(unsigned int **a1, unsigned __int16 a2, char *a3, int a4, unsigned int a5)
{
  bool v5; // zf
  unsigned __int64 v7; // r9
  __int64 v8; // rbx
  char *v11; // rbp
  char *v12; // rsi
  int v13; // r12d
  unsigned int v14; // edi
  unsigned __int64 v15; // rdx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned __int64 v18; // rdx
  __int16 v19; // cx
  unsigned int v20; // eax
  unsigned int *v21; // rax
  unsigned int *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8

  v5 = a4 == 0;
  v7 = 0LL;
  v8 = (__int64)a3;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  if ( v5 )
  {
    v18 = (2 * (unsigned __int64)a5 + 1) >> 1;
    v11 = &a3[2 * a5];
    if ( a3 > v11 )
      v18 = 0LL;
    if ( !v18 )
      goto LABEL_30;
    do
    {
      v19 = *(_WORD *)a3;
      v20 = v14 + 1;
      ++v7;
      a3 += 2;
      if ( v19 != a2 )
        v20 = v14;
      v14 = v20;
    }
    while ( v7 < v18 );
  }
  else
  {
    v13 = a2;
    v12 = &a3[4 * a5];
    v15 = (4 * (unsigned __int64)a5 + 3) >> 2;
    if ( a3 > v12 )
      v15 = 0LL;
    if ( !v15 )
      goto LABEL_30;
    do
    {
      v16 = *(_DWORD *)a3;
      v17 = v14 + 1;
      ++v7;
      a3 += 4;
      if ( v16 != v13 )
        v17 = v14;
      v14 = v17;
    }
    while ( v7 < v15 );
  }
  if ( !v14 || (v21 = (unsigned int *)PALLOCMEM2(4 * v14, 2037147463LL, 1)) == 0LL )
  {
LABEL_30:
    *a1 = 0LL;
    return 0LL;
  }
  v22 = v21;
  if ( a4 )
  {
    if ( v8 < (unsigned __int64)v12 )
    {
      v23 = -v8;
      do
      {
        if ( *(_DWORD *)v8 == v13 )
          *v22++ = (v23 + v8) >> 2;
        v8 += 4LL;
      }
      while ( v8 < (unsigned __int64)v12 );
    }
  }
  else if ( v8 < (unsigned __int64)v11 )
  {
    v24 = -v8;
    do
    {
      if ( *(_WORD *)v8 == a2 )
        *v22++ = (v24 + v8) >> 1;
      v8 += 2LL;
    }
    while ( v8 < (unsigned __int64)v11 );
  }
  *a1 = v21;
  return v14;
}
