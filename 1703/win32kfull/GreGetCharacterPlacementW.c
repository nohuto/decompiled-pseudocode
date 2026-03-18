/*
 * XREFs of GreGetCharacterPlacementW @ 0x1C0298268
 * Callers:
 *     NtGdiGetCharacterPlacementW @ 0x1C028D200 (NtGdiGetCharacterPlacementW.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C000C2DC (GreGetTextExtentW.c)
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     GreGetGlyphIndicesW @ 0x1C00FA32C (GreGetGlyphIndicesW.c)
 *     GreGetKerningPairs @ 0x1C01283C8 (GreGetKerningPairs.c)
 *     GreGetTextExtentExW @ 0x1C013F8F0 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z @ 0x1C02980FC (-nCalcJustInArray@@YAKPEAPEAIGPEAXHI@Z.c)
 */

__int64 __fastcall GreGetCharacterPlacementW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        __int128 *a5,
        int a6)
{
  int v6; // r12d
  unsigned int v7; // ebx
  HDC v9; // r10
  unsigned int *v10; // rdi
  __int128 v12; // xmm0
  __m128i v13; // xmm1
  int *v14; // r13
  __int128 v15; // xmm0
  unsigned int v16; // r8d
  int v17; // r14d
  int v18; // eax
  unsigned int *v19; // rcx
  __int64 v20; // rbx
  int *i; // rdx
  unsigned int KerningPairs; // eax
  __int64 v23; // rsi
  unsigned int *v24; // rax
  unsigned int *v25; // r12
  unsigned __int64 v26; // r10
  unsigned int cx; // esi
  _DWORD *v28; // rcx
  unsigned __int16 *v29; // r9
  __int16 v30; // r8
  unsigned __int16 *v31; // rdx
  unsigned __int64 v32; // rax
  unsigned int v33; // r9d
  __int128 *v34; // rax
  unsigned __int16 *v35; // r12
  __int64 v36; // rax
  int *v37; // rdx
  unsigned __int16 *j; // rax
  int v39; // r14d
  int v40; // eax
  unsigned int v41; // ecx
  int *v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // r8d
  signed int v46; // edx
  unsigned int v47; // r10d
  unsigned int *v48; // rcx
  __int64 v49; // r9
  unsigned int v50; // r8d
  __int64 v51; // rax
  int *v52; // r8
  int v53; // ecx
  __int64 v54; // rdx
  int v55; // eax
  _DWORD *v56; // rax
  unsigned int k; // ecx
  LONG cy; // esi
  __int128 *v59; // rax
  struct tagSIZE v60; // [rsp+48h] [rbp-69h] BYREF
  int v61; // [rsp+50h] [rbp-61h]
  unsigned int *v62; // [rsp+58h] [rbp-59h] BYREF
  int v63; // [rsp+60h] [rbp-51h]
  int v64; // [rsp+64h] [rbp-4Dh]
  unsigned __int16 *v65; // [rsp+68h] [rbp-49h]
  void *v66[2]; // [rsp+78h] [rbp-39h]
  void *Src[2]; // [rsp+88h] [rbp-29h]
  void *v68[2]; // [rsp+98h] [rbp-19h]
  __m128i v69; // [rsp+A8h] [rbp-9h]
  size_t Size; // [rsp+118h] [rbp+67h] BYREF
  unsigned int v73; // [rsp+120h] [rbp+6Fh]

  v73 = a4;
  v6 = 0;
  v62 = 0LL;
  v7 = a3;
  v64 = 0;
  v60 = 0LL;
  v9 = a1;
  v10 = 0LL;
  if ( !a5 )
  {
    if ( !(unsigned int)GreGetTextExtentW(a1, a2, a3, &v60, 1) )
      return 0LL;
    return (unsigned int)LOWORD(v60.cx) | (v60.cy << 16);
  }
  v12 = *a5;
  *(_OWORD *)Src = a5[1];
  v13 = (__m128i)a5[3];
  v14 = (int *)Src[1];
  *(_OWORD *)v66 = v12;
  v15 = a5[2];
  v69 = v13;
  v16 = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  *(_OWORD *)v68 = v15;
  if ( v7 > v16 )
    v7 = v16;
  v17 = a6 | 0x100000;
  LODWORD(Size) = v7;
  if ( (a6 & 0x10000) == 0 )
    v17 = a6;
  if ( (v17 & 0x200000) == 0
    || !Src[1]
    || (v18 = nCalcJustInArray(&v62, 1u, (char *)Src[1], 1, v16), v10 = v62, a4 = v73, v9 = a1, (v64 = v18) == 0) )
  {
    v17 &= ~0x200000u;
  }
  if ( v14 )
    v6 = 1;
  v61 = v6;
  if ( v68[0] )
  {
    v6 += 2;
    v61 = v6;
  }
  if ( v6 == 2 )
    v14 = (int *)v68[0];
  v63 = v17 & 0x100000;
  if ( !(unsigned int)GreGetTextExtentExW(
                        v9,
                        a2,
                        v7,
                        a4,
                        (unsigned int *)((unsigned __int64)&Size & -(__int64)((v17 & 0x100000) != 0)),
                        v14,
                        &v60,
                        0) )
  {
    if ( !v10 )
      return 0LL;
    v19 = v10;
LABEL_21:
    Win32FreePool(v19);
    return 0LL;
  }
  LODWORD(v20) = Size;
  if ( v14 )
  {
    if ( (_DWORD)Size )
    {
      for ( i = &v14[(unsigned int)(Size - 1)]; i > v14; --i )
        *i -= *(i - 1);
    }
  }
  if ( v63 && !(_DWORD)v20 )
  {
    if ( v10 )
      Win32FreePool(v10);
    return (unsigned int)LOWORD(v60.cx) | (v60.cy << 16);
  }
  if ( (v17 & 8) != 0
    && v6
    && (unsigned int)v20 >= 2
    && (KerningPairs = GreGetKerningPairs(a1, 0, 0LL), (v23 = KerningPairs) != 0)
    && (v24 = (unsigned int *)PALLOCMEM2(8 * KerningPairs, 1954051143LL, 1), (v25 = v24) != 0LL) )
  {
    if ( (unsigned int)GreGetKerningPairs(a1, v23, (unsigned __int64)v24) != (_DWORD)v23 )
    {
      if ( v10 )
        Win32FreePool(v10);
      v19 = v25;
      goto LABEL_21;
    }
    v26 = (unsigned __int64)&v25[2 * v23];
    cx = v60.cx;
    if ( (unsigned __int64)v25 < v26 )
    {
      v28 = v25 + 1;
      v29 = &a2[(unsigned int)(v20 - 1)];
      v65 = v29;
      do
      {
        v30 = *((_WORD *)v28 - 2);
        v31 = a2;
        LOWORD(Size) = v30;
        if ( a2 < v29 )
        {
          v32 = (unsigned __int64)v65;
          do
          {
            if ( v30 == *v31 )
            {
              if ( v31[1] == *((_WORD *)v28 - 1) )
              {
                v14[v31 - a2] += *v28;
                cx += *v28;
                v60.cx = cx;
              }
              v30 = Size;
              v32 = (unsigned __int64)v65;
            }
            ++v31;
          }
          while ( (unsigned __int64)v31 < v32 );
          v29 = v65;
        }
        v28 += 2;
      }
      while ( (unsigned __int64)(v28 - 1) < v26 );
    }
    Win32FreePool(v25);
    v33 = v73;
    if ( v63 )
    {
      while ( cx > v73 )
      {
        if ( !(_DWORD)v20 )
          goto LABEL_57;
        v20 = (unsigned int)(v20 - 1);
        cx -= v14[v20];
        v60.cx = cx;
      }
      if ( !(_DWORD)v20 )
      {
LABEL_57:
        if ( v10 )
          Win32FreePool(v10);
        v34 = a5;
        *((_DWORD *)a5 + 14) = 0;
        *((_DWORD *)v34 + 15) = 0;
        return 0LL;
      }
    }
  }
  else
  {
    cx = v60.cx;
    v33 = v73;
  }
  if ( (v17 & 0x10000) == 0 || !v61 )
  {
    v35 = a2;
    goto LABEL_91;
  }
  v35 = a2;
  if ( (_DWORD)v20 )
  {
    v36 = (unsigned int)(v20 - 1);
    v37 = &v14[v36];
    for ( j = &a2[v36]; j >= a2 && *j == 32; --j )
    {
      cx -= *v37;
      LODWORD(v20) = v20 - 1;
      --v37;
    }
    if ( !(_DWORD)v20 )
      goto LABEL_57;
    v39 = v33 - cx;
    if ( (int)(v33 - cx) < 0 || (unsigned int)v20 < 2 )
      goto LABEL_89;
    v40 = v64;
    if ( !v64 )
    {
      v40 = nCalcJustInArray(&v62, 0x20u, (char *)a2, 0, v20);
      if ( !v40 )
      {
        while ( v39 > 0 )
        {
          v41 = 0;
          v42 = v14;
          do
          {
            ++*v42;
            if ( !--v39 )
              break;
            ++v41;
            ++v42;
          }
          while ( v41 < (int)v20 - 1 );
        }
        v10 = v62;
LABEL_89:
        v60.cx = v73;
        goto LABEL_91;
      }
      v10 = v62;
    }
    v43 = v40 - 1;
    v44 = v40 - 1;
    if ( v43 >= 0 )
    {
      do
      {
        if ( (int)v20 - 1 >= v10[v44] )
          break;
        --v43;
        --v44;
      }
      while ( v44 >= 0 );
    }
    v45 = v43 + 1;
    v46 = v39 % (unsigned int)(v43 + 1);
    v47 = v39 / (unsigned int)(v43 + 1);
    if ( v43 != -1 )
    {
      v48 = v10;
      v49 = v45;
      do
      {
        v50 = v47;
        if ( v46 > 0 )
          v50 = v47 + 1;
        v51 = *v48;
        --v46;
        ++v48;
        v14[v51] += v50;
        --v49;
      }
      while ( v49 );
    }
    goto LABEL_89;
  }
LABEL_91:
  if ( v61 == 3 )
    memmove(v68[0], Src[1], 4LL * (unsigned int)v20);
  v52 = (int *)v68[0];
  if ( v68[0] )
  {
    v53 = 0;
    if ( (_DWORD)v20 )
    {
      v54 = (unsigned int)v20;
      do
      {
        v55 = *v52;
        *v52 = v53;
        v53 += v55;
        ++v52;
        --v54;
      }
      while ( v54 );
    }
  }
  if ( v66[1] )
    memmove(v66[1], v35, 2LL * (unsigned int)v20);
  if ( v68[1] )
    memset(v68[1], 1, (unsigned int)v20);
  v56 = Src[0];
  if ( Src[0] )
  {
    for ( k = 0; k < (unsigned int)v20; ++v56 )
      *v56 = k++;
  }
  if ( v69.m128i_i64[0] && (unsigned int)GreGetGlyphIndicesW(a1, v35, v20, v69.m128i_i64[0], 0, 0) == -1 )
  {
    LODWORD(v20) = 0;
    v60.cx = 0;
    cy = 0;
  }
  else
  {
    cy = v60.cy;
  }
  if ( v10 )
    Win32FreePool(v10);
  v59 = a5;
  *((_DWORD *)a5 + 14) = v20;
  *((_DWORD *)v59 + 15) = v20;
  return (cy << 16) | (unsigned int)LOWORD(v60.cx);
}
