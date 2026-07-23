/*
 * XREFs of RtlCompareAltitudes @ 0x1800EDDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __cdecl RtlCompareAltitudes(PUNICODE_STRING Altitude1, PUNICODE_STRING Altitude2)
{
  USHORT Length; // r11
  USHORT v3; // r10
  PWCH Buffer; // rsi
  unsigned __int16 v5; // cx
  PWCH v6; // r14
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
  WCHAR v19; // di
  WCHAR v20; // ax
  __int16 v21; // r15
  __int16 v22; // bp
  signed __int16 v23; // di
  unsigned __int16 m; // r11
  __int16 v25; // r11
  unsigned __int16 n; // r10
  WCHAR *v27; // r15
  WCHAR *v28; // r14
  int v29; // eax
  WCHAR v30; // dx
  WCHAR v31; // r8

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
  v23 = v21;
  if ( (__int16)(v9 - i - 1) >= 0 )
    v22 = v9 - i - 1;
  if ( v8 )
  {
    for ( m = v8 - 1; m > v7; --m )
    {
      if ( Buffer[m] != 48 )
        break;
      --v23;
    }
  }
  v25 = v22;
  if ( v9 )
  {
    for ( n = v9 - 1; n > i; --n )
    {
      if ( v6[n] != 48 )
        break;
      --v25;
    }
  }
  v27 = &Buffer[v7 + 1];
  v28 = &v6[i + 1];
  if ( v23 > 0 )
  {
    v29 = 0;
    while ( v29 < v25 )
    {
      v30 = v27[v5];
      v31 = v28[v5];
      if ( v31 != v30 )
        return v31 < v30 ? 1 : -1;
      v29 = ++v5;
      if ( v5 >= v23 )
        break;
    }
  }
  if ( v23 == v25 )
    return 0;
  if ( v23 <= v25 )
    return -1;
  return v10;
}
