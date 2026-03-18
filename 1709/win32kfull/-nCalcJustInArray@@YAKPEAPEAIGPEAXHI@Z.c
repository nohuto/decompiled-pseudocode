/*
 * XREFs of ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C02947CC
 * Callers:
 *     GreGetCharacterPlacementW @ 0x1C0294920 (GreGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

__int64 __fastcall nCalcJustInArray(unsigned int **a1, unsigned __int16 a2, char *a3, int a4, unsigned int a5)
{
  bool v6; // zf
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  char *v10; // rbx
  char *v12; // rbp
  char *v13; // rsi
  int v14; // r15d
  unsigned int v15; // edi
  int v16; // ecx
  unsigned int v17; // eax
  __int16 v18; // cx
  unsigned int v19; // eax
  unsigned int *v20; // rax
  unsigned int *v21; // r8
  char *i; // rcx
  char *j; // rdx

  v6 = a4 == 0;
  v8 = a5;
  v9 = 0LL;
  v10 = a3;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( v6 )
  {
    v12 = &a3[2 * a5];
    if ( a3 > v12 )
      v8 = 0LL;
    if ( !v8 )
      goto LABEL_28;
    do
    {
      v18 = *(_WORD *)a3;
      v19 = v15 + 1;
      ++v9;
      a3 += 2;
      if ( v18 != a2 )
        v19 = v15;
      v15 = v19;
    }
    while ( v9 < v8 );
  }
  else
  {
    v13 = &a3[4 * a5];
    v14 = a2;
    if ( a3 > v13 )
      v8 = 0LL;
    if ( !v8 )
      goto LABEL_28;
    do
    {
      v16 = *(_DWORD *)a3;
      v17 = v15 + 1;
      ++v9;
      a3 += 4;
      if ( v16 != a2 )
        v17 = v15;
      v15 = v17;
    }
    while ( v9 < v8 );
  }
  if ( !v15 || (v20 = (unsigned int *)PALLOCMEM2(4 * v15, 2037147463LL, 1)) == 0LL )
  {
LABEL_28:
    *a1 = 0LL;
    return 0LL;
  }
  v21 = v20;
  if ( a4 )
  {
    for ( i = v10; i < v13; i += 4 )
    {
      if ( *(_DWORD *)i == v14 )
        *v21++ = (i - v10) >> 2;
    }
  }
  else
  {
    for ( j = v10; j < v12; j += 2 )
    {
      if ( *(_WORD *)j == a2 )
        *v21++ = (j - v10) >> 1;
    }
  }
  *a1 = v20;
  return v15;
}
