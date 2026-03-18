/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800678F4
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18005CCEC (-IsOccluded@COcclusionContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180066F88 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18011AA0C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18011BC18 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     McTemplateU0d @ 0x180126994 (McTemplateU0d.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180141638 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x1801418D8 (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180142B90 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180142E20 (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?InsertAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x18014303C (-InsertAt@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBVOverlayPlaneInfo@COverlay.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801434D8 (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180144260 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801442CC (-RectIntersectsDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RemoveAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801444A8 (-RemoveAt@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180144770 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18018F334 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3,
        struct COcclusionContext *a4,
        bool *a5)
{
  const struct CVisualTree *v6; // r12
  __int64 v8; // r9
  char v9; // di
  bool v10; // cf
  float *v11; // rsi
  bool v12; // al
  unsigned int v13; // edx
  int v14; // edx
  __int64 v15; // r14
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  unsigned int v23; // esi
  _QWORD *v24; // r14
  __int64 v25; // r15
  struct COcclusionInfo *OcclusionInfo; // r12
  unsigned int v27; // eax
  unsigned __int8 IsOccluded; // al
  unsigned __int8 v29; // r12
  unsigned int v30; // r14d
  _QWORD *v31; // r15
  __int64 v32; // r12
  __int64 v33; // rsi
  unsigned int OverlayCandidateIndex; // eax
  __int64 v35; // r10
  __int128 v36; // xmm1
  __int64 v37; // rsi
  int v38; // r8d
  bool v39; // zf
  __int64 v40; // rcx
  unsigned int v41; // r14d
  __int64 *v42; // r15
  __int64 v43; // rsi
  __int128 v44; // xmm0
  __int64 v45; // r9
  __int64 v46; // rcx
  unsigned __int64 v47; // r8
  __int64 v48; // r12
  __int64 v49; // rax
  float *v50; // r10
  float v51; // xmm2_4
  __int128 v52; // xmm0
  bool v54; // [rsp+20h] [rbp-E0h]
  float v56; // [rsp+38h] [rbp-C8h] BYREF
  float v57; // [rsp+3Ch] [rbp-C4h]
  float v58; // [rsp+40h] [rbp-C0h]
  float v59; // [rsp+44h] [rbp-BCh]
  _OWORD v60[13]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v61; // [rsp+120h] [rbp+20h]
  __int128 v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+140h] [rbp+40h]

  v6 = a2;
  v54 = 0;
  if ( *((_BYTE *)this + 1176) && a4 )
  {
    v8 = *((unsigned int *)a3 + 279);
    v9 = 1;
    v10 = *((_BYTE *)a3 + 2722) != 0;
    *((_DWORD *)this + 197) = 0;
    v11 = (float *)((char *)a3 + (v10 ? 0x6D0 : 0) + 956);
    if ( *((_BYTE *)a3 + 2722) )
      goto LABEL_12;
    if ( *((_BYTE *)a3 + 2725) )
    {
      v12 = *((_DWORD *)a3 + 279) == 0;
    }
    else
    {
      v13 = 0;
      while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a3 + 4 * v13 + 6) )
      {
        v13 = v14 + 1;
        if ( v13 >= 8 )
          goto LABEL_27;
      }
      v12 = 0;
    }
    if ( !v12 )
    {
LABEL_12:
      if ( (_DWORD)v8 )
      {
        v15 = v8;
        do
        {
          v17 = *((float *)this + 6);
          v18 = v11[1];
          v19 = v11[2];
          v20 = v11[3];
          v56 = *v11;
          v16 = v56;
          v57 = v18;
          v58 = v19;
          v59 = v20;
          if ( v17 > v56 )
          {
            v56 = v17;
            v16 = v17;
          }
          v21 = *((float *)this + 7);
          if ( v21 > v18 )
          {
            v57 = *((float *)this + 7);
            v18 = v21;
          }
          if ( v19 > *((float *)this + 8) )
          {
            v19 = *((float *)this + 8);
            v58 = v19;
          }
          if ( v20 > *((float *)this + 9) )
          {
            v20 = *((float *)this + 9);
            v59 = v20;
          }
          if ( v19 <= v16 || v20 <= v18 )
          {
            v59 = 0.0;
            v58 = 0.0;
            v57 = 0.0;
            v56 = 0.0;
          }
          else
          {
            CMILMatrix::Transform2DBoundsHelper<0>(
              (__int64)this + 584,
              (__int64)&v56,
              (float *)this + 4 * *((unsigned int *)this + 197) + 198);
            ++*((_DWORD *)this + 197);
          }
          v11 += 4;
          --v15;
        }
        while ( v15 );
      }
    }
LABEL_27:
    if ( *((_BYTE *)this + 1172) && *((_DWORD *)this + 35) > 2u && *((_DWORD *)this + 36) > 2u )
    {
      if ( COverlayContext::OverlaysEnabled(this) && *((int *)this + 244) > 0 && *((int *)this + 245) >= 2 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 115) + 8LL))((char *)this + 920);
    }
    else if ( *((int *)this + 244) > 0 )
    {
      if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 119)) )
      {
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                          + 119));
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 18) + 88LL))((__int64)RenderingRealizationNoRef + 144) )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 119) + 104LL) > 2u && !CCommonRegistryData::m_dwOverlayTestMode )
            COverlayContext::ResetOverlayCandidatesList(this);
        }
      }
    }
    v23 = 0;
    if ( *((_DWORD *)this + 52) )
    {
      v24 = (_QWORD *)((char *)this + 184);
      do
      {
        v25 = 248LL * v23;
        OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v25 + *v24 + 8), v6);
        if ( OcclusionInfo )
        {
          CMILMatrix::Transform2DBoundsHelper<0>((__int64)this + 652, v25 + *v24 + 152LL, &v56);
          v27 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
          IsOccluded = COcclusionContext::IsOccluded((__int64)a4, &v56, 0LL, v27);
          v29 = IsOccluded;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            McTemplateU0xq(
              *v24,
              &EVTDESC_OVERLAY_CHECKOCCLUSION,
              *(_QWORD *)(*(_QWORD *)(v25 + *v24 + 24) + 32LL),
              IsOccluded);
          if ( v29 )
          {
            COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v25 + *v24));
            DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 184, v23--);
          }
        }
        v6 = a2;
        ++v23;
      }
      while ( v23 < *((_DWORD *)this + 52) );
    }
    v30 = 0;
    if ( *((_DWORD *)this + 68) )
    {
      v31 = (_QWORD *)((char *)this + 184);
      do
      {
        v32 = 248LL * v30;
        v33 = v32 + *((_QWORD *)this + 31);
        OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                  this,
                                  *(struct CVisual **)(v33 + 8),
                                  *(struct ISwapChainContent **)(v33 + 16),
                                  *(_QWORD *)(v33 + 32));
        if ( OverlayCandidateIndex == -1 )
        {
          if ( !(unsigned __int8)COverlayContext::RectIntersectsDirty(this, v33 + 152) )
          {
            v60[0] = *(_OWORD *)v33;
            v60[1] = *(_OWORD *)(v33 + 16);
            v60[2] = *(_OWORD *)(v33 + 32);
            v60[3] = *(_OWORD *)(v33 + 48);
            v60[4] = *(_OWORD *)(v33 + 64);
            v60[5] = *(_OWORD *)(v33 + 80);
            v60[6] = *(_OWORD *)(v33 + 96);
            v36 = *(_OWORD *)(v33 + 112);
            v37 = v33 + 128;
            v60[7] = v36;
            v60[8] = *(_OWORD *)v37;
            v60[9] = *(_OWORD *)(v37 + 16);
            v60[10] = *(_OWORD *)(v37 + 32);
            v60[11] = *(_OWORD *)(v37 + 48);
            v60[12] = *(_OWORD *)(v37 + 64);
            v61 = *(_OWORD *)(v37 + 80);
            v62 = *(_OWORD *)(v37 + 96);
            v63 = *(_QWORD *)(v37 + 112);
            COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)v60);
            v38 = *((_DWORD *)this + 52) - 1;
            v39 = *((_DWORD *)this + 52) == 0;
            if ( v38 >= -1 )
            {
              while ( !v39 )
              {
                v40 = 248LL * (unsigned int)v38;
                if ( *(_BYTE *)(v40 + *v31 + 192) )
                {
                  if ( *(_DWORD *)(v40 + *v31 + 220) < HIDWORD(v61) )
                    break;
                }
                v39 = --v38 == -1;
                if ( v38 < -1 )
                  goto LABEL_60;
              }
              DynArray<COverlayContext::OverlayPlaneInfo,0>::InsertAt((char *)this + 184, v60, (unsigned int)(v38 + 1));
            }
          }
        }
        else
        {
          COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
            (COverlayContext::OverlayPlaneInfo *)(248LL * OverlayCandidateIndex + *v31),
            (const struct COverlayContext::OverlayPlaneInfo *)v33);
          COverlayContext::ComparePlaneAttributes(
            (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v35 + *v31 + 40LL),
            (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v32 + *((_QWORD *)this + 31) + 40LL),
            (bool *)(v35 + *v31 + 216LL),
            (bool *)(v35 + *v31 + 217LL));
        }
LABEL_60:
        ++v30;
      }
      while ( v30 < *((_DWORD *)this + 68) );
    }
    v41 = 0;
    if ( *((_DWORD *)this + 52) )
    {
      v42 = (__int64 *)((char *)this + 184);
      while ( 1 )
      {
        v43 = 248LL * v41;
        if ( !COverlayContext::IsEligibleForOverlays(
                this,
                (const struct COverlayContext::OverlayPlaneInfo *)(v43 + *v42)) )
          break;
        v48 = *v42;
        if ( *(_BYTE *)(v43 + *v42 + 192)
          || (unsigned __int8)COverlayContext::RectContainedInDirty(this, v43 + v48 + 152) )
        {
          goto LABEL_75;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v49 = *(_QWORD *)(v43 + v48 + 24);
          v45 = 6LL;
          v46 = *(unsigned int *)(v49 + 40);
          v47 = v46 | ((__int64)(int)HIDWORD(*(_QWORD *)(v49 + 40)) << 32);
LABEL_73:
          McTemplateU0xq(v46, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v47, v45);
        }
LABEL_74:
        COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v43 + *v42));
        DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 184, v41--);
LABEL_75:
        if ( ++v41 >= *((_DWORD *)this + 52) )
          goto LABEL_76;
      }
      if ( *(_BYTE *)(v43 + *v42 + 192)
        && !(unsigned __int8)COverlayContext::RectContainedInDirty(this, v43 + *v42 + 152) )
      {
        v44 = *(_OWORD *)((char *)this + 56);
        *((_DWORD *)this + 197) = 1;
        v54 = 1;
        *(_OWORD *)((char *)this + 792) = v44;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_74;
      v45 = 5LL;
      v46 = *(_QWORD *)(v43 + *v42 + 24);
      v47 = *(unsigned int *)(v46 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v46 + 40)) << 32);
      goto LABEL_73;
    }
LABEL_76:
    if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 35) <= 1u) && !*((_DWORD *)this + 41)
      || *((_BYTE *)this + 1173)
      || !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>((char *)this + 584)
      || v50[10] != 1.0
      || *v50 < 1.0
      || (v51 = v50[5], v51 < 1.0)
      || *v50 <= 1.0 && v51 <= 1.0 )
    {
      v9 = 0;
    }
    *((_BYTE *)this + 1185) = v9;
  }
  else if ( *((_DWORD *)this + 68) || *((_BYTE *)this + 1183) || *((_QWORD *)this + 131) )
  {
    v52 = *(_OWORD *)((char *)this + 56);
    *((_BYTE *)this + 1185) = 0;
    *((_DWORD *)this + 197) = 1;
    *(_OWORD *)((char *)this + 792) = v52;
    v54 = 1;
  }
  *((_BYTE *)this + 1176) = 0;
  **((_DWORD **)this + 132) = 0;
  *((_BYTE *)this + 1192) = 0;
  *((_DWORD *)this + 288) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1128, 16LL);
  *a5 = v54;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
