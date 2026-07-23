/*
 * XREFs of RtlCompareAltitudes @ 0x1800F1120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __cdecl RtlCompareAltitudes(PUNICODE_STRING Altitude1, PUNICODE_STRING Altitude2)
{
  USHORT Length; // r9
  USHORT v3; // r10
  PWCH Buffer; // r15
  unsigned __int16 v5; // dx
  PWCH v6; // r14
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r9
  LONG v10; // r11d
  unsigned __int16 i; // r8
  unsigned __int16 v12; // bx
  unsigned __int16 j; // ax
  unsigned __int16 v14; // bx
  unsigned __int16 k; // ax
  bool v16; // cf
  unsigned __int16 v18; // bx
  WCHAR v19; // di
  WCHAR v20; // ax
  signed __int16 v21; // si
  __int16 v22; // di
  unsigned __int16 m; // r10
  unsigned __int16 n; // r9
  WCHAR *v25; // r9
  WCHAR *v26; // r8
  int v27; // eax

  Length = Altitude2->Length;
  v3 = Altitude1->Length;
  Buffer = Altitude2->Buffer;
  v5 = 0;
  v6 = Altitude1->Buffer;
  v7 = 0;
  v8 = v3 >> 1;
  v9 = Length >> 1;
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
    if ( Buffer[i] == 46 )
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
    if ( *Buffer != 48 )
      break;
    ++k;
    ++Buffer;
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
      v20 = Buffer[v18];
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
    for ( n = v9 - 1; n > i && Buffer[n] == 48; --n )
      --v22;
  }
  v25 = &v6[v7];
  v26 = &Buffer[i];
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
    return 0;
  if ( v21 <= v22 )
    return -1;
  return v10;
}
