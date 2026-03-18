/*
 * XREFs of vFillGLYPHDATA @ 0x1C02307B8
 * Callers:
 *     lQueryTTOutline @ 0x1C022D294 (lQueryTTOutline.c)
 *     lGGOBitmap @ 0x1C022E970 (lGGOBitmap.c)
 *     lGetGlyphBitmap @ 0x1C022EBD0 (lGetGlyphBitmap.c)
 *     vShiftOutlineInfo @ 0x1C0233A28 (vShiftOutlineInfo.c)
 * Callees:
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     bGetFastAdvanceWidth @ 0x1C022DB2C (bGetFastAdvanceWidth.c)
 *     b_fxA_and_fxAB_are_Ok @ 0x1C022E670 (b_fxA_and_fxAB_are_Ok.c)
 *     vGetNotionalGlyphMetrics @ 0x1C0231434 (vGetNotionalGlyphMetrics.c)
 *     vGetVertNotionalMetrics @ 0x1C02315A8 (vGetVertNotionalMetrics.c)
 *     vLTimesVtfl @ 0x1C023A4B4 (vLTimesVtfl.c)
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
  int v17; // ecx
  int v18; // edx
  int v19; // r11d
  int v20; // r9d
  int v21; // eax
  int v22; // r8d
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  int v27; // r12d
  int v28; // eax
  int v29; // ecx
  bool v30; // zf
  unsigned int *v31; // r15
  unsigned int v32; // eax
  int FastAdvanceWidth; // eax
  unsigned int v34; // ecx
  unsigned int v35; // eax
  int v36; // edx
  int v37; // ecx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  __int64 result; // rax
  int v42; // ecx
  unsigned int v43; // r12d
  int v44; // ecx
  int v45; // r8d
  int v46; // edx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  unsigned int v50; // ecx
  bool v51; // cf
  int v52; // eax
  _DWORD *v53; // r15
  __m128i v54; // xmm0
  int v55; // eax
  int v56; // ecx
  char v57; // r8
  char v58; // r8
  char v59; // r8
  int v60; // eax
  int v61; // eax
  int v62; // r11d
  char v63; // r8
  char v64; // r8
  int v65; // eax
  int v66; // eax
  unsigned int v67; // r14d
  int v68; // ecx
  __int16 v69; // [rsp+30h] [rbp-18h] BYREF
  __int16 v70; // [rsp+32h] [rbp-16h]
  unsigned __int16 v71; // [rsp+34h] [rbp-14h]
  __int16 v72; // [rsp+36h] [rbp-12h]
  __int16 v73; // [rsp+38h] [rbp-10h]
  __int16 v74; // [rsp+3Ah] [rbp-Eh]
  int v75; // [rsp+90h] [rbp+48h]
  __int64 v77; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v78; // [rsp+A8h] [rbp+60h] BYREF

  v7 = a3;
  LODWORD(a3) = 0;
  v9 = a2;
  if ( !*(_DWORD *)(v7 + 308) || (v10 = 1, (*(_DWORD *)(v7 + 304) & 2) == 0) )
    v10 = 0;
  v11 = *(__int16 *)(a4 + 104) - *(__int16 *)(a4 + 100);
  v12 = (__int64)a5;
  v13 = *(__int16 *)(a4 + 102) - *(__int16 *)(a4 + 98);
  LODWORD(v77) = v10;
  v75 = v13;
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
LABEL_36:
    v28 = *(_DWORD *)(v7 + 200);
    *(_DWORD *)(v12 + 32) = v28;
    v29 = *(_DWORD *)(v7 + 204);
    *(_DWORD *)(v12 + 36) = v29;
    *(_DWORD *)(v12 + 40) = v28 + 1;
    *(_DWORD *)(v12 + 44) = v29 + 1;
    if ( v15 )
      *((_QWORD *)v15 + 2) = 0LL;
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( !v13 || v14 )
    {
LABEL_35:
      v9 = a2;
      goto LABEL_36;
    }
    v16 = *(__int16 *)(a4 + 100);
    v17 = -*(__int16 *)(a4 + 98);
    *(_DWORD *)(v12 + 44) = v17;
    v18 = -*(__int16 *)(a4 + 102);
    *(_DWORD *)(v12 + 36) = v18;
    v19 = v16 + v11;
    if ( !v15 )
      goto LABEL_43;
    v20 = *(_DWORD *)(v7 + 160) - v18;
    v21 = *(_DWORD *)(v7 + 164);
    if ( v18 >= *(_DWORD *)(v7 + 160) )
      v20 = 0;
    v22 = v17 - v21;
    if ( v17 <= v21 )
      v22 = 0;
    if ( !v20 && !v22 )
      break;
    v13 -= v20 + v22;
    *(_DWORD *)(v12 + 44) = v17 - v22;
    v75 = v13;
    v23 = 10;
    *(_DWORD *)(v12 + 36) = v20 + v18;
    if ( *(int *)(v7 + 124) > 10 )
      v23 = *(_DWORD *)(v7 + 124);
    if ( v20 <= v23 && v22 <= v23 )
      break;
LABEL_34:
    LODWORD(a3) = 0;
    v14 = 1;
    if ( !v11 )
      goto LABEL_35;
  }
  v24 = *(_DWORD *)(v7 + 152) - v16;
  if ( v16 >= *(_DWORD *)(v7 + 152) )
    v24 = 0;
  v25 = *(_DWORD *)(v7 + 156);
  v26 = v19 - v25;
  if ( v19 <= v25 )
    v26 = 0;
  if ( !v24 && !v26 )
    goto LABEL_42;
  v16 += v24;
  v11 -= v24 + v26;
  v19 -= v26;
  v27 = 10;
  if ( *(_DWORD *)(v7 + 168) >> 2 > 0xAu )
    v27 = *(_DWORD *)(v7 + 168) >> 2;
  if ( v24 > v27 || v26 > v27 )
  {
    v13 = v75;
    goto LABEL_34;
  }
  v13 = v75;
LABEL_42:
  v15[1] = v22;
  LODWORD(a3) = 0;
  *v15 = v20;
  v15[2] = v24;
  v15[3] = v26;
  v15[4] = v11;
  v15[5] = v13;
LABEL_43:
  v9 = a2;
  *(_DWORD *)(v12 + 32) = v16;
  *(_DWORD *)(v12 + 40) = v19;
LABEL_38:
  if ( (*(_DWORD *)(v7 + 116) & 1) != 0 )
  {
    v30 = v10 == 0;
    v31 = (unsigned int *)(v12 + 12);
    if ( !v30 )
    {
      v32 = 16 * (((*(int *)(a4 + 208) >> 15) + 1) >> 1);
      goto LABEL_50;
    }
    FastAdvanceWidth = bGetFastAdvanceWidth(v7, v9, (unsigned int *)(v12 + 12));
    LODWORD(a3) = 0;
    if ( !FastAdvanceWidth )
    {
      v32 = (((*(int *)(a4 + 72) >> 12) & 0xFFFFFFF8) + 8) & 0xFFFFFFF0;
      goto LABEL_50;
    }
    v34 = *v31;
    if ( *v31 )
    {
      if ( *(int *)(v7 + 80) >= 0 )
      {
        v32 = v34 + ((*(_DWORD *)(v7 + 40) >> 9) & 0x10);
LABEL_50:
        *v31 = v32;
      }
      else
      {
        *v31 = v34 - ((*(_DWORD *)(v7 + 40) >> 9) & 0x10);
      }
    }
    v35 = *v31;
    *(_DWORD *)(v12 + 52) = *v31;
    *(_DWORD *)(v12 + 48) = 0;
    if ( *(int *)(v7 + 80) < 0 )
      *v31 = -v35;
    *(_QWORD *)(v12 + 56) = 0LL;
    if ( (_DWORD)v77 )
    {
      v36 = *(_DWORD *)(v12 + 40) - *(_DWORD *)(v12 + 32);
      v37 = ((*(int *)(a4 + 212) >> 15) + 1) >> 1;
      if ( *(int *)(v7 + 80) >= 0 )
      {
        *(_DWORD *)(v12 + 32) = v37;
        *(_DWORD *)(v12 + 40) = v37 + v36;
      }
      else
      {
        v37 = -(v36 + v37);
        *(_DWORD *)(v12 + 40) = -v37;
        *(_DWORD *)(v12 + 32) = -v37 - v36;
      }
      v38 = 16 * v37;
      *(_DWORD *)(v12 + 20) = v38 + 16 * v36;
LABEL_60:
      *(_DWORD *)(v12 + 16) = v38;
    }
    else
    {
      v39 = 16 * *(_DWORD *)(v12 + 32);
      v40 = 16 * *(_DWORD *)(v12 + 40);
      *(_DWORD *)(v12 + 16) = v39;
      *(_DWORD *)(v12 + 20) = v40;
      if ( *(int *)(v7 + 80) < 0 )
      {
        v38 = -v40;
        *(_DWORD *)(v12 + 20) = -v39;
        goto LABEL_60;
      }
    }
    result = (unsigned int)(-16 * *(_DWORD *)(v12 + 36));
    v42 = -16 * *(_DWORD *)(v12 + 44);
    *(_DWORD *)(v12 + 24) = result;
    *(_DWORD *)(v12 + 28) = v42;
    if ( *(int *)(v7 + 96) < 0 )
    {
      *(_DWORD *)(v12 + 24) = -v42;
      goto LABEL_63;
    }
  }
  else
  {
    LODWORD(v77) = *(_DWORD *)(v7 + 40) & 0x2000;
    vGetNotionalGlyphMetrics(v7, v9, &v69);
    v43 = v74;
    LODWORD(a5) = 0;
    bFToL((float)v74 * *(float *)(v7 + 224), (int *)&a5, 0);
    v44 = (int)a5;
    *(_DWORD *)(v12 + 12) = (_DWORD)a5;
    if ( (*(_DWORD *)(v7 + 116) & 2) != 0 )
    {
      if ( v10 )
      {
        v45 = *(_DWORD *)(v12 + 44) - *(_DWORD *)(v12 + 36);
        v46 = ((*(int *)(a4 + 204) >> 15) + 1) >> 1;
        v47 = ((*(int *)(a4 + 216) >> 15) + 1) >> 1;
        if ( *(int *)(v7 + 84) >= 0 )
        {
          v49 = v45 - v47;
          *(_DWORD *)(v12 + 44) = v49;
          v48 = v49 - v45;
          v46 = -v46;
        }
        else
        {
          v48 = -v47;
          *(_DWORD *)(v12 + 44) = v45 + v48;
        }
        LODWORD(a3) = 0;
        *(_DWORD *)(v12 + 36) = v48;
        *(_QWORD *)(v12 + 48) = 0LL;
        *(_DWORD *)(v12 + 56) = 0;
        *(_DWORD *)(v12 + 12) = 16 * v46;
      }
      else
      {
        *(_QWORD *)(v12 + 48) = a3;
        *(_DWORD *)(v12 + 56) = a3;
        v50 = ((v44 & 0xFFFFFFF8) + 8) & 0xFFFFFFF0;
        *(_DWORD *)(v12 + 12) = v50;
        if ( v50 )
        {
          v51 = (_DWORD)v77 != 0;
          LODWORD(v77) = -(int)v77;
          *(_DWORD *)(v12 + 12) = v50 + (v51 ? a3 + 16 : 0);
        }
      }
      if ( *(float *)(v7 + 220) >= 0.0 )
      {
        *(_DWORD *)(v12 + 16) = 16 * *(_DWORD *)(v12 + 36);
        *(_DWORD *)(v12 + 20) = 16 * *(_DWORD *)(v12 + 44);
        v52 = *(_DWORD *)(v12 + 12);
      }
      else
      {
        *(_DWORD *)(v12 + 16) = -16 * *(_DWORD *)(v12 + 44);
        *(_DWORD *)(v12 + 20) = -16 * *(_DWORD *)(v12 + 36);
        v52 = -*(_DWORD *)(v12 + 12);
      }
      *(_DWORD *)(v12 + 60) = v52;
      if ( *(float *)(v7 + 256) >= 0.0 )
      {
        *(_DWORD *)(v12 + 24) = 16 * *(_DWORD *)(v12 + 40);
        result = (unsigned int)(16 * *(_DWORD *)(v12 + 32));
      }
      else
      {
        *(_DWORD *)(v12 + 24) = -16 * *(_DWORD *)(v12 + 32);
        LODWORD(result) = 16 * *(_DWORD *)(v12 + 40);
LABEL_63:
        result = (unsigned int)-(int)result;
      }
      *(_DWORD *)(v12 + 28) = result;
    }
    else
    {
      if ( v10 )
      {
        vGetVertNotionalMetrics(v7, a2, v71, (unsigned int)&a5, (__int64)&v78);
        v53 = (_DWORD *)(v12 + 48);
        vLTimesVtfl((unsigned int)a5, v7 + 208, v12 + 48);
        LODWORD(v77) = 0;
        bFToL((float)(int)a5 * *(float *)(v7 + 224), (int *)&v77, 0);
        v54 = _mm_cvtsi32_si128(v78);
        *(_DWORD *)(v12 + 12) = v77;
        v55 = (*(int *)(a4 + 80) >> 15) + 1;
        LODWORD(a5) = 0;
        LODWORD(v77) = v55 >> 1;
        HIDWORD(v77) = -(((*(int *)(a4 + 84) >> 15) + 1) >> 1);
        bFToL(_mm_cvtepi32_ps(v54).m128_f32[0] * *(float *)(v7 + 224), (int *)&a5, 0);
        v56 = v72;
        *(_DWORD *)(v12 + 16) = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)(int)(v78 + v56 - (__int16)v71) * *(float *)(v7 + 224), (int *)&a5, v57);
        *(_DWORD *)(v12 + 20) = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)v70 * *(float *)(v7 + 264), (int *)&a5, v58);
        v60 = -(int)a5;
        LODWORD(a5) = 0;
        *(_DWORD *)(v12 + 24) = v60;
        v61 = v69;
      }
      else
      {
        v53 = (_DWORD *)(v12 + 48);
        vLTimesVtfl(v43, v7 + 208, v12 + 48);
        v62 = *(_DWORD *)(a4 + 80);
        HIDWORD(v77) = -(((*(int *)(a4 + 84) >> 15) + 1) >> 1);
        LODWORD(v77) = ((v62 >> 15) + 1) >> 1;
        LODWORD(a5) = 0;
        bFToL((float)v73 * *(float *)(v7 + 224), (int *)&a5, 0);
        *(_DWORD *)(v12 + 16) = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)v70 * *(float *)(v7 + 224), (int *)&a5, v63);
        *(_DWORD *)(v12 + 20) = (_DWORD)a5;
        LODWORD(a5) = 0;
        bFToL((float)(__int16)v71 * *(float *)(v7 + 264), (int *)&a5, v64);
        v65 = -(int)a5;
        LODWORD(a5) = 0;
        *(_DWORD *)(v12 + 24) = v65;
        v61 = v72;
      }
      bFToL((float)v61 * *(float *)(v7 + 264), (int *)&a5, v59);
      LODWORD(a3) = 0;
      *(_DWORD *)(v12 + 28) = -(int)a5;
      if ( (*(_DWORD *)(v7 + 40) & 0x2000) != 0 )
      {
        if ( *(_DWORD *)(v12 + 52) || *(_DWORD *)(v12 + 60) )
        {
          *v53 += *(_DWORD *)(v7 + 232);
          v53[1] += *(_DWORD *)(v7 + 236) + (*v53 < *(_DWORD *)(v7 + 232));
          v53[2] += *(_DWORD *)(v7 + 240);
          v53[3] += *(_DWORD *)(v7 + 244) + (v53[2] < *(_DWORD *)(v7 + 240));
          *(_DWORD *)(v12 + 12) += 16;
        }
        *(_DWORD *)(v12 + 20) += 16 * *(unsigned __int16 *)(v7 + 400);
      }
      v66 = *(_DWORD *)(v12 + 20);
      *(_DWORD *)(v12 + 16) &= 0xFFFFFFF0;
      *(_DWORD *)(v12 + 28) &= 0xFFFFFFF0;
      *(_DWORD *)(v12 + 20) = (v66 + 15) & 0xFFFFFFF0;
      result = (*(_DWORD *)(v12 + 24) + 15) & 0xFFFFFFF0;
      *(_DWORD *)(v12 + 24) = result;
      if ( v15 && v15[4] && v15[5] )
      {
        v67 = 0;
        while ( 1 )
        {
          result = b_fxA_and_fxAB_are_Ok(v7, v12, (int *)&v77, v15[4], v15[5]);
          LODWORD(a3) = 0;
          if ( (_DWORD)result )
            break;
          result = v67++;
          if ( (int)result >= 2000 )
            break;
          *(_DWORD *)(v12 + 16) -= 16;
          *(_DWORD *)(v12 + 20) += 16;
          v68 = *(_DWORD *)(v12 + 24) + 16;
          if ( v68 < 16 * *(_DWORD *)(v7 + 144) )
            *(_DWORD *)(v12 + 24) = v68;
          if ( *(_DWORD *)(v12 + 28) - 16 > -16 * *(_DWORD *)(v7 + 148) )
            *(_DWORD *)(v12 + 24) -= 16;
        }
      }
      if ( a7 )
      {
        result = v77;
        *a7 = v77;
      }
    }
  }
  if ( !v11 || v75 == (_DWORD)a3 || v15 && (v15[4] == (_DWORD)a3 || v15[5] == (_DWORD)a3) )
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
