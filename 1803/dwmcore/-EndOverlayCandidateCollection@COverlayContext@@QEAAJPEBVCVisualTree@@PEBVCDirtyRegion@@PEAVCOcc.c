/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18000F5D8 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007A6F0 (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800A8DCC (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18013C568 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18013E7C8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180165298 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z @ 0x180165538 (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEBV12@@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180165F98 (-FindOverlayCandidateIndex@COverlayContext@@AEBAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180166254 (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?InsertAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180166470 (-InsertAt@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBVOverlayPlaneInfo@COverlay.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180166910 (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?RectContainedInDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801674B0 (-RectContainedInDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180167520 (-RectIntersectsDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?RemoveAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801675CC (-RemoveAt@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180167830 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     McTemplateU0d @ 0x180167AC0 (McTemplateU0d.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3,
        struct COcclusionContext *a4,
        bool *a5)
{
  __int64 v5; // r14
  const struct CVisualTree *v7; // r12
  char v9; // di
  __int64 v10; // r9
  bool v11; // cf
  char *v12; // rsi
  bool v13; // al
  __int64 v14; // r15
  float v15; // xmm3_4
  float v16; // xmm4_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm4_4
  float v22; // xmm4_4
  unsigned int v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // r15d
  unsigned int v26; // esi
  unsigned int v28; // edx
  int v29; // edx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  _QWORD *v31; // r15
  __int64 v32; // r14
  struct COcclusionInfo *OcclusionInfo; // r12
  unsigned int v34; // eax
  unsigned __int8 IsOccluded; // al
  unsigned __int8 v36; // r12
  unsigned int v37; // r10d
  unsigned int v38; // ecx
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rdx
  _QWORD *v42; // r12
  __int64 v43; // r14
  unsigned int OverlayCandidateIndex; // eax
  _OWORD *v45; // rsi
  __int64 v46; // r10
  __int128 v47; // xmm1
  _OWORD *v48; // rsi
  int v49; // r8d
  bool v50; // zf
  __int64 v51; // rcx
  _QWORD *v52; // r12
  __int64 v53; // r14
  bool IsEligibleForOverlays; // al
  __int64 v55; // r15
  char v56; // cl
  __int128 v57; // xmm0
  __int64 v58; // r9
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rax
  float *v62; // r10
  float v63; // xmm2_4
  __int128 v64; // xmm0
  _BOOL8 v65; // [rsp+20h] [rbp-E0h]
  const struct CVisualTree *v66; // [rsp+28h] [rbp-D8h]
  float v67; // [rsp+38h] [rbp-C8h] BYREF
  float v68; // [rsp+3Ch] [rbp-C4h]
  float v69; // [rsp+40h] [rbp-C0h]
  float v70; // [rsp+44h] [rbp-BCh]
  _OWORD v71[13]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v72; // [rsp+120h] [rbp+20h]
  __int128 v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+140h] [rbp+40h]

  v5 = 0LL;
  v7 = a2;
  v66 = a2;
  LOBYTE(v65) = 0;
  if ( *((_BYTE *)this + 1188) && a4 )
  {
    v9 = 1;
    v10 = *((unsigned int *)a3 + 319);
    v11 = *((_BYTE *)a3 + 2883) != 0;
    *((_DWORD *)this + 199) = 0;
    v12 = (char *)a3 + (v11 ? 2860LL : 1116LL);
    if ( *((_BYTE *)a3 + 2883) )
      goto LABEL_7;
    if ( *((_BYTE *)a3 + 2886) )
    {
      v13 = *((_DWORD *)a3 + 319) == 0;
    }
    else
    {
      v28 = 0;
      while ( IsEmpty((const struct D2D_RECT_F *)((char *)a3 + 16 * v28 + 24)) )
      {
        v28 = v29 + 1;
        if ( v28 >= 8 )
          goto LABEL_21;
      }
      v13 = 0;
    }
    if ( !v13 )
    {
LABEL_7:
      if ( (_DWORD)v10 )
      {
        v14 = v10;
        do
        {
          v16 = *((float *)this + 6);
          v17 = *(float *)&v12[v5 + 4];
          v18 = *(float *)&v12[v5 + 8];
          v19 = *(float *)&v12[v5 + 12];
          v67 = *(float *)&v12[v5];
          v15 = v67;
          v68 = v17;
          v69 = v18;
          v70 = v19;
          if ( v16 > v67 )
          {
            v67 = v16;
            v15 = v16;
          }
          v20 = *((float *)this + 7);
          if ( v20 > v17 )
          {
            v68 = *((float *)this + 7);
            v17 = v20;
          }
          v21 = *((float *)this + 8);
          if ( v18 > v21 )
          {
            v69 = *((float *)this + 8);
            v18 = v21;
          }
          v22 = *((float *)this + 9);
          if ( v19 > v22 )
          {
            v70 = *((float *)this + 9);
            v19 = v22;
          }
          if ( v18 <= v15 || v19 <= v17 )
          {
            v70 = 0.0;
            v69 = 0.0;
            v68 = 0.0;
            v67 = 0.0;
          }
          else
          {
            CMILMatrix::Transform2DBoundsHelper<0>((COverlayContext *)((char *)this + 592));
            ++*((_DWORD *)this + 199);
          }
          v5 += 16LL;
          --v14;
        }
        while ( v14 );
      }
    }
LABEL_21:
    if ( *((_BYTE *)this + 1184) && *((_DWORD *)this + 36) > 2u && *((_DWORD *)this + 37) > 2u )
    {
      if ( COverlayContext::OverlaysEnabled(this) && *((int *)this + 246) > 0 && *((int *)this + 247) >= 2 )
        (*(void (__fastcall **)(char *))(*((_QWORD *)this + 116) + 8LL))((char *)this + 928);
    }
    else if ( *((int *)this + 246) > 0 )
    {
      if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 120)) )
      {
        RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                          + 120));
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 18) + 88LL))((__int64)RenderingRealizationNoRef + 144) )
        {
          if ( *(_DWORD *)(*((_QWORD *)this + 120) + 104LL) > 2u && !CCommonRegistryData::m_dwOverlayTestMode )
            COverlayContext::ResetOverlayCandidatesList(this);
        }
      }
    }
    v23 = *((_DWORD *)this + 54);
    v24 = 0;
    if ( !v23 )
    {
LABEL_24:
      v25 = 0;
      if ( *((_DWORD *)this + 70) )
      {
        v42 = (_QWORD *)((char *)this + 192);
        do
        {
          v43 = 248LL * v25;
          OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                    this,
                                    *(struct CVisual **)(v43 + *((_QWORD *)this + 32) + 8),
                                    *(struct ISwapChainContent **)(v43 + *((_QWORD *)this + 32) + 16),
                                    *(_QWORD *)(v43 + *((_QWORD *)this + 32) + 32));
          v45 = (_OWORD *)(v43 + *((_QWORD *)this + 32));
          if ( OverlayCandidateIndex == -1 )
          {
            if ( !(unsigned __int8)COverlayContext::RectIntersectsDirty(this, (char *)v45 + 152) )
            {
              v71[0] = *v45;
              v71[1] = v45[1];
              v71[2] = v45[2];
              v71[3] = v45[3];
              v71[4] = v45[4];
              v71[5] = v45[5];
              v71[6] = v45[6];
              v47 = v45[7];
              v48 = v45 + 8;
              v71[7] = v47;
              v71[8] = *v48;
              v71[9] = v48[1];
              v71[10] = v48[2];
              v71[11] = v48[3];
              v71[12] = v48[4];
              v72 = v48[5];
              v73 = v48[6];
              v74 = *((_QWORD *)v48 + 14);
              COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)v71);
              v49 = *((_DWORD *)this + 54) - 1;
              v50 = *((_DWORD *)this + 54) == 0;
              if ( v49 >= -1 )
              {
                while ( !v50 )
                {
                  v51 = 248LL * (unsigned int)v49;
                  if ( *(_BYTE *)(v51 + *v42 + 192) )
                  {
                    if ( *(_DWORD *)(v51 + *v42 + 220) < HIDWORD(v72) )
                      break;
                  }
                  v50 = --v49 == -1;
                  if ( v49 < -1 )
                    goto LABEL_81;
                }
                DynArray<COverlayContext::OverlayPlaneInfo,0>::InsertAt(
                  (char *)this + 192,
                  v71,
                  (unsigned int)(v49 + 1));
              }
            }
          }
          else
          {
            COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
              (COverlayContext::OverlayPlaneInfo *)(248LL * OverlayCandidateIndex + *v42),
              (const struct COverlayContext::OverlayPlaneInfo *)(v43 + *((_QWORD *)this + 32)));
            COverlayContext::ComparePlaneAttributes(
              (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v46 + *v42 + 40LL),
              (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(v43 + *((_QWORD *)this + 32) + 40LL),
              (bool *)(v46 + *v42 + 216LL),
              (bool *)(v46 + *v42 + 217LL));
          }
LABEL_81:
          ++v25;
        }
        while ( v25 < *((_DWORD *)this + 70) );
        v23 = *((_DWORD *)this + 54);
      }
      v26 = 0;
      if ( !v23 )
      {
LABEL_26:
        if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 36) <= 1u) && !*((_DWORD *)this + 42)
          || *((_BYTE *)this + 1185)
          || *((_BYTE *)this + 1187)
          || !CMILMatrix::IsTranslateAndScale<1>((__int64)this + 592)
          || v62[10] != 1.0
          || *v62 < 1.0
          || (v63 = v62[5], v63 < 1.0)
          || *v62 <= 1.0 && v63 <= 1.0 )
        {
          v9 = 0;
        }
        *((_BYTE *)this + 1197) = v9;
        goto LABEL_31;
      }
      v52 = (_QWORD *)((char *)this + 192);
      while ( 1 )
      {
        v53 = 248LL * v26;
        IsEligibleForOverlays = COverlayContext::IsEligibleForOverlays(
                                  this,
                                  (const struct COverlayContext::OverlayPlaneInfo *)(v53 + *v52));
        v55 = *((_QWORD *)this + 24);
        v56 = *(_BYTE *)(v53 + v55 + 192);
        if ( !IsEligibleForOverlays )
          break;
        if ( v56 || (unsigned __int8)COverlayContext::RectContainedInDirty(this, v53 + v55 + 152) )
          goto LABEL_96;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v58 = 6LL;
          v59 = *(_QWORD *)(*(_QWORD *)(v53 + v55 + 24) + 40LL);
          v60 = SHIDWORD(v59);
          v61 = (unsigned int)v59;
LABEL_94:
          McTemplateU0xq(v59, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v61 | (v60 << 32), v58);
        }
LABEL_95:
        COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v53 + *v52));
        DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 192, v26--);
LABEL_96:
        if ( ++v26 >= *((_DWORD *)this + 54) )
          goto LABEL_26;
      }
      if ( v56 && !(unsigned __int8)COverlayContext::RectContainedInDirty(this, v53 + v55 + 152) )
      {
        v57 = *(_OWORD *)((char *)this + 56);
        *((_DWORD *)this + 199) = 1;
        LOBYTE(v65) = 1;
        *((_OWORD *)this + 50) = v57;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_95;
      v58 = 5LL;
      v59 = *(_QWORD *)(v53 + *v52 + 24);
      v60 = (int)HIDWORD(*(_QWORD *)(v59 + 40));
      v61 = *(unsigned int *)(v59 + 40);
      goto LABEL_94;
    }
    v31 = (_QWORD *)((char *)this + 192);
    while ( 1 )
    {
      v32 = 248LL * v24;
      OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(*v31 + v32 + 8), v7);
      if ( OcclusionInfo )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((COverlayContext *)((char *)this + 660));
        v34 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
        IsOccluded = COcclusionContext::IsOccluded(a4, &v67, 0LL, v34, v65, v66);
        v36 = IsOccluded;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xq(
            *v31,
            &EVTDESC_OVERLAY_CHECKOCCLUSION,
            *(_QWORD *)(*(_QWORD *)(*v31 + v32 + 24) + 32LL),
            IsOccluded);
        if ( v36 )
          goto LABEL_67;
      }
      v37 = *((_DWORD *)this + 70);
      v38 = 0;
      if ( v37 )
        break;
LABEL_68:
      v23 = *((_DWORD *)this + 54);
      ++v24;
      v7 = v66;
      if ( v24 >= v23 )
        goto LABEL_24;
    }
    v39 = *v31;
    v40 = *((_QWORD *)this + 32);
    while ( 1 )
    {
      v41 = 248LL * v38;
      if ( *(_QWORD *)(*v31 + v32 + 24) == *(_QWORD *)(v41 + v40 + 24)
        && (*(_QWORD *)(v39 + v32 + 8) != *(_QWORD *)(v41 + v40 + 8)
         || *(_QWORD *)(v39 + v32 + 16) != *(_QWORD *)(v41 + v40 + 16)) )
      {
        break;
      }
      if ( ++v38 >= v37 )
        goto LABEL_68;
    }
LABEL_67:
    COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v32 + *v31));
    DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 192, v24--);
    goto LABEL_68;
  }
  if ( *((_DWORD *)this + 70) || *((_BYTE *)this + 1195) || *((_QWORD *)this + 132) )
  {
    v64 = *(_OWORD *)((char *)this + 56);
    *((_BYTE *)this + 1197) = 0;
    *((_DWORD *)this + 199) = 1;
    *((_OWORD *)this + 50) = v64;
    LOBYTE(v65) = 1;
  }
LABEL_31:
  *((_BYTE *)this + 1188) = 0;
  **((_DWORD **)this + 133) = 0;
  *((_BYTE *)this + 1204) = 0;
  *((_DWORD *)this + 290) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1136, 0x10u);
  *a5 = v65;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0d(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
