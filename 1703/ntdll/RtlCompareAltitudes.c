/*
 * XREFs of RtlCompareAltitudes @ 0x1800F1120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCompareAltitudes(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r9
  unsigned __int16 v3; // r10
  _WORD *v4; // r15
  unsigned __int16 v5; // dx
  _WORD *v6; // r14
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r9
  unsigned int v10; // r11d
  unsigned __int16 i; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 j; // ax
  unsigned __int16 v14; // bx
  unsigned __int16 k; // ax
  bool v16; // cf
  unsigned __int16 v18; // bx
  unsigned __int16 v19; // di
  unsigned __int16 v20; // ax
  signed __int16 v21; // si
  __int16 v22; // di
  unsigned __int16 m; // r10
  unsigned __int16 n; // r9
  _WORD *v25; // r9
  _WORD *v26; // r8
  int v27; // eax

  v2 = *a2;
  v3 = *a1;
  v4 = (_WORD *)*((_QWORD *)a2 + 1);
  v5 = 0;
  v6 = (_WORD *)*((_QWORD *)a1 + 1);
  v7 = 0;
  v8 = v3 >> 1;
  v9 = v2 >> 1;
  v10 = 1;
  if ( v8 )
  {
    do
    {
      if ( v6[v7] == 46 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  for ( i = 0; i < v9; ++i )
  {
    if ( v4[i] == 46 )
      break;
  }
  v12 = v7;
  for ( j = 0; j < v12; --v8 )
  {
    if ( *v6 != 48 )
      break;
    ++j;
    ++v6;
    --v7;
  }
  v14 = i;
  for ( k = 0; k < v14; --v9 )
  {
    if ( *v4 != 48 )
      break;
    ++k;
    ++v4;
    --i;
  }
  if ( v7 != i )
  {
    v16 = i < v7;
    return v16 ? 1 : -1;
  }
  v18 = 0;
  if ( v7 )
  {
    do
    {
      v19 = v6[v18];
      v20 = v4[v18];
      v16 = v20 < v19;
      if ( v20 != v19 )
        return v16 ? 1 : -1;
    }
    while ( ++v18 < v7 );
  }
  v21 = 0;
  v22 = 0;
  if ( (__int16)(v8 - v7 - 1) >= 0 )
    v21 = v8 - v7 - 1;
  if ( (__int16)(v9 - i - 1) >= 0 )
    v22 = v9 - i - 1;
  if ( v8 )
  {
    for ( m = v8 - 1; m > v7 && v6[m] == 48; --m )
      --v21;
  }
  if ( v9 )
  {
    for ( n = v9 - 1; n > i && v4[n] == 48; --n )
      --v22;
  }
  v25 = &v6[v7];
  v26 = &v4[i];
  if ( v21 > 0 )
  {
    v27 = 0;
    while ( v27 < v22 )
    {
      if ( v25[v5 + 1] != v26[v5 + 1] )
        return v26[v5 + 1] < v25[v5 + 1] ? 1 : -1;
      v27 = ++v5;
      if ( v5 >= v21 )
        break;
    }
  }
  if ( v21 == v22 )
    return 0LL;
  if ( v21 <= v22 )
    return (unsigned int)-1;
  return v10;
}
