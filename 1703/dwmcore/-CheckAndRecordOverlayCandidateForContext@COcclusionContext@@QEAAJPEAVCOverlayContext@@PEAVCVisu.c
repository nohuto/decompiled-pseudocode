/*
 * XREFs of ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D100
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001D8EC (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Top@CBaseClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001CE98 (-Top@CBaseClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180025694 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z @ 0x1800257C8 (-Intersects@CRgnData@Internal@FastRegion@@SA_NAEBV123@0@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18004EC48 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FBE0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180072544 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18009A87C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18009B300 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?NeedsSwapChainFullScreenNotification@COverlayContext@@QEBA_NXZ @ 0x1800D4D2C (-NeedsSwapChainFullScreenNotification@COverlayContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??1CRegion@@QEAA@XZ @ 0x180132A48 (--1CRegion@@QEAA@XZ.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014EC64 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180150820 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     Template_xdddddddd @ 0x1801548E8 (Template_xdddddddd.c)
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
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned int v9; // ebx
  _QWORD *v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 (__fastcall *v13)(_QWORD *); // rax
  CCompositionSurfaceInfo *v14; // rsi
  __int64 v15; // rax
  float v16; // xmm0_4
  float v17; // eax
  float v18; // xmm0_4
  __int64 v19; // rax
  __int64 (__fastcall *v20)(_QWORD *); // rax
  int v21; // r13d
  unsigned int v22; // xmm0_4
  char v23; // r14
  char v24; // si
  char v25; // di
  unsigned __int8 v26; // al
  int v27; // edx
  int v28; // ecx
  char v29; // al
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  char *v31; // r14
  int DoesImageOcclude; // eax
  __int64 v33; // rcx
  __int128 v34; // xmm1
  int v35; // eax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  unsigned __int64 v38; // r8
  __int64 v39; // r9
  CShape *v40; // r13
  int v41; // eax
  int (__fastcall **v42)(char *, GUID *, __int64 *); // rax
  void *v43; // rdx
  const struct FastRegion::Internal::CRgnData *v44; // rdx
  bool v45; // al
  char v46; // cl
  char v47; // si
  char v48; // si
  int v49; // eax
  int v50; // eax
  bool v52; // [rsp+60h] [rbp-A0h] BYREF
  char v53; // [rsp+61h] [rbp-9Fh]
  char v54; // [rsp+62h] [rbp-9Eh]
  bool v55; // [rsp+63h] [rbp-9Dh] BYREF
  bool v56; // [rsp+64h] [rbp-9Ch]
  DXGI_MODE_ROTATION v57; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v58[2]; // [rsp+6Ch] [rbp-94h] BYREF
  float v59; // [rsp+74h] [rbp-8Ch]
  unsigned int v60; // [rsp+78h] [rbp-88h]
  int v61; // [rsp+7Ch] [rbp-84h]
  __int64 v62; // [rsp+80h] [rbp-80h] BYREF
  _QWORD *v63; // [rsp+88h] [rbp-78h]
  __int64 v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  _OWORD v66[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v67; // [rsp+E0h] [rbp-20h]
  struct tagRECT v68; // [rsp+F0h] [rbp-10h] BYREF
  CShape *v69[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v70[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v71[2]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v72[2]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v73[2]; // [rsp+140h] [rbp+40h] BYREF
  struct FastRegion::Internal::CRgnData *v74[2]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v75; // [rsp+160h] [rbp+60h]
  __int128 v76; // [rsp+170h] [rbp+70h]
  __int128 v77; // [rsp+180h] [rbp+80h]
  int v78; // [rsp+190h] [rbp+90h]

  v7 = a1;
  v8 = a5;
  v9 = 0;
  v61 = 0;
  v10 = a4;
  v62 = 0LL;
  v11 = a2;
  v69[0] = a6;
  v12 = *a4;
  v70[0] = a1;
  v63 = a4;
  v65 = a3;
  v13 = *(__int64 (__fastcall **)(_QWORD *))(v12 + 184);
  v73[0] = a2;
  v71[0] = a5;
  v60 = 0;
  v14 = (CCompositionSurfaceInfo *)v13(a4);
  v72[0] = v14;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v15 = *v10;
    v67 = 0;
    (*(void (__fastcall **)(_QWORD *, _OWORD *, struct tagRECT *))(v15 + 56))(v10, v66, &v68);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v64 = *((_QWORD *)v14 + 5);
      v16 = *(float *)&v68.bottom + 6291456.25;
      v17 = v16;
      v18 = *(float *)&v68.right + 6291456.25;
      v57 = (int)(LODWORD(v17) << 10) >> 11;
      v19 = *v10;
      *(float *)v58 = v18;
      v20 = *(__int64 (__fastcall **)(_QWORD *))(v19 + 104);
      v21 = (int)(LODWORD(v18) << 10) >> 11;
      *(float *)&v22 = *(float *)&v68.top + 6291456.25;
      v58[1] = v22;
      v59 = *(float *)&v68.left + 6291456.25;
      v23 = v20(v10);
      v24 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 96LL))(v10);
      v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 128LL))(v10);
      v26 = (*(__int64 (__fastcall **)(_QWORD *))(*v63 + 120LL))(v63);
      Template_xdddddddd(
        v28,
        v27,
        v64,
        v26,
        v25,
        v24,
        v23,
        (int)(LODWORD(v59) << 10) >> 11,
        (int)(v22 << 10) >> 11,
        v21,
        v57);
      v10 = v63;
      v9 = v60;
      v14 = (CCompositionSurfaceInfo *)v72[0];
      v11 = v73[0];
      v8 = v71[0];
      v7 = v70[0];
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 96LL))(v10)
    || (v29 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 120LL))(v10), v53 = 0, v29) )
  {
    v53 = 1;
  }
  v56 = COverlayContext::NeedsSwapChainFullScreenNotification((COverlayContext *)v11);
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v14);
  if ( RenderingRealizationNoRef )
    v31 = (char *)RenderingRealizationNoRef + 104;
  else
    v31 = 0LL;
  if ( !v53 && !v56 || !v31 || *(_BYTE *)(v7 + 216) && *(_DWORD *)(v7 + 176) )
    goto LABEL_70;
  v52 = 0;
  v54 = 0;
  DoesImageOcclude = COcclusionContext::DoesImageOcclude(0LL, v10, a7, &v52);
  v9 = DoesImageOcclude;
  if ( DoesImageOcclude < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DoesImageOcclude, 0x80Cu);
    goto LABEL_70;
  }
  if ( !v52 )
  {
    if ( (a7 & 2) != 0 || (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v31 + 48LL))(v31) == 3 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_70;
      v38 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
      v39 = 0LL;
      goto LABEL_24;
    }
    v54 = 1;
  }
  v67 = 0;
  CMatrixStack::Top((CMatrixStack *)(v7 + 8), (struct CMILMatrix *)v66);
  CMILMatrix::Multiply((CMILMatrix *)v66, (const struct CMILMatrix *)(v11 + 528));
  if ( v8 )
  {
    v34 = *(_OWORD *)(v8 + 16);
    v35 = *(_DWORD *)(v8 + 64);
    *(_OWORD *)v74 = *(_OWORD *)v8;
    v36 = *(_OWORD *)(v8 + 32);
    v75 = v34;
    v37 = *(_OWORD *)(v8 + 48);
    v76 = v36;
    v77 = v37;
    v78 = v35;
    CMILMatrix::Multiply((CMILMatrix *)v74, (const struct CMILMatrix *)v66);
  }
  else
  {
    *(_OWORD *)v74 = v66[0];
    v75 = v66[1];
    v76 = v66[2];
    v77 = v66[3];
    v78 = v67;
  }
  v58[0] = 0;
  v52 = 0;
  v55 = 1;
  v57 = DXGI_MODE_ROTATION_IDENTITY;
  if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v66)
    || !(v52 = COverlayContext::DeriveOverlayRotationParameters(
                 (COverlayContext *)v11,
                 (const struct CMILMatrix *)v74,
                 &v57,
                 v58,
                 &v55)) )
  {
    v33 = *(_QWORD *)(v7 + 1088);
    if ( *(_DWORD *)(v33 + 24) <= 1u || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v74) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        v39 = 1LL;
        v38 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
        goto LABEL_24;
      }
      goto LABEL_70;
    }
  }
  v40 = v69[0];
  if ( v69[0] && !CShape::IsAxisAlignedRectangle(v69[0]) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v39 = 2LL;
      v38 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
LABEL_24:
      Template_xd(v33, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v38, v39);
      goto LABEL_70;
    }
    goto LABEL_70;
  }
  *(_OWORD *)v69 = *(_OWORD *)(v11 + 40);
  CBaseClipStack::Top((_DWORD *)(v7 + 120), &v68);
  CMILMatrix::Transform2DBoundsHelper<0>(v11 + 528, &v68, v70);
  v68 = *(struct tagRECT *)v70;
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v69, &v68);
  if ( v40 )
  {
    v41 = (*(__int64 (__fastcall **)(CShape *, _QWORD *, _QWORD))(*(_QWORD *)v40 + 32LL))(v40, v73, 0LL);
    v9 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x883u);
      goto LABEL_70;
    }
    CMILMatrix::Transform2DBoundsHelper<0>(v66, v73, v73);
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v69, v73);
  }
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v69) )
    goto LABEL_65;
  v42 = *(int (__fastcall ***)(char *, GUID *, __int64 *))v31;
  v67 = 0;
  if ( (*v42)(v31, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v62) < 0 )
  {
    (*(void (__fastcall **)(_QWORD *, _OWORD *, _QWORD *))(*v10 + 56LL))(v10, v66, v72);
    CMILMatrix::Transform2DBoundsHelper<0>(v74, v72, v71);
    v43 = v71;
  }
  else
  {
    (*(void (__fastcall **)(__int64, _QWORD, _OWORD *, _QWORD *, struct tagRECT *, __int64 *))(*(_QWORD *)v62 + 24LL))(
      v62,
      0LL,
      v66,
      v72,
      &v68,
      v71);
    CMILMatrix::Transform2DBoundsHelper<0>(v74, v71, v71);
    CMILMatrix::Transform2DBoundsHelper<0>(v74, &v68, &v68);
    v43 = &v68;
  }
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(v69, v43);
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v69) )
  {
LABEL_65:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v39 = 3LL;
      v38 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
      goto LABEL_24;
    }
    goto LABEL_70;
  }
  (*(void (__fastcall **)(_QWORD *))(*v10 + 208LL))(v10);
  if ( v52 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(v11 + 596, v69, v70);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v10 + 104LL))(v10) )
    {
      v46 = v61;
    }
    else
    {
      v68.left = (int)*(float *)v70;
      v68.top = (int)*((float *)v70 + 1);
      v68.right = (int)*(float *)&v70[1];
      v68.bottom = (int)*((float *)&v70[1] + 1);
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v74, &v68);
      v45 = *(_DWORD *)v74[0]
         && (v44 = *(const struct FastRegion::Internal::CRgnData **)(v7 + 872), *(_DWORD *)v44)
         && FastRegion::Internal::CRgnData::Intersects(v74[0], v44);
      v46 = 1;
      if ( v45 )
      {
        v47 = 0;
LABEL_53:
        if ( (v46 & 1) != 0 )
          CRegion::~CRegion((CRegion *)v74);
        if ( v47 )
        {
          v48 = v54;
          if ( v53
            && (v49 = COverlayContext::CheckAndRecordOverlayCandidate(
                        (COverlayContext *)v11,
                        (__int64)v71,
                        (__int64)v69,
                        (__int64)v70,
                        v57,
                        v58[0],
                        v54,
                        v55),
                v9 = v49,
                v49 < 0) )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x8DCu);
          }
          else if ( v56 && !v48 )
          {
            v50 = COverlayContext::CheckAndNotifyFullScreenSwapChain((COverlayContext *)v11);
            v9 = v50;
            if ( v50 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0x8E2u);
          }
        }
        goto LABEL_70;
      }
    }
    v47 = 1;
    goto LABEL_53;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v39 = 1LL;
    v38 = *((unsigned int *)v14 + 10) | (unsigned __int64)((__int64)(int)HIDWORD(*((_QWORD *)v14 + 5)) << 32);
    goto LABEL_24;
  }
LABEL_70:
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  return v9;
}
