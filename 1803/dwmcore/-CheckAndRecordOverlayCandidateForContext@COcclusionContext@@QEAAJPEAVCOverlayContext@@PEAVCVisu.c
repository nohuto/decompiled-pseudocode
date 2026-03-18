/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006B90
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180006D04 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001739C (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x180083124 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x1800A9204 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800BE870 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180163E08 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180165AB4 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     McTemplateU0xdddddddd @ 0x1801709F0 (McTemplateU0xdddddddd.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidateForContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        CShape *a6,
        unsigned int a7)
{
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // r14
  _QWORD *v10; // rbx
  CShape *v11; // r12
  __int64 v12; // r13
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(_QWORD *); // rax
  CCompositionSurfaceInfo *v15; // r15
  char v16; // al
  __int64 v17; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 v20; // rax
  __int64 v21; // r13
  float v22; // xmm0_4
  float v23; // eax
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 (__fastcall *v26)(_QWORD *); // rax
  int v27; // r12d
  float v28; // xmm0_4
  char v29; // si
  char v30; // di
  char v31; // bl
  unsigned __int8 v32; // al
  int v33; // edx
  int v34; // ecx
  int DoesImageOcclude; // eax
  __int64 v36; // rcx
  __int128 v37; // xmm1
  int v38; // eax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  unsigned __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // r14d
  bool v44; // al
  __int64 v45; // r14
  __m128i v46; // xmm6
  float top; // xmm7_4
  float v48; // xmm3_4
  float right; // xmm8_4
  float v50; // xmm2_4
  float bottom; // xmm9_4
  float v52; // xmm1_4
  int v53; // eax
  float v54; // xmm3_4
  float v55; // xmm2_4
  float v56; // xmm1_4
  int (__fastcall **v57)(char *, GUID *, _QWORD *); // rax
  float v58; // xmm0_4
  const struct FastRegion::Internal::CRgnData *v59; // rdx
  bool v60; // al
  char v61; // cl
  char v62; // si
  char v63; // si
  int v64; // eax
  int v65; // eax
  char v66[4]; // [rsp+68h] [rbp-A0h] BYREF
  bool v67[4]; // [rsp+6Ch] [rbp-9Ch] BYREF
  enum DXGI_MODE_ROTATION v68; // [rsp+70h] [rbp-98h] BYREF
  char v69[4]; // [rsp+74h] [rbp-94h]
  unsigned int v70[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v71; // [rsp+80h] [rbp-88h]
  float v72; // [rsp+88h] [rbp-80h]
  unsigned int v73; // [rsp+8Ch] [rbp-7Ch]
  int v74; // [rsp+90h] [rbp-78h]
  _QWORD v75[2]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v76[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v77; // [rsp+E8h] [rbp-20h]
  struct D2D_RECT_F v78; // [rsp+F8h] [rbp-10h] BYREF
  struct tagRECT v79; // [rsp+108h] [rbp+0h] BYREF
  __int128 v80; // [rsp+118h] [rbp+10h] BYREF
  __int64 v81; // [rsp+128h] [rbp+20h] BYREF
  float v82; // [rsp+130h] [rbp+28h]
  float v83; // [rsp+134h] [rbp+2Ch]
  CCompositionSurfaceInfo *v84; // [rsp+138h] [rbp+30h] BYREF
  float v85; // [rsp+140h] [rbp+38h]
  float v86; // [rsp+144h] [rbp+3Ch]
  _QWORD v87[2]; // [rsp+148h] [rbp+40h] BYREF
  struct FastRegion::Internal::CRgnData *v88[2]; // [rsp+158h] [rbp+50h] BYREF
  __int128 v89; // [rsp+168h] [rbp+60h]
  __int128 v90; // [rsp+178h] [rbp+70h]
  __int128 v91; // [rsp+188h] [rbp+80h]
  int v92; // [rsp+198h] [rbp+90h]

  v7 = *a4;
  v8 = 0LL;
  v9 = a5;
  v10 = a4;
  v11 = a6;
  v12 = a2;
  v71 = a1;
  v13 = 0;
  v14 = *(__int64 (__fastcall **)(_QWORD *))(v7 + 200);
  v87[0] = a4;
  v75[1] = a3;
  *(_QWORD *)&v78.left = a2;
  *(_QWORD *)&v80 = a5;
  v81 = (__int64)a6;
  v74 = 0;
  v73 = 0;
  v75[0] = 0LL;
  v15 = (CCompositionSurfaceInfo *)v14(a4);
  v84 = v15;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v20 = *v10;
    v77 = 0;
    (*(void (__fastcall **)(_QWORD *, _OWORD *, struct tagRECT *))(v20 + 64))(v10, v76, &v79);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v21 = *((_QWORD *)v15 + 5);
      v22 = *(float *)&v79.bottom + 6291456.25;
      v23 = v22;
      v24 = *(float *)&v79.right + 6291456.25;
      v68 = (int)(LODWORD(v23) << 10) >> 11;
      v25 = *v10;
      *(float *)v70 = v24;
      v26 = *(__int64 (__fastcall **)(_QWORD *))(v25 + 112);
      v27 = (int)(LODWORD(v24) << 10) >> 11;
      v28 = *(float *)&v79.top + 6291456.25;
      *(float *)v69 = v28;
      v72 = *(float *)&v79.left + 6291456.25;
      v29 = v26(v10);
      v30 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 104LL))(v10);
      v31 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 136LL))(v10);
      v32 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v87[0] + 128LL))(v87[0]);
      McTemplateU0xdddddddd(
        v34,
        v33,
        v21,
        v32,
        v31,
        v30,
        v29,
        (int)(LODWORD(v72) << 10) >> 11,
        (int)(LODWORD(v28) << 10) >> 11,
        v27,
        v68);
      v10 = (_QWORD *)v87[0];
      v8 = 0LL;
      v13 = v73;
      v9 = v80;
      v15 = v84;
      v11 = (CShape *)v81;
      v12 = *(_QWORD *)&v78.left;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 104LL))(v10)
    || (v16 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 128LL))(v10), v66[1] = 0, v16) )
  {
    v66[1] = 1;
  }
  v17 = *(_QWORD *)(v12 + 16);
  v66[3] = 0;
  if ( v17 )
    v66[3] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 512LL))(v17);
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v15);
  if ( RenderingRealizationNoRef )
    v8 = (char *)RenderingRealizationNoRef + 144;
  if ( !v66[1] && !v66[3]
    || !v8
    || !*(_DWORD *)(v71 + 248)
    && *(_DWORD *)(v71 + 176)
    && !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 112LL))(v10) )
  {
    goto LABEL_10;
  }
  v66[0] = 0;
  v66[2] = 0;
  DoesImageOcclude = COcclusionContext::DoesImageOcclude(0LL, v10, a7, v66);
  v13 = DoesImageOcclude;
  if ( DoesImageOcclude < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DoesImageOcclude, 0x818u);
    goto LABEL_10;
  }
  if ( !v66[0] )
  {
    if ( *(_DWORD *)((*(__int64 (__fastcall **)(char *, struct D2D_RECT_F *))(*(_QWORD *)v8 + 24LL))(v8, &v78) + 4) == 3 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_10;
      v41 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
      v42 = 0LL;
      goto LABEL_28;
    }
    v66[2] = 1;
  }
  v77 = 0;
  CMatrixStack::Top((CMatrixStack *)(v71 + 8), (struct CMILMatrix *)v76);
  CMILMatrix::Multiply((CMILMatrix *)v76, (const struct CMILMatrix *)(v12 + 592));
  if ( v9 )
  {
    v37 = *(_OWORD *)(v9 + 16);
    v38 = *(_DWORD *)(v9 + 64);
    *(_OWORD *)v88 = *(_OWORD *)v9;
    v39 = *(_OWORD *)(v9 + 32);
    v89 = v37;
    v40 = *(_OWORD *)(v9 + 48);
    v90 = v39;
    v91 = v40;
    v92 = v38;
    CMILMatrix::Multiply((CMILMatrix *)v88, (const struct CMILMatrix *)v76);
  }
  else
  {
    *(_OWORD *)v88 = v76[0];
    v89 = v76[1];
    v90 = v76[2];
    v91 = v76[3];
    v92 = v77;
  }
  v43 = 0;
  v66[0] = 0;
  *(_DWORD *)v69 = 0;
  v70[0] = 0;
  v67[0] = 1;
  v68 = DXGI_MODE_ROTATION_IDENTITY;
  if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v76) )
  {
    v44 = COverlayContext::DeriveOverlayRotationParameters(
            (COverlayContext *)v12,
            (const struct CMILMatrix *)v88,
            &v68,
            v70,
            v67);
    v43 = v70[0];
    v66[0] = v44;
    *(_DWORD *)v69 = v70[0];
  }
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v8 + 96LL))(v8) )
    *(_DWORD *)v69 = v43 | 8;
  v45 = v71;
  if ( v66[0]
    || *(_DWORD *)(*(_QWORD *)(v71 + 1184) + 24LL) > 1u
    && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v88) )
  {
    if ( v11 && !CShape::IsAxisAlignedRectangle(v11) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v42 = 2LL;
        v41 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
LABEL_28:
        McTemplateU0xq(v36, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v41, v42);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
    v46 = _mm_loadu_si128((const __m128i *)(v12 + 56));
    v78 = (struct D2D_RECT_F)v46;
    CBaseClipStack::Top(v45 + 120, &v81);
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v12 + 592));
    LODWORD(v78.left) = v46.m128i_i32[0];
    if ( *(float *)&v79.left > *(float *)v46.m128i_i32 )
    {
      LODWORD(v78.left) = v79.left;
      v46.m128i_i32[0] = v79.left;
    }
    top = v78.top;
    v48 = v78.top;
    if ( *(float *)&v79.top > v78.top )
    {
      LODWORD(v78.top) = v79.top;
      top = *(float *)&v79.top;
      v48 = *(float *)&v79.top;
    }
    right = v78.right;
    v50 = v78.right;
    if ( v78.right > *(float *)&v79.right )
    {
      LODWORD(v78.right) = v79.right;
      right = *(float *)&v79.right;
      v50 = *(float *)&v79.right;
    }
    bottom = v78.bottom;
    v52 = v78.bottom;
    if ( v78.bottom > *(float *)&v79.bottom )
    {
      LODWORD(v78.bottom) = v79.bottom;
      bottom = *(float *)&v79.bottom;
      v52 = *(float *)&v79.bottom;
    }
    if ( v50 <= *(float *)v46.m128i_i32 || v52 <= v48 )
    {
      bottom = 0.0;
      right = 0.0;
      top = 0.0;
      v78.bottom = 0.0;
      v46.m128i_i32[0] = 0;
      v78.right = 0.0;
      v78.top = 0.0;
      v78.left = 0.0;
    }
    if ( v11 )
    {
      v53 = (*(__int64 (__fastcall **)(CShape *, CCompositionSurfaceInfo **, _QWORD))(*(_QWORD *)v11 + 32LL))(
              v11,
              &v84,
              0LL);
      v13 = v53;
      if ( v53 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x893u);
        goto LABEL_10;
      }
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v76);
      if ( *(float *)&v84 > *(float *)v46.m128i_i32 )
      {
        LODWORD(v78.left) = (_DWORD)v84;
        v46.m128i_i32[0] = (int)v84;
      }
      v54 = top;
      if ( *((float *)&v84 + 1) > top )
      {
        v78.top = *((FLOAT *)&v84 + 1);
        top = *((float *)&v84 + 1);
        v54 = *((float *)&v84 + 1);
      }
      v55 = right;
      if ( right > v85 )
      {
        v78.right = v85;
        right = v85;
        v55 = v85;
      }
      v56 = bottom;
      if ( bottom > v86 )
      {
        v78.bottom = v86;
        bottom = v86;
        v56 = v86;
      }
      if ( v55 <= *(float *)v46.m128i_i32 || v56 <= v54 )
      {
        bottom = 0.0;
        right = 0.0;
        top = 0.0;
        v78.bottom = 0.0;
        v46.m128i_i32[0] = 0;
        v78.right = 0.0;
        v78.top = 0.0;
        v78.left = 0.0;
      }
    }
    if ( IsEmpty(&v78) )
      goto LABEL_110;
    v57 = *(int (__fastcall ***)(char *, GUID *, _QWORD *))v8;
    v77 = 0;
    if ( (*v57)(v8, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, v75) < 0 )
    {
      (*(void (__fastcall **)(_QWORD *, _OWORD *, _QWORD *))(*v10 + 64LL))(v10, v76, v87);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v88);
      if ( *(float *)&v81 > *(float *)v46.m128i_i32 )
      {
        LODWORD(v78.left) = v81;
        v46.m128i_i32[0] = v81;
      }
      if ( *((float *)&v81 + 1) > top )
      {
        v78.top = *((FLOAT *)&v81 + 1);
        top = *((float *)&v81 + 1);
      }
      if ( right > v82 )
      {
        v78.right = v82;
        right = v82;
      }
      v58 = v83;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _OWORD *, _QWORD *, __int128 *, __int64 *))(*(_QWORD *)v75[0] + 24LL))(
        v75[0],
        0LL,
        v76,
        v87,
        &v80,
        &v81);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v88);
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v88);
      if ( *(float *)&v80 > *(float *)v46.m128i_i32 )
      {
        LODWORD(v78.left) = v80;
        v46.m128i_i32[0] = v80;
      }
      if ( *((float *)&v80 + 1) > top )
      {
        v78.top = *((FLOAT *)&v80 + 1);
        top = *((float *)&v80 + 1);
      }
      if ( right > *((float *)&v80 + 2) )
      {
        v78.right = *((FLOAT *)&v80 + 2);
        right = *((float *)&v80 + 2);
      }
      v58 = *((float *)&v80 + 3);
    }
    if ( bottom > v58 )
    {
      v78.bottom = v58;
      bottom = v58;
    }
    if ( right <= *(float *)v46.m128i_i32 || bottom <= top )
    {
      v78.bottom = 0.0;
      v78.right = 0.0;
      v78.top = 0.0;
      v78.left = 0.0;
    }
    if ( IsEmpty(&v78) )
    {
LABEL_110:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v42 = 3LL;
        v41 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
        goto LABEL_28;
      }
      goto LABEL_10;
    }
    (*(void (__fastcall **)(_QWORD *))(*v10 + 224LL))(v10);
    if ( v66[0] )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v12 + 660));
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 112LL))(v10) )
      {
        v61 = v74;
      }
      else
      {
        LODWORD(v80) = (int)*(float *)&v79.left;
        DWORD1(v80) = (int)*(float *)&v79.top;
        DWORD2(v80) = (int)*(float *)&v79.right;
        HIDWORD(v80) = (int)*(float *)&v79.bottom;
        v79 = (struct tagRECT)v80;
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v88, &v79);
        v60 = *(_DWORD *)v88[0]
           && (v59 = *(const struct FastRegion::Internal::CRgnData **)(v45 + 960), *(_DWORD *)v59)
           && FastRegion::Internal::CRgnData::Intersects(v88[0], v59);
        v61 = 1;
        if ( v60 )
        {
          v62 = 0;
LABEL_98:
          if ( (v61 & 1) != 0 )
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v88);
          if ( v62 )
          {
            v63 = v66[2];
            if ( v66[1]
              && (v64 = COverlayContext::CheckAndRecordOverlayCandidate(
                          (COverlayContext *)v12,
                          (__int64)&v81,
                          (__int64)&v78,
                          v68,
                          v69[0],
                          v66[2],
                          v67[0]),
                  v13 = v64,
                  v64 < 0) )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x8E4u);
            }
            else if ( v66[3] )
            {
              if ( !v63 )
              {
                v65 = COverlayContext::CheckAndNotifyFullScreenSwapChain((COverlayContext *)v12);
                v13 = v65;
                if ( v65 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v65, 0x8EAu);
              }
            }
          }
          goto LABEL_10;
        }
      }
      v62 = 1;
      goto LABEL_98;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v42 = 1LL;
    v41 = *((unsigned int *)v15 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v15 + 5)) << 32);
    goto LABEL_28;
  }
LABEL_10:
  if ( v75[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v75[0] + 16LL))(v75[0]);
  return v13;
}
