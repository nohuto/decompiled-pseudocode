/*
 * XREFs of EtwpFillPerfectHashTable @ 0x1407B1A90
 * Callers:
 *     EtwpCreatePerfectHashFunction @ 0x1407B187C (EtwpCreatePerfectHashFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFillPerfectHashTable(
        _WORD *a1,
        unsigned __int16 a2,
        char a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 *a6)
{
  __int64 v9; // rax
  unsigned __int16 v10; // bx
  __int64 v11; // r8
  unsigned __int16 v12; // r11
  __int64 v13; // rdi
  __int16 v14; // r9
  unsigned __int16 v15; // r8
  unsigned __int16 v16; // dx
  __int64 v17; // rax
  unsigned __int16 v18; // r8
  unsigned int v19; // r14d
  unsigned int v20; // edi
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // si
  __int16 v23; // cx
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // cx
  unsigned __int16 i; // dx
  unsigned __int16 v27; // r9
  __int16 v28; // r8
  unsigned __int16 v29; // cx
  unsigned __int16 v30; // r8
  char v31; // al
  unsigned __int16 v33; // [rsp+38h] [rbp+10h]

  v9 = a5;
  *a6 = 0;
  v10 = a4 + 1;
  v33 = a4 + 1;
  v11 = 128LL;
  v12 = a4 + 1;
  do
  {
    *(_WORD *)(v9 + 2) = -1;
    *(_BYTE *)v9 = -1;
    v9 += 4LL;
    --v11;
  }
  while ( v11 );
  if ( a2 )
  {
    v13 = a2;
    do
    {
      v14 = *a1;
      v15 = 0;
      v16 = a4 & __ROR2__(*a1, a3);
      while ( *(_WORD *)(a5 + 4LL * v16 + 2) != 0xFFFF )
      {
        v17 = v16;
        if ( *(_WORD *)(a5 + 4LL * v16 + 2) == v14 )
          break;
        v16 = *(unsigned __int8 *)(a5 + 4LL * v16);
        ++v15;
        if ( v16 == 255 )
        {
          v16 = v12++;
          *(_BYTE *)(a5 + 4 * v17) = v16;
        }
        if ( v15 > *a6 )
          *a6 = v15;
      }
      ++a1;
      *(_WORD *)(a5 + 4LL * v16 + 2) = v14;
      --v13;
    }
    while ( v13 );
    v10 = v33;
  }
  v18 = v12 - 1;
  v19 = a4 + 1;
  v20 = (unsigned __int16)(v12 - 1);
  v21 = 0;
  if ( v20 > v19 )
  {
    while ( v21 < a4 )
    {
      if ( *(_BYTE *)(a5 + 4LL * v18) == 0xFF )
      {
        do
        {
          v22 = v21;
          v23 = *(_WORD *)(a5 + 4LL * v21 + 2);
          if ( v23 == -1 )
            break;
          ++v21;
        }
        while ( v21 < a4 );
        v24 = v22 + 1;
        if ( v23 == -1 )
          v24 = v22;
        if ( v24 >= a4 )
          break;
        *(_WORD *)(a5 + 4LL * v24 + 2) = *(_WORD *)(a5 + 4LL * v18 + 2);
        v25 = 0;
        if ( v12 )
        {
          while ( *(unsigned __int8 *)(a5 + 4LL * v25) != v18 )
          {
            if ( ++v25 >= v12 )
              goto LABEL_27;
          }
          *(_BYTE *)(a5 + 4LL * v25) = v21;
        }
LABEL_27:
        v21 = v24;
        *(_WORD *)(a5 + 4LL * v18 + 2) = -1;
        if ( v20 == v12 - 1 )
          --v12;
      }
      --v18;
      ++v21;
      v20 = v18;
      if ( v18 <= v19 )
        break;
    }
    v10 = v33;
  }
  for ( i = v12 - 1; i > v19; --v12 )
  {
    if ( v10 >= i )
      break;
    do
    {
      v27 = v10;
      v28 = *(_WORD *)(a5 + 4LL * v10 + 2);
      if ( v28 == -1 )
        break;
      ++v10;
    }
    while ( v10 < i );
    v29 = v27 + 1;
    if ( v28 == -1 )
      v29 = v27;
    if ( v29 >= i )
      break;
    *(_WORD *)(a5 + 4LL * v29 + 2) = *(_WORD *)(a5 + 4LL * i + 2);
    v30 = 0;
    if ( v12 )
    {
      while ( *(unsigned __int8 *)(a5 + 4LL * v30) != i )
      {
        if ( ++v30 >= v12 )
          goto LABEL_43;
      }
      *(_BYTE *)(a5 + 4LL * v30) = v10;
    }
LABEL_43:
    v31 = *(_BYTE *)(a5 + 4LL * i);
    v10 = v29 + 1;
    --i;
    *(_BYTE *)(a5 + 4LL * v29) = v31;
  }
  return v12;
}
