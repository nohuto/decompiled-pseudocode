/*
 * XREFs of GreGetCharacterPlacementW @ 0x1C0294920
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x1C0289D60 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     GreGetGlyphIndicesW @ 0x1C0107B3C (GreGetGlyphIndicesW.c)
 *     GreGetTextExtentW @ 0x1C0108E28 (GreGetTextExtentW.c)
 *     GreGetKerningPairs @ 0x1C01301D8 (GreGetKerningPairs.c)
 *     GreGetTextExtentExW @ 0x1C0145118 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C02947CC (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
 */

__int64 __fastcall GreGetCharacterPlacementW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        __int128 *a5,
        int a6)
{
  int v6; // r15d
  unsigned int v7; // ebx
  HDC v9; // r10
  unsigned int *v10; // rdi
  __int128 v12; // xmm0
  __m128i v13; // xmm1
  int *v14; // r13
  __int128 v15; // xmm0
  unsigned int v16; // r8d
  int v17; // r12d
  bool v18; // zf
  int v19; // eax
  __int64 i; // rdx
  unsigned int *v21; // rcx
  __int64 v22; // rbx
  unsigned int KerningPairs; // eax
  __int64 v24; // rsi
  unsigned int *v25; // rax
  unsigned int *v26; // r15
  unsigned __int64 v27; // r10
  unsigned int cx; // esi
  _DWORD *v29; // rcx
  unsigned __int16 *v30; // r11
  __int16 v31; // ax
  unsigned __int16 *v32; // r8
  unsigned int v33; // r9d
  __int64 v34; // rax
  unsigned __int16 *v35; // r12
  __int64 v36; // rax
  unsigned __int16 *j; // rax
  int v38; // r15d
  int v39; // eax
  unsigned int v40; // ecx
  int *v41; // rax
  int v42; // ecx
  __int64 v43; // rax
  unsigned int v44; // r8d
  unsigned int v45; // r10d
  unsigned int *v46; // rcx
  __int64 v47; // r9
  unsigned int v48; // r8d
  __int64 v49; // rax
  int *v50; // r8
  int v51; // ecx
  int v52; // eax
  _DWORD *v53; // rax
  unsigned int k; // ecx
  LONG cy; // esi
  __int64 v56; // rax
  struct tagSIZE v57; // [rsp+48h] [rbp-59h] BYREF
  int v58; // [rsp+50h] [rbp-51h]
  unsigned int *v59; // [rsp+58h] [rbp-49h] BYREF
  int v60; // [rsp+60h] [rbp-41h]
  int v61; // [rsp+64h] [rbp-3Dh]
  void *v62[2]; // [rsp+68h] [rbp-39h]
  void *Src[2]; // [rsp+78h] [rbp-29h]
  void *v64[2]; // [rsp+88h] [rbp-19h]
  __m128i v65; // [rsp+98h] [rbp-9h]
  size_t Size; // [rsp+108h] [rbp+67h] BYREF
  unsigned int v69; // [rsp+110h] [rbp+6Fh]

  v69 = a4;
  v6 = 0;
  v59 = 0LL;
  v7 = a3;
  v61 = 0;
  v57 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( !a5 )
  {
    if ( !(unsigned int)GreGetTextExtentW(a1, a2, a3, &v57, 1) )
      return 0LL;
    return (unsigned int)LOWORD(v57.cx) | (v57.cy << 16);
  }
  v12 = *a5;
  *(_OWORD *)Src = a5[1];
  v13 = (__m128i)a5[3];
  v14 = (int *)Src[1];
  *(_OWORD *)v62 = v12;
  v15 = a5[2];
  v65 = v13;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  *(_OWORD *)v64 = v15;
  if ( v7 > v16 )
    v7 = v16;
  v17 = a6 | 0x100000;
  LODWORD(Size) = v7;
  if ( (a6 & 0x10000) == 0 )
    v17 = a6;
  if ( (v17 & 0x200000) != 0 )
  {
    v18 = Src[1] == 0LL;
    if ( !Src[1] )
      goto LABEL_13;
    v19 = nCalcJustInArray(&v59, 1u, (char *)Src[1], 1, v16);
    v10 = v59;
    a4 = v69;
    v9 = a1;
    v61 = v19;
    if ( !v19 )
      v17 &= ~0x200000u;
  }
  v18 = v14 == 0LL;
LABEL_13:
  if ( !v18 )
    v6 = 1;
  v58 = v6;
  if ( v64[0] )
  {
    v6 += 2;
    v58 = v6;
  }
  if ( v6 == 2 )
    v14 = (int *)v64[0];
  v60 = v17 & 0x100000;
  if ( !(unsigned int)GreGetTextExtentExW(
                        v9,
                        a2,
                        v7,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v17 & 0x100000) != 0)),
                        v14,
                        &v57,
                        0) )
  {
    if ( !v10 )
      return 0LL;
    v21 = v10;
LABEL_22:
    Win32FreePool(v21, i);
    return 0LL;
  }
  LODWORD(v22) = Size;
  if ( v14 )
  {
    if ( (_DWORD)Size )
    {
      for ( i = (__int64)&v14[(unsigned int)(Size - 1)]; i > (unsigned __int64)v14; i -= 4LL )
        *(_DWORD *)i -= *(_DWORD *)(i - 4);
    }
  }
  if ( v60 && !(_DWORD)v22 )
  {
    if ( v10 )
      Win32FreePool(v10, i);
    return (unsigned int)LOWORD(v57.cx) | (v57.cy << 16);
  }
  if ( (v17 & 8) != 0
    && v6
    && (unsigned int)v22 >= 2
    && (KerningPairs = GreGetKerningPairs(a1, 0, 0LL), (v24 = KerningPairs) != 0)
    && (v25 = (unsigned int *)PALLOCMEM2(8 * KerningPairs, 1954051143LL, 1), (v26 = v25) != 0LL) )
  {
    if ( (unsigned int)GreGetKerningPairs(a1, v24, (unsigned __int64)v25) != (_DWORD)v24 )
    {
      if ( v10 )
        Win32FreePool(v10, i);
      v21 = v26;
      goto LABEL_22;
    }
    v27 = (unsigned __int64)&v26[2 * v24];
    cx = v57.cx;
    if ( (unsigned __int64)v26 < v27 )
    {
      v29 = v26 + 1;
      v30 = &a2[(unsigned int)(v22 - 1)];
      do
      {
        v31 = *((_WORD *)v29 - 2);
        v32 = a2;
        for ( LOWORD(Size) = v31; v32 < v30; ++v32 )
        {
          if ( v31 == *v32 )
          {
            i = (char *)v32 - (char *)a2;
            if ( v32[1] == *((_WORD *)v29 - 1) )
            {
              i >>= 1;
              v14[i] += *v29;
              cx += *v29;
              v57.cx = cx;
            }
            v31 = Size;
          }
        }
        v29 += 2;
      }
      while ( (unsigned __int64)(v29 - 1) < v27 );
    }
    Win32FreePool(v26, i);
    v33 = v69;
    if ( v60 )
    {
      while ( cx > v69 )
      {
        if ( !(_DWORD)v22 )
          goto LABEL_56;
        v22 = (unsigned int)(v22 - 1);
        cx -= v14[v22];
        v57.cx = cx;
      }
      if ( !(_DWORD)v22 )
      {
LABEL_56:
        if ( v10 )
          Win32FreePool(v10, i);
        v34 = (__int64)a5;
        *((_DWORD *)a5 + 14) = 0;
        *(_DWORD *)(v34 + 60) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v57.cx;
    v33 = v69;
  }
  if ( (v17 & 0x10000) == 0 || !v58 )
  {
    v35 = a2;
    goto LABEL_91;
  }
  v35 = a2;
  if ( (_DWORD)v22 )
  {
    v36 = (unsigned int)(v22 - 1);
    i = (__int64)&v14[v36];
    for ( j = &a2[v36]; j >= a2 && *j == 32; --j )
    {
      cx -= *(_DWORD *)i;
      LODWORD(v22) = v22 - 1;
      i -= 4LL;
    }
    if ( !(_DWORD)v22 )
      goto LABEL_56;
    v38 = v33 - cx;
    if ( (int)(v33 - cx) < 0 || (unsigned int)v22 < 2 )
      goto LABEL_89;
    v39 = v61;
    if ( !v61 )
    {
      v39 = nCalcJustInArray(&v59, 0x20u, (char *)a2, 0, v22);
      if ( !v39 )
      {
        if ( v38 > 0 )
        {
          i = (unsigned int)(v22 - 1);
          do
          {
            v40 = 0;
            v41 = v14;
            do
            {
              ++*v41;
              if ( !--v38 )
                break;
              ++v40;
              ++v41;
            }
            while ( v40 < (unsigned int)i );
          }
          while ( v38 > 0 );
        }
        v10 = v59;
LABEL_89:
        v57.cx = v69;
        goto LABEL_91;
      }
      v10 = v59;
    }
    v42 = v39 - 1;
    v43 = v39 - 1;
    if ( v42 >= 0 )
    {
      do
      {
        if ( (int)v22 - 1 >= v10[v43] )
          break;
        --v42;
        --v43;
      }
      while ( v43 >= 0 );
    }
    v44 = v42 + 1;
    i = v38 % (unsigned int)(v42 + 1);
    v45 = v38 / (unsigned int)(v42 + 1);
    if ( v42 != -1 )
    {
      v46 = v10;
      v47 = v44;
      do
      {
        v48 = v45;
        if ( (int)i > 0 )
          v48 = v45 + 1;
        v49 = *v46;
        i = (unsigned int)(i - 1);
        ++v46;
        v14[v49] += v48;
        --v47;
      }
      while ( v47 );
    }
    goto LABEL_89;
  }
LABEL_91:
  if ( v58 == 3 )
    memmove(v64[0], Src[1], 4LL * (unsigned int)v22);
  v50 = (int *)v64[0];
  if ( v64[0] )
  {
    v51 = 0;
    if ( (_DWORD)v22 )
    {
      i = (unsigned int)v22;
      do
      {
        v52 = *v50;
        *v50 = v51;
        v51 += v52;
        ++v50;
        --i;
      }
      while ( i );
    }
  }
  if ( v62[1] )
    memmove(v62[1], v35, 2LL * (unsigned int)v22);
  if ( v64[1] )
    memset(v64[1], 1, (unsigned int)v22);
  v53 = Src[0];
  if ( Src[0] )
  {
    for ( k = 0; k < (unsigned int)v22; ++v53 )
      *v53 = k++;
  }
  if ( v65.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(a1, v35, v22, v65.m128i_i64[0], 0, 0) == -1 )
  {
    LODWORD(v22) = 0;
    cy = 0;
    v57.cx = 0;
  }
  else
  {
    cy = v57.cy;
  }
  if ( v10 )
    Win32FreePool(v10, i);
  v56 = (__int64)a5;
  *((_DWORD *)a5 + 14) = v22;
  *(_DWORD *)(v56 + 60) = v22;
  return (cy << 16) | (unsigned int)LOWORD(v57.cx);
}
