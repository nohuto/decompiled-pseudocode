/*
 * XREFs of ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D7D84
 * Callers:
 *     ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0030778 (-ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z.c)
 * Callees:
 *     ?interpolatePixel_6x5@@YAEEEEEE@Z @ 0x1C00D8330 (-interpolatePixel_6x5@@YAEEEEEE@Z.c)
 *     ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D8480 (-ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 */

__int64 __fastcall ulClearTypeFilter_6x5(struct _GLYPHBITS *a1, struct _GLYPHDATA *a2, struct RFONT *a3)
{
  LONG v4; // r14d
  LONG cy; // edi
  __int64 cx; // rbx
  LONG v7; // r8d
  BYTE *aj; // r15
  __int64 v9; // rdx
  __int64 v10; // r13
  unsigned __int8 *v11; // r12
  __int64 j; // rdx
  unsigned __int8 *v13; // rbx
  char *v14; // r14
  int *v15; // r13
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rbx
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // r9
  __int64 v26; // rax
  bool v27; // zf
  unsigned __int8 *v28; // rdi
  unsigned __int8 *v29; // rsi
  unsigned __int8 *v30; // rcx
  __int64 v32; // rdi
  char v33; // cl
  unsigned __int8 v34; // r9
  unsigned __int8 v35; // r8
  unsigned __int8 v36; // dl
  __int64 i; // rax
  unsigned __int8 v38; // cl
  __m128i v39; // xmm6
  __int64 v40; // rdi
  char *v41; // xmm0_8
  unsigned __int8 *v42; // rax
  signed __int64 v43; // r12
  unsigned __int8 v44; // r8
  unsigned __int8 v45; // dl
  unsigned __int8 v46; // r9
  __int64 v47; // rax
  unsigned __int8 v48; // cl
  unsigned __int8 v49; // r8
  unsigned __int8 v50; // dl
  char *v51; // rdi
  __int64 v52; // rsi
  char *v53; // rdi
  unsigned __int8 *v54; // rsi
  unsigned __int8 *v55; // r12
  unsigned __int8 v56; // r9
  unsigned __int8 v57; // r8
  __m128i v58; // xmm6
  unsigned __int8 v59; // dl
  unsigned __int8 v60; // cl
  char v61; // [rsp+28h] [rbp-49h]
  LONG v62; // [rsp+38h] [rbp-39h]
  __int64 v63; // [rsp+40h] [rbp-31h]
  unsigned __int8 *v64; // [rsp+48h] [rbp-29h]
  __int64 v65; // [rsp+50h] [rbp-21h]
  __m128i v66; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int8 *v67; // [rsp+68h] [rbp-9h]
  char *v68; // [rsp+70h] [rbp-1h]
  unsigned __int8 *v69; // [rsp+78h] [rbp+7h]
  LONG v70; // [rsp+D8h] [rbp+67h]
  LONG v71; // [rsp+E0h] [rbp+6Fh]
  __int64 v72; // [rsp+E0h] [rbp+6Fh]

  v4 = a2->rclInk.bottom - a2->rclInk.top;
  cy = a1->sizlBitmap.cy;
  v70 = v4;
  v62 = cy;
  if ( a1->sizlBitmap.cx == 1 && v4 == 1 && !a1->aj[0] )
  {
    a1->sizlBitmap = 0LL;
    return 16LL;
  }
  a1->sizlBitmap.cy = 5 * v4;
  ulClearTypeFilter_6x1(a1, a2, a3);
  cx = (unsigned int)a1->sizlBitmap.cx;
  v7 = v4;
  a1->sizlBitmap.cy = v4;
  aj = a1->aj;
  v71 = v4;
  if ( !v4 )
    return 16LL;
  v66.m128i_i64[0] = (__int64)aj;
  v9 = 0LL;
  v10 = (unsigned int)cx;
  v65 = cx;
  do
  {
    v66.m128i_i64[v9 + 1] = cx + v66.m128i_i64[v9];
    ++v9;
  }
  while ( v9 < 4 );
  switch ( cy )
  {
    case 1:
      v70 = ++v4;
      if ( (_DWORD)cx )
      {
        v51 = (char *)v66.m128i_i64[0];
        v52 = cx;
        do
        {
          *aj++ = interpolatePixel_6x5(0, 0, 0, 0, *v51++);
          --v52;
        }
        while ( v52 );
        v7 = v71;
      }
      v11 = (unsigned __int8 *)v66.m128i_i64[1];
      break;
    case 2:
      v70 = ++v4;
      if ( (_DWORD)cx )
      {
        v39 = _mm_loadu_si128(&v66);
        v40 = cx;
        do
        {
          v41 = (char *)_mm_srli_si128(v39, 8).m128i_u64[0];
          v42 = (unsigned __int8 *)v39.m128i_i64[0];
          v39 = _mm_add_epi64(v39, (__m128i)_xmm);
          *aj++ = interpolatePixel_6x5(0, 0, 0, *v42, *v41);
          --v40;
        }
        while ( v40 );
        v7 = v71;
        v66 = v39;
      }
      v11 = v67;
      break;
    case 3:
      v70 = ++v4;
      if ( (_DWORD)cx )
      {
        v53 = (char *)v67;
        v54 = (unsigned __int8 *)v66.m128i_i64[1];
        v55 = (unsigned __int8 *)v66.m128i_i64[0];
        do
        {
          v56 = *v54;
          v57 = *v55;
          ++v54;
          v61 = *v53;
          ++v55;
          ++v53;
          *aj++ = interpolatePixel_6x5(0, 0, v57, v56, v61);
          --cx;
        }
        while ( cx );
        v7 = v71;
        LODWORD(cx) = v10;
        v67 = (unsigned __int8 *)v53;
        v66.m128i_i64[1] = (__int64)v54;
      }
      v11 = (unsigned __int8 *)v68;
      break;
    case 4:
      v70 = ++v4;
      if ( (_DWORD)cx )
      {
        v32 = cx;
        do
        {
          v33 = *v68;
          v34 = *v67;
          v35 = *(_BYTE *)v66.m128i_i64[1];
          v36 = *(_BYTE *)v66.m128i_i64[0];
          for ( i = 0LL; i < 4; i += 2LL )
            *(__m128i *)((char *)&v66 + 8 * i) = _mm_add_epi64(
                                                   _mm_loadu_si128((__m128i *)((char *)&v66 + 8 * i)),
                                                   (__m128i)_xmm);
          *aj++ = interpolatePixel_6x5(0, v36, v35, v34, v33);
          --v32;
        }
        while ( v32 );
        v7 = v71;
      }
      v11 = v69;
      break;
    default:
      v11 = (unsigned __int8 *)v66.m128i_i64[0];
      if ( cy == 5 )
        v7 = v4 + 1;
      goto LABEL_11;
  }
  v66.m128i_i64[0] = (__int64)v11;
LABEL_11:
  if ( v7 != 1 )
  {
    v63 = (unsigned int)(v7 - 1);
    do
    {
      for ( j = 0LL; j < 4; ++j )
        v66.m128i_i64[j + 1] = v10 + v66.m128i_i64[j];
      v11 = v69;
      if ( (_DWORD)cx )
      {
        v13 = (unsigned __int8 *)v66.m128i_i64[0];
        v14 = v68;
        v72 = v10;
        v15 = off_1C0324100;
        do
        {
          v16 = *v13;
          v17 = *v11++;
          v18 = (unsigned __int8)*v14++;
          v19 = BYTE1(v15[v17]);
          v20 = BYTE1(v15[v18]);
          v21 = *(unsigned __int8 *)v66.m128i_i64[1];
          v64 = v13 + 1;
          v22 = *v67++;
          ++v66.m128i_i64[1];
          v23 = *((_DWORD *)&g_xTimes09 + v20) + *((_DWORD *)&g_xTimes04 + v19);
          v24 = BYTE2(v15[(unsigned int)v17]);
          v25 = 7
              * (7LL
               * *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                 + 4
                 * (unsigned int)(*((_DWORD *)&g_xTimes04 + LOBYTE(v15[(unsigned int)v17]))
                                + *((_DWORD *)&g_xTimes09 + LOBYTE(v15[v21]))
                                + *((_DWORD *)&g_xTimes09 + LOBYTE(v15[(unsigned int)v18]))
                                + *((_DWORD *)&g_xTimes04 + LOBYTE(v15[v16]))
                                + *((_DWORD *)&g_xTimes10 + LOBYTE(v15[v22]))))
               + *((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                 + 4
                 * (unsigned int)(*((_DWORD *)&g_xTimes04 + BYTE1(v15[v16]))
                                + *((_DWORD *)&g_xTimes09 + BYTE1(v15[v21]))
                                + *((_DWORD *)&g_xTimes10 + BYTE1(v15[v22]))
                                + v23)));
          v26 = BYTE2(v15[v22]);
          v13 = v64;
          *aj++ = gajStorage1[*((unsigned __int8 *)&g_xTimes6DividedBy216RoundUp
                              + 4
                              * (unsigned int)(*((_DWORD *)&g_xTimes04 + BYTE2(v15[v16]))
                                             + *((_DWORD *)&g_xTimes09 + BYTE2(v15[v21]))
                                             + *((_DWORD *)&g_xTimes10 + v26)
                                             + *((_DWORD *)&g_xTimes09 + BYTE2(v15[(unsigned int)v18]))
                                             + *((_DWORD *)&g_xTimes04 + v24)))
                            + v25];
          --v72;
        }
        while ( v72 );
        v10 = v65;
        LODWORD(cx) = v65;
        v69 = v11;
        v68 = v14;
      }
      v27 = v63-- == 1;
      v66.m128i_i64[0] = (__int64)v11;
    }
    while ( !v27 );
    v4 = v70;
  }
  v28 = &v11[v10];
  v29 = &v11[v10 + v10];
  v66.m128i_i64[1] = (__int64)&v11[v10];
  v30 = &v29[v10];
  v68 = (char *)&v29[v10];
  v67 = v29;
  switch ( v62 )
  {
    case 4:
      if ( (_DWORD)cx )
      {
        do
        {
          v38 = *v11++;
          *aj++ = interpolatePixel_6x5(v38, 0, 0, 0, 0);
          --v10;
        }
        while ( v10 );
      }
      break;
    case 3:
      if ( (_DWORD)cx )
      {
        v58 = _mm_loadu_si128(&v66);
        while ( 1 )
        {
          v58 = _mm_add_epi64(v58, (__m128i)_xmm);
          v59 = *v28;
          v60 = *v11;
          v66 = v58;
          *aj++ = interpolatePixel_6x5(v60, v59, 0, 0, 0);
          if ( !--v10 )
            break;
          v28 = (unsigned __int8 *)v66.m128i_i64[1];
          v11 = (unsigned __int8 *)v66.m128i_i64[0];
        }
      }
      break;
    case 2:
      if ( (_DWORD)cx )
      {
        v43 = v11 - aj;
        do
        {
          v44 = *v29;
          v45 = *v28;
          ++v29;
          ++v28;
          *aj = interpolatePixel_6x5(aj[v43], v45, v44, 0, 0);
          ++aj;
          --v10;
        }
        while ( v10 );
      }
      break;
    default:
      if ( v62 == 1 && (_DWORD)cx )
      {
        while ( 1 )
        {
          v46 = *v30;
          v47 = 0LL;
          v48 = *v11;
          v49 = *v29;
          v50 = *v28;
          do
          {
            *(__m128i *)((char *)&v66 + 8 * v47) = _mm_add_epi64(
                                                     _mm_load_si128((const __m128i *)&_xmm),
                                                     _mm_loadu_si128((__m128i *)((char *)&v66 + 8 * v47)));
            v47 += 2LL;
          }
          while ( v47 < 4 );
          *aj++ = interpolatePixel_6x5(v48, v50, v49, v46, 0);
          if ( !--v10 )
            break;
          v30 = (unsigned __int8 *)v68;
          v29 = v67;
          v28 = (unsigned __int8 *)v66.m128i_i64[1];
          v11 = (unsigned __int8 *)v66.m128i_i64[0];
        }
      }
      break;
  }
  return (((_DWORD)cx * v4 + 3) & 0xFFFFFFFC) + 16;
}
