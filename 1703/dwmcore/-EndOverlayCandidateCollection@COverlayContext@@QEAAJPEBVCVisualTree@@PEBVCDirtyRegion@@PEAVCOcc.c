/*
 * XREFs of ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180072060
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800113A0 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18001382C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001D074 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007166C (-ResetOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z @ 0x1800CBF38 (-ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?OverlaysEnabled@COverlayContext@@AEAA_NXZ @ 0x180131E50 (-OverlaysEnabled@COverlayContext@@AEAA_NXZ.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 *     ?CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEAU12@@Z @ 0x1801502BC (-CopyTransientProperties@OverlayPlaneInfo@COverlayContext@@QEAAXAEAU12@@Z.c)
 *     ?FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z @ 0x180150C68 (-FindOverlayCandidateIndex@COverlayContext@@AEAAHPEAVCVisual@@PEAVISwapChainContent@@_K@Z.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180150F3C (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?InsertAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x18015115C (-InsertAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBUOverlayPlaneInfo@COverlay.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151368 (-IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?RectContainedInRegionRect@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x180151D64 (-RectContainedInRegionRect@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?RectIntersectsRegion@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x180151DA4 (-RectIntersectsRegion@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?RemoveAt@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x180151E44 (-RemoveAt@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180151FC8 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 */

__int64 __fastcall COverlayContext::EndOverlayCandidateCollection(
        COverlayContext *this,
        const struct CVisualTree *a2,
        const struct CDirtyRegion *a3,
        struct COcclusionContext *a4,
        bool *a5)
{
  char v7; // r14
  bool *v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax
  __int128 *v11; // rbx
  unsigned int v12; // esi
  unsigned int i; // ebx
  unsigned int v14; // esi
  char v15; // bl
  __int64 v16; // rcx
  float v18; // xmm4_4
  __int64 v19; // rcx
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm5_4
  __int64 v23; // rax
  float *v24; // rax
  unsigned int v25; // edx
  int v26; // edx
  __int64 v27; // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v29; // r13
  struct COcclusionInfo *OcclusionInfo; // rax
  __int64 v31; // rbx
  unsigned int v32; // eax
  unsigned __int8 IsOccluded; // al
  unsigned __int8 v34; // bl
  __int64 v35; // r12
  __int64 v36; // rsi
  unsigned int OverlayCandidateIndex; // eax
  __int64 v38; // r8
  __int128 v39; // xmm1
  _OWORD *v40; // rsi
  int v41; // r8d
  bool v42; // zf
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // rbp
  __int64 v46; // r12
  _OWORD *v47; // r8
  __int128 v48; // xmm0
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // r13
  __int128 v52; // xmm0
  __int128 v54; // [rsp+30h] [rbp-158h] BYREF
  _OWORD v55[13]; // [rsp+40h] [rbp-148h] BYREF
  __int128 v56; // [rsp+110h] [rbp-78h]
  __int128 v57; // [rsp+120h] [rbp-68h]

  v7 = 0;
  v8 = a5;
  if ( *((_BYTE *)this + 1088) && a4 )
  {
    v9 = *((unsigned int *)a3 + 280);
    if ( *((_BYTE *)a3 + 2724) )
      v10 = 2708LL;
    else
      v10 = 960LL;
    *((_DWORD *)this + 183) = 0;
    v11 = (__int128 *)((char *)a3 + v10);
    if ( !*((_BYTE *)a3 + 2724) )
    {
      if ( *((_BYTE *)a3 + 2726) )
      {
        if ( !*((_DWORD *)a3 + 280) )
        {
LABEL_8:
          if ( CCommonRegistryData::m_fEnableDesktopPlaneSplit
            && *((_DWORD *)this + 32) > 2u
            && *((_DWORD *)this + 33) > 2u
            && (v27 = *((_QWORD *)this + 9), *(_DWORD *)(v27 + 248) == 1297040209)
            && *(int *)(v27 + 244) >= 2000 )
          {
            if ( COverlayContext::OverlaysEnabled(this) && *((int *)this + 232) > 0 && *((_BYTE *)this + 912) )
              (*(void (__fastcall **)(char *))(*((_QWORD *)this + 108) + 8LL))((char *)this + 864);
          }
          else if ( *((int *)this + 232) > 0 )
          {
            if ( CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this + 112)) )
            {
              RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)this
                                                                                                + 112));
              if ( (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 13) + 104LL))((__int64)RenderingRealizationNoRef + 104) )
              {
                if ( *(_DWORD *)(*((_QWORD *)this + 112) + 104LL) > 2u && !CCommonRegistryData::m_dwOverlayTestMode )
                  COverlayContext::ResetOverlayCandidatesList(this);
              }
            }
          }
          v12 = 0;
          if ( *((_DWORD *)this + 50) )
          {
            do
            {
              v29 = 240LL * v12;
              OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(*((_QWORD *)this + 22) + v29 + 8), a2);
              if ( OcclusionInfo )
              {
                v31 = *((_QWORD *)this + 22);
                v32 = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
                IsOccluded = COcclusionContext::IsOccluded((__int64)a4, v29 + v31 + 144, 0LL, v32);
                v34 = IsOccluded;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                  Template_xd(
                    *((_QWORD *)this + 22),
                    &EVTDESC_OVERLAY_CHECKOCCLUSION,
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 22) + v29 + 24) + 32LL),
                    IsOccluded);
                if ( v34 )
                {
                  COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v29
                                                                                               + *((_QWORD *)this + 22)));
                  DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 176, v12--);
                }
              }
              ++v12;
            }
            while ( v12 < *((_DWORD *)this + 50) );
            v8 = a5;
          }
          for ( i = 0; i < *((_DWORD *)this + 66); ++i )
          {
            v35 = 240LL * i;
            v36 = v35 + *((_QWORD *)this + 30);
            OverlayCandidateIndex = COverlayContext::FindOverlayCandidateIndex(
                                      this,
                                      *(struct CVisual **)(v36 + 8),
                                      *(struct ISwapChainContent **)(v36 + 16),
                                      *(_QWORD *)(v36 + 32));
            if ( OverlayCandidateIndex == -1 )
            {
              if ( !(unsigned __int8)COverlayContext::RectIntersectsRegion(
                                       v36 + 144,
                                       *((unsigned int *)this + 183),
                                       (char *)this + 736) )
              {
                v55[0] = *(_OWORD *)v36;
                v55[1] = *(_OWORD *)(v36 + 16);
                v55[2] = *(_OWORD *)(v36 + 32);
                v55[3] = *(_OWORD *)(v36 + 48);
                v55[4] = *(_OWORD *)(v36 + 64);
                v55[5] = *(_OWORD *)(v36 + 80);
                v55[6] = *(_OWORD *)(v36 + 96);
                v39 = *(_OWORD *)(v36 + 112);
                v40 = (_OWORD *)(v36 + 128);
                v55[7] = v39;
                v55[8] = *v40;
                v55[9] = v40[1];
                v55[10] = v40[2];
                v55[11] = v40[3];
                v55[12] = v40[4];
                v56 = v40[5];
                v57 = v40[6];
                COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)v55);
                v41 = *((_DWORD *)this + 50) - 1;
                v42 = *((_DWORD *)this + 50) == 0;
                if ( v41 >= -1 )
                {
                  while ( !v42 )
                  {
                    v43 = 240LL * (unsigned int)v41;
                    v44 = *((_QWORD *)this + 22);
                    if ( *(_BYTE *)(v43 + v44 + 184) )
                    {
                      if ( *(_DWORD *)(v43 + v44 + 212) < DWORD1(v56) )
                        break;
                    }
                    v42 = --v41 == -1;
                    if ( v41 < -1 )
                      goto LABEL_76;
                  }
                  DynArray<COverlayContext::OverlayPlaneInfo,0>::InsertAt(
                    (char *)this + 176,
                    v55,
                    (unsigned int)(v41 + 1));
                }
              }
            }
            else
            {
              COverlayContext::OverlayPlaneInfo::CopyTransientProperties(
                (COverlayContext::OverlayPlaneInfo *)(240LL * OverlayCandidateIndex + *((_QWORD *)this + 22)),
                (struct COverlayContext::OverlayPlaneInfo *)v36);
              COverlayContext::ComparePlaneAttributes(
                (struct COverlayContext::OverlayPlaneInfo *)(v38 + *((_QWORD *)this + 22)),
                (struct COverlayContext::OverlayPlaneInfo *)(v35 + *((_QWORD *)this + 30)),
                (bool *)(v38 + *((_QWORD *)this + 22) + 208),
                (bool *)(v38 + *((_QWORD *)this + 22) + 209));
            }
LABEL_76:
            ;
          }
          v14 = 0;
          v15 = 1;
          if ( !*((_DWORD *)this + 50) )
          {
LABEL_14:
            if ( (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 32) <= 1u)
              && !*((_DWORD *)this + 38)
              || !CMILMatrix::IsTranslateAndScale<1>((__int64)this + 528)
              || (unsigned __int8)CMILMatrix::IsIdentity<0>((char *)this + 528)
              || *((float *)this + 132) < 1.0
              || *((float *)this + 137) < 1.0 )
            {
              v15 = 0;
            }
            *((_BYTE *)this + 1099) = v15;
            goto LABEL_19;
          }
          v45 = (__int64 *)((char *)this + 176);
          while ( 1 )
          {
            v46 = 240LL * v14;
            if ( !COverlayContext::IsEligibleForOverlays(this, (struct COverlayContext::OverlayPlaneInfo *)(v46 + *v45)) )
              break;
            v51 = *v45;
            if ( *(_BYTE *)(v46 + *v45 + 184)
              || (unsigned __int8)COverlayContext::RectContainedInRegionRect(
                                    v46 + v51 + 144,
                                    *((unsigned int *)this + 183),
                                    (char *)this + 736) )
            {
              goto LABEL_91;
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            {
              v50 = *(_QWORD *)(v46 + v51 + 24);
              v49 = 6LL;
LABEL_89:
              Template_xd(
                (unsigned int)*(_QWORD *)(v50 + 40),
                &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
                (unsigned int)*(_QWORD *)(v50 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v50 + 40)) << 32),
                v49);
            }
LABEL_90:
            COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(v46 + *v45));
            DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt((char *)this + 176, v14--);
LABEL_91:
            if ( ++v14 >= *((_DWORD *)this + 50) )
              goto LABEL_14;
          }
          if ( *(_BYTE *)(v46 + *v45 + 184)
            && !(unsigned __int8)COverlayContext::RectContainedInRegionRect(
                                   v46 + *v45 + 144,
                                   *((unsigned int *)this + 183),
                                   (char *)this + 736) )
          {
            v48 = *(_OWORD *)((char *)this + 40);
            *((_DWORD *)this + 183) = 1;
            v7 = 1;
            *v47 = v48;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
            goto LABEL_90;
          v49 = 5LL;
          v50 = *(_QWORD *)(v46 + *v45 + 24);
          goto LABEL_89;
        }
      }
      else
      {
        v25 = 0;
        while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)a3 + 4 * v25 + 6) )
        {
          v25 = v26 + 1;
          if ( v25 >= 8 )
            goto LABEL_8;
        }
      }
    }
    CMILMatrix::Transform2DBoundsHelper<0>((char *)this + 596, (char *)this + 24, &v54);
    if ( (_DWORD)v9 )
    {
      v18 = *((float *)&v54 + 3);
      v19 = v9;
      v20 = *((float *)&v54 + 2);
      v21 = *((float *)&v54 + 1);
      v22 = *(float *)&v54;
      do
      {
        v23 = 2 * (*((unsigned int *)this + 183) + 46LL);
        v54 = *v11;
        *(_OWORD *)((char *)this + 8 * v23) = v54;
        v24 = (float *)((char *)this + 16 * *((unsigned int *)this + 183) + 736);
        if ( v22 > *v24 )
          *v24 = v22;
        if ( v21 > v24[1] )
          v24[1] = v21;
        if ( v24[2] > v20 )
          v24[2] = v20;
        if ( v24[3] > v18 )
          v24[3] = v18;
        if ( v24[2] <= *v24 || v24[3] <= v24[1] )
        {
          *((_QWORD *)v24 + 1) = 0LL;
          *(_QWORD *)v24 = 0LL;
        }
        else
        {
          ++*((_DWORD *)this + 183);
        }
        ++v11;
        --v19;
      }
      while ( v19 );
    }
    goto LABEL_8;
  }
  if ( *((_DWORD *)this + 66) || *((_BYTE *)this + 1097) || *((_QWORD *)this + 121) )
  {
    v52 = *(_OWORD *)((char *)this + 40);
    *((_BYTE *)this + 1099) = 0;
    *((_DWORD *)this + 183) = 1;
    v7 = 1;
    *((_OWORD *)this + 46) = v52;
  }
LABEL_19:
  *((_BYTE *)this + 1088) = 0;
  **((_DWORD **)this + 122) = 0;
  *((_BYTE *)this + 1106) = 0;
  *((_DWORD *)this + 268) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 1048, 0x10u);
  *v8 = v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(v16, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Stop, 0LL);
  return 0LL;
}
