/*
 * XREFs of ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001FC00
 * Callers:
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x1800202F0 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180020510 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x1800244E0 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
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
  int v13; // eax
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
  int v38; // eax
  int v39; // edx
  bool v40; // zf
  bool v41; // zf
  float v42; // xmm4_4
  float v43; // xmm5_4
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm7_4
  __m128 v47; // xmm1
  __m128 v48; // xmm1
  int v49; // esi
  __m128 v50; // xmm1
  char v51; // di
  float v52; // xmm9_4
  float v53; // xmm3_4
  float v54; // xmm10_4
  float v55; // xmm8_4
  __int64 v56; // rax
  unsigned int v57; // ecx
  __int64 v58; // rax
  _QWORD *v59; // rcx
  unsigned int v60; // edx
  unsigned int v61; // eax
  LONG *p_top; // r9
  unsigned int v63; // r8d
  int v65; // r8d
  int v66; // edx
  struct tagRECT *v67; // rax
  float v68; // xmm11_4
  float v69; // xmm12_4
  float v70; // xmm0_4
  float v71; // xmm1_4
  float v72; // xmm5_4
  int v73; // eax
  int v74; // eax
  int v75; // eax
  unsigned int v76; // [rsp+30h] [rbp-D0h]
  __m128 v77; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v78; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v80[4]; // [rsp+70h] [rbp-90h]
  _DWORD v81[4]; // [rsp+80h] [rbp-80h]
  _DWORD v82[4]; // [rsp+90h] [rbp-70h]
  _DWORD v83[4]; // [rsp+A0h] [rbp-60h]

  left = a3[5].left;
  v5 = a3[5].right - left;
  top = a3[5].top;
  v76 = 0;
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
    v11 = rc.left * v5 / (rc.top + rc.left);
    v10 = v11;
  }
  else
  {
    v11 = v5 - v9.top;
  }
  right = rc.right;
  if ( rc.bottom + rc.right > v8 )
  {
    v13 = rc.right * v8 / (rc.bottom + rc.right);
    right = v13;
  }
  else
  {
    v13 = v8 - rc.bottom;
  }
  v14 = this[1].left - a3[3].left;
  v81[2] = top + v13;
  v15 = top + right;
  v16 = top + v8;
  v80[2] = left + v11;
  v17 = this[1].right;
  v18 = this[4].left;
  v81[3] = v16;
  v19 = left + v5;
  bottom = this[1].bottom;
  v80[3] = v19;
  v21 = a3[3].left + a3[3].top + v17;
  v81[0] = top;
  v22 = a3[3].right + a3[3].bottom + bottom;
  v23 = this[1].top - a3[3].right;
  v80[0] = left;
  v81[1] = v15;
  v80[1] = left + v10;
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
  v83[1] = v23 + v26;
  v83[3] = v23 + v22;
  v30 = v14 + v21;
  v82[0] = v14;
  v31 = 0;
  v82[3] = v30;
  v83[0] = v23;
  v82[1] = v28;
  v83[2] = v23 + v27;
  v82[2] = v29;
  while ( 1 )
  {
    v32 = v31 / 3;
    v33 = v81[v32];
    v34 = v31 % 3;
    v35 = v80[v34];
    v36 = v82[v34];
    v37 = v83[v32];
    v38 = v82[(unsigned int)(v34 + 1)] - v36;
    v39 = v83[(unsigned int)(v32 + 1)] - v37;
    if ( v38 <= 0 || v39 <= 0 )
      goto LABEL_53;
    if ( (_DWORD)v34 )
    {
      if ( (_DWORD)v34 != 2 )
        goto LABEL_28;
      v40 = (this[4].left & 2) == 0;
    }
    else
    {
      v40 = (this[4].left & 1) == 0;
    }
    if ( !v40 )
      goto LABEL_53;
LABEL_28:
    if ( (_DWORD)v32 )
    {
      if ( (_DWORD)v32 != 2 )
        break;
      v41 = (this[4].left & 8) == 0;
    }
    else
    {
      v41 = (this[4].left & 4) == 0;
    }
    if ( v41 )
      break;
LABEL_53:
    if ( ++v31 >= 9 )
      return v76;
  }
  v42 = (float)v33;
  v43 = (float)v35;
  v44 = (float)(v80[(unsigned int)(v34 + 1)] - v35) + (float)v35;
  v45 = (float)(v81[(unsigned int)(v32 + 1)] - v33) + (float)v33;
  v46 = (float)v37;
  if ( (_DWORD)v34 == 1 )
  {
    v43 = v43 + 0.5;
    v44 = v44 + -0.5;
    if ( v43 > v44 )
      v44 = v43;
  }
  if ( (_DWORD)v32 == 1 )
  {
    v42 = v42 + 0.5;
    v45 = v45 + -0.5;
    if ( v42 > v45 )
      v45 = v42;
  }
  *(_QWORD *)&v78 = __PAIR64__(LODWORD(v42), LODWORD(v43));
  v47 = _mm_shuffle_ps((__m128)COERCE_UNSIGNED_INT((float)v36), (__m128)COERCE_UNSIGNED_INT((float)v36), 225);
  v47.m128_f32[0] = v46;
  v48 = _mm_shuffle_ps(v47, v47, 198);
  v49 = 0;
  *((_QWORD *)&v78 + 1) = __PAIR64__(LODWORD(v45), LODWORD(v44));
  v40 = this[3].left == 0x80000000;
  v48.m128_f32[0] = (float)v36 + (float)v38;
  v50 = _mm_shuffle_ps(v48, v48, 39);
  v50.m128_f32[0] = (float)v39 + v46;
  v76 = 0;
  v77 = _mm_shuffle_ps(v50, v50, 57);
  if ( v40 && this[3].top == 0x80000000 && this[3].right == 0x7FFFFFFF && this[3].bottom == 0x7FFFFFFF )
  {
    v51 = 0;
    if ( !*((_QWORD *)a2 + 12) )
    {
      v52 = v77.m128_f32[2];
      v53 = v77.m128_f32[0];
      goto LABEL_40;
    }
  }
  else
  {
    v51 = 1;
  }
  v65 = this[1].top;
  v66 = this[1].left;
  rc = this[3];
  OffsetRect(&rc, v66, v65);
  v67 = (struct tagRECT *)*((_QWORD *)a2 + 12);
  if ( v67 )
  {
    if ( v51 )
      IntersectRect(&rc, &rc, *((const RECT **)a2 + 12));
    else
      rc = *v67;
  }
  v52 = v77.m128_f32[2];
  v53 = v77.m128_f32[0];
  v68 = v77.m128_f32[2] - v77.m128_f32[0];
  if ( (float)(v77.m128_f32[2] - v77.m128_f32[0]) <= 0.0 )
  {
LABEL_40:
    v54 = v77.m128_f32[1];
    v55 = v77.m128_f32[3];
  }
  else
  {
    v55 = v77.m128_f32[3];
    v54 = v77.m128_f32[1];
    v69 = v77.m128_f32[3] - v77.m128_f32[1];
    if ( (float)(v77.m128_f32[3] - v77.m128_f32[1]) > 0.0 )
    {
      v77.m128_u64[0] = __PAIR64__(
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.top, v77.m128_f32[1])),
                          COERCE_UNSIGNED_INT(fmaxf((float)rc.left, v77.m128_f32[0])));
      v52 = fminf((float)rc.right, v77.m128_f32[2]);
      v77.m128_f32[2] = v52;
      v55 = fminf((float)rc.bottom, v77.m128_f32[3]);
      v77.m128_f32[3] = v55;
      v70 = v77.m128_f32[1] - v54;
      v54 = v77.m128_f32[1];
      *(float *)&v78 = *(float *)&v78
                     + (float)((float)((float)(*((float *)&v78 + 2) - *(float *)&v78) * (float)(v77.m128_f32[0] - v53))
                             / v68);
      v71 = (float)((float)(*((float *)&v78 + 3) - *((float *)&v78 + 1)) * v70) / v69;
      v72 = *((float *)&v78 + 3) - (float)(*((float *)&v78 + 1) + v71);
      *((float *)&v78 + 1) = *((float *)&v78 + 1) + v71;
      *((float *)&v78 + 2) = (float)((float)((float)(v52 - v77.m128_f32[0])
                                           * (float)(*((float *)&v78 + 2) - *(float *)&v78))
                                   / v68)
                           + *(float *)&v78;
      v53 = v77.m128_f32[0];
      *((float *)&v78 + 3) = (float)((float)(v72 * (float)(v55 - v77.m128_f32[1])) / v69) + *((float *)&v78 + 1);
    }
  }
  if ( (float)(v52 - v53) > 0.0 && (float)(v55 - v54) > 0.0 )
  {
    v56 = *((unsigned int *)a2 + 6);
    v57 = v56 + 1;
    if ( (int)v56 + 1 < (unsigned int)v56 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v49 = -2147024362;
      v76 = -2147024362;
      goto LABEL_78;
    }
    if ( v57 <= *((_DWORD *)a2 + 5) )
    {
      *(_OWORD *)(*(_QWORD *)a2 + 16 * v56) = v78;
      *((_DWORD *)a2 + 6) = v57;
      goto LABEL_46;
    }
    v73 = DynArrayImpl<0>::AddMultipleAndSet(a2, 16LL, 1LL, &v78);
    v76 = v73;
    v49 = v73;
    if ( v73 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0xC0u);
    if ( v49 < 0 )
    {
LABEL_78:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x44Bu);
      goto LABEL_52;
    }
LABEL_46:
    v58 = *((unsigned int *)a2 + 14);
    v59 = (_QWORD *)((char *)a2 + 32);
    v60 = v58 + 1;
    if ( (int)v58 + 1 < (unsigned int)v58 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v49 = -2147024362;
      v76 = -2147024362;
      goto LABEL_83;
    }
    if ( v60 <= *((_DWORD *)a2 + 13) )
    {
      *(__m128 *)(*v59 + 16 * v58) = v77;
      *((_DWORD *)a2 + 14) = v60;
      goto LABEL_49;
    }
    v74 = DynArrayImpl<0>::AddMultipleAndSet(v59, 16LL, 1LL, &v77);
    v76 = v74;
    v49 = v74;
    if ( v74 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v74, 0xC0u);
    if ( v49 >= 0 )
    {
LABEL_49:
      v61 = *((_DWORD *)a2 + 22);
      p_top = &this[4].top;
      v63 = v61 + 1;
      if ( v61 + 1 < v61 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v49 = -2147024362;
        v76 = -2147024362;
      }
      else
      {
        if ( v63 <= *((_DWORD *)a2 + 21) )
        {
          v49 = 0;
          v76 = 0;
          *(_DWORD *)(*((_QWORD *)a2 + 8) + 4LL * v61) = *p_top;
          *((_DWORD *)a2 + 22) = v63;
          goto LABEL_52;
        }
        v75 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 64, 4LL, 1LL, p_top);
        v76 = v75;
        v49 = v75;
        if ( v75 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0xC0u);
        if ( v49 >= 0 )
          goto LABEL_53;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x44Fu);
    }
    else
    {
LABEL_83:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x44Eu);
    }
  }
LABEL_52:
  if ( v49 >= 0 )
    goto LABEL_53;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x403u);
  return (unsigned int)v49;
}
