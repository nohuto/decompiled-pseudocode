/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006B90 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078DDC (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18007FD70 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18007FE88 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080038 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180083124 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ @ 0x1800C5F2C (-IsHardwareProtectionDisabled@CD3DDeviceManager@@SA_NXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DCF88 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18013E7C8 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     ?AddMultipleAndSet@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180163954 (-AddMultipleAndSet@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInf.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCRegionWrapper@@_N888881@Z @ 0x1801662A4 (-Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCComp.c)
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N3@Z @ 0x18016668C (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLA.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801667DC (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXG.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x180166EA4 (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x1801674FC (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x1801679B8 (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     McTemplateU0xddddd @ 0x180167B84 (McTemplateU0xddddd.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq @ 0x180167C34 (McTemplateU0xdddddddqqddddddddddddqqq.c)
 *     McTemplateU0xddqqddddddddddddqqq @ 0x180167E94 (McTemplateU0xddqqddddddddddddqqq.c)
 *     McTemplateU0xqqdddd @ 0x180168214 (McTemplateU0xqqdddd.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x18017298C (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x1801AC650 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x180205170 (-Create@CRegionWrapper@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        float *a4,
        float *a5,
        __int64 a6,
        enum DXGI_MODE_ROTATION a7,
        int a8,
        char a9,
        bool a10)
{
  int v10; // ebx
  struct ISwapChainContent *v11; // rsi
  struct CRegionWrapper *v14; // rdi
  float v15; // xmm0_4
  float v16; // eax
  double v17; // xmm0_8
  int v18; // eax
  double v19; // xmm0_8
  int v20; // eax
  double v21; // xmm0_8
  int v22; // eax
  double v23; // xmm0_8
  int v24; // eax
  double v25; // xmm0_8
  int v26; // eax
  double v27; // xmm0_8
  int v28; // eax
  double v29; // xmm0_8
  int v30; // eax
  LONG v31; // eax
  double v32; // xmm0_8
  int v33; // eax
  int v34; // eax
  enum DXGI_COLOR_SPACE_TYPE v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  bool v38; // cc
  int updated; // eax
  FastRegion::CRegion *v40; // r15
  const struct FastRegion::Internal::CRgnData *v41; // rcx
  char v42; // r12
  __int64 v43; // rax
  char v44; // r12
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rbx
  _DWORD *v48; // r15
  char v49; // r14
  char v50; // si
  char v51; // di
  unsigned __int8 v52; // al
  int v53; // edx
  int v54; // ecx
  int v55; // r14d
  int v56; // r14d
  int RectangleCount; // eax
  int v58; // ecx
  void *v59; // rdx
  int v60; // edx
  int v61; // ecx
  int v62; // r9d
  char v64; // al
  char *v65; // r12
  unsigned int v66; // ebx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // eax
  struct CRegionWrapper *v71; // r14
  int v72; // edx
  int v73; // ecx
  int v74; // [rsp+20h] [rbp-140h]
  unsigned int v75; // [rsp+20h] [rbp-140h]
  bool v76; // [rsp+30h] [rbp-130h]
  float v77; // [rsp+E0h] [rbp-80h] BYREF
  char v78; // [rsp+E4h] [rbp-7Ch]
  char v79; // [rsp+E5h] [rbp-7Bh]
  bool IsIntelWorkaroundNeeded; // [rsp+E6h] [rbp-7Ah]
  struct CRegionWrapper *v81; // [rsp+E8h] [rbp-78h] BYREF
  int v82; // [rsp+F0h] [rbp-70h] BYREF
  int v83; // [rsp+F4h] [rbp-6Ch] BYREF
  CMILCOMBase *RenderingRealizationNoRef; // [rsp+F8h] [rbp-68h]
  struct CVisual *v85; // [rsp+100h] [rbp-60h]
  void *v86; // [rsp+108h] [rbp-58h] BYREF
  struct ISwapChainContent *v87; // [rsp+110h] [rbp-50h]
  void *v88; // [rsp+118h] [rbp-48h] BYREF
  struct tagRECT v89; // [rsp+120h] [rbp-40h] BYREF
  int v90; // [rsp+130h] [rbp-30h] BYREF
  struct tagRECT v91; // [rsp+134h] [rbp-2Ch] BYREF
  struct tagRECT v92; // [rsp+144h] [rbp-1Ch] BYREF
  RECT rc1; // [rsp+154h] [rbp-Ch] BYREF
  enum DXGI_MODE_ROTATION v94; // [rsp+164h] [rbp+4h]
  int v95; // [rsp+168h] [rbp+8h]
  enum DXGI_COLOR_SPACE_TYPE v96; // [rsp+17Ch] [rbp+1Ch]
  int v97; // [rsp+190h] [rbp+30h]
  int v98; // [rsp+198h] [rbp+38h]
  __int64 v99; // [rsp+1A0h] [rbp+40h] BYREF
  char *v100; // [rsp+1B0h] [rbp+50h] BYREF
  struct FastRegion::Internal::CRgnData *v101[10]; // [rsp+1C0h] [rbp+60h] BYREF
  _OWORD v102[16]; // [rsp+210h] [rbp+B0h] BYREF

  v10 = 0;
  v11 = a3;
  v86 = 0LL;
  v88 = 0LL;
  v87 = a3;
  v85 = a2;
  *(_QWORD *)&v89.left = a6;
  memset_0(&v90, 0, 0x70uLL);
  v14 = 0LL;
  v81 = 0LL;
  if ( a9 )
    return (unsigned int)v10;
  v15 = *a4 + 6291456.25;
  v77 = v15;
  v16 = v15;
  v17 = a4[1];
  v91.left = (int)(LODWORD(v16) << 10) >> 11;
  *(float *)&v17 = v17 + 6291456.25;
  v77 = *(float *)&v17;
  v18 = LODWORD(v17);
  v19 = a4[2];
  v91.top = v18 << 10 >> 11;
  *(float *)&v19 = v19 + 6291456.25;
  v77 = *(float *)&v19;
  v20 = LODWORD(v19);
  v21 = a4[3];
  v91.right = v20 << 10 >> 11;
  *(float *)&v21 = v21 + 6291456.25;
  v77 = *(float *)&v21;
  v22 = LODWORD(v21);
  v23 = *a5;
  v91.bottom = v22 << 10 >> 11;
  *(float *)&v23 = v23 + 6291456.25;
  v77 = *(float *)&v23;
  v24 = LODWORD(v23);
  v25 = a5[1];
  v92.left = v24 << 10 >> 11;
  *(float *)&v25 = v25 + 6291456.25;
  v77 = *(float *)&v25;
  v26 = LODWORD(v25);
  v27 = a5[2];
  v92.top = v26 << 10 >> 11;
  *(float *)&v27 = v27 + 6291456.25;
  v77 = *(float *)&v27;
  v28 = LODWORD(v27);
  v29 = a5[3];
  v92.right = v28 << 10 >> 11;
  *(float *)&v29 = v29 + 6291456.25;
  v77 = *(float *)&v29;
  v30 = LODWORD(v29);
  LODWORD(v29) = *(_DWORD *)a6;
  v92.bottom = v30 << 10 >> 11;
  *(float *)&v29 = *(float *)&v29 + 6291456.25;
  v77 = *(float *)&v29;
  v31 = (int)(LODWORD(v29) << 10) >> 11;
  v32 = *(float *)(a6 + 4);
  rc1.left = v31;
  *(float *)&v32 = v32 + 6291456.25;
  v77 = *(float *)&v32;
  v33 = LODWORD(v32);
  LODWORD(v32) = *(_DWORD *)(a6 + 8);
  rc1.top = v33 << 10 >> 11;
  *(float *)&v32 = *(float *)&v32 + 6291456.25;
  v77 = *(float *)&v32;
  v34 = LODWORD(v32);
  LODWORD(v32) = *(_DWORD *)(a6 + 12);
  rc1.right = v34 << 10 >> 11;
  v77 = *(float *)&v32 + 6291456.25;
  rc1.bottom = (int)(LODWORD(v77) << 10) >> 11;
  v35 = (*(unsigned int (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 144LL))(v11);
  v36 = *((_QWORD *)this + 2);
  v96 = v35;
  *(float *)&v32 = (*(float (__fastcall **)(__int64))(*(_QWORD *)v36 + 168LL))(v36);
  v37 = ConvertSDRBoostToSDRWhiteLevel(*(float *)&v32, v96);
  v38 = *((_DWORD *)this + 295) < 2000;
  v98 = v37;
  if ( !v38 || (a8 & 3) == 0 || (v78 = 1, COverlayContext::RectContainsRect(&rc1, &v92)) )
    v78 = 0;
  IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(this, &v91, &v92, &rc1);
  updated = COverlayContext::UpdateVisitedContentRegion(this);
  v83 = updated;
  v10 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x430u);
    goto LABEL_39;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v101, &rc1);
  v40 = (COverlayContext *)((char *)this + 1064);
  v41 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 133);
  if ( *(_DWORD *)v41 && *(_DWORD *)v101[0] )
    v42 = FastRegion::Internal::CRgnData::Intersects(v41, v101[0]);
  else
    v42 = 0;
  FastRegion::CRegion::FreeMemory((void **)v101);
  v43 = *(_QWORD *)v11;
  v44 = v42 ^ 1;
  v79 = v44;
  v45 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(v43 + 200))(v11);
  v99 = v45;
  v46 = v45;
  if ( v45
    && *(_QWORD *)(v45 + 176) == *((_QWORD *)this + 10)
    && (!(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 40LL))(v11)
     || !CD3DDeviceManager::IsHardwareProtectionDisabled()) )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef((CCompositionSurfaceInfo *)v46);
    CMILCOMBase::InternalQueryInterface(RenderingRealizationNoRef, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v86);
    CMILCOMBase::InternalQueryInterface(RenderingRealizationNoRef, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v88);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v100 = (char *)RenderingRealizationNoRef + 144;
      (*(void (__fastcall **)(char *, int *, float *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 32LL))(
        (char *)RenderingRealizationNoRef + 144,
        &v82,
        &v77);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v47 = *(_QWORD *)(v46 + 40);
        v48 = (_DWORD *)(*(__int64 (__fastcall **)(char *, char **))(*(_QWORD *)v100 + 24LL))(v100, &v100);
        v49 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 112LL))(v11);
        v50 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 104LL))(v11);
        v51 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v87 + 136LL))(v87);
        v52 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v87 + 128LL))(v87);
        McTemplateU0xdddddddqqddddddddddddqqq(
          v54,
          v53,
          v47,
          v52,
          v51,
          v50,
          v49,
          v44,
          v82,
          SLOBYTE(v77),
          *v48,
          v90,
          v91.left,
          v91.top,
          v91.right,
          v91.bottom,
          v92.left,
          v92.top,
          v92.right,
          v92.bottom,
          rc1.left,
          rc1.top,
          rc1.right,
          rc1.bottom,
          v94,
          v95,
          v96);
        v10 = v83;
        v40 = (COverlayContext *)((char *)this + 1064);
        v46 = v99;
        v11 = v87;
        v44 = v79;
      }
    }
    if ( !v86
      && COverlayContext::IsCandidateDirectFlipCompatbile(
           this,
           v11,
           (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v90,
           a7,
           a8,
           0,
           v76)
      && (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 37) <= 1u || *((int *)this + 295) < 2200) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        McTemplateU0x(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
          *(unsigned int *)(v46 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v46 + 40)) << 32));
      if ( v44 )
      {
        v56 = 1;
        goto LABEL_47;
      }
      v55 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 2) + 24LL))(
                         *((_QWORD *)this + 2),
                         &v89);
      if ( !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v11 + 136LL))(v11)
        || CCompositionSurfaceInfo::HasSecondaryRepresentations((CCompositionSurfaceInfo *)v46)
        || *(_DWORD *)(*((_QWORD *)this + 151) + 280LL)
        || *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct tagRECT *))(*((_QWORD *)RenderingRealizationNoRef + 18)
                                                                          + 24LL))(
                        (char *)RenderingRealizationNoRef + 144,
                        &v89) != v55 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          *(_QWORD *)&v89.left = 0LL;
          *(_QWORD *)&v89.right = 0LL;
          FastRegion::CRegion::GetBoundingRect(v40, &v89);
          McTemplateU0xqqdddd(v61, v60, *(_DWORD *)(v46 + 40), v62, v74, v89.left, v89.top, v89.right, v89.bottom);
        }
        goto LABEL_38;
      }
      if ( *((_BYTE *)this + 1204) )
      {
        v56 = 3;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
          goto LABEL_47;
        *(_QWORD *)&v89.left = 0LL;
        *(_QWORD *)&v89.right = 0LL;
        FastRegion::CRegion::GetBoundingRect(v40, &v89);
        RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v40);
        v59 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
      }
      else
      {
        v56 = 2;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        {
LABEL_47:
          CDirectFlipInfo::Init((char *)this + 928, this, *((_QWORD *)this + 2), v85, v46, v11, v56, v40);
          goto LABEL_38;
        }
        *(_QWORD *)&v89.left = 0LL;
        *(_QWORD *)&v89.right = 0LL;
        FastRegion::CRegion::GetBoundingRect(v40, &v89);
        RectangleCount = FastRegion::CRegion::GetRectangleCount((int **)v40);
        v59 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
      }
      McTemplateU0xddddd(
        v58,
        (_DWORD)v59,
        *(_DWORD *)(v46 + 40),
        RectangleCount,
        v89.left,
        v89.top,
        v89.right,
        v89.bottom);
      goto LABEL_47;
    }
    if ( !COverlayContext::OverlaysEnabled(this) )
      goto LABEL_38;
    v64 = 0;
    if ( v88 )
      v64 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v88 + 40LL))(v88);
    if ( v78
      || IsIntelWorkaroundNeeded
      || v64
      || !COverlayContext::IsCandidateOverlayCompatbile(
            this,
            v85,
            v11,
            (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v90,
            a7,
            *(_DWORD *)(v46 + 104),
            a10) )
    {
      goto LABEL_38;
    }
    v95 = 0;
    v94 = a7;
    v90 = a8;
    v65 = (char *)RenderingRealizationNoRef + 144;
    v97 = 2;
    v66 = 0;
    v96 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
                        (char *)RenderingRealizationNoRef + 144,
                        &v99)
                    + 8);
    if ( *((_DWORD *)this + 54) )
    {
      while ( 1 )
      {
        v67 = *((_QWORD *)this + 24);
        v99 = v66;
        v68 = 248LL * v66;
        if ( *(_BYTE *)(v68 + v67 + 177) )
        {
          if ( !*(_BYTE *)(v68 + v67 + 181)
            && *(_BYTE *)(v68 + v67 + 180)
            && EqualRect(&rc1, (const RECT *)(v68 + v67 + 76)) )
          {
            break;
          }
        }
        if ( ++v66 >= *((_DWORD *)this + 54) )
          goto LABEL_63;
      }
      v69 = 248 * v99;
      *(_BYTE *)(*((_QWORD *)this + 24) + v69 + 181) = 1;
      *(_BYTE *)(*((_QWORD *)this + 24) + v69 + 180) = 0;
      *(_QWORD *)(*((_QWORD *)this + 24) + v69 + 184) = v85;
    }
LABEL_63:
    v70 = CRegionWrapper::Create(&v81);
    v10 = v70;
    if ( v70 < 0 )
    {
      v75 = 1300;
    }
    else
    {
      v71 = v81;
      v70 = FastRegion::CRegion::Copy((int **)v81 + 2, (int **)v40);
      v10 = v70;
      if ( v70 < 0 )
      {
        v75 = 1302;
      }
      else
      {
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v101, &rc1);
        v10 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v71 + 2, v101);
        FastRegion::CRegion::FreeMemory((void **)v101);
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x517u);
          goto LABEL_38;
        }
        COverlayContext::OverlayPlaneInfo::Init(
          (unsigned int)v102,
          (_DWORD)this,
          (_DWORD)v85,
          (_DWORD)v11,
          v46,
          *(_QWORD *)(v46 + 56),
          (__int64)&v90,
          *(__int64 *)&v89.left,
          (__int64)v71,
          v86 != 0LL,
          0,
          a10,
          v79,
          0);
        v70 = DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet((__int64)this + 192, v102);
        v10 = v70;
        if ( v70 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          {
            (*(void (__fastcall **)(char *, int *, int *))(*(_QWORD *)v65 + 32LL))(v65, &v82, &v83);
            v73 = *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct tagRECT *))(*(_QWORD *)v65 + 24LL))(v65, &v89);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
              McTemplateU0xddqqddddddddddddqqq(
                v73,
                v72,
                *(_DWORD *)(v46 + 40),
                v82,
                v83,
                v73,
                v90,
                v91.left,
                v91.top,
                v91.right,
                v91.bottom,
                v92.left,
                v92.top,
                v92.right,
                v92.bottom,
                rc1.left,
                rc1.top,
                rc1.right,
                rc1.bottom,
                v94,
                v95,
                v96);
          }
          goto LABEL_38;
        }
        v75 = 1321;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v70, v75);
  }
LABEL_38:
  v14 = v81;
LABEL_39:
  if ( v86 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v86 + 16LL))(v86);
  if ( v88 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v88 + 16LL))(v88);
  if ( v14 )
    (*(void (__fastcall **)(struct CRegionWrapper *))(*(_QWORD *)v14 + 8LL))(v14);
  return (unsigned int)v10;
}
