/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005CFC0
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18005D170 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028EC0 (-IsDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028F20 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ @ 0x18002EB60 (-NeedsSwapChainFullScreenNotification@CHwFullScreenRenderTarget@@UEAA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180047BD0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800597A4 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18005D3AC (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18007B3F4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x18008865C (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B8848 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801401F0 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x1801426B4 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     McTemplateU0xdddddddd @ 0x180148200 (McTemplateU0xdddddddd.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidateForContext(
        __int64 a1,
        COverlayContext *a2,
        __int64 a3,
        CCompositionSurfaceBitmap *a4,
        __int64 a5,
        CShape *a6,
        unsigned int a7)
{
  __int64 v7; // rax
  char *v8; // r14
  __int64 v9; // rsi
  unsigned int v10; // ebx
  CShape *v11; // r12
  CCompositionSurfaceBitmap *v12; // rdi
  COverlayContext *v13; // r13
  __int64 (__fastcall *v14)(CCompositionSurfaceBitmap *); // rax
  CCompositionSurfaceInfo *v15; // r15
  char (__fastcall *v16)(CCompositionSurfaceBitmap *); // rax
  char IsOverlayCompatible; // al
  char (__fastcall *v18)(CCompositionSurfaceBitmap *); // rax
  char IsDirectFlipCompatible; // al
  CHwFullScreenRenderTarget *v20; // rcx
  __int64 (*v21)(void); // rax
  char v22; // al
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v25; // rax
  LONG left; // ebx
  float v27; // xmm0_4
  float v28; // eax
  float v29; // xmm0_4
  __int64 v30; // rax
  __int64 (__fastcall *v31)(CCompositionSurfaceBitmap *); // rax
  int v32; // r13d
  float v33; // xmm0_4
  char v34; // r14
  char v35; // si
  char v36; // di
  unsigned __int8 v37; // al
  int v38; // edx
  int v39; // ecx
  int DoesImageOcclude; // eax
  __int64 v41; // rcx
  __int128 v42; // xmm1
  int v43; // eax
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  unsigned __int64 v46; // r8
  __int64 v47; // r9
  float v48; // xmm1_4
  COverlayContext *v49; // rsi
  float v50; // xmm1_4
  __m128i v51; // xmm6
  float v52; // xmm9_4
  float v53; // xmm8_4
  float v54; // xmm7_4
  int v55; // eax
  int (__fastcall **v56)(char *, GUID *, __int64 *); // rax
  const struct FastRegion::Internal::CRgnData *v57; // rdx
  bool v58; // al
  char v59; // cl
  char v60; // si
  bool v61; // r14
  COverlayContext *v62; // rsi
  int v63; // eax
  int v64; // eax
  bool v65[4]; // [rsp+68h] [rbp-A0h] BYREF
  bool v66[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  char v67[4]; // [rsp+70h] [rbp-98h]
  enum DXGI_MODE_ROTATION v68; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v69[2]; // [rsp+78h] [rbp-90h] BYREF
  COverlayContext *v70; // [rsp+80h] [rbp-88h]
  __int64 v71; // [rsp+88h] [rbp-80h]
  float v72; // [rsp+90h] [rbp-78h]
  unsigned int v73; // [rsp+94h] [rbp-74h]
  int v74; // [rsp+98h] [rbp-70h]
  __int64 v75; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v76; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v77; // [rsp+B8h] [rbp-50h]
  __int128 v78; // [rsp+C8h] [rbp-40h]
  __int128 v79; // [rsp+D8h] [rbp-30h]
  int v80; // [rsp+E8h] [rbp-20h]
  __int64 v81; // [rsp+F8h] [rbp-10h]
  __int64 v82[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v83; // [rsp+110h] [rbp+8h] BYREF
  float v84; // [rsp+118h] [rbp+10h]
  float v85; // [rsp+11Ch] [rbp+14h]
  struct tagRECT v86; // [rsp+128h] [rbp+20h] BYREF
  struct tagRECT v87; // [rsp+138h] [rbp+30h] BYREF
  __int64 v88; // [rsp+148h] [rbp+40h] BYREF
  float v89; // [rsp+150h] [rbp+48h]
  float v90; // [rsp+154h] [rbp+4Ch]
  _QWORD v91[2]; // [rsp+158h] [rbp+50h] BYREF
  struct FastRegion::Internal::CRgnData *v92[2]; // [rsp+168h] [rbp+60h] BYREF
  __int128 v93; // [rsp+178h] [rbp+70h]
  __int128 v94; // [rsp+188h] [rbp+80h]
  __int128 v95; // [rsp+198h] [rbp+90h]
  int v96; // [rsp+1A8h] [rbp+A0h]

  v7 = *(_QWORD *)a4;
  v8 = 0LL;
  v9 = a5;
  v10 = 0;
  v11 = a6;
  v12 = a4;
  v71 = a1;
  v13 = a2;
  v14 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(v7 + 200);
  v91[0] = a4;
  v81 = a3;
  v70 = a2;
  v88 = a5;
  v82[0] = (__int64)a6;
  v74 = 0;
  v73 = 0;
  v75 = 0LL;
  v15 = (CCompositionSurfaceInfo *)v14(a4);
  v83 = (__int64)v15;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v25 = *(_QWORD *)v12;
    v80 = 0;
    (*(void (__fastcall **)(CCompositionSurfaceBitmap *, __int128 *, struct tagRECT *))(v25 + 64))(v12, &v76, &v87);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      *(_QWORD *)&v86.left = *((_QWORD *)v15 + 5);
      left = v86.left;
      v27 = *(float *)&v87.bottom + 6291456.25;
      v28 = v27;
      v29 = *(float *)&v87.right + 6291456.25;
      v68 = (int)(LODWORD(v28) << 10) >> 11;
      v30 = *(_QWORD *)v12;
      *(float *)v69 = v29;
      v31 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(v30 + 112);
      v32 = (int)(LODWORD(v29) << 10) >> 11;
      v33 = *(float *)&v87.top + 6291456.25;
      *(float *)v67 = v33;
      v72 = *(float *)&v87.left + 6291456.25;
      v34 = v31(v12);
      v35 = (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 104LL))(v12);
      v36 = (*(__int64 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 136LL))(v12);
      v37 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v91[0] + 128LL))(v91[0]);
      McTemplateU0xdddddddd(
        v39,
        v38,
        left,
        v37,
        v36,
        v35,
        v34,
        (int)(LODWORD(v72) << 10) >> 11,
        (int)(LODWORD(v33) << 10) >> 11,
        v32,
        v68);
      v12 = (CCompositionSurfaceBitmap *)v91[0];
      v8 = 0LL;
      v10 = v73;
      v9 = v88;
      v15 = (CCompositionSurfaceInfo *)v83;
      v11 = (CShape *)v82[0];
      v13 = v70;
    }
  }
  v16 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 104LL);
  if ( v16 == CCompositionSurfaceBitmap::IsOverlayCompatible )
    IsOverlayCompatible = CCompositionSurfaceBitmap::IsOverlayCompatible(v12);
  else
    IsOverlayCompatible = v16(v12);
  if ( IsOverlayCompatible
    || ((v18 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 128LL),
         v18 != CCompositionSurfaceBitmap::IsDirectFlipCompatible)
      ? (IsDirectFlipCompatible = v18(v12))
      : (IsDirectFlipCompatible = CCompositionSurfaceBitmap::IsDirectFlipCompatible(v12)),
        v65[2] = 0,
        IsDirectFlipCompatible) )
  {
    v65[2] = 1;
  }
  v20 = (CHwFullScreenRenderTarget *)*((_QWORD *)v13 + 2);
  v65[1] = 0;
  if ( v20 )
  {
    v21 = *(__int64 (**)(void))(*(_QWORD *)v20 + 464LL);
    if ( (char *)v21 == (char *)CHwFullScreenRenderTarget::NeedsSwapChainFullScreenNotification )
      v22 = CHwFullScreenRenderTarget::NeedsSwapChainFullScreenNotification(v20);
    else
      v22 = v21();
    v65[1] = v22;
  }
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v15);
  if ( RenderingRealizationNoRef )
    v8 = (char *)RenderingRealizationNoRef + 144;
  if ( !v65[2] && !v65[1]
    || !v8
    || !*(_DWORD *)(v71 + 248)
    && *(_DWORD *)(v71 + 176)
    && !(*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 112LL))(v12) )
  {
    goto LABEL_16;
  }
  v65[0] = 0;
  v65[3] = 0;
  DoesImageOcclude = COcclusionContext::DoesImageOcclude(0LL, v12, a7, v65);
  v10 = DoesImageOcclude;
  if ( DoesImageOcclude < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DoesImageOcclude, 0x80Eu);
    goto LABEL_16;
  }
  if ( !v65[0] )
  {
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v8 + 24LL))(v8, v82) + 4) == 3 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_16;
      v46 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
      v47 = 0LL;
      goto LABEL_37;
    }
    v65[3] = 1;
  }
  v80 = 0;
  CMatrixStack::Top((CMatrixStack *)(v71 + 8), (struct CMILMatrix *)&v76);
  CMILMatrix::Multiply((CMILMatrix *)&v76, (COverlayContext *)((char *)v13 + 584));
  if ( v9 )
  {
    v42 = *(_OWORD *)(v9 + 16);
    v43 = *(_DWORD *)(v9 + 64);
    *(_OWORD *)v92 = *(_OWORD *)v9;
    v44 = *(_OWORD *)(v9 + 32);
    v93 = v42;
    v45 = *(_OWORD *)(v9 + 48);
    v94 = v44;
    v95 = v45;
    v96 = v43;
    CMILMatrix::Multiply((CMILMatrix *)v92, (const struct CMILMatrix *)&v76);
  }
  else
  {
    *(_OWORD *)v92 = v76;
    v93 = v77;
    v94 = v78;
    v95 = v79;
    v96 = v80;
  }
  v65[0] = 0;
  *(_DWORD *)v67 = 0;
  v69[0] = 0;
  v66[0] = 1;
  v68 = DXGI_MODE_ROTATION_IDENTITY;
  if ( CMILMatrix::Is2DAffine<1>((__int64)&v76, 1)
    && (v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v76 + 1) - 0.0)) & _xmm), v48 < 0.000081380211)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v77 - 0.0)) & _xmm) < 0.000081380211
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v76 - 0.0)) & _xmm) < 0.000081380211
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v77 + 1) - 0.0)) & _xmm) < 0.000081380211 )
  {
    v49 = v70;
    v65[0] = COverlayContext::DeriveOverlayRotationParameters(v70, (const struct CMILMatrix *)v92, &v68, v69, v66);
    *(_DWORD *)v67 = v69[0];
  }
  else
  {
    v49 = v70;
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v8 + 96LL))(v8) )
    *(_DWORD *)v67 |= 8u;
  if ( !v65[0] )
  {
    if ( *(_DWORD *)(*(_QWORD *)(v71 + 1184) + 24LL) <= 1u )
      goto LABEL_55;
    if ( !CMILMatrix::Is2DAffine<1>((__int64)v92, 1)
      || (v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v92 + 1) - 0.0)) & _xmm), v50 >= 0.000081380211)
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v93 - 0.0)) & _xmm) >= 0.000081380211 )
    {
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)v92 - 0.0)) & _xmm) >= 0.000081380211
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v93 + 1) - 0.0)) & _xmm) >= 0.000081380211 )
      {
        goto LABEL_55;
      }
    }
  }
  if ( !v11 || CShape::IsAxisAlignedRectangle(v11) )
  {
    v51 = _mm_loadu_si128((const __m128i *)((char *)v49 + 56));
    *(__m128i *)v82 = v51;
    CBaseClipStack::Top(v71 + 120, &v87);
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v13 + 584, (__int64)&v87, (float *)&v83);
    LODWORD(v82[0]) = v51.m128i_i32[0];
    if ( *(float *)&v83 > *(float *)v51.m128i_i32 )
    {
      LODWORD(v82[0]) = v83;
      v51.m128i_i32[0] = v83;
    }
    v52 = *((float *)v82 + 1);
    if ( *((float *)&v83 + 1) > *((float *)v82 + 1) )
    {
      HIDWORD(v82[0]) = HIDWORD(v83);
      v52 = *((float *)&v83 + 1);
    }
    v53 = *(float *)&v82[1];
    if ( *(float *)&v82[1] > v84 )
    {
      v53 = v84;
      *(float *)&v82[1] = v84;
    }
    v54 = *((float *)&v82[1] + 1);
    if ( *((float *)&v82[1] + 1) > v85 )
    {
      v54 = v85;
      *((float *)&v82[1] + 1) = v85;
    }
    if ( v53 <= *(float *)v51.m128i_i32 || v54 <= v52 )
    {
      v54 = 0.0;
      v53 = 0.0;
      v52 = 0.0;
      v51.m128i_i32[0] = 0;
      v82[1] = 0LL;
      v82[0] = 0LL;
    }
    if ( v11 )
    {
      v55 = (*(__int64 (__fastcall **)(CShape *, __int64 *, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, &v88, 0LL);
      v10 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x889u);
        goto LABEL_16;
      }
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v76, (__int64)&v88, (float *)&v88);
      if ( *(float *)&v88 > *(float *)v51.m128i_i32 )
      {
        LODWORD(v82[0]) = v88;
        v51.m128i_i32[0] = v88;
      }
      if ( *((float *)&v88 + 1) > v52 )
      {
        HIDWORD(v82[0]) = HIDWORD(v88);
        v52 = *((float *)&v88 + 1);
      }
      if ( v53 > v89 )
      {
        v53 = v89;
        *(float *)&v82[1] = v89;
      }
      if ( v54 > v90 )
      {
        v54 = v90;
        *((float *)&v82[1] + 1) = v90;
      }
      if ( v53 <= *(float *)v51.m128i_i32 || v54 <= v52 )
      {
        v54 = 0.0;
        v53 = 0.0;
        v52 = 0.0;
        v51.m128i_i32[0] = 0;
        v82[1] = 0LL;
        v82[0] = 0LL;
      }
    }
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v82) )
      goto LABEL_129;
    v56 = *(int (__fastcall ***)(char *, GUID *, __int64 *))v8;
    v80 = 0;
    if ( (*v56)(v8, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v75) < 0 )
    {
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *, __int128 *, _QWORD *))(*(_QWORD *)v12 + 64LL))(
        v12,
        &v76,
        v91);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v92, (__int64)v91, (float *)&v83);
      if ( *(float *)&v83 > *(float *)v51.m128i_i32 )
      {
        LODWORD(v82[0]) = v83;
        v51.m128i_i32[0] = v83;
      }
      if ( *((float *)&v83 + 1) > v52 )
      {
        HIDWORD(v82[0]) = HIDWORD(v83);
        v52 = *((float *)&v83 + 1);
      }
      if ( v53 > v84 )
      {
        v53 = v84;
        *(float *)&v82[1] = v84;
      }
      if ( v54 > v85 )
      {
        v54 = v85;
        goto LABEL_104;
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD *, struct tagRECT *, __int64 *))(*(_QWORD *)v75 + 24LL))(
        v75,
        0LL,
        &v76,
        v91,
        &v86,
        &v83);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v92, (__int64)&v83, (float *)&v83);
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v92, (__int64)&v86, (float *)&v86.left);
      if ( *(float *)&v86.left > *(float *)v51.m128i_i32 )
      {
        LODWORD(v82[0]) = v86.left;
        v51.m128i_i32[0] = v86.left;
      }
      if ( *(float *)&v86.top > v52 )
      {
        HIDWORD(v82[0]) = v86.top;
        v52 = *(float *)&v86.top;
      }
      if ( v53 > *(float *)&v86.right )
      {
        v53 = *(float *)&v86.right;
        LODWORD(v82[1]) = v86.right;
      }
      if ( v54 > *(float *)&v86.bottom )
      {
        v54 = *(float *)&v86.bottom;
LABEL_104:
        *((float *)&v82[1] + 1) = v54;
      }
    }
    if ( v53 <= *(float *)v51.m128i_i32 || v54 <= v52 )
    {
      v82[1] = 0LL;
      v82[0] = 0LL;
    }
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v82) )
    {
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 224LL))(v12);
      if ( !v65[0] )
      {
LABEL_55:
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          v47 = 1LL;
          v46 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
LABEL_37:
          McTemplateU0xq(v41, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v46, v47);
          goto LABEL_16;
        }
        goto LABEL_16;
      }
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v49 + 652, (__int64)v82, (float *)&v87.left);
      if ( (*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)v12 + 112LL))(v12) )
      {
        v59 = v74;
      }
      else
      {
        v86.left = (int)*(float *)&v87.left;
        v86.top = (int)*(float *)&v87.top;
        v86.right = (int)*(float *)&v87.right;
        v86.bottom = (int)*(float *)&v87.bottom;
        v87 = v86;
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v92, &v87);
        v58 = *(_DWORD *)v92[0]
           && (v57 = *(const struct FastRegion::Internal::CRgnData **)(v71 + 960), *(_DWORD *)v57)
           && FastRegion::Internal::CRgnData::Intersects(v92[0], v57);
        v59 = 1;
        if ( v58 )
        {
          v60 = 0;
LABEL_119:
          if ( (v59 & 1) != 0 )
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v92);
          if ( v60 )
          {
            v61 = v65[3];
            v62 = v70;
            if ( v65[2]
              && (v63 = COverlayContext::CheckAndRecordOverlayCandidate(
                          v70,
                          (__int64)&v83,
                          (__int64)v82,
                          v68,
                          v67[0],
                          v65[3],
                          v66[0]),
                  v10 = v63,
                  v63 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x8DAu);
            }
            else if ( v65[1] && !v61 )
            {
              v64 = COverlayContext::CheckAndNotifyFullScreenSwapChain(v62);
              v10 = v64;
              if ( v64 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x8E0u);
            }
          }
          goto LABEL_16;
        }
      }
      v60 = 1;
      goto LABEL_119;
    }
LABEL_129:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v47 = 3LL;
      v46 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
      goto LABEL_37;
    }
    goto LABEL_16;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v47 = 2LL;
    v46 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
    goto LABEL_37;
  }
LABEL_16:
  if ( v75 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
  return v10;
}
