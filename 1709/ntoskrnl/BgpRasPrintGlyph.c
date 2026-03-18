/*
 * XREFs of BgpRasPrintGlyph @ 0x14013C14C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14013BA14 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x1407D4284 (BgpTxtDisplayString.c)
 * Callees:
 *     RaspAntiAlias @ 0x14013C4A0 (RaspAntiAlias.c)
 *     RaspGetCacheEntry @ 0x14013CAC4 (RaspGetCacheEntry.c)
 *     RaspRasterize @ 0x14013CB58 (RaspRasterize.c)
 *     RaspFreeMemory @ 0x14013CD18 (RaspFreeMemory.c)
 *     BgpFmRoundUp @ 0x14013D6E0 (BgpFmRoundUp.c)
 *     RaspRectangleCreate @ 0x14013D700 (RaspRectangleCreate.c)
 *     BgpFwAllocateMemory @ 0x14013E320 (BgpFwAllocateMemory.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RaspAddCacheEntry @ 0x1407D0044 (RaspAddCacheEntry.c)
 *     RaspDestroyCachedBitmap @ 0x1407D00AC (RaspDestroyCachedBitmap.c)
 *     BgpGxCopyRectangle @ 0x1407D413C (BgpGxCopyRectangle.c)
 */

__int64 __fastcall BgpRasPrintGlyph(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8,
        _QWORD *a9)
{
  _QWORD *v9; // rsi
  int v10; // edi
  unsigned __int64 v11; // r15
  __m128i *v12; // r14
  char v13; // r12
  int v14; // r13d
  int v16; // r8d
  int v17; // r8d
  int v18; // r9d
  char *Memory; // rbx
  __int16 v20; // r15
  __int64 v21; // rdx
  _DWORD *v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  __int64 v25; // rcx
  int v26; // r10d
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // ecx
  __int64 v30; // r9
  int v31; // r10d
  int v32; // r11d
  int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  bool v36; // zf
  __int128 v37; // xmm0
  __m128i v38; // xmm3
  __int128 v39; // xmm1
  __int64 v40; // xmm0_8
  int v41; // edx
  unsigned __int64 v42; // xmm3_8
  int v44; // r9d
  int v45; // eax
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+54h] [rbp-ACh]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  _DWORD *v49; // [rsp+60h] [rbp-A0h] BYREF
  char *v50; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v52; // [rsp+78h] [rbp-88h]
  unsigned __int64 v53; // [rsp+80h] [rbp-80h] BYREF
  int v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  int *v56; // [rsp+98h] [rbp-68h]
  _QWORD v57[4]; // [rsp+A0h] [rbp-60h] BYREF
  char v58; // [rsp+C0h] [rbp-40h] BYREF
  __m128i v59; // [rsp+110h] [rbp+10h] BYREF
  __m128i v60; // [rsp+120h] [rbp+20h]
  __int128 v61; // [rsp+130h] [rbp+30h]
  __int128 v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+150h] [rbp+50h]
  char v64[8]; // [rsp+1E8h] [rbp+E8h]

  v9 = a9;
  v10 = 0;
  v50 = 0LL;
  v11 = 0LL;
  v46 = 0;
  v12 = 0LL;
  v55 = a1;
  v13 = 0;
  v14 = 0;
  v56 = a7;
  v52 = a4;
  LOWORD(v47) = a3;
  *a7 = 0;
  v64[0] = a6 & 1;
  v48 = a2;
  v53 = 0LL;
  v51 = 0LL;
  if ( !a9 )
  {
    v9 = v57;
    memset(v57, 0, 24);
  }
  if ( a3 >= 0x20u )
  {
    v16 = *(_DWORD *)(a2 + 16);
    v49 = *(_DWORD **)(a2 + 8);
    RaspGetCacheEntry((unsigned int)&RaspBitmapCache, a3, v16, v49[10], (__int64)v49, (__int64)&v50);
    Memory = v50;
    if ( v50 )
    {
      v23 = v48;
      v22 = v49;
LABEL_13:
      v25 = *((__int16 *)v22 + 43);
      v26 = *((_DWORD *)Memory + 11);
      v49 = (_DWORD *)*((_QWORD *)Memory + 2);
      v27 = *(_QWORD *)(v23 + 8);
      v46 = *v49 / *((_DWORD *)Memory + 14);
      LODWORD(v50) = v26;
      v28 = *(unsigned int *)(v23 + 16) * v25 * *(unsigned int *)(v27 + 96);
      v29 = BgpFmRoundUp(
              (v28 << 6) / (72LL * *(unsigned __int16 *)(v27 + 120)),
              (v28 << 6) % (72LL * *(unsigned __int16 *)(v27 + 120)));
      v33 = *((_DWORD *)Memory + 12);
      v34 = a5 + v29;
      if ( v33 >= 0 && v33 > v34 )
      {
        v44 = *((unsigned __int16 *)Memory + 30);
        v47 = 0;
        DbgPrintEx(0x65u, 0, "BGFX internal font error char %x!\n", v44);
        v30 = v48;
        v35 = 0;
        v31 = (int)v50;
        v32 = v46;
      }
      else
      {
        v35 = v34 - v33;
        v47 = v35;
      }
      if ( *(_DWORD *)v55 < v35 + v32 || *(_DWORD *)(v55 + 4) < v31 + v52 )
      {
        v10 = -2147483643;
        goto LABEL_26;
      }
      if ( v64[0] )
      {
        v36 = (*(_BYTE *)(v30 + 20) & 1) == 0;
        v12 = &v59;
        v37 = *(_OWORD *)(v55 + 32);
        v38 = *(__m128i *)(v55 + 16);
        v39 = *(_OWORD *)(v55 + 48);
        v59 = *(__m128i *)v55;
        v60 = v38;
        v61 = v37;
        v40 = *(_QWORD *)(v55 + 64);
        v41 = _mm_cvtsi128_si32(_mm_srli_si128(v59, 4));
        v42 = _mm_srli_si128(v38, 8).m128i_u64[0];
        v62 = v39;
        if ( v36 )
          v41 = v31;
        v63 = v40;
        v46 = v41;
        v59.m128i_i64[0] = __PAIR64__(v41, v32);
        v60.m128i_i64[1] = v41 * ((unsigned __int32)v59.m128i_i32[2] >> 3) * v35 + v42;
        goto LABEL_22;
      }
      v46 = v31;
      v53 = __PAIR64__(v32, v31);
      v54 = v31;
      v45 = RaspRectangleCreate(&v53, 32LL, &v51, v9);
      v12 = (__m128i *)v51;
      v10 = v45;
      if ( v45 >= 0 )
      {
        v30 = v48;
LABEL_22:
        RaspAntiAlias((_DWORD)v49, (_DWORD)v12, *((_DWORD *)Memory + 13), *((_DWORD *)Memory + 14), v30);
        if ( !v64[0] )
        {
          v49 = 0LL;
          v51 = __PAIR64__(v47, v52);
          BgpGxCopyRectangle(v55, v12, &v51, &v49);
        }
        *v56 = v46;
        if ( v13 )
          RaspAddCacheEntry(&RaspBitmapCache, Memory);
LABEL_26:
        if ( v10 >= 0 )
          goto LABEL_27;
      }
LABEL_39:
      if ( !v13 )
      {
LABEL_28:
        if ( !v14 )
        {
LABEL_29:
          if ( v11 )
            RaspFreeMemory(v11, v9);
          goto LABEL_31;
        }
LABEL_33:
        if ( v10 >= 0 || Memory )
          goto LABEL_31;
        goto LABEL_29;
      }
      if ( Memory )
        RaspDestroyCachedBitmap(Memory);
LABEL_27:
      if ( v13 )
        goto LABEL_33;
      goto LABEL_28;
    }
    LOBYTE(v14) = (dword_14035A1B0 & 4) != 0;
    if ( (dword_14035A1B0 & 4) == 0 && !*v9 )
    {
      v13 = 0;
      if ( ((unsigned __int8)((_BYTE)v50 + 1) & *(_BYTE *)(v48 + 20)) == 0 )
        v13 = (_BYTE)v50 + 1;
    }
    v20 = v47;
    v10 = RaspRasterize(
            v48,
            (unsigned __int16)v47,
            v17,
            v18,
            v14,
            (__int64)&v53,
            (__int64)&v46,
            (__int64)&v50,
            (__int64)v9);
    if ( v10 >= 0 )
    {
      if ( !v13 )
      {
        Memory = &v58;
LABEL_12:
        v21 = v9[2];
        v22 = v49;
        v23 = v48;
        v24 = v49[10];
        *((_DWORD *)Memory + 10) = *(_DWORD *)(v48 + 16);
        *((_DWORD *)Memory + 11) = v46;
        *((_DWORD *)Memory + 12) = (_DWORD)v50;
        *((_WORD *)Memory + 30) = v20;
        v11 = v53;
        *((_DWORD *)Memory + 13) = 4;
        *((_DWORD *)Memory + 14) = 4;
        *((_DWORD *)Memory + 9) = v24;
        *((_QWORD *)Memory + 3) = v22;
        *((_QWORD *)Memory + 2) = v11;
        *(_QWORD *)(Memory + 62) = v21;
        goto LABEL_13;
      }
      Memory = (char *)BgpFwAllocateMemory(70LL);
      if ( Memory )
        goto LABEL_12;
      v10 = -1073741801;
    }
    v11 = v53;
    goto LABEL_39;
  }
LABEL_31:
  if ( !v64[0] && v12 )
    RaspFreeMemory(v12, v9);
  v9[2] = 0LL;
  return (unsigned int)v10;
}
