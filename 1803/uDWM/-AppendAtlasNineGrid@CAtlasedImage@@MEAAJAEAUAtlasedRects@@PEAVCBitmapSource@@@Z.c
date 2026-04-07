/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001FE50
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x180018B90 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x180020520 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020750 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  LONG right; // edx
  int v13; // ebx
  int v14; // eax
  int v15; // edx
  int v16; // ebx
  int v17; // edi
  LONG v18; // ecx
  int v19; // r11d
  int v20; // r10d
  LONG v21; // ecx
  int v22; // r8d
  LONG v23; // eax
  LONG v24; // edx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // r10
  int v28; // r13d
  __int64 v29; // r11
  int v30; // r12d
  int v31; // r9d
  int v32; // r8d
  int v33; // edx
  bool v34; // zf
  bool v35; // zf
  float v36; // xmm3_4
  float v37; // xmm4_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  __m128 v40; // xmm0
  float v41; // xmm7_4
  float v42; // xmm5_4
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  int v45; // edi
  __m128 v46; // xmm0
  char v47; // si
  float v48; // xmm9_4
  float v49; // xmm1_4
  float v50; // xmm10_4
  float v51; // xmm8_4
  __int64 v52; // rax
  unsigned int v53; // ecx
  __int64 v54; // rax
  _QWORD *v55; // rcx
  unsigned int v56; // edx
  unsigned int v57; // eax
  LONG *p_top; // r9
  unsigned int v59; // r8d
  int v61; // r8d
  int v62; // edx
  struct tagRECT *v63; // rax
  float v64; // xmm11_4
  float v65; // xmm12_4
  float v66; // xmm0_4
  int v67; // eax
  int v68; // eax
  int v69; // eax
  unsigned int v70; // [rsp+30h] [rbp-D0h]
  __m128 v71; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v72; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v74[4]; // [rsp+70h] [rbp-90h]
  _DWORD v75[4]; // [rsp+80h] [rbp-80h]
  _DWORD v76[4]; // [rsp+90h] [rbp-70h]
  _DWORD v77[4]; // [rsp+A0h] [rbp-60h]

  left = a3[5].left;
  v5 = a3[5].right - left;
  top = a3[5].top;
  v70 = 0;
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
    v13 = v8 * rc.right / (rc.bottom + rc.right);
    right = v13;
  }
  else
  {
    v13 = v8 - rc.bottom;
  }
  v75[0] = top;
  v14 = top + v8;
  v75[2] = top + v13;
  v15 = top + right;
  v16 = a3[3].right + a3[3].bottom + this[1].bottom;
  v17 = a3[3].left + a3[3].top + this[1].right;
  v18 = this[4].left;
  v74[1] = left + v10;
  v19 = this[1].left - a3[3].left;
  v74[2] = left + v11;
  v20 = this[1].top - a3[3].right;
  v75[3] = v14;
  v74[0] = left;
  v75[1] = v15;
  v74[3] = left + v5;
  if ( (v18 & 1) != 0 )
  {
    v19 -= a3[2].left;
    v17 += a3[2].left;
  }
  if ( (v18 & 2) != 0 )
    v17 += a3[2].top;
  if ( (v18 & 4) != 0 )
  {
    v20 -= a3[2].right;
    v16 += a3[2].right;
  }
  if ( (v18 & 8) != 0 )
    v16 += a3[2].bottom;
  v21 = v9.left;
  rc = v9;
  if ( v9.left + v9.top > v17 )
  {
    v22 = v17 * v9.left / (v9.left + v9.top);
    v21 = v22;
  }
  else
  {
    v22 = v17 - v9.top;
  }
  v23 = rc.right;
  if ( rc.right + rc.bottom > v16 )
  {
    v23 = v16 * rc.right / (rc.right + rc.bottom);
    v24 = v23;
  }
  else
  {
    v24 = v16 - rc.bottom;
  }
  v77[1] = v20 + v23;
  v25 = v20 + v16;
  v26 = 0;
  v77[3] = v25;
  v76[3] = v17 + v19;
  v77[0] = v20;
  v76[0] = v19;
  v76[1] = v19 + v21;
  v77[2] = v20 + v24;
  v76[2] = v19 + v22;
  while ( 1 )
  {
    v27 = v26 / 3;
    v28 = v75[v27];
    v29 = v26 % 3;
    v30 = v74[v29];
    v31 = v76[v29];
    v32 = v77[v27];
    v33 = v77[(unsigned int)(v27 + 1)] - v32;
    if ( v76[(unsigned int)(v29 + 1)] - v31 <= 0 || v33 <= 0 )
      goto LABEL_53;
    if ( (_DWORD)v29 )
    {
      if ( (_DWORD)v29 != 2 )
        goto LABEL_28;
      v34 = (this[4].left & 2) == 0;
    }
    else
    {
      v34 = (this[4].left & 1) == 0;
    }
    if ( !v34 )
      goto LABEL_53;
LABEL_28:
    if ( (_DWORD)v27 )
    {
      if ( (_DWORD)v27 != 2 )
        break;
      v35 = (this[4].left & 8) == 0;
    }
    else
    {
      v35 = (this[4].left & 4) == 0;
    }
    if ( v35 )
      break;
LABEL_53:
    if ( ++v26 >= 9 )
      return v70;
  }
  v40 = 0LL;
  v36 = (float)v28;
  v37 = (float)v30;
  v38 = (float)(v74[(unsigned int)(v29 + 1)] - v30) + (float)v30;
  v39 = (float)(v75[(unsigned int)(v27 + 1)] - v28) + (float)v28;
  v40.m128_f32[0] = (float)v31;
  v41 = (float)v32;
  if ( (_DWORD)v29 == 1 )
  {
    v37 = v37 + 0.5;
    v38 = v38 - 0.5;
    if ( v37 > v38 )
      v38 = v37;
  }
  if ( (_DWORD)v27 == 1 )
  {
    v36 = v36 + 0.5;
    v39 = v39 - 0.5;
    if ( v36 > v39 )
      v39 = v36;
  }
  v42 = (float)(v76[(unsigned int)(v29 + 1)] - v31) + v40.m128_f32[0];
  *(_QWORD *)&v72 = __PAIR64__(LODWORD(v36), LODWORD(v37));
  v43 = _mm_shuffle_ps(v40, v40, 225);
  v43.m128_f32[0] = v41;
  v44 = _mm_shuffle_ps(v43, v43, 198);
  v45 = 0;
  v34 = this[3].left == 0x80000000;
  v44.m128_f32[0] = v42;
  *((_QWORD *)&v72 + 1) = __PAIR64__(LODWORD(v39), LODWORD(v38));
  v46 = _mm_shuffle_ps(v44, v44, 39);
  v46.m128_f32[0] = (float)v33 + v41;
  v70 = 0;
  v71 = _mm_shuffle_ps(v46, v46, 57);
  if ( v34 && this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
  {
    v47 = 0;
    if ( !*((_QWORD *)a2 + 12) )
    {
      v48 = v71.m128_f32[2];
      v49 = v71.m128_f32[0];
      goto LABEL_40;
    }
  }
  else
  {
    v47 = 1;
  }
  v61 = this[1].top;
  v62 = this[1].left;
  rc = this[3];
  OffsetRect(&rc, v62, v61);
  v63 = (struct tagRECT *)*((_QWORD *)a2 + 12);
  if ( v63 )
  {
    if ( v47 )
      IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
    else
      rc = *v63;
  }
  v48 = v71.m128_f32[2];
  v49 = v71.m128_f32[0];
  v64 = v71.m128_f32[2] - v71.m128_f32[0];
  if ( (float)(v71.m128_f32[2] - v71.m128_f32[0]) <= 0.0 )
  {
LABEL_40:
    v50 = v71.m128_f32[1];
    v51 = v71.m128_f32[3];
  }
  else
  {
    v51 = v71.m128_f32[3];
    v50 = v71.m128_f32[1];
    v65 = v71.m128_f32[3] - v71.m128_f32[1];
    if ( (float)(v71.m128_f32[3] - v71.m128_f32[1]) > 0.0 )
    {
      v71.m128_u64[0] = __PAIR64__(
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.top, v71.m128_f32[1])),
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.left, v71.m128_f32[0])));
      v48 = fminf((float)rc.right, v71.m128_f32[2]);
      v71.m128_f32[2] = v48;
      v51 = fminf((float)rc.bottom, v71.m128_f32[3]);
      v71.m128_f32[3] = v51;
      v66 = v71.m128_f32[1] - v50;
      v50 = v71.m128_f32[1];
      *(float *)&v72 = (float)((float)((float)(v71.m128_f32[0] - v49) * (float)(*((float *)&v72 + 2) - *(float *)&v72))
                             / v64)
                     + *(float *)&v72;
      v49 = v71.m128_f32[0];
      *((float *)&v72 + 1) = (float)((float)((float)(*((float *)&v72 + 3) - *((float *)&v72 + 1)) * v66) / v65)
                           + *((float *)&v72 + 1);
      *((float *)&v72 + 2) = (float)((float)((float)(*((float *)&v72 + 2) - *(float *)&v72)
                                           * (float)(v48 - v71.m128_f32[0]))
                                   / v64)
                           + *(float *)&v72;
      *((float *)&v72 + 3) = (float)((float)((float)(*((float *)&v72 + 3) - *((float *)&v72 + 1))
                                           * (float)(v51 - v71.m128_f32[1]))
                                   / v65)
                           + *((float *)&v72 + 1);
    }
  }
  if ( (float)(v48 - v49) > 0.0 && (float)(v51 - v50) > 0.0 )
  {
    v52 = *((unsigned int *)a2 + 6);
    v53 = v52 + 1;
    if ( (int)v52 + 1 < (unsigned int)v52 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v45 = -2147024362;
      v70 = -2147024362;
      goto LABEL_78;
    }
    if ( v53 <= *((_DWORD *)a2 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16 * v52) = v72;
      *((_DWORD *)a2 + 6) = v53;
      goto LABEL_46;
    }
    v67 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v72);
    v70 = v67;
    v45 = v67;
    if ( v67 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v67, 0xC0u);
    if ( v45 < 0 )
    {
LABEL_78:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x36Du);
      goto LABEL_52;
    }
LABEL_46:
    v54 = *((unsigned int *)a2 + 14);
    v55 = (_QWORD *)((char *)a2 + 32);
    v56 = v54 + 1;
    if ( (int)v54 + 1 < (unsigned int)v54 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v45 = -2147024362;
      v70 = -2147024362;
      goto LABEL_83;
    }
    if ( v56 <= *((_DWORD *)a2 + 13) )
    {
      *(__m128 *)(*v55 + 16 * v54) = v71;
      *((_DWORD *)a2 + 14) = v56;
      goto LABEL_49;
    }
    v68 = DynArrayImpl<0>::AddMultipleAndSet(v55, 16LL, 1LL, &v71);
    v70 = v68;
    v45 = v68;
    if ( v68 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v68, 0xC0u);
    if ( v45 >= 0 )
    {
LABEL_49:
      v57 = *((_DWORD *)a2 + 22);
      p_top = &this[4].top;
      v59 = v57 + 1;
      if ( v57 + 1 < v57 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v45 = -2147024362;
        v70 = -2147024362;
      }
      else
      {
        if ( v59 <= *((_DWORD *)a2 + 21) )
        {
          v45 = 0;
          v70 = 0;
          *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v57) = *p_top;
          *((_DWORD *)a2 + 22) = v59;
          goto LABEL_52;
        }
        v69 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 64, 4LL, 1LL, p_top);
        v70 = v69;
        v45 = v69;
        if ( v69 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0xC0u);
        if ( v45 >= 0 )
          goto LABEL_53;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x371u);
    }
    else
    {
LABEL_83:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x370u);
    }
  }
LABEL_52:
  if ( v45 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x32Au);
  return (unsigned int)v45;
}
