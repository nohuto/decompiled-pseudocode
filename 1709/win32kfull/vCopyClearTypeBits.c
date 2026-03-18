/*
 * XREFs of vCopyClearTypeBits @ 0x1C02305C8
 * Callers:
 *     lGetGlyphBitmap @ 0x1C022EBD0 (lGetGlyphBitmap.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int16 __fastcall vCopyClearTypeBits(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  __int64 v7; // r12
  size_t v8; // r15
  unsigned __int16 v9; // bp
  unsigned int v12; // r11d
  int v13; // r10d
  unsigned __int16 v14; // r8
  int v15; // eax
  unsigned __int16 v16; // cx
  __int16 v17; // r14
  __int64 v18; // rsi
  int v19; // eax
  _BYTE *v20; // rcx
  unsigned __int16 v21; // r14
  unsigned int v22; // edx
  _BYTE *v23; // r8
  __int64 v24; // r12
  _BYTE *v25; // rbp
  size_t v26; // rdi
  _BYTE *v27; // rbx
  size_t i; // r11
  char v29; // al
  __int64 v30; // rsi
  _BYTE *v32; // [rsp+50h] [rbp+8h]

  v7 = (unsigned int)a4[2];
  v8 = (unsigned int)a4[4];
  v9 = a6;
  v12 = 4 * ((unsigned int)(((*(_DWORD *)(a1 + 40) & 0x10000) != 0 ? 8 : 1) * (v8 + v7 + a4[3]) + 31) >> 5);
  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) != 0 && a4[1] )
  {
    v13 = (a5 - a6) % 5;
    if ( !(_WORD)v13 )
      LOWORD(v13) = 5;
    v14 = 5 - 5 * *((_WORD *)a4 + 2) - v13 + a5;
  }
  else
  {
    v14 = a5;
  }
  v15 = *a4;
  if ( *a4 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x20000000) != 0 )
    {
      v9 = 5;
      v16 = a6 + 5 * v15 - 5;
      a3 += v12 * v16;
      v14 -= v16;
    }
    else
    {
      a3 += v12 * v15;
    }
  }
  v17 = *((_WORD *)a4 + 10);
  v18 = a3 + v7;
  *(_DWORD *)(a2 + 8) = v8;
  LOWORD(v19) = 4 * v17;
  v20 = (_BYTE *)(a2 + 16);
  v21 = 5 * v17;
  if ( v21 < v14 )
    v14 = v21;
  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) != 0 )
  {
    LOWORD(v19) = v9;
    *(_DWORD *)(a2 + 12) = v9;
    v22 = v14;
  }
  else
  {
    v22 = a4[5];
    *(_DWORD *)(a2 + 12) = v22;
  }
  v23 = &v20[(unsigned int)v8 * v22];
  if ( v20 >= v23 )
  {
    v27 = v32;
  }
  else
  {
    v24 = v12;
    v25 = &v20[v8];
    LOWORD(v19) = 0;
    do
    {
      v26 = v8;
      v27 = v20;
      if ( v20 > v25 )
        v26 = 0LL;
      if ( v26 )
      {
        for ( i = 0LL; i < v26; ++i )
        {
          v29 = *(_BYTE *)(i + v18);
          *v27++ = v29;
        }
        LOWORD(v19) = 0;
      }
      v20 += v8;
      v25 += v8;
      v18 += v24;
    }
    while ( v20 < v23 );
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) != 0 )
  {
    LOWORD(v19) = v21;
    if ( v22 < v21 )
    {
      v19 = a4[5];
      if ( 5 * v19 != v22 )
      {
        v30 = 5 * v19 - v22;
        do
        {
          LOWORD(v19) = (unsigned __int16)memset(v27, 0, v8);
          v27 += v8;
          --v30;
        }
        while ( v30 );
      }
    }
  }
  return v19;
}
