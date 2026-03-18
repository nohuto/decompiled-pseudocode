/*
 * XREFs of CreateStandardMonoPattern @ 0x1C013582C
 * Callers:
 *     GetCachedSMP @ 0x1C00421F0 (GetCachedSMP.c)
 *     FindCachedSMP @ 0x1C00423BC (FindCachedSMP.c)
 * Callees:
 *     ComputeBytesPerScanLine @ 0x1C0042368 (ComputeBytesPerScanLine.c)
 *     DivFD6 @ 0x1C00794D8 (DivFD6.c)
 *     DrawCornerLine @ 0x1C0135C64 (DrawCornerLine.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall CreateStandardMonoPattern(__int64 a1, __m128i *a2)
{
  __m128i v2; // xmm2
  unsigned __int16 v3; // r12
  unsigned int v4; // edi
  __int8 v5; // r13
  unsigned int v6; // r15d
  int v7; // r10d
  BOOL v8; // ebx
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // cl
  unsigned int v11; // r11d
  unsigned int v12; // r14d
  unsigned int v13; // ecx
  unsigned int v14; // edi
  int v15; // r14d
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned __int16 v18; // r12
  _BYTE *v19; // rsi
  __int64 result; // rax
  char *v21; // rdi
  __int64 v22; // r13
  unsigned int v23; // edx
  unsigned __int16 v24; // ax
  _BYTE *v25; // rdx
  int v26; // r8d
  char v27; // al
  char *v28; // rcx
  __int16 i; // bx
  unsigned __int16 j; // dx
  char v31; // al
  __int16 k; // dx
  int v33; // [rsp+20h] [rbp-48h]
  __int16 v34; // [rsp+30h] [rbp-38h]
  int v35; // [rsp+34h] [rbp-34h]
  unsigned int v36; // [rsp+3Ch] [rbp-2Ch]
  int v37; // [rsp+44h] [rbp-24h]
  __m128i v38; // [rsp+48h] [rbp-20h]
  _BYTE *Src; // [rsp+58h] [rbp-10h]
  unsigned __int16 v40; // [rsp+B0h] [rbp+48h]
  unsigned __int16 v42; // [rsp+C0h] [rbp+58h]
  BOOL v43; // [rsp+C8h] [rbp+60h]

  v2 = *a2;
  v3 = *(_WORD *)(a1 + 190);
  v4 = *(unsigned __int16 *)(a1 + 188);
  v34 = 0;
  v38 = *a2;
  v42 = v3;
  Src = (_BYTE *)a2[1].m128i_i64[0];
  v5 = HIBYTE(a2->m128i_u32[0]);
  v6 = v4;
  v7 = DivFD6(100, *(_DWORD *)(a1 + 192)) - 100;
  v35 = v7;
  v8 = (_mm_cvtsi128_si32(v2) & 1) == 0;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v2, 4));
  if ( !v2.m128i_i8[4] )
    v9 = 8;
  v38.m128i_i8[4] = v9;
  v10 = v38.m128i_u8[5];
  if ( !v38.m128i_i8[5] )
    v10 = 15;
  v38.m128i_i8[5] = v10;
  v11 = ((v10 >> 1) + 100 * v4) / v10;
  v37 = v9;
  v12 = (v4 * v9 + 5) / 0xA;
  if ( v38.m128i_i8[3] <= 2u )
  {
    v43 = v8;
    v38.m128i_i16[4] = (v11 + 50) / 0x64;
    LOWORD(v14) = v38.m128i_i16[4];
    if ( v38.m128i_i8[3] )
    {
      if ( v38.m128i_i8[3] == 1 )
      {
        v11 = 800;
        v43 = v8;
      }
    }
    else
    {
      LOWORD(v14) = 8 * v38.m128i_u8[2];
      v38.m128i_i16[4] = v14;
    }
LABEL_10:
    v15 = v12 - v7;
    if ( (_WORD)v6 != v3 )
      v11 = ((v6 >> 1) + v11 * v3) / v6;
    if ( !(_WORD)v14 )
    {
      LOWORD(v14) = 1;
      v38.m128i_i16[4] = 1;
    }
    v16 = (v11 + 50) / 0x64;
    v38.m128i_i16[5] = v16;
    if ( !(_WORD)v16 )
    {
      LOWORD(v16) = 1;
      v38.m128i_i16[5] = 1;
    }
    v17 = (v15 + 50) / 0x64u;
    if ( (unsigned __int16)v17 > (unsigned __int16)v14 )
      LOWORD(v17) = v14 - 1;
    v18 = 1;
    if ( (_WORD)v17 )
      v18 = v17;
    v19 = Src;
    v40 = ComputeBytesPerScanLine(1u, v38.m128i_u8[2], (unsigned __int16)v14);
    v38.m128i_i16[3] = v40;
    result = v40 * (unsigned int)(unsigned __int16)v16;
    v36 = v40 * (unsigned __int16)v16;
    if ( !Src )
      goto LABEL_35;
    memset(Src, 0, (unsigned __int16)(v40 * v16));
    if ( v5 )
    {
      if ( (unsigned __int8)v5 > 2u )
      {
        if ( (unsigned __int8)v5 <= 0x11u )
        {
          LOWORD(v33) = v18;
          DrawCornerLine(Src, v33, v43);
          if ( v34 == 2 )
          {
            v28 = &Src[v40 * ((unsigned __int16)v16 - 1)];
            for ( i = (unsigned __int16)v16 >> 1; i; v28 -= 2 * (unsigned int)v40 )
            {
              --i;
              for ( j = v40; j; --j )
              {
                *v28 |= *v19;
                v31 = *v28++;
                *v19++ = v31;
              }
            }
            v19 = Src;
          }
        }
LABEL_34:
        result = v36;
        if ( (v38.m128i_i8[0] & 2) != 0 )
        {
          for ( k = v36; k; --k )
          {
            *v19 = ~*v19;
            ++v19;
          }
        }
LABEL_35:
        *a2 = v38;
        a2[1].m128i_i64[0] = (__int64)Src;
        return result;
      }
      v25 = &Src[(unsigned __int64)(unsigned __int16)(((unsigned __int16)v14 - v18) >> 1) >> 3];
      v26 = 128 >> ((((unsigned __int16)v14 - v18) >> 1) & 7);
      while ( 1 )
      {
        v27 = 0;
        if ( !v18 )
          break;
        do
        {
          --v18;
          v27 |= v26;
          LOBYTE(v26) = (unsigned __int8)v26 >> 1;
        }
        while ( (_BYTE)v26 && v18 );
        *v25 = v27;
        LOBYTE(v26) = 0x80;
        ++v25;
      }
      v21 = Src;
      v22 = (unsigned __int16)v16;
      do
      {
        memmove(v21, Src, v40);
        v21 += v40;
        --v22;
      }
      while ( v22 );
      v5 = v38.m128i_i8[3];
    }
    if ( v5 != 1 )
    {
      v23 = ((v37 * (unsigned int)v42 + 5) / 0xA - v35 + 50) / 0x64;
      if ( (unsigned __int16)v23 >= (unsigned __int16)v16 )
        LOWORD(v23) = v16 - 1;
      v24 = 1;
      if ( (_WORD)v23 )
        v24 = v23;
      memset(&Src[v40 * (((unsigned __int16)v16 - v24) >> 1)], 255, v24 * v40);
    }
    goto LABEL_34;
  }
  if ( v38.m128i_i8[3] <= 0x11u )
  {
    v43 = v8;
    v34 = (unsigned __int16)(v38.m128i_u8[3] - 3) % 3u;
    if ( v38.m128i_u8[3] - 3 != 3 * ((unsigned __int16)(v38.m128i_u8[3] - 3) / 3u) )
      v43 = !v8;
    v13 = MonoPatRatio[(unsigned __int16)(v38.m128i_u8[3] - 3) / 3u];
    v14 = ((v13 >> 17) + 100 * v11) / HIWORD(v13);
    v38.m128i_i16[4] = v14;
    v11 = ((v13 >> 17) + v11 * (unsigned __int16)v13) / HIWORD(v13);
    v12 = ((v13 >> 17) + 10000 * v12) / HIWORD(v13);
    goto LABEL_10;
  }
  return 0LL;
}
