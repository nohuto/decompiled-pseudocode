/*
 * XREFs of RtlCompareAltitudes @ 0x1800F19E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __cdecl RtlCompareAltitudes(PUNICODE_STRING Altitude1, PUNICODE_STRING Altitude2)
{
  unsigned __int16 Length; // r11
  unsigned __int16 v3; // r10
  wchar_t *Buffer; // r14
  unsigned __int16 v5; // cx
  wchar_t *v6; // r15
  unsigned __int16 v7; // dx
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // r10
  LONG v10; // r9d
  unsigned __int16 i; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 j; // ax
  unsigned __int16 v14; // bx
  unsigned __int16 k; // ax
  bool v16; // cf
  unsigned __int16 v18; // bx
  wchar_t v19; // di
  wchar_t v20; // ax
  signed __int16 v21; // si
  __int16 v22; // di
  unsigned __int16 m; // r11
  unsigned __int16 n; // r10
  wchar_t *v25; // r14
  wchar_t *v26; // r15
  int v27; // eax
  wchar_t v28; // dx
  wchar_t v29; // r8

  Length = Altitude1->Length;
  v3 = Altitude2->Length;
  Buffer = Altitude1->Buffer;
  v5 = 0;
  v6 = Altitude2->Buffer;
  v7 = 0;
  v8 = Length >> 1;
  v9 = v3 >> 1;
  v10 = 1;
  if ( v8 )
  {
    do
    {
      if ( Buffer[v7] == 46 )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  for ( i = 0; i < v9; ++i )
  {
    if ( v6[i] == 46 )
      break;
  }
  v12 = v7;
  for ( j = 0; j < v12; --v8 )
  {
    if ( *Buffer != 48 )
      break;
    ++j;
    ++Buffer;
    --v7;
  }
  v14 = i;
  for ( k = 0; k < v14; --v9 )
  {
    if ( *v6 != 48 )
      break;
    ++k;
    ++v6;
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
      v19 = Buffer[v18];
      v20 = v6[v18];
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
    for ( m = v8 - 1; m > v7 && Buffer[m] == 48; --m )
      --v21;
  }
  if ( v9 )
  {
    for ( n = v9 - 1; n > i && v6[n] == 48; --n )
      --v22;
  }
  v25 = &Buffer[v7 + 1];
  v26 = &v6[i + 1];
  if ( v21 > 0 )
  {
    v27 = 0;
    while ( v27 < v22 )
    {
      v28 = v25[v5];
      v29 = v26[v5];
      if ( v29 != v28 )
        return v29 < v28 ? 1 : -1;
      v27 = ++v5;
      if ( v5 >= v21 )
        break;
    }
  }
  if ( v21 == v22 )
    return 0;
  if ( v21 <= v22 )
    return -1;
  return v10;
}
