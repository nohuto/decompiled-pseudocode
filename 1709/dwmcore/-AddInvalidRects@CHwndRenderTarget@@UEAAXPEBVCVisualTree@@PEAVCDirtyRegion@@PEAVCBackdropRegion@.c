/*
 * XREFs of ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180017DC0
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180030CC0 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?GetRectBounds@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800330D0 (-GetRectBounds@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180034434 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800368B4 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036948 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18004E5FC (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x18011BB84 (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180147CC0 (-ConvertAnyDirtyToFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x180148E9C (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 */

void __fastcall CHwndRenderTarget::AddInvalidRects(
        CHwndRenderTarget *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  _DWORD *v4; // r10
  char *v5; // rdi
  bool v6; // r14
  float v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  CDirectFlipInfo *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int8 v19; // di
  bool v20; // zf
  __int64 *v21; // r14
  char *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rax
  __int128 v27; // xmm6
  CVisual *v28; // r15
  __int64 v29; // rax
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  __int64 v34; // rax
  __int64 v35; // r14
  unsigned int i; // r9d
  int v37; // r9d
  int v38; // eax
  __int128 v39; // xmm0
  unsigned int v40; // eax
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // xmm1_8
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned int v46; // r9d
  unsigned int v47; // edx
  __int64 v48; // r8
  int v49; // eax
  __int128 v50; // xmm0
  unsigned int v51; // eax
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // xmm1_8
  __int64 v55; // rcx
  __int64 v56; // [rsp+30h] [rbp-49h] BYREF
  __int64 v57; // [rsp+38h] [rbp-41h] BYREF
  __int64 v58; // [rsp+40h] [rbp-39h]
  __int128 v59; // [rsp+48h] [rbp-31h] BYREF
  __int128 v60; // [rsp+58h] [rbp-21h]
  _BYTE v61[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v62[16]; // [rsp+78h] [rbp-1h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 5);
  v5 = (char *)this - 72;
  v6 = 0;
  if ( !v4 )
    goto LABEL_5;
  if ( ((v4[73] - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v4[22] - v4[20] == v4[27] - v4[25] && v4[23] - v4[21] == v4[26] - v4[24] )
      goto LABEL_5;
LABEL_50:
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v5 + 192LL))(v5) )
    {
      v34 = *((_QWORD *)v5 + 99);
      if ( v34 )
        v6 = *(_BYTE *)(v34 + 1183) == 0;
    }
    goto LABEL_5;
  }
  if ( v4[22] - v4[20] != v4[26] - v4[24] || v4[23] - v4[21] != v4[27] - v4[25] )
    goto LABEL_50;
LABEL_5:
  *((_BYTE *)a3 + 2724) |= v6;
  v11 = 1.0
      / (float)((float)(*((float *)v5 + 46) * *((float *)v5 + 41)) - (float)(*((float *)v5 + 45) * *((float *)v5 + 42)));
  if ( v11 > *((float *)a3 + 679) )
    *((float *)a3 + 679) = v11;
  v12 = *((_QWORD *)v5 + 16);
  if ( v12 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v12 + 48LL))(v12)
      && (!*(_DWORD *)(*((_QWORD *)v5 + 2) + 260LL) || v5[809]) )
    {
      v5[806] = 1;
    }
    else
    {
      if ( v5[806] )
        v5[802] = 1;
      v5[806] = 0;
    }
  }
  if ( *((_BYTE *)this + 730) )
  {
    CDirtyRegion::SetFullDirty(a3);
  }
  else
  {
    if ( (*((_BYTE *)this + 300) & 8) == 0 )
      CDirtyRegion::ConvertAnyDirtyToFullDirty(a3);
    v13 = *((_QWORD *)this + 52);
    if ( *((_DWORD *)this + 110) )
    {
      v35 = *((unsigned int *)this + 110);
      do
      {
        CDirtyRegion::Add(a3);
        v13 += 16LL;
        --v35;
      }
      while ( v35 );
    }
    v14 = *((_QWORD *)this + 90);
    if ( v14 )
    {
      v15 = *(CDirectFlipInfo **)(v14 + 1048);
      if ( v15 )
        CDirectFlipInfo::AddOverdrawToDirtyRegion(v15, a3, (CHwndRenderTarget *)((char *)this + 92));
    }
  }
  v16 = *((_QWORD *)this + 6);
  if ( v16 )
  {
    if ( (*(int (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v16 + 88LL))(v16, &v56, 0LL) >= 0 )
    {
      v19 = 0;
      if ( !CD3DDeviceManager::s_bHwProtectionTempDisabled && !CD3DDeviceManager::s_bHwProtectionTeardown )
      {
        v17 = (unsigned int)dword_18026EF48;
        v18 = 0LL;
        if ( dword_18026EF48 )
        {
          while ( *(_QWORD *)(qword_18026EF30 + 12 * v18) != v56 )
          {
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= dword_18026EF48 )
              goto LABEL_20;
          }
          v19 = *(_DWORD *)(qword_18026EF30 + 12 * v18 + 8) != 0;
        }
      }
LABEL_20:
      if ( v19 != (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 6) + 152LL))(
                    *((_QWORD *)this + 6),
                    v17,
                    v18) )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 6) + 144LL))(*((_QWORD *)this + 6), v19);
        CDirtyRegion::SetFullDirty(a3);
      }
    }
    if ( *(_DWORD *)(*((_QWORD *)this - 7) + 1280LL) && !CDirtyRegion::IsEmpty(a3) )
      *((_BYTE *)a3 + 2721) = 1;
    v20 = *((_BYTE *)a3 + 2725) == 0;
    v21 = (__int64 *)*((_QWORD *)this + 6);
    v59 = 0uLL;
    if ( v20 )
    {
      v22 = (char *)a3 + 24;
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v59, v22);
        v22 = (char *)(v23 + 16);
      }
      while ( v24 != 1 );
    }
    else
    {
      for ( i = 0; i < *((_DWORD *)a3 + 279); i = v37 + 1 )
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v59, (char *)a3 + 16 * i + 956);
    }
    v25 = 0LL;
    while ( (unsigned int)v25 < *((_DWORD *)a4 + 10) )
    {
      v26 = *((_QWORD *)a4 + 2);
      v27 = *(_OWORD *)(v26 + 24 * v25 + 8);
      v28 = *(CVisual **)(v26 + 24 * v25);
      v29 = *v21;
      v60 = v27;
      (*(void (__fastcall **)(__int64 *, __int64 *))(v29 + 288))(v21, &v57);
      v30 = *(float *)&v57;
      if ( *(float *)&v27 > *(float *)&v57 )
      {
        LODWORD(v57) = v27;
        v30 = *(float *)&v27;
      }
      v31 = *((float *)&v57 + 1);
      if ( *((float *)&v60 + 1) > *((float *)&v57 + 1) )
      {
        HIDWORD(v57) = DWORD1(v60);
        v31 = *((float *)&v60 + 1);
      }
      v32 = *(float *)&v58;
      if ( *(float *)&v58 > *((float *)&v60 + 2) )
      {
        LODWORD(v58) = DWORD2(v60);
        v32 = *((float *)&v60 + 2);
      }
      v33 = *((float *)&v58 + 1);
      if ( *((float *)&v58 + 1) > *((float *)&v60 + 3) )
      {
        HIDWORD(v58) = HIDWORD(v60);
        v33 = *((float *)&v60 + 3);
      }
      if ( v32 <= v30 || v33 <= v31 )
      {
        v58 = 0LL;
        v57 = 0LL;
      }
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v59, &v57)
        && (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(&v59, &v57) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v28 + 26) + 4LL) & 0x10000) != 0 )
        {
          if ( !*((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal(v28) + 285) )
          {
            v38 = CDirtyRegion::Add(a3);
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x4Au);
              break;
            }
            v39 = *(_OWORD *)CDirtyRegion::GetRectBounds(a3, v61);
            v40 = *((_DWORD *)a4 + 10);
            v59 = v39;
            if ( (unsigned int)v25 < v40 )
            {
              v41 = *((_QWORD *)a4 + 2);
              if ( (unsigned int)v25 < v40 - 1 )
              {
                do
                {
                  v42 = (unsigned int)v25;
                  LODWORD(v25) = v25 + 1;
                  v43 = *(_QWORD *)(v41 + 24LL * (unsigned int)v25 + 16);
                  v44 = 3 * v42;
                  *(_OWORD *)(v41 + 8 * v44) = *(_OWORD *)(v41 + 24LL * (unsigned int)v25);
                  *(_QWORD *)(v41 + 8 * v44 + 16) = v43;
                }
                while ( (unsigned int)v25 < *((_DWORD *)a4 + 10) - 1 );
              }
              goto LABEL_93;
            }
            goto LABEL_74;
          }
        }
        else
        {
          v45 = *((_QWORD *)CVisual::FindTreeData(v28, a2) + 16);
          if ( !v45 )
            goto LABEL_89;
          while ( *(__int64 **)(v45 + 16) != v21 )
          {
            v45 = *(_QWORD *)(v45 + 88);
            if ( !v45 )
              goto LABEL_89;
          }
          v46 = *(_DWORD *)(v45 + 48);
          v47 = 0;
          if ( !v46 )
            goto LABEL_89;
          v48 = *(_QWORD *)(v45 + 24);
          while ( *(_DWORD *)(v48 + 16LL * v47) )
          {
            if ( ++v47 >= v46 )
              goto LABEL_89;
          }
          if ( !*(_QWORD *)(v48 + 16LL * v47 + 8) || CCommonRegistryData::m_fDisableDrawListCaching )
          {
LABEL_89:
            v49 = CDirtyRegion::Add(a3);
            if ( v49 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v49, 0x5Eu);
              break;
            }
            v50 = *(_OWORD *)CDirtyRegion::GetRectBounds(a3, v62);
            v51 = *((_DWORD *)a4 + 10);
            v59 = v50;
            if ( (unsigned int)v25 < v51 )
            {
              v52 = *((_QWORD *)a4 + 2);
              if ( (unsigned int)v25 < v51 - 1 )
              {
                do
                {
                  v53 = (unsigned int)v25;
                  LODWORD(v25) = v25 + 1;
                  v54 = *(_QWORD *)(v52 + 24LL * (unsigned int)v25 + 16);
                  v55 = 3 * v53;
                  *(_OWORD *)(v52 + 8 * v55) = *(_OWORD *)(v52 + 24LL * (unsigned int)v25);
                  *(_QWORD *)(v52 + 8 * v55 + 16) = v54;
                }
                while ( (unsigned int)v25 < *((_DWORD *)a4 + 10) - 1 );
              }
LABEL_93:
              --*((_DWORD *)a4 + 10);
LABEL_94:
              v25 = 0LL;
              continue;
            }
LABEL_74:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x193u);
            goto LABEL_94;
          }
        }
      }
      v25 = (unsigned int)(v25 + 1);
    }
  }
  *((_BYTE *)this + 730) = 0;
  *((_DWORD *)this + 110) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 416, 16LL);
}
