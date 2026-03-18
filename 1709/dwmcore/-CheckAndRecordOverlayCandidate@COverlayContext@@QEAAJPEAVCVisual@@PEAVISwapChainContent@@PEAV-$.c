/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340
 * Callers:
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005CFC0 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18008865C (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x180089360 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180089398 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893D0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893FC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090284 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18011BC18 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     ?AddMultipleAndSet@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x18013FD30 (-AddMultipleAndSet@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInf.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCCompositionSurfaceInfo@@_KPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCRegionWrapper@@_N888881@Z @ 0x180142E70 (-Init@OverlayPlaneInfo@COverlayContext@@QEAAXPEAV2@PEAVCVisual@@PEAVISwapChainContent@@PEAVCComp.c)
 *     ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N3@Z @ 0x180143258 (-IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLA.c)
 *     ?IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N@Z @ 0x1801433A8 (-IsCandidateOverlayCompatbile@COverlayContext@@AEBA_NPEAVCVisual@@PEAVISwapChainContent@@AEBUDXG.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x180143920 (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z @ 0x1801442A8 (-RectContainsRect@COverlayContext@@CA_NAEBUtagRECT@@0@Z.c)
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180144C4C (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     McTemplateU0xddddd @ 0x180144DCC (McTemplateU0xddddd.c)
 *     McTemplateU0xdddddddqqddddddddddddqqq @ 0x180144E7C (McTemplateU0xdddddddqqddddddddddddqqq.c)
 *     McTemplateU0xddqqddddddddddddqqq @ 0x1801450DC (McTemplateU0xddqqddddddddddddqqq.c)
 *     McTemplateU0xqqdddd @ 0x18014545C (McTemplateU0xqqdddd.c)
 *     ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x180149600 (-Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositio.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x18017C278 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x1801C8A30 (-Create@CRegionWrapper@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall COverlayContext::CheckAndRecordOverlayCandidate(
        COverlayContext *this,
        struct CVisual *a2,
        struct ISwapChainContent *a3,
        float *a4,
        __int64 a5,
        __int64 a6,
        enum DXGI_MODE_ROTATION a7,
        int a8,
        bool a9,
        bool a10)
{
  struct ISwapChainContent *v10; // r15
  struct CRegionWrapper *v13; // r14
  double v14; // xmm0_8
  int v15; // eax
  double v16; // xmm0_8
  int v17; // eax
  double v18; // xmm0_8
  int v19; // eax
  double v20; // xmm0_8
  int v21; // eax
  double v22; // xmm0_8
  int v23; // eax
  double v24; // xmm0_8
  int v25; // eax
  double v26; // xmm0_8
  int v27; // eax
  int v28; // eax
  double v29; // xmm0_8
  int v30; // eax
  double v31; // xmm0_8
  int v32; // eax
  double v33; // xmm0_8
  bool v34; // cc
  signed int updated; // eax
  int v36; // ebx
  FastRegion::CRegion *v37; // r14
  const struct FastRegion::Internal::CRgnData *v38; // rcx
  char v39; // r12
  __int64 v40; // rax
  char v41; // r12
  CCompositionSurfaceInfo *v42; // rax
  __int64 v43; // rdi
  int v44; // ebx
  __int64 v45; // rax
  struct ISwapChainContent *v46; // rdi
  _DWORD *v47; // r15
  char v48; // r14
  char v49; // si
  unsigned __int8 v50; // al
  int v51; // edx
  int v52; // ecx
  int v53; // esi
  int v54; // esi
  int RectangleCount; // eax
  int v56; // ecx
  int v57; // r10d
  void *v58; // rdx
  int v59; // edx
  int v60; // ecx
  int v61; // r9d
  char v63; // al
  char *v64; // r12
  __int64 v65; // rax
  unsigned int v66; // ebx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rcx
  int v70; // eax
  struct CRegionWrapper *v71; // rsi
  unsigned int v72; // r8d
  signed int v73; // eax
  int v74; // edx
  int v75; // ecx
  DWORD v76; // r9d
  int v77; // [rsp+20h] [rbp-140h]
  unsigned int v78; // [rsp+20h] [rbp-140h]
  bool v79; // [rsp+30h] [rbp-130h]
  float v80; // [rsp+E0h] [rbp-80h] BYREF
  char v81; // [rsp+E4h] [rbp-7Ch]
  char v82; // [rsp+E5h] [rbp-7Bh]
  struct CRegionWrapper *v83; // [rsp+E8h] [rbp-78h] BYREF
  bool IsIntelWorkaroundNeeded; // [rsp+F0h] [rbp-70h]
  int v85; // [rsp+F4h] [rbp-6Ch] BYREF
  signed int v86; // [rsp+F8h] [rbp-68h] BYREF
  CMILCOMBase *RenderingRealizationNoRef; // [rsp+100h] [rbp-60h]
  struct CVisual *v88; // [rsp+108h] [rbp-58h]
  void *v89; // [rsp+110h] [rbp-50h] BYREF
  struct ISwapChainContent *v90; // [rsp+118h] [rbp-48h]
  void *v91; // [rsp+120h] [rbp-40h] BYREF
  __int64 v92; // [rsp+128h] [rbp-38h]
  struct tagRECT v93; // [rsp+130h] [rbp-30h] BYREF
  __int64 v94; // [rsp+140h] [rbp-20h] BYREF
  int v95; // [rsp+150h] [rbp-10h] BYREF
  struct tagRECT v96; // [rsp+154h] [rbp-Ch] BYREF
  struct tagRECT v97; // [rsp+164h] [rbp+4h] BYREF
  RECT rc1; // [rsp+174h] [rbp+14h] BYREF
  enum DXGI_MODE_ROTATION v99; // [rsp+184h] [rbp+24h]
  BOOL v100; // [rsp+188h] [rbp+28h]
  int v101; // [rsp+19Ch] [rbp+3Ch]
  int v102; // [rsp+1B0h] [rbp+50h]
  char *v103; // [rsp+1C0h] [rbp+60h] BYREF
  struct FastRegion::Internal::CRgnData *v104[10]; // [rsp+1D0h] [rbp+70h] BYREF
  _OWORD v105[16]; // [rsp+220h] [rbp+C0h] BYREF

  v10 = a3;
  v89 = 0LL;
  v91 = 0LL;
  v88 = a2;
  v90 = a3;
  *(_QWORD *)&v93.left = a6;
  memset_0(&v95, 0, 0x70uLL);
  v13 = 0LL;
  v14 = *a4;
  v83 = 0LL;
  *(float *)&v14 = v14 + 6291456.25;
  v80 = *(float *)&v14;
  v15 = LODWORD(v14);
  v16 = a4[1];
  v96.left = v15 << 10 >> 11;
  *(float *)&v16 = v16 + 6291456.25;
  v80 = *(float *)&v16;
  v17 = LODWORD(v16);
  v18 = a4[2];
  v96.top = v17 << 10 >> 11;
  *(float *)&v18 = v18 + 6291456.25;
  v80 = *(float *)&v18;
  v19 = LODWORD(v18);
  v20 = a4[3];
  v96.right = v19 << 10 >> 11;
  *(float *)&v20 = v20 + 6291456.25;
  v80 = *(float *)&v20;
  v21 = LODWORD(v20);
  v22 = *(float *)a5;
  v96.bottom = v21 << 10 >> 11;
  *(float *)&v22 = v22 + 6291456.25;
  v80 = *(float *)&v22;
  v23 = LODWORD(v22);
  v24 = *(float *)(a5 + 4);
  v97.left = v23 << 10 >> 11;
  *(float *)&v24 = v24 + 6291456.25;
  v80 = *(float *)&v24;
  v25 = LODWORD(v24);
  v26 = *(float *)(a5 + 8);
  v97.top = v25 << 10 >> 11;
  *(float *)&v26 = v26 + 6291456.25;
  v80 = *(float *)&v26;
  v27 = LODWORD(v26);
  LODWORD(v26) = *(_DWORD *)(a5 + 12);
  v97.right = v27 << 10 >> 11;
  *(float *)&v26 = *(float *)&v26 + 6291456.25;
  v80 = *(float *)&v26;
  v28 = LODWORD(v26);
  v29 = *(float *)a6;
  v97.bottom = v28 << 10 >> 11;
  *(float *)&v29 = v29 + 6291456.25;
  v80 = *(float *)&v29;
  v30 = LODWORD(v29);
  v31 = *(float *)(a6 + 4);
  rc1.left = v30 << 10 >> 11;
  *(float *)&v31 = v31 + 6291456.25;
  v80 = *(float *)&v31;
  v32 = LODWORD(v31);
  v33 = *(float *)(a6 + 8);
  rc1.top = v32 << 10 >> 11;
  *(float *)&v33 = v33 + 6291456.25;
  v80 = *(float *)&v33;
  LODWORD(v33) = *(_DWORD *)(a6 + 12);
  rc1.right = (int)(LODWORD(v80) << 10) >> 11;
  v80 = *(float *)&v33 + 6291456.25;
  v34 = *((_DWORD *)this + 292) < 2000;
  rc1.bottom = (int)(LODWORD(v80) << 10) >> 11;
  if ( !v34 || (a8 & 3) == 0 || (v81 = 1, COverlayContext::RectContainsRect(&rc1, &v97)) )
    v81 = 0;
  IsIntelWorkaroundNeeded = COverlayContext::IsIntelWorkaroundNeeded(this, &v96, &v97, &rc1);
  updated = COverlayContext::UpdateVisitedContentRegion(this);
  v86 = updated;
  v36 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x410u);
    goto LABEL_36;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v104, &rc1);
  v37 = (COverlayContext *)((char *)this + 1056);
  v38 = (const struct FastRegion::Internal::CRgnData *)*((_QWORD *)this + 132);
  if ( *(_DWORD *)v38 && *(_DWORD *)v104[0] )
    v39 = FastRegion::Internal::CRgnData::Intersects(v38, v104[0]);
  else
    v39 = 0;
  FastRegion::CRegion::FreeMemory((void **)v104);
  v40 = *(_QWORD *)v10;
  v41 = v39 ^ 1;
  v82 = v41;
  v42 = (CCompositionSurfaceInfo *)(*(__int64 (__fastcall **)(struct ISwapChainContent *))(v40 + 200))(v10);
  v94 = (__int64)v42;
  v43 = (__int64)v42;
  if ( !v42 || *((_QWORD *)v42 + 22) != *((_QWORD *)this + 10) )
    goto LABEL_35;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v42);
  CMILCOMBase::InternalQueryInterface(RenderingRealizationNoRef, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v89);
  CMILCOMBase::InternalQueryInterface(RenderingRealizationNoRef, &GUID_302508ed_c63d_40f8_af07_af5881d2df95, &v91);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v103 = (char *)RenderingRealizationNoRef + 144;
    (*(void (__fastcall **)(char *, int *, float *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 32LL))(
      (char *)RenderingRealizationNoRef + 144,
      &v85,
      &v80);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v92 = *(_QWORD *)(v43 + 40);
      v44 = v92;
      v45 = (*(__int64 (__fastcall **)(char *, char **))(*(_QWORD *)v103 + 24LL))(v103, &v103);
      v46 = v90;
      v47 = (_DWORD *)v45;
      v48 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v90 + 112LL))(v90);
      v49 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v46 + 104LL))(v46);
      LOBYTE(v46) = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v46 + 136LL))(v46);
      v50 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v90 + 128LL))(v90);
      McTemplateU0xdddddddqqddddddddddddqqq(
        v52,
        v51,
        v44,
        v50,
        (char)v46,
        v49,
        v48,
        v41,
        v85,
        SLOBYTE(v80),
        *v47,
        v95,
        v96.left,
        v96.top,
        v96.right,
        v96.bottom,
        v97.left,
        v97.top,
        v97.right,
        v97.bottom,
        rc1.left,
        rc1.top,
        rc1.right,
        rc1.bottom,
        v99,
        v100,
        v101);
      v36 = v86;
      v37 = (COverlayContext *)((char *)this + 1056);
      v43 = v94;
      v10 = v90;
      v41 = v82;
    }
  }
  if ( !v89
    && COverlayContext::IsCandidateDirectFlipCompatbile(
         this,
         v10,
         (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v95,
         a7,
         a8,
         a9,
         v79)
    && (CCommonRegistryData::m_dwOverlayTestMode == 5 || *((_DWORD *)this + 36) <= 1u || *((int *)this + 292) < 2200) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DIRECTFLIP_CANDIDATERECORDEVENT,
        *(unsigned int *)(v43 + 40) | (unsigned __int64)((__int64)(int)HIDWORD(*(_QWORD *)(v43 + 40)) << 32));
    if ( v41 )
    {
      v54 = 1;
      goto LABEL_44;
    }
    v53 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 2) + 24LL))(
                       *((_QWORD *)this + 2),
                       &v93);
    if ( !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v10 + 136LL))(v10)
      || CCompositionSurfaceInfo::HasSecondaryRepresentations((CCompositionSurfaceInfo *)v43)
      || *(_DWORD *)(*((_QWORD *)this + 150) + 256LL)
      || *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct tagRECT *))(*((_QWORD *)RenderingRealizationNoRef + 18)
                                                                        + 24LL))(
                      (char *)RenderingRealizationNoRef + 144,
                      &v93) != v53 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        *(_QWORD *)&v93.left = 0LL;
        *(_QWORD *)&v93.right = 0LL;
        FastRegion::CRegion::GetBoundingRect(v37, &v93);
        McTemplateU0xqqdddd(v60, v59, *(_DWORD *)(v43 + 40), v61, v77, v93.left, v93.top, v93.right, v93.bottom);
      }
      goto LABEL_35;
    }
    if ( *((_BYTE *)this + 1192) )
    {
      v54 = 3;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_44;
      *(_QWORD *)&v93.left = 0LL;
      *(_QWORD *)&v93.right = 0LL;
      FastRegion::CRegion::GetBoundingRect(v37, &v93);
      v94 = *(_QWORD *)(v43 + 40);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v37);
      v58 = &EVTDESC_ADVANCED_DIRECTFLIP_NORESTORE_RECORDCANDIDATE;
    }
    else
    {
      v54 = 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
      {
LABEL_44:
        CDirectFlipInfo::Init((char *)this + 920, this, *((_QWORD *)this + 2), v88, v43, v10, v54, v37);
LABEL_35:
        v13 = v83;
        goto LABEL_36;
      }
      *(_QWORD *)&v93.left = 0LL;
      *(_QWORD *)&v93.right = 0LL;
      FastRegion::CRegion::GetBoundingRect(v37, &v93);
      v94 = *(_QWORD *)(v43 + 40);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(v37);
      v58 = &EVTDESC_ADVANCED_DIRECTFLIP_RECORDCANDIDATE;
    }
    McTemplateU0xddddd(v56, (_DWORD)v58, v57, RectangleCount, v93.left, v93.top, v93.right, v93.bottom);
    goto LABEL_44;
  }
  if ( !COverlayContext::OverlaysEnabled(this) )
    goto LABEL_35;
  v63 = 0;
  if ( v91 )
    v63 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v91 + 40LL))(v91);
  if ( v81
    || IsIntelWorkaroundNeeded
    || v63
    || !COverlayContext::IsCandidateOverlayCompatbile(
          this,
          v88,
          v10,
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)&v95,
          a7,
          *(_DWORD *)(v43 + 104),
          a10) )
  {
    goto LABEL_35;
  }
  v95 = a8;
  v99 = a7;
  v102 = 2;
  v100 = a9;
  v64 = (char *)RenderingRealizationNoRef + 144;
  v65 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
          (char *)RenderingRealizationNoRef + 144,
          &v94);
  v81 = 0;
  v101 = *(_DWORD *)(v65 + 8);
  if ( a9 )
  {
    v81 = 1;
  }
  else
  {
    v66 = 0;
    if ( *((_DWORD *)this + 52) )
    {
      while ( 1 )
      {
        v67 = *((_QWORD *)this + 23);
        v94 = v66;
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
        if ( ++v66 >= *((_DWORD *)this + 52) )
          goto LABEL_62;
      }
      v69 = 248 * v94;
      *(_BYTE *)(v69 + *((_QWORD *)this + 23) + 181) = 1;
      *(_BYTE *)(v69 + *((_QWORD *)this + 23) + 180) = 0;
      *(_QWORD *)(v69 + *((_QWORD *)this + 23) + 184) = v88;
    }
  }
LABEL_62:
  v70 = CRegionWrapper::Create(&v83);
  v36 = v70;
  if ( v70 < 0 )
  {
    v78 = 1267;
    goto LABEL_74;
  }
  v71 = v83;
  v70 = FastRegion::CRegion::Copy(
          (const struct FastRegion::Internal::CRgnData **)v83 + 2,
          (const struct FastRegion::Internal::CRgnData **)v37);
  v36 = v70;
  if ( v70 < 0 )
  {
    v78 = 1269;
LABEL_74:
    v76 = v70;
    goto LABEL_72;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v104, &rc1);
  v36 = FastRegion::CRegion::Intersect((const struct FastRegion::Internal::CRgnData **)v71 + 2, v104);
  FastRegion::CRegion::FreeMemory((void **)v104);
  if ( v36 < 0 )
  {
    v78 = 1270;
    v76 = v36;
LABEL_72:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v76, v78);
    goto LABEL_35;
  }
  v13 = v71;
  COverlayContext::OverlayPlaneInfo::Init(
    (unsigned int)v105,
    (_DWORD)this,
    (_DWORD)v88,
    (_DWORD)v10,
    v43,
    *(_QWORD *)(v43 + 56),
    (__int64)&v95,
    *(__int64 *)&v93.left,
    (__int64)v71,
    v89 != 0LL,
    a9,
    a10,
    v82,
    v81);
  v73 = DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet((__int64)this + 184, v105, v72);
  v36 = v73;
  if ( v73 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v73, 0x508u);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    (*(void (__fastcall **)(char *, int *, signed int *))(*(_QWORD *)v64 + 32LL))(v64, &v85, &v86);
    v75 = *(_DWORD *)(*(__int64 (__fastcall **)(char *, struct tagRECT *))(*(_QWORD *)v64 + 24LL))(v64, &v93);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xddqqddddddddddddqqq(
        v75,
        v74,
        *(_DWORD *)(v43 + 40),
        v85,
        v86,
        v75,
        v95,
        v96.left,
        v96.top,
        v96.right,
        v96.bottom,
        v97.left,
        v97.top,
        v97.right,
        v97.bottom,
        rc1.left,
        rc1.top,
        rc1.right,
        rc1.bottom,
        v99,
        v100,
        v101);
  }
LABEL_36:
  if ( v89 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v89 + 16LL))(v89);
  if ( v91 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v91 + 16LL))(v91);
  if ( v13 )
    (*(void (__fastcall **)(struct CRegionWrapper *))(*(_QWORD *)v13 + 8LL))(v13);
  return (unsigned int)v36;
}
