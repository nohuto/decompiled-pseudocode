/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18008F90C
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18004FFC0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x1800651AC (-AreaUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18008FF48 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800BD710 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800C23B0 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x180178038 (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     McTemplateU0xnn @ 0x1801AA438 (McTemplateU0xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        __int64 a4,
        bool a5)
{
  char v5; // r14
  unsigned __int8 v6; // si
  __int64 v7; // rdi
  char v10; // al
  __int64 v11; // rsi
  float left; // xmm9_4
  float right; // xmm8_4
  float top; // xmm7_4
  float bottom; // xmm6_4
  char v16; // al
  float v17; // xmm1_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  float v21; // xmm9_4
  float v22; // xmm8_4
  unsigned int v23; // r8d
  unsigned int v24; // ecx
  _BYTE *v25; // rdx
  char *v26; // rdi
  unsigned int v27; // r12d
  unsigned int v28; // r15d
  _BYTE *v29; // r11
  float *v30; // r10
  unsigned int v31; // edx
  float v33; // xmm0_4
  int v34; // r9d
  double v35; // xmm0_8
  float v36; // xmm4_4
  float v37; // xmm5_4
  __int64 v38; // rcx
  bool v39; // zf
  bool v40; // cc
  unsigned int v41; // r9d
  float v42; // xmm4_4
  unsigned int v43; // r11d
  float v44; // xmm2_4
  float *v45; // rcx
  unsigned int v46; // r9d
  double v47; // xmm0_8
  unsigned int v48; // eax
  unsigned int v49; // r8d
  char *v50; // r10
  __int64 v51; // rsi
  float *v52; // rdx
  unsigned int v53; // eax
  _BYTE *v54; // rax
  int v55; // [rsp+30h] [rbp-89h]
  unsigned __int8 v56; // [rsp+48h] [rbp-71h]
  __int128 v57; // [rsp+50h] [rbp-69h] BYREF
  struct tagRECT v58; // [rsp+60h] [rbp-59h] BYREF
  __int128 v59; // [rsp+70h] [rbp-49h] BYREF
  struct tagRECT rcDst; // [rsp+80h] [rbp-39h] BYREF

  v5 = 0;
  v56 = a4;
  v6 = a4;
  v7 = a3;
  if ( (*((_BYTE *)this + 93) & 0x10) != 0 )
  {
    *((_DWORD *)this + 146) = 0;
    *(_QWORD *)((char *)this + 588) = 1LL;
    *((_BYTE *)this + 93) &= ~0x10u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 936));
  }
  v10 = *((_BYTE *)this + 914);
  if ( v10 )
    *((_BYTE *)this + 915) = 0;
  if ( (_DWORD)v7 )
  {
    v11 = v7;
    *(_QWORD *)&v57 = v7;
    while ( 1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xnn(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
          *((_QWORD *)this + 75),
          (_BYTE)a4,
          (__int64)a2,
          v55,
          (__int64)this + 688);
      if ( *((_BYTE *)this + 914) || *((_BYTE *)this + 913) && a5 )
        goto LABEL_34;
      CopyRect(&rcDst, (const RECT *)this + 40);
      OffsetRect(&rcDst, -rcDst.left, -rcDst.top);
      IntersectRect(&rcDst, a2, &rcDst);
      left = (float)rcDst.left;
      right = (float)rcDst.right;
      top = (float)rcDst.top;
      bottom = (float)rcDst.bottom;
      if ( (float)rcDst.right <= (float)rcDst.left || (v16 = 1, bottom <= top) )
        v16 = 0;
      if ( !v16 )
        goto LABEL_34;
      v39 = (*((_BYTE *)this + 93) & 0x10) == 0;
      *(float *)&v59 = (float)rcDst.left;
      *((float *)&v59 + 1) = (float)rcDst.top;
      *((float *)&v59 + 2) = (float)rcDst.right;
      *((float *)&v59 + 3) = (float)rcDst.bottom;
      if ( !v39 )
      {
        *((_DWORD *)this + 146) = 0;
        *(_QWORD *)((char *)this + 588) = 1LL;
        *((_BYTE *)this + 93) &= ~0x10u;
        CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 936));
      }
      if ( right <= left || bottom <= top )
        goto LABEL_34;
      v17 = (float)(*((_DWORD *)this + 161) - *((_DWORD *)this + 173));
      v18 = top + v17;
      v19 = bottom + v17;
      v20 = (float)(*((_DWORD *)this + 160) - *((_DWORD *)this + 172));
      v21 = left + v20;
      v22 = right + v20;
      *(_QWORD *)&v59 = __PAIR64__(LODWORD(v18), LODWORD(v21));
      *((_QWORD *)&v59 + 1) = __PAIR64__(LODWORD(v19), LODWORD(v22));
      if ( qword_1802D6428 )
      {
        v23 = *((_DWORD *)qword_1802D6428 + 18);
        v24 = 0;
        if ( v23 )
        {
          a4 = *((_QWORD *)qword_1802D6428 + 6);
          while ( 1 )
          {
            v25 = *(_BYTE **)(a4 + 8LL * v24);
            if ( v25[329] || v25[328] || v25[232] )
              break;
            if ( ++v24 >= v23 )
              goto LABEL_25;
          }
          v58.left = (int)v21;
          v58.right = (int)v22;
          v58.top = (int)v18;
          v58.bottom = (int)v19;
          CDwmMetaRegion::AddDirtyRectangle((CWindowNode *)((char *)this + 936), &v58);
        }
      }
LABEL_25:
      v26 = (char *)this + 520;
      if ( v22 <= v21 || v19 <= v18 )
        goto LABEL_34;
      v27 = -1;
      v28 = -1;
      if ( (*((_BYTE *)this + 588) & 0xF) == 0 )
      {
        v39 = *((_DWORD *)this + 148) == 1;
        v40 = *((_DWORD *)this + 148) <= 1u;
        v41 = 0;
        *((_DWORD *)this + 147) = 1;
        if ( v40 )
        {
          if ( !v39 )
            goto LABEL_28;
          v54 = (char *)this + 584;
          while ( !*v54 )
          {
            ++v41;
            ++v54;
            if ( v41 >= 4 )
              goto LABEL_28;
          }
        }
        else
        {
          v42 = 0.0;
          v43 = 0;
          do
          {
            v44 = v42;
            if ( v26[v43 + 64] )
            {
              v47 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v26[16 * v43]);
              if ( *(float *)&v47 > v42 )
                v42 = *(float *)&v47;
              v48 = v43;
              v49 = v43 + 1;
              if ( *(float *)&v47 <= v44 )
                v48 = v46;
              v41 = v48;
              if ( v49 < 4 )
              {
                v50 = &v26[v49 + 64];
                while ( 1 )
                {
                  if ( *v50 )
                  {
                    v51 = v49;
                    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                           v45,
                           (float *)&v26[16 * v49]) )
                    {
                      break;
                    }
                  }
                  ++v49;
                  ++v50;
                  if ( v49 >= 4 )
                    goto LABEL_70;
                }
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v45, v52);
                v26[v51 + 64] = 0;
                v5 = 1;
                --*((_DWORD *)this + 148);
              }
            }
LABEL_70:
            v53 = v43 + 1;
            v43 = 0;
            v39 = v5 == 0;
            v5 = 0;
            if ( v39 )
              v43 = v53;
          }
          while ( v43 < 4 );
          v11 = v57;
        }
        if ( v41 )
          CMergedRectBase<4>::SwapExisting((char *)this + 520, 0LL, v41);
      }
LABEL_28:
      LODWORD(a4) = 0;
      v29 = (char *)this + 584;
      v30 = (float *)((char *)this + 532);
      do
      {
        if ( *v29 )
        {
          v33 = *(v30 - 1);
          if ( v33 > *(v30 - 3)
            && *v30 > *(v30 - 2)
            && v22 > v21
            && v19 > v18
            && v33 > v21
            && v22 > *(v30 - 3)
            && *v30 > v18
            && v19 > *(v30 - 2) )
          {
            v38 = (unsigned int)a4;
            goto LABEL_52;
          }
          if ( *((_DWORD *)this + 148) == 4 )
          {
            v57 = *(_OWORD *)(v30 - 3);
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v57, (float *)&v59);
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v57);
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v26[16 * v34]);
            v35 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v59);
            v19 = *((float *)&v59 + 3);
            v22 = *((float *)&v59 + 2);
            v18 = *((float *)&v59 + 1);
            LODWORD(v21) = v59;
            if ( v37 > (float)(v36 - *(float *)&v35) )
              v27 = a4;
          }
        }
        else
        {
          v28 = a4;
        }
        LODWORD(a4) = a4 + 1;
        ++v29;
        v30 += 4;
      }
      while ( (unsigned int)a4 < 4 );
      if ( v28 != -1 )
      {
        *(_OWORD *)&v26[16 * v28] = v59;
        v26[v28 + 64] = 1;
        ++*((_DWORD *)this + 147);
        ++*((_DWORD *)this + 148);
        goto LABEL_34;
      }
      v38 = v27;
LABEL_52:
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v26[16 * v38], (float *)&v59);
      ++*((_DWORD *)this + 147);
LABEL_34:
      ++a2;
      *(_QWORD *)&v57 = --v11;
      if ( !v11 )
      {
        v10 = *((_BYTE *)this + 914);
        v6 = v56;
        break;
      }
    }
  }
  if ( !v10 && *((_BYTE *)this + 913) && a5 )
  {
    *((_BYTE *)this + 912) = 0;
    v31 = 5;
  }
  else
  {
    v31 = v6 + 8;
  }
  CVisual::PropagateFlags((__int64)this, v31, 0);
  CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
  return 0LL;
}
