/*
 * XREFs of vFillGLYPHDATA @ 0x1C022F244
 * Callers:
 *     lQueryTTOutline @ 0x1C022BD84 (lQueryTTOutline.c)
 *     lGGOBitmap @ 0x1C022D44C (lGGOBitmap.c)
 *     lGetGlyphBitmap @ 0x1C022D6AC (lGetGlyphBitmap.c)
 *     vShiftOutlineInfo @ 0x1C02324C8 (vShiftOutlineInfo.c)
 * Callees:
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     bGetFastAdvanceWidth @ 0x1C022C61C (bGetFastAdvanceWidth.c)
 *     b_fxA_and_fxAB_are_Ok @ 0x1C022D14C (b_fxA_and_fxAB_are_Ok.c)
 *     vGetNotionalGlyphMetrics @ 0x1C022FEC8 (vGetNotionalGlyphMetrics.c)
 *     vGetVertNotionalMetrics @ 0x1C023003C (vGetVertNotionalMetrics.c)
 *     vLTimesVtfl @ 0x1C0238EE8 (vLTimesVtfl.c)
 */

__int64 __fastcall vFillGLYPHDATA(int a1, unsigned int a2, __int64 a3, __int64 a4, _QWORD *a5, int *a6, __int64 *a7)
{
  __int64 v7; // rdi
  unsigned int v9; // r9d
  int v10; // r15d
  int v11; // r13d
  __int64 v12; // rbx
  int v13; // r12d
  int v14; // eax
  int *v15; // rsi
  int v16; // r10d
  int v17; // eax
  int v18; // edx
  int v19; // r11d
  int v20; // ecx
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  int v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // r8d
  int v30; // eax
  int v31; // r12d
  int v32; // eax
  int v33; // ecx
  bool v34; // zf
  unsigned int *v35; // r15
  unsigned int v36; // eax
  int FastAdvanceWidth; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  int v40; // edx
  int v41; // ecx
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  __int64 result; // rax
  int v46; // ecx
  unsigned int v47; // r12d
  int v48; // ecx
  int v49; // r8d
  int v50; // edx
  int v51; // ecx
  int v52; // ecx
  int v53; // ecx
  unsigned int v54; // ecx
  bool v55; // cf
  int v56; // eax
  _DWORD *v57; // r15
  __m128i v58; // xmm0
  int v59; // eax
  int v60; // ecx
  char v61; // r8
  char v62; // r8
  char v63; // r8
  int v64; // eax
  int v65; // eax
  int v66; // r11d
  char v67; // r8
  char v68; // r8
  int v69; // eax
  int v70; // eax
  unsigned int v71; // r14d
  int v72; // ecx
  __int16 v73; // [rsp+30h] [rbp-18h] BYREF
  __int16 v74; // [rsp+32h] [rbp-16h]
  unsigned __int16 v75; // [rsp+34h] [rbp-14h]
  __int16 v76; // [rsp+36h] [rbp-12h]
  __int16 v77; // [rsp+38h] [rbp-10h]
  __int16 v78; // [rsp+3Ah] [rbp-Eh]
  int v79; // [rsp+90h] [rbp+48h]
  __int64 v81; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v82; // [rsp+A8h] [rbp+60h] BYREF

  v7 = a3;
  LODWORD(a3) = 0;
  v9 = a2;
  if ( !*(_DWORD *)(v7 + 308) || (v10 = 1, (*(_DWORD *)(v7 + 304) & 2) == 0) )
    v10 = 0;
  v11 = *(__int16 *)(a4 + 104) - *(__int16 *)(a4 + 100);
  v12 = (__int64)a5;
  v13 = *(__int16 *)(a4 + 102) - *(__int16 *)(a4 + 98);
  LODWORD(v81) = v10;
  v79 = v13;
  *a5 = 0LL;
  *(_DWORD *)(v12 + 8) = a1;
  if ( *(__int16 *)(a4 + 100) > *(_DWORD *)(v7 + 156)
    || *(__int16 *)(a4 + 104) < *(_DWORD *)(v7 + 152)
    || -*(__int16 *)(a4 + 102) > *(_DWORD *)(v7 + 164)
    || (v14 = 0, -*(__int16 *)(a4 + 98) < *(_DWORD *)(v7 + 160)) )
  {
    v14 = 1;
  }
  v15 = a6;
  if ( !v11 )
  {
LABEL_38:
    v32 = *(_DWORD *)(v7 + 200);
    *(_DWORD *)(v12 + 32) = v32;
    v33 = *(_DWORD *)(v7 + 204);
    *(_DWORD *)(v12 + 36) = v33;
    *(_DWORD *)(v12 + 40) = v32 + 1;
    *(_DWORD *)(v12 + 44) = v33 + 1;
    if ( v15 )
      *((_QWORD *)v15 + 2) = 0LL;
    goto LABEL_40;
  }
  while ( 1 )
  {
    if ( !v13 || v14 )
    {
LABEL_37:
      v9 = a2;
      goto LABEL_38;
    }
    v16 = *(__int16 *)(a4 + 100);
    v17 = -*(__int16 *)(a4 + 98);
    *(_DWORD *)(v12 + 44) = v17;
    v18 = -*(__int16 *)(a4 + 102);
    *(_DWORD *)(v12 + 36) = v18;
    v19 = v16 + v11;
    if ( !v15 )
      goto LABEL_45;
    v20 = *(_DWORD *)(v7 + 160);
    v21 = v18 >= v20 ? 0 : v20 - v18;
    v22 = v17;
    v23 = *(_DWORD *)(v7 + 164);
    v24 = v22 <= v23 ? 0 : v22 - v23;
    if ( !v21 && !v24 )
      break;
    v13 -= v24 + v21;
    *(_DWORD *)(v12 + 44) = v22 - v24;
    v25 = v18 + v21;
    v79 = v13;
    v26 = 10;
    *(_DWORD *)(v12 + 36) = v25;
    if ( *(int *)(v7 + 124) > 10 )
      v26 = *(_DWORD *)(v7 + 124);
    if ( v21 <= v26 && v24 <= v26 )
      break;
LABEL_36:
    LODWORD(a3) = 0;
    v14 = 1;
    if ( !v11 )
      goto LABEL_37;
  }
  v27 = *(_DWORD *)(v7 + 152);
  v28 = 0;
  v29 = 0;
  if ( v16 < v27 )
    v29 = v27 - v16;
  v30 = *(_DWORD *)(v7 + 156);
  if ( v19 > v30 )
    v28 = v19 - v30;
  if ( !v29 && !v28 )
    goto LABEL_44;
  v16 += v29;
  v11 -= v28 + v29;
  v19 -= v28;
  v31 = 10;
  if ( *(_DWORD *)(v7 + 168) >> 2 > 0xAu )
    v31 = *(_DWORD *)(v7 + 168) >> 2;
  if ( v29 > v31 || v28 > v31 )
  {
    v13 = v79;
    goto LABEL_36;
  }
  v13 = v79;
LABEL_44:
  v15[2] = v29;
  LODWORD(a3) = 0;
  *v15 = v21;
  v15[1] = v24;
  v15[3] = v28;
  v15[4] = v11;
  v15[5] = v13;
LABEL_45:
  v9 = a2;
  *(_DWORD *)(v12 + 32) = v16;
  *(_DWORD *)(v12 + 40) = v19;
LABEL_40:
  if ( (*(_DWORD *)(v7 + 116) & 1) != 0 )
  {
    v34 = v10 == 0;
    v35 = (unsigned int *)(v12 + 12);
    if ( !v34 )
    {
      v36 = 16 * (((*(int *)(a4 + 208) >> 15) + 1) >> 1);
      goto LABEL_52;
    }
    FastAdvanceWidth = bGetFastAdvanceWidth(v7, v9, (unsigned int *)(v12 + 12));
    LODWORD(a3) = 0;
    if ( !FastAdvanceWidth )
    {
      v36 = (((*(int *)(a4 + 72) >> 12) & 0xFFFFFFF8) + 8) & 0xFFFFFFF0;
      goto LABEL_52;
    }
    v38 = *v35;
    if ( *v35 )
    {
      if ( *(int *)(v7 + 80) >= 0 )
      {
        v36 = v38 + ((*(_DWORD *)(v7 + 40) >> 9) & 0x10);
LABEL_52:
        *v35 = v36;
      }
      else
      {
        *v35 = v38 - ((*(_DWORD *)(v7 + 40) >> 9) & 0x10);
      }
    }
    v39 = *v35;
    *(_DWORD *)(v12 + 52) = *v35;
    *(_DWORD *)(v12 + 48) = 0;
    if ( *(int *)(v7 + 80) < 0 )
      *v35 = -v39;
    *(_QWORD *)(v12 + 56) = 0LL;
    if ( (_DWORD)v81 )
    {
      v40 = *(_DWORD *)(v12 + 40) - *(_DWORD *)(v12 + 32);
      v41 = ((*(int *)(a4 + 212) >> 15) + 1) >> 1;
      if ( *(int *)(v7 + 80) >= 0 )
      {
        *(_DWORD *)(v12 + 32) = v41;
        *(_DWORD *)(v12 + 40) = v41 + v40;
      }
      else
      {
        v41 = -(v40 + v41);
        *(_DWORD *)(v12 + 40) = -v41;
        *(_DWORD *)(v12 + 32) = -v41 - v40;
      }
      v42 = 16 * v41;
      *(_DWORD *)(v12 + 20) = v42 + 16 * v40;
LABEL_62:
      *(_DWORD *)(v12 + 16) = v42;
    }
    else
    {
      v43 = 16 * *(_DWORD *)(v12 + 32);
      v44 = 16 * *(_DWORD *)(v12 + 40);
      *(_DWORD *)(v12 + 16) = v43;
      *(_DWORD *)(v12 + 20) = v44;
      if ( *(int *)(v7 + 80) < 0 )
      {
        v42 = -v44;
        *(_DWORD *)(v12 + 20) = -v43;
        goto LABEL_62;
      }
    }
    result = (unsigned int)(-16 * *(_DWORD *)(v12 + 36));
    v46 = -16 * *(_DWORD *)(v12 + 44);
    *(_DWORD *)(v12 + 24) = result;
    *(_DWORD *)(v12 + 28) = v46;
    if ( *(int *)(v7 + 96) < 0 )
    {
      *(_DWORD *)(v12 + 24) = -v46;
      goto LABEL_65;
    }
  }
  else
  {
    LODWORD(v81) = *(_DWORD *)(v7 + 40) & 0x2000;
    vGetNotionalGlyphMetrics(v7, v9, &v73);
    v47 = v78;
    LODWORD(a5) = 0;
    bFToL((float)v78 * *(float *)(v7 + 224), (int *)&a5, 0);
    v48 = (int)a5;
    *(_DWORD *)(v12 + 12) = (_DWORD)a5;
    if ( (*(_DWORD *)(v7 + 116) & 2) != 0 )
    {
      if ( v10 )
      {
        v49 = *(_DWORD *)(v12 + 44) - *(_DWORD *)(v12 + 36);
        v50 = ((*(int *)(a4 + 204) >> 15) + 1) >> 1;
        v51 = ((*(int *)(a4 + 216) >> 15) + 1) >> 1;
        if ( *(int *)(v7 + 84) >= 0 )
        {
          v53 = v49 - v51;
          *(_DWORD *)(v12 + 44) = v53;
          v52 = v53 - v49;
          v50 = -v50;
        }
        else
        {
          v52 = -v51;
          *(_DWORD *)(v12 + 44) = v49 + v52;
        }
        LODWORD(a3) = 0;
        *(_DWORD *)(v12 + 36) = v52;
        *(_QWORD *)(v12 + 48) = 0LL;
        *(_DWORD *)(v12 + 56) = 0;
        *(_DWORD *)(v12 + 12) = 16 * v50;
      }
      else
      {
        *(_QWORD *)(v12 + 48) = a3;
        *(_DWORD *)(v12 + 56) = a3;
        v54 = ((v48 & 0xFFFFFFF8) + 8) & 0xFFFFFFF0;
        *(_DWORD *)(v12 + 12) = v54;
        if ( v54 )
        {
          v55 = (_DWORD)v81 != 0;
          LODWORD(v81) = -(int)v81;
          *(_DWORD *)(v12 + 12) = v54 + (v55 ? a3 + 16 : 0);
        }
      }
      if ( *(float *)(v7 + 220) >= 0.0 )
      {
        *(_DWORD *)(v12 + 16) = 16 * *(_DWORD *)(v12 + 36);
        *(_DWORD *)(v12 + 20) = 16 * *(_DWORD *)(v12 + 44);
        v56 = *(_DWORD *)(v12 + 12);
      }
      else
      {
        *(_DWORD *)(v12 + 16) = -16 * *(_DWORD *)(v12 + 44);
        *(_DWORD *)(v12 + 20) = -16 * *(_DWORD *)(v12 + 36);
        v56 = -*(_DWORD *)(v12 + 12);
      }
      *(_DWORD *)(v12 + 60) = v56;
      if ( *(float *)(v7 + 256) >= 0.0 )
      {
        *(_DWORD *)(v12 + 24) = 16 * *(_DWORD *)(v12 + 40);
        result = (unsigned int)(16 * *(_DWORD *)(v12 + 32));
      }
      else
      {
        *(_DWORD *)(v12 + 24) = -16 * *(_DWORD *)(v12 + 32);
        LODWORD(result) = 16 * *(_DWORD *)(v12 + 40);
LABEL_65:
        result = (unsigned int)-(int)result;
      }
      *(_DWORD *)(v12 + 28) = result;
    }
    else
    {
      if ( v10 )
      {
        vGetVertNotionalMetrics(v7, a2, v75, (unsigned int)&a5, (__int64)&v82);
        v57 = (_DWORD *)(v12 + 48);
        vLTimesVtfl((unsigned int)a5, v7 + 208, v12 + 48);
        LODWORD(v81) = 0;
        bFToL((float)(int)a5 * *(float *)(v7 + 224), (int *)&v81, 0);
        v58 = _mm_cvtsi32_si128(v82);
        *(_DWORD *)(v12 + 12) = v81;
        v59 = (*(int *)(a4 + 80) >> 15) + 1;
        LODWORD(a5) = 0;
        LODWORD(v81) = v59 >> 1;
        HIDWORD(v81) = -(((*(int *)(a4 + 84) >> 15) + 1) >> 1);
        bFToL(_mm_cvtepi32_ps(v58).m128_f32[0] * *(float *)(v7 + 224), (int *)&a5, 0);
        v60 = v76;
        *(_DWORD *)(v12 + 16) = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)(int)(v82 + v60 - (__int16)v75) * *(float *)(v7 + 224), (int *)&a5, v61);
        *(_DWORD *)(v12 + 20) = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)v74 * *(float *)(v7 + 264), (int *)&a5, v62);
        v64 = -(int)a5;
        LODWORD(a5) = 0;
        *(_DWORD *)(v12 + 24) = v64;
        v65 = v73;
      }
      else
      {
        v57 = (_DWORD *)(v12 + 48);
        vLTimesVtfl(v47, v7 + 208, v12 + 48);
        v66 = *(_DWORD *)(a4 + 80);
        HIDWORD(v81) = -(((*(int *)(a4 + 84) >> 15) + 1) >> 1);
        LODWORD(v81) = ((v66 >> 15) + 1) >> 1;
        LODWORD(a5) = 0;
        bFToL((float)v77 * *(float *)(v7 + 224), (int *)&a5, 0);
        *(_DWORD *)(v12 + 16) = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)v74 * *(float *)(v7 + 224), (int *)&a5, v67);
        *(_DWORD *)(v12 + 20) = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)(__int16)v75 * *(float *)(v7 + 264), (int *)&a5, v68);
        v69 = -(int)a5;
        LODWORD(a5) = 0;
        *(_DWORD *)(v12 + 24) = v69;
        v65 = v76;
      }
      bFToL((float)v65 * *(float *)(v7 + 264), (int *)&a5, v63);
      LODWORD(a3) = 0;
      *(_DWORD *)(v12 + 28) = -(int)a5;
      if ( (*(_DWORD *)(v7 + 40) & 0x2000) != 0 )
      {
        if ( *(_DWORD *)(v12 + 52) || *(_DWORD *)(v12 + 60) )
        {
          *v57 += *(_DWORD *)(v7 + 232);
          v57[1] += *(_DWORD *)(v7 + 236) + (*v57 < *(_DWORD *)(v7 + 232));
          v57[2] += *(_DWORD *)(v7 + 240);
          v57[3] += *(_DWORD *)(v7 + 244) + (v57[2] < *(_DWORD *)(v7 + 240));
          *(_DWORD *)(v12 + 12) += 16;
        }
        *(_DWORD *)(v12 + 20) += 16 * *(unsigned __int16 *)(v7 + 400);
      }
      v70 = *(_DWORD *)(v12 + 20);
      *(_DWORD *)(v12 + 16) &= 0xFFFFFFF0;
      *(_DWORD *)(v12 + 28) &= 0xFFFFFFF0;
      *(_DWORD *)(v12 + 20) = (v70 + 15) & 0xFFFFFFF0;
      result = (*(_DWORD *)(v12 + 24) + 15) & 0xFFFFFFF0;
      *(_DWORD *)(v12 + 24) = result;
      if ( v15 && v15[4] && v15[5] )
      {
        v71 = 0;
        while ( 1 )
        {
          result = b_fxA_and_fxAB_are_Ok(v7, v12, (int *)&v81, v15[4], v15[5]);
          LODWORD(a3) = 0;
          if ( (_DWORD)result )
            break;
          result = v71++;
          if ( (int)result >= 2000 )
            break;
          *(_DWORD *)(v12 + 16) -= 16;
          *(_DWORD *)(v12 + 20) += 16;
          v72 = *(_DWORD *)(v12 + 24) + 16;
          if ( v72 < 16 * *(_DWORD *)(v7 + 144) )
            *(_DWORD *)(v12 + 24) = v72;
          if ( *(_DWORD *)(v12 + 28) - 16 > -16 * *(_DWORD *)(v7 + 148) )
            *(_DWORD *)(v12 + 24) -= 16;
        }
      }
      if ( a7 )
      {
        result = v81;
        *a7 = v81;
      }
    }
  }
  if ( !v11 || v79 == (_DWORD)a3 || v15 && (v15[4] == (_DWORD)a3 || v15[5] == (_DWORD)a3) )
  {
    result = 1LL;
    *(_DWORD *)(v12 + 16) = a3;
    *(_DWORD *)(v12 + 40) = 1;
    *(_DWORD *)(v12 + 44) = 1;
    *(_QWORD *)(v12 + 20) = 16LL;
    *(_QWORD *)(v12 + 28) = 16LL;
    *(_DWORD *)(v12 + 36) = a3;
  }
  return result;
}
