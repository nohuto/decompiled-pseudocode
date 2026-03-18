/*
 * XREFs of IsChildSameThread @ 0x1C01C1934
 * Callers:
 *     ImeCanDestroyDefIMEforChild @ 0x1C00CD6D0 (ImeCanDestroyDefIMEforChild.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsChildSameThread(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 i; // r8
  char v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // r9

  v2 = *(_QWORD *)(a2 + 16);
  for ( i = *(_QWORD *)(a1 + 112); ; i = *(_QWORD *)(i + 88) )
  {
    if ( !i )
      return 0LL;
    v5 = *(_BYTE *)(i + 71) & 0xC0;
    if ( v5 == 64 )
      break;
    v6 = i;
    if ( *(_WORD *)(*(_QWORD *)(i + 168) + 8LL) != *(_WORD *)(gpsi + 890LL) )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v6 + 168);
        if ( (*(_BYTE *)(v7 + 102) & 1) != 0 || *(_WORD *)(v7 + 8) == *(_WORD *)(gpsi + 882LL) )
          break;
        v6 = *(_QWORD *)(v6 + 120);
        if ( !v6 )
          goto LABEL_7;
      }
    }
LABEL_22:
    ;
  }
LABEL_7:
  if ( i == a2 || *(_QWORD *)(i + 16) != v2 )
    goto LABEL_22;
  v8 = 0;
  v9 = i;
  if ( v5 == 64 )
  {
    do
    {
      if ( *(_QWORD *)(v9 + 16) != v2 )
        break;
      v10 = *(_QWORD *)(v9 + 168);
      if ( (*(_BYTE *)(v10 + 102) & 1) != 0 || *(_WORD *)(v10 + 8) == *(_WORD *)(gpsi + 882LL) )
        v8 = 1;
      v9 = *(_QWORD *)(v9 + 104);
    }
    while ( (*(_BYTE *)(v9 + 71) & 0xC0) == 0x40 );
  }
  if ( (*(_BYTE *)(v9 + 71) & 0xC0) != 0x40 )
  {
    do
    {
      if ( *(_QWORD *)(v9 + 16) != v2 )
        break;
      v11 = *(_QWORD *)(v9 + 168);
      if ( (*(_BYTE *)(v11 + 102) & 1) != 0 || *(_WORD *)(v11 + 8) == *(_WORD *)(gpsi + 882LL) )
        v8 = 1;
      v9 = *(_QWORD *)(v9 + 120);
    }
    while ( v9 );
  }
  if ( v8 )
    goto LABEL_22;
  return 1LL;
}
