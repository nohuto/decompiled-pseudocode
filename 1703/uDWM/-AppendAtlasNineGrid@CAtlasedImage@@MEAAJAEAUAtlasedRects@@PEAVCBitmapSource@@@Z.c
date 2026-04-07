/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18002B790
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001AEB0 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x18002BE80 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002BFA0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlasNineGrid(
        struct tagRECT *this,
        struct AtlasedRects *a2,
        struct tagRECT *a3)
{
  LONG left; // esi
  int v5; // r9d
  LONG top; // edi
  int v8; // ecx
  struct tagRECT v9; // xmm0
  LONG v10; // r11d
  int v11; // r10d
  LONG right; // eax
  LONG v13; // edx
  int v14; // ebx
  int v15; // edx
  int v16; // eax
  LONG v17; // r10d
  LONG v18; // ecx
  int v19; // eax
  LONG bottom; // r9d
  int v21; // r10d
  int v22; // r9d
  int v23; // edi
  LONG v24; // ecx
  int v25; // r8d
  LONG v26; // eax
  LONG v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // r10
  int v33; // r13d
  __int64 v34; // r11
  int v35; // r12d
  int v36; // r9d
  int v37; // r8d
  int v38; // edx
  bool v39; // zf
  bool v40; // zf
  float v41; // xmm3_4
  float v42; // xmm4_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  __m128 v45; // xmm0
  float v46; // xmm7_4
  float v47; // xmm5_4
  __m128 v48; // xmm0
  __m128 v49; // xmm0
  int v50; // esi
  __m128 v51; // xmm0
  char v52; // di
  float v53; // xmm9_4
  float v54; // xmm3_4
  float v55; // xmm10_4
  float v56; // xmm8_4
  __int64 v57; // rax
  unsigned int v58; // ecx
  __int64 v59; // rax
  _QWORD *v60; // rcx
  unsigned int v61; // edx
  unsigned int v62; // eax
  LONG *p_top; // r9
  unsigned int v64; // r8d
  int v66; // r8d
  int v67; // edx
  struct tagRECT *v68; // rax
  float v69; // xmm11_4
  float v70; // xmm12_4
  float v71; // xmm0_4
  float v72; // xmm1_4
  float v73; // xmm5_4
  int v74; // edi
  int v75; // eax
  int v76; // edi
  int v77; // eax
  int v78; // edi
  int v79; // eax
  unsigned int v80; // [rsp+30h] [rbp-D0h]
  __m128 v81; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v82; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v84[4]; // [rsp+70h] [rbp-90h]
  _DWORD v85[4]; // [rsp+80h] [rbp-80h]
  _DWORD v86[4]; // [rsp+90h] [rbp-70h]
  _DWORD v87[4]; // [rsp+A0h] [rbp-60h]

  left = a3[5].left;
  v5 = a3[5].right - left;
  top = a3[5].top;
  v80 = 0;
  if ( v5 < 0 )
    v5 = 0;
  v8 = a3[5].bottom - top;
  if ( v8 < 0 )
    v8 = 0;
  v9 = a3[2];
  rc = v9;
  v10 = v9.left;
  if ( rc.top + rc.left > v5 )
  {
    v11 = v5 * rc.left / (rc.top + rc.left);
    v10 = v11;
  }
  else
  {
    v11 = v5 - v9.top;
  }
  right = rc.right;
  if ( rc.bottom + rc.right > v8 )
  {
    right = v8 * rc.right / (rc.bottom + rc.right);
    v13 = right;
  }
  else
  {
    v13 = v8 - rc.bottom;
  }
  v14 = this[1].left - a3[3].left;
  v85[1] = top + right;
  v15 = top + v13;
  v16 = v8 + top;
  v84[2] = left + v11;
  v17 = this[1].right;
  v18 = this[4].left;
  v85[3] = v16;
  v19 = v5 + left;
  bottom = this[1].bottom;
  v84[3] = v19;
  v21 = a3[3].left + a3[3].top + v17;
  v85[0] = top;
  v22 = a3[3].right + a3[3].bottom + bottom;
  v23 = this[1].top - a3[3].right;
  v84[0] = left;
  v84[1] = left + v10;
  v85[2] = v15;
  if ( (v18 & 1) != 0 )
  {
    v14 -= a3[2].left;
    v21 += a3[2].left;
  }
  if ( (v18 & 2) != 0 )
    v21 += a3[2].top;
  if ( (v18 & 4) != 0 )
  {
    v23 -= a3[2].right;
    v22 += a3[2].right;
  }
  if ( (v18 & 8) != 0 )
    v22 += a3[2].bottom;
  v24 = v9.left;
  rc = v9;
  if ( v9.left + v9.top > v21 )
  {
    v25 = v21 * v9.left / (v9.left + v9.top);
    v24 = v25;
  }
  else
  {
    v25 = v21 - v9.top;
  }
  v26 = rc.right;
  if ( rc.right + rc.bottom > v22 )
  {
    v26 = v22 * rc.right / (rc.right + rc.bottom);
    v27 = v26;
  }
  else
  {
    v27 = v22 - rc.bottom;
  }
  v28 = v14 + v24;
  v29 = v14 + v25;
  v87[1] = v23 + v26;
  v87[3] = v22 + v23;
  v30 = v21 + v14;
  v86[0] = v14;
  v31 = 0;
  v86[3] = v30;
  v87[0] = v23;
  v86[1] = v28;
  v87[2] = v23 + v27;
  v86[2] = v29;
  while ( 1 )
  {
    v32 = v31 / 3;
    v33 = v85[v32];
    v34 = v31 % 3;
    v35 = v84[v34];
    v36 = v86[v34];
    v37 = v87[v32];
    v38 = v87[(unsigned int)(v32 + 1)] - v37;
    if ( v86[(unsigned int)(v34 + 1)] - v36 <= 0 || v38 <= 0 )
      goto LABEL_53;
    if ( (_DWORD)v34 )
    {
      if ( (_DWORD)v34 != 2 )
        goto LABEL_28;
      v39 = (this[4].left & 2) == 0;
    }
    else
    {
      v39 = (this[4].left & 1) == 0;
    }
    if ( !v39 )
      goto LABEL_53;
LABEL_28:
    if ( (_DWORD)v32 )
    {
      if ( (_DWORD)v32 != 2 )
        break;
      v40 = (this[4].left & 8) == 0;
    }
    else
    {
      v40 = (this[4].left & 4) == 0;
    }
    if ( v40 )
      break;
LABEL_53:
    if ( ++v31 >= 9 )
      return v80;
  }
  v41 = (float)v33;
  v42 = (float)v35;
  v43 = (float)(v84[(unsigned int)(v34 + 1)] - v35) + (float)v35;
  v44 = (float)(v85[(unsigned int)(v32 + 1)] - v33) + (float)v33;
  v45 = (__m128)COERCE_UNSIGNED_INT((float)v36);
  v46 = (float)v37;
  if ( (_DWORD)v34 == 1 )
  {
    v42 = v42 + 0.5;
    v43 = v43 + -0.5;
    if ( v42 > v43 )
      v43 = v42;
  }
  if ( (_DWORD)v32 == 1 )
  {
    v41 = v41 + 0.5;
    v44 = v44 + -0.5;
    if ( v41 > v44 )
      v44 = v41;
  }
  v47 = (float)(v86[(unsigned int)(v34 + 1)] - v36) + v45.m128_f32[0];
  *(_QWORD *)&v82 = __PAIR64__(LODWORD(v41), LODWORD(v42));
  v48 = _mm_shuffle_ps(v45, v45, 225);
  v48.m128_f32[0] = v46;
  v49 = _mm_shuffle_ps(v48, v48, 198);
  v50 = 0;
  v39 = this[3].left == 0x80000000;
  v49.m128_f32[0] = v47;
  *((_QWORD *)&v82 + 1) = __PAIR64__(LODWORD(v44), LODWORD(v43));
  v51 = _mm_shuffle_ps(v49, v49, 39);
  v51.m128_f32[0] = (float)v38 + v46;
  v80 = 0;
  v81 = _mm_shuffle_ps(v51, v51, 57);
  if ( v39 && this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
  {
    v52 = 0;
    if ( !*((_QWORD *)a2 + 12) )
    {
      v53 = v81.m128_f32[2];
      v54 = v81.m128_f32[0];
      goto LABEL_40;
    }
  }
  else
  {
    v52 = 1;
  }
  v66 = this[1].top;
  v67 = this[1].left;
  rc = this[3];
  OffsetRect(&rc, v67, v66);
  v68 = (struct tagRECT *)*((_QWORD *)a2 + 12);
  if ( v68 )
  {
    if ( v52 )
      IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
    else
      rc = *v68;
  }
  v53 = v81.m128_f32[2];
  v54 = v81.m128_f32[0];
  v69 = v81.m128_f32[2] - v81.m128_f32[0];
  if ( (float)(v81.m128_f32[2] - v81.m128_f32[0]) <= 0.0 )
  {
LABEL_40:
    v55 = v81.m128_f32[1];
    v56 = v81.m128_f32[3];
  }
  else
  {
    v56 = v81.m128_f32[3];
    v55 = v81.m128_f32[1];
    v70 = v81.m128_f32[3] - v81.m128_f32[1];
    if ( (float)(v81.m128_f32[3] - v81.m128_f32[1]) > 0.0 )
    {
      v81.m128_u64[0] = __PAIR64__(
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.top, v81.m128_f32[1])),
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.left, v81.m128_f32[0])));
      v53 = fminf((float)rc.right, v81.m128_f32[2]);
      v81.m128_f32[2] = v53;
      v56 = fminf((float)rc.bottom, v81.m128_f32[3]);
      v81.m128_f32[3] = v56;
      v71 = v81.m128_f32[1] - v55;
      v55 = v81.m128_f32[1];
      *(float *)&v82 = *(float *)&v82
                     + (float)((float)((float)(*((float *)&v82 + 2) - *(float *)&v82) * (float)(v81.m128_f32[0] - v54))
                             / v69);
      v72 = (float)((float)(*((float *)&v82 + 3) - *((float *)&v82 + 1)) * v71) / v70;
      v73 = *((float *)&v82 + 3) - (float)(*((float *)&v82 + 1) + v72);
      *((float *)&v82 + 1) = *((float *)&v82 + 1) + v72;
      *((float *)&v82 + 2) = (float)((float)((float)(v53 - v81.m128_f32[0])
                                           * (float)(*((float *)&v82 + 2) - *(float *)&v82))
                                   / v69)
                           + *(float *)&v82;
      v54 = v81.m128_f32[0];
      *((float *)&v82 + 3) = (float)((float)(v73 * (float)(v56 - v81.m128_f32[1])) / v70) + *((float *)&v82 + 1);
    }
  }
  if ( (float)(v53 - v54) > 0.0 && (float)(v56 - v55) > 0.0 )
  {
    v57 = *((unsigned int *)a2 + 6);
    v58 = v57 + 1;
    if ( (int)v57 + 1 < (unsigned int)v57 )
    {
      v74 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v50 = -2147024362;
      v80 = -2147024362;
      goto LABEL_77;
    }
    if ( v58 <= *((_DWORD *)a2 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16 * v57) = v82;
      *((_DWORD *)a2 + 6) = v58;
      goto LABEL_46;
    }
    v75 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v82);
    v74 = v75;
    if ( v75 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0xC0u);
    v80 = v74;
    v50 = v74;
    if ( v74 < 0 )
    {
LABEL_77:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v74, 0x44Bu);
      goto LABEL_52;
    }
LABEL_46:
    v59 = *((unsigned int *)a2 + 14);
    v60 = (_QWORD *)((char *)a2 + 32);
    v61 = v59 + 1;
    if ( (int)v59 + 1 < (unsigned int)v59 )
    {
      v76 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v50 = -2147024362;
      v80 = -2147024362;
      goto LABEL_82;
    }
    if ( v61 <= *((_DWORD *)a2 + 13) )
    {
      *(__m128 *)(*v60 + 16 * v59) = v81;
      *((_DWORD *)a2 + 14) = v61;
      goto LABEL_49;
    }
    v77 = DynArrayImpl<0>::AddMultipleAndSet(v60, 16LL, 1LL, &v81);
    v76 = v77;
    if ( v77 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v77, 0xC0u);
    v80 = v76;
    v50 = v76;
    if ( v76 < 0 )
    {
LABEL_82:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v76, 0x44Eu);
      goto LABEL_52;
    }
LABEL_49:
    v62 = *((_DWORD *)a2 + 22);
    p_top = &this[4].top;
    v64 = v62 + 1;
    if ( v62 + 1 < v62 )
    {
      v78 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v50 = -2147024362;
      v80 = -2147024362;
      goto LABEL_87;
    }
    v50 = 0;
    v80 = 0;
    if ( v64 <= *((_DWORD *)a2 + 21) )
    {
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v62) = *p_top;
      *((_DWORD *)a2 + 22) = v64;
      goto LABEL_52;
    }
    v79 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 64, 4LL, 1LL, p_top);
    v78 = v79;
    if ( v79 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0xC0u);
    v80 = v78;
    v50 = v78;
    if ( v78 < 0 )
LABEL_87:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v78, 0x44Fu);
  }
LABEL_52:
  if ( v50 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x403u);
  return (unsigned int)v50;
}
