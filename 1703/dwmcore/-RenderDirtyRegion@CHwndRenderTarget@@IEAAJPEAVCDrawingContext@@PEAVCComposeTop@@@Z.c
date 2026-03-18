/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x18000F688 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000F7A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18000F84C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18001382C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180047D18 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18006D45C (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18006F9F0 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x180070040 (-NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z.c)
 *     ?NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180070320 (-NotifyRenderedRect@CHwFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x180072420 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180092DA8 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180098678 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x1800AB078 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800B8178 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B832C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BE810 (-SubtractOverdraw@CComposeTop@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800C05AC (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800C6210 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800D5354 (ceilf_0.c)
 *     floorf_0 @ 0x1800D536C (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180128F5C (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18012D074 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     Template_qdffff @ 0x1801464EC (Template_qdffff.c)
 *     Template_xqq @ 0x180146618 (Template_xqq.c)
 *     Template_xd @ 0x180148D8C (Template_xd.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015527C (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDirtyRegion(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  __int64 v3; // rax
  int v4; // r15d
  CHwndRenderTarget *v5; // r14
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v8; // rdi
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  char v14; // r12
  __int64 v15; // rcx
  CHwFullScreenRenderTarget *v16; // rcx
  void (__fastcall *v17)(CHwFullScreenRenderTarget *__hidden, bool); // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  unsigned int v21; // r10d
  float v22; // xmm4_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  __int128 v26; // xmm0
  CDrawingContext *v27; // rdi
  bool v28; // bl
  __int64 v29; // rax
  __int64 v30; // rax
  const struct CMILMatrix *v31; // r9
  __int64 v32; // r13
  __int64 v33; // r14
  unsigned int v34; // r12d
  __int64 v35; // rcx
  int v36; // eax
  CDirtyRegion *v37; // rcx
  __int64 v38; // rdi
  unsigned int v39; // esi
  __int64 (__fastcall *v40)(_QWORD, _QWORD, _QWORD); // r9
  __m128 v41; // xmm2
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r12
  __int32 v45; // xmm8_4
  __int32 v46; // xmm7_4
  __int32 v47; // xmm6_4
  __int64 v48; // rcx
  _QWORD **v49; // r15
  _QWORD *v50; // rsi
  __int64 v51; // r13
  _QWORD *v52; // rdi
  CVisual *v53; // rcx
  struct _LIST_ENTRY *v54; // rbx
  unsigned int *v55; // rcx
  __m128 v56; // xmm1
  float v57; // xmm3_4
  __int64 v58; // rcx
  __int64 (__fastcall *v59)(_QWORD, _QWORD, _QWORD); // rax
  int v61; // eax
  int v62; // r9d
  char v63; // bl
  __m128i *v64; // rax
  float v65; // xmm4_4
  unsigned __int64 v66; // xmm1_8
  float v67; // xmm2_4
  float v68; // xmm3_4
  float v69; // xmm0_4
  float v70; // xmm2_4
  float v71; // xmm1_4
  float v72; // xmm0_4
  char HasVirtualModeScale; // al
  CDisplay *v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  float v77; // xmm8_4
  float v78; // xmm1_4
  float v79; // xmm7_4
  float v80; // xmm1_4
  float v81; // xmm6_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  __int64 *v84; // rcx
  __int64 v85; // rax
  __int64 (__fastcall *v86)(__int64 *, __int128 *); // rax
  int v87; // eax
  __int64 v89; // rdi
  struct _GUID *v90; // r9
  __int64 v91; // rdi
  int v92; // ebx
  __int64 ExistingRenderTarget; // rax
  __int64 v94; // r9
  __int128 v95; // xmm0
  int v96; // eax
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  unsigned int v99; // eax
  __int128 v100; // xmm1
  __int64 v101; // rcx
  CVisual **v102; // rbx
  struct COcclusionInfo *OcclusionInfo; // rax
  int CurrentRealizationAsRenderTarget; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  __int64 v108; // r8
  int v109; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v112; // r9d
  unsigned int v113; // [rsp+28h] [rbp-E0h]
  __int64 v114; // [rsp+38h] [rbp-D0h]
  char v115; // [rsp+40h] [rbp-C8h]
  bool v116[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v117; // [rsp+4Ch] [rbp-BCh]
  int v118; // [rsp+50h] [rbp-B8h]
  int v119; // [rsp+54h] [rbp-B4h]
  CDrawingContext *v120; // [rsp+58h] [rbp-B0h]
  __int64 v121; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v122; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v123; // [rsp+70h] [rbp-98h]
  __int64 v124; // [rsp+78h] [rbp-90h]
  struct IBitmapSource *v125; // [rsp+80h] [rbp-88h] BYREF
  CHwndRenderTarget *v126; // [rsp+88h] [rbp-80h]
  struct IRenderTarget *v127; // [rsp+90h] [rbp-78h] BYREF
  struct CComposeTop *v128; // [rsp+98h] [rbp-70h]
  __m128 v129; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v130; // [rsp+B0h] [rbp-58h] BYREF
  int v131; // [rsp+B8h] [rbp-50h]
  __int64 v132; // [rsp+BCh] [rbp-4Ch]
  __int64 v133; // [rsp+C8h] [rbp-40h]
  _OWORD v134[4]; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v135; // [rsp+118h] [rbp+10h]
  unsigned __int64 v136; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v137; // [rsp+130h] [rbp+28h]
  __m128 v138; // [rsp+138h] [rbp+30h] BYREF
  __int128 v139; // [rsp+148h] [rbp+40h] BYREF
  __int128 v140; // [rsp+158h] [rbp+50h] BYREF
  float X; // [rsp+168h] [rbp+60h] BYREF
  float v142; // [rsp+16Ch] [rbp+64h]
  float v143; // [rsp+170h] [rbp+68h]
  float v144; // [rsp+174h] [rbp+6Ch]
  _DWORD v145[4]; // [rsp+178h] [rbp+70h] BYREF
  _DWORD v146[8]; // [rsp+188h] [rbp+80h]
  int v147[4]; // [rsp+1A8h] [rbp+A0h] BYREF

  v3 = *((_QWORD *)this + 18);
  v120 = a2;
  v4 = 0;
  v5 = this;
  v128 = a3;
  v126 = this;
  v119 = 0;
  if ( *(_BYTE *)(v3 + 2724) )
    v6 = 2708LL;
  else
    v6 = 960LL;
  v7 = (*((_DWORD *)v5 + 93) & 0x10000) == 0;
  v8 = v6 + v3;
  v9 = *(_DWORD *)(v3 + 1120);
  v10 = 0;
  v127 = 0LL;
  v11 = 0LL;
  v116[0] = *(_BYTE *)(v3 + 2724);
  v12 = *((_QWORD *)v5 + 2);
  v118 = 0;
  v122 = 0LL;
  LODWORD(v121) = 0;
  v13 = *(_QWORD *)(v12 + 32);
  LOBYTE(v117) = 0;
  v14 = *(_BYTE *)(v13 + 151);
  v116[2] = v14;
  v116[1] = !v7 && !v14;
  v15 = *((_QWORD *)v5 + 15);
  LODWORD(v123) = 0x7FFFFFFF;
  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v15 + 64LL))(v15, &v139);
  v16 = (CHwFullScreenRenderTarget *)*((_QWORD *)v5 + 15);
  v17 = *(void (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool))(*(_QWORD *)v16 + 440LL);
  if ( v17 == CHwFullScreenRenderTarget::NotifySwapChainFullScreen )
    CHwFullScreenRenderTarget::NotifySwapChainFullScreen(v16, 0);
  else
    v17(v16, 0);
  v21 = 0;
  if ( v116[0] )
  {
    v10 = 1;
    v146[0] = 0;
    *(_OWORD *)v147 = v139;
  }
  else
  {
    v18 = 0LL;
    if ( !v9 )
      goto LABEL_24;
    v22 = *((float *)&v139 + 3);
    v19 = 0LL;
    v23 = *((float *)&v139 + 2);
    v24 = *((float *)&v139 + 1);
    v25 = *(float *)&v139;
    do
    {
      v26 = *(_OWORD *)(v8 + v19);
      v20 = v10;
      *(_OWORD *)&v147[4 * v10] = v26;
      v140 = v26;
      if ( v25 > *(float *)&v26 )
        *(float *)&v147[4 * v10] = v25;
      if ( v24 > *(float *)&v147[4 * v10 + 1] )
        *(float *)&v147[4 * v10 + 1] = v24;
      if ( *(float *)&v147[4 * v10 + 2] > v23 )
        *(float *)&v147[4 * v10 + 2] = v23;
      if ( *(float *)&v147[4 * v10 + 3] > v22 )
        *(float *)&v147[4 * v10 + 3] = v22;
      if ( *(float *)&v147[4 * v10 + 2] <= *(float *)&v147[4 * v10]
        || *(float *)&v147[4 * v10 + 3] <= *(float *)&v147[4 * v10 + 1] )
      {
        *(_QWORD *)&v147[4 * v10 + 2] = 0LL;
        *(_QWORD *)&v147[4 * v10] = 0LL;
      }
      else
      {
        v146[v10++] = v18;
      }
      v18 = (unsigned int)(v18 + 1);
      v19 += 16LL;
    }
    while ( (unsigned int)v18 < v9 );
  }
  v118 = v10;
LABEL_24:
  v27 = v120;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xqq(v19, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (_DWORD)v120, 0, v10);
    v21 = 0;
  }
  if ( v10 )
  {
    v28 = v116[1];
    if ( v116[1] )
    {
      v11 = *((_QWORD *)v120 + 835);
      v122 = v11;
      if ( v11 )
      {
        v29 = *((_QWORD *)v5 + 97);
        if ( v29 && *(_BYTE *)(v29 + 1097) )
          v30 = 232LL;
        else
          v30 = 164LL;
        if ( (CHwndRenderTarget *)((char *)v5 + v30) && !(unsigned __int8)CMILMatrix::IsIdentity<0>((char *)v5 + v30) )
        {
          v135 = v21;
          if ( CMILMatrix::SetToInverse((CMILMatrix *)v134, v31) )
          {
            *(_OWORD *)(v11 + 732) = *(_OWORD *)v94;
            *(_OWORD *)(v11 + 748) = *(_OWORD *)(v94 + 16);
            *(_OWORD *)(v11 + 764) = *(_OWORD *)(v94 + 32);
            v95 = v134[0];
            *(_OWORD *)(v11 + 780) = *(_OWORD *)(v94 + 48);
            v96 = *(_DWORD *)(v94 + 64);
            v97 = v134[1];
            *(_OWORD *)(v11 + 800) = v95;
            *(_DWORD *)(v11 + 796) = v96;
            v98 = v134[2];
            v99 = v135;
            *(_OWORD *)(v11 + 816) = v97;
            *(_BYTE *)(v11 + 728) = 1;
            v100 = v134[3];
            *(_OWORD *)(v11 + 832) = v98;
            *(_OWORD *)(v11 + 848) = v100;
            *(_DWORD *)(v11 + 864) = v99;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x8Fu);
            v21 = 0;
          }
        }
        else
        {
          if ( v11 != -732 )
          {
            *(_WORD *)(v11 + 796) = 32085;
            *(_OWORD *)(v11 + 732) = _xmm;
            *(_OWORD *)(v11 + 748) = _xmm;
            *(_OWORD *)(v11 + 764) = _xmm;
            *(_OWORD *)(v11 + 780) = _xmm;
          }
          if ( v11 != -800 )
          {
            *(_WORD *)(v11 + 864) = 32085;
            *(_OWORD *)(v11 + 800) = _xmm;
            *(_OWORD *)(v11 + 816) = _xmm;
            *(_OWORD *)(v11 + 832) = _xmm;
            *(_OWORD *)(v11 + 848) = _xmm;
          }
          *(_BYTE *)(v11 + 728) = 0;
        }
        v32 = *((_QWORD *)v5 + 10);
        if ( *((_QWORD *)v27 + 835) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          {
            TemplateEventDescriptor(v19, &EVTDESC_RENDER_CVIPASS_Start);
            v21 = 0;
          }
          v33 = *((_QWORD *)v27 + 835);
          v34 = v21;
          if ( *(_DWORD *)(v33 + 1080) )
          {
            do
            {
              v89 = *(_QWORD *)(v33 + 1056);
              v116[3] = *(_BYTE *)(v89 + 40LL * v34 + 16);
              v124 = *(_QWORD *)(v89 + 40LL * v34 + 8);
              v125 = *(struct IBitmapSource **)(v89 + 40LL * v34);
              if ( (int)CThreadContext::RegisterGraphWalkRoot(v125) >= 0 )
              {
                if ( v116[3]
                  || !(unsigned __int8)CDrawingContext::IsNodeOccluded(v120, v32, v125, v89 + 40LL * v34 + 20) )
                {
                  v91 = *((_QWORD *)v120 + 50);
                  v92 = *((_DWORD *)v120 + 102);
                  ExistingRenderTarget = CCachedVisualImage::FindExistingRenderTarget(v124, v91, v92, v90);
                  if ( !ExistingRenderTarget || *(_BYTE *)(ExistingRenderTarget + 44) )
                  {
                    v125 = 0LL;
                    v130 = v91;
                    v131 = v92;
                    v132 = 0LL;
                    v133 = 0LL;
                    if ( (int)CCachedVisualImage::GetBitmapSource(
                                (CCachedVisualImage *)(v124 + 8),
                                &v125,
                                (const struct BitmapSourceInfo *)&v130) >= 0 )
                      ReleaseInterface<ID2D1Geometry>((__int64 *)&v125);
                  }
                }
                CThreadContext::UnregisterGraphWalkRoot();
              }
              ++v34;
            }
            while ( v34 < *(_DWORD *)(v33 + 1080) );
            v28 = v116[1];
            v27 = v120;
            v21 = 0;
          }
          *(_DWORD *)(v33 + 1080) = v21;
          DynArrayImpl<0>::ShrinkToSize(v33 + 1056, 40LL);
          v11 = v122;
          v4 = v119;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            TemplateEventDescriptor(v35, &EVTDESC_RENDER_CVIPASS_Stop);
          v14 = v116[2];
          v5 = v126;
        }
        v10 = v118;
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xd(v19, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v120, 0LL);
        CDrawingContext::CalculateOcclusion(v120, *((struct CVisualTree **)v5 + 10), v10, (int)v147, 0, (__int64)&v122);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xd(v101, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v120, 0LL);
        v11 = v122;
      }
    }
    v19 = *((_QWORD *)v5 + 97);
    if ( !v19 )
      goto LABEL_181;
    v116[2] = 0;
    v116[3] = 0;
    v36 = COverlayContext::ApplyOverlayOrDirectFlipConfiguration(
            (COverlayContext *)v19,
            &v116[2],
            &v116[3],
            (enum DirectFlipMode::Enum *)&v121);
    v4 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x34Cu);
      goto LABEL_135;
    }
    v18 = v116[0];
    if ( !v116[0] )
    {
      v37 = (CDirtyRegion *)*((_QWORD *)v5 + 18);
      if ( *((_BYTE *)v37 + 2724) == v116[0] )
      {
        v20 = 0LL;
        if ( !v116[2] || (v146[0] = 0, LOBYTE(v18) = 1, v116[0] = 1, v10 = 1, v118 = 1, *(_OWORD *)v147 = v139, !v28) )
        {
LABEL_52:
          v19 = (unsigned int)v121;
          if ( (_DWORD)v121 )
          {
            v19 = (unsigned int)(v121 - 1);
            if ( (_DWORD)v121 == 1 )
            {
              v10 = 0;
              v118 = 0;
LABEL_54:
              if ( !v11 )
              {
                v28 = 0;
                v116[1] = 0;
              }
              if ( !v14 )
              {
                if ( !(_BYTE)v18 )
                {
LABEL_58:
                  v38 = 0LL;
                  goto LABEL_59;
                }
                if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                        *((_QWORD *)v5 + 14) + 80LL,
                                        *((_QWORD *)v5 + 14) + 64LL) )
                {
                  v18 = v116[0];
                  goto LABEL_58;
                }
              }
              v107 = CDrawingContext::Clear((CD2DContext **)v27, &stru_1801FC928);
              v4 = v107;
              if ( v107 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v107, 0x3B6u);
                goto LABEL_133;
              }
              LOBYTE(v108) = 1;
              v109 = CHwndRenderTarget::NotifyRenderedRect(v5, 0LL, v108);
              v4 = v109;
              if ( v109 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v109, 0x3BCu);
                goto LABEL_133;
              }
              v18 = v116[0];
              v38 = 0LL;
              if ( v14 )
                v10 = 0;
              v118 = v10;
LABEL_59:
              v119 = 0;
              v39 = 0;
              if ( v10 )
              {
                v124 = 0LL;
                while ( 1 )
                {
                  v40 = CArrayBasedCoverageSet::IsFullyCovered;
                  v41 = *(__m128 *)&v147[4 * v38];
                  LODWORD(v136) = v41.m128_i32[0];
                  HIDWORD(v137) = _mm_shuffle_ps(v41, v41, 255).m128_u32[0];
                  HIDWORD(v136) = _mm_shuffle_ps(v41, v41, 85).m128_u32[0];
                  LODWORD(v137) = _mm_shuffle_ps(v41, v41, 170).m128_u32[0];
                  if ( !(_BYTE)v18 && v28 )
                    break;
LABEL_88:
                  v61 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, unsigned __int64 *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v5 + 296LL))(
                          v5,
                          &v136,
                          v20,
                          v40);
                  v4 = v61;
                  if ( v61 < 0 )
                  {
                    v113 = 993;
                    goto LABEL_210;
                  }
                  if ( *(float *)&v137 > *(float *)&v136 && *((float *)&v137 + 1) > *((float *)&v136 + 1) )
                  {
                    v63 = 1;
                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
                      Template_qdffff(
                        v19,
                        (unsigned int)&EVTDESC_ETWGUID_DIRTYREGIONEVENT,
                        v146[v38],
                        v62,
                        v136,
                        SBYTE4(v136),
                        v137,
                        SBYTE4(v137));
                    if ( (_DWORD)v121 == 2 )
                      v63 = 0;
                    if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v5 + 184LL))(v5)
                      || (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v5 + 176LL))(v5)
                      || *(_BYTE *)(*((_QWORD *)v5 + 2) + 1361LL) )
                    {
                      v64 = (__m128i *)(*((_QWORD *)v5 + 14) + 96LL);
                    }
                    else
                    {
                      v64 = (__m128i *)((char *)v5 + 412);
                    }
                    v65 = *(float *)&v136;
                    v66 = _mm_srli_si128(*v64, 8).m128i_u64[0];
                    v67 = (float)(int)v64->m128i_i64[0];
                    v68 = (float)(int)v66;
                    v69 = (float)(int)HIDWORD(v64->m128i_i64[0]);
                    if ( v67 > *(float *)&v136 )
                    {
                      *(float *)&v136 = (float)(int)v64->m128i_i64[0];
                      v65 = v67;
                    }
                    v70 = *((float *)&v136 + 1);
                    if ( v69 > *((float *)&v136 + 1) )
                    {
                      *((float *)&v136 + 1) = v69;
                      v70 = v69;
                    }
                    v71 = *(float *)&v137;
                    if ( *(float *)&v137 > v68 )
                    {
                      *(float *)&v137 = v68;
                      v71 = v68;
                    }
                    v72 = *((float *)&v137 + 1);
                    if ( *((float *)&v137 + 1) > (float)SHIDWORD(v66) )
                    {
                      *((float *)&v137 + 1) = (float)SHIDWORD(v66);
                      v72 = (float)SHIDWORD(v66);
                    }
                    if ( v71 <= v65 || v72 <= v70 )
                    {
                      v137 = 0LL;
                      v136 = 0LL;
                    }
                    HasVirtualModeScale = *((_BYTE *)v5 + 784);
                    if ( !HasVirtualModeScale )
                    {
                      v74 = (CDisplay *)*((_QWORD *)v5 + 14);
                      if ( v74 )
                        HasVirtualModeScale = CDisplay::HasVirtualModeScale(v74);
                    }
                    v115 = v63;
                    v28 = v116[1];
                    v61 = CHwndRenderTarget::DrawVisualTree(
                            (__int64)v5,
                            v120,
                            (__int64)&v136,
                            v123,
                            HasVirtualModeScale,
                            v116[1],
                            v114,
                            v115);
                    v4 = v61;
                    if ( v61 < 0 )
                    {
                      v113 = 1038;
LABEL_210:
                      v112 = v61;
LABEL_212:
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v112, v113);
LABEL_132:
                      v27 = v120;
                      goto LABEL_133;
                    }
                    v75 = *((_QWORD *)v5 + 97);
                    if ( v75 && *(_BYTE *)(v75 + 1097) )
                      v76 = 232LL;
                    else
                      v76 = 164LL;
                    CMILMatrix::Transform2DBoundsHelper<0>((char *)v5 + v76, &v136, &X);
                    v77 = X;
                    v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X) & _xmm);
                    if ( v78 < 8388608.0 )
                      v77 = (float)(int)floorf_0(X);
                    v79 = v142;
                    X = v77;
                    v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v142) & _xmm);
                    if ( v80 < 8388608.0 )
                      v79 = (float)(int)floorf_0(v142);
                    v81 = v143;
                    v142 = v79;
                    v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v143) & _xmm);
                    if ( v82 < 8388608.0 )
                      v81 = (float)(int)ceilf_0(v143);
                    v83 = v144;
                    v143 = v81;
                    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v144) & _xmm) < 8388608.0 )
                      v83 = (float)(int)ceilf_0(v144);
                    v84 = (__int64 *)*((_QWORD *)v5 + 15);
                    *(_QWORD *)&v140 = __PAIR64__(LODWORD(v79), LODWORD(v77));
                    *((_QWORD *)&v140 + 1) = __PAIR64__(LODWORD(v83), LODWORD(v81));
                    v85 = *v84;
                    v144 = v83;
                    v86 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v85 + 216);
                    if ( (char *)v86 == (char *)CHwFullScreenRenderTarget::NotifyRenderedRect )
                      v87 = CHwFullScreenRenderTarget::NotifyRenderedRect(v84, &v140);
                    else
                      v87 = v86(v84, &v140);
                    v4 = v87;
                    if ( v87 < 0 )
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v87, 0xA41u);
                    else
                      *((_BYTE *)v5 + 790) = 1;
                    if ( v4 < 0 )
                    {
                      v113 = 1045;
                      v112 = v4;
                      goto LABEL_212;
                    }
                    if ( v128 )
                    {
                      v61 = CComposeTop::SubtractOverdraw(v128, &v136);
                      v4 = v61;
                      if ( v61 < 0 )
                      {
                        v113 = 1053;
                        goto LABEL_210;
                      }
                    }
                  }
                  ++v39;
                  ++v38;
                  v119 = v39;
                  v124 = v38;
                  if ( v39 >= v10 )
                    goto LABEL_131;
                  LOBYTE(v18) = v116[0];
                }
                v42 = *((_QWORD *)v5 + 18);
                v43 = (unsigned int)v146[v38];
                v44 = *((_QWORD *)v5 + 10);
                if ( *(_BYTE *)(v42 + 2724) )
                {
                  v138 = *(__m128 *)(v42 + 2708);
                  v46 = v138.m128_i32[1];
                  v47 = v138.m128_i32[0];
                  v45 = _mm_shuffle_ps(v138, v138, 170).m128_u32[0];
                  goto LABEL_87;
                }
                v45 = 0;
                v138.m128_i32[3] = 0;
                v46 = 0;
                v47 = 0;
                if ( (unsigned int)v43 >= *(_DWORD *)(v42 + 1120) )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x381u);
                  goto LABEL_87;
                }
                _mm_lfence();
                v48 = 16LL * *(unsigned int *)(v42 + 4 * v43 + 1088);
                v49 = (_QWORD **)(v48 + v42 + 280);
                v50 = *v49;
                v138 = *(__m128 *)(v48 + v42 + 152);
                if ( v50 != v49 )
                {
                  v51 = v122;
                  while ( 1 )
                  {
                    v52 = v50;
                    v50 = (_QWORD *)*v50;
                    v53 = (CVisual *)v52[2];
                    if ( *(_BYTE *)(v44 + 32) )
                    {
                      v54 = (struct _LIST_ENTRY *)((char *)v53 + 264);
                    }
                    else
                    {
                      TreeDataListHead = CVisual::GetTreeDataListHead(v53);
                      if ( !TreeDataListHead )
                        goto LABEL_199;
                      Flink = TreeDataListHead->Flink;
                      if ( TreeDataListHead->Flink == TreeDataListHead )
                        goto LABEL_199;
                      while ( 1 )
                      {
                        v54 = Flink - 14;
                        if ( Flink[2].Flink == (struct _LIST_ENTRY *)v44 )
                          break;
                        Flink = Flink->Flink;
                        if ( Flink == TreeDataListHead )
                          goto LABEL_199;
                      }
                    }
                    if ( !v54 )
                      goto LABEL_199;
                    if ( !v54[2].Flink )
                      v54[2].Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *, __int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v54[1].Blink->Flink[17].Blink)(
                                                             v54[1].Blink,
                                                             v42,
                                                             v20,
                                                             CArrayBasedCoverageSet::IsFullyCovered);
                    v55 = (unsigned int *)v54[2].Flink;
                    if ( !v55 )
                    {
LABEL_199:
                      v20 = 0LL;
                      goto LABEL_75;
                    }
                    if ( *((_BYTE *)v52 + 24) )
                      v20 = v55[3];
                    else
                      v20 = (*(unsigned int (__fastcall **)(unsigned int *, __int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v55 + 24LL))(
                              v55,
                              v42,
                              v20,
                              CArrayBasedCoverageSet::IsFullyCovered);
LABEL_75:
                    v56 = *(__m128 *)((char *)v52 + 28);
                    v57 = _mm_shuffle_ps(v56, v56, 170).m128_f32[0];
                    v129 = v56;
                    if ( v57 > v56.m128_f32[0] && v129.m128_f32[3] > v129.m128_f32[1] )
                    {
                      v58 = *(_QWORD *)(v51 + 304);
                      v145[0] = v56.m128_i32[0];
                      v145[1] = v129.m128_i32[1];
                      *(float *)&v145[2] = v57;
                      v145[3] = v129.m128_i32[3];
                      v59 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v58 + 48LL);
                      if ( !(v59 == CArrayBasedCoverageSet::IsFullyCovered
                           ? CArrayBasedCoverageSet::IsFullyCovered(v58, v145, v20)
                           : ((unsigned __int8 (__fastcall *)(__int64, _DWORD *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD)))v59)(
                               v58,
                               v145,
                               v20,
                               CArrayBasedCoverageSet::IsFullyCovered)) )
                        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v138, &v129);
                    }
                    v40 = CArrayBasedCoverageSet::IsFullyCovered;
                    if ( v50 == v49 )
                    {
                      v5 = v126;
                      v38 = v124;
                      v10 = v118;
                      v28 = v116[1];
                      break;
                    }
                  }
                }
                if ( *((float *)&v139 + 2) > *(float *)&v139 && *((float *)&v139 + 3) > *((float *)&v139 + 1) )
                {
                  v47 = v138.m128_i32[0];
                  v46 = v138.m128_i32[1];
                  v45 = v138.m128_i32[2];
                  if ( *(float *)&v139 < v138.m128_f32[0]
                    || *((float *)&v139 + 1) < v138.m128_f32[1]
                    || v138.m128_f32[2] < *((float *)&v139 + 2) )
                  {
                    goto LABEL_86;
                  }
                  if ( v138.m128_f32[3] < *((float *)&v139 + 3) )
                  {
                    v39 = v119;
                    goto LABEL_87;
                  }
                }
                v138.m128_i32[3] = HIDWORD(v139);
                v47 = v139;
                v46 = DWORD1(v139);
                v45 = DWORD2(v139);
LABEL_86:
                v39 = v119;
LABEL_87:
                v136 = __PAIR64__(v46, v47);
                v137 = __PAIR64__(v138.m128_u32[3], v45);
                goto LABEL_88;
              }
              goto LABEL_131;
            }
            if ( (_DWORD)v121 != 2 )
              goto LABEL_54;
            v102 = *(CVisual ***)(*((_QWORD *)v5 + 97) + 968LL);
            OcclusionInfo = CVisual::GetOcclusionInfo(v102[3], *((const struct CVisualTree **)v5 + 10));
            LODWORD(v123) = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
            CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
                                                 (CDirectFlipInfo *)v102,
                                                 &v127);
            v4 = CurrentRealizationAsRenderTarget;
            if ( CurrentRealizationAsRenderTarget < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRealizationAsRenderTarget, 0x385u);
              goto LABEL_135;
            }
            v105 = CDrawingContext::PushRenderTarget(v27, v127);
            v4 = v105;
            if ( v105 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v105, 0x386u);
              goto LABEL_135;
            }
            v28 = v116[1];
            LOBYTE(v117) = 1;
          }
          else
          {
            if ( v116[3] == (_BYTE)v121 )
              goto LABEL_54;
            v106 = CDrawingContext::PushRenderTarget(v27, *((struct IRenderTarget **)v5 + 15));
            v4 = v106;
            if ( v106 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v106, 0x395u);
              goto LABEL_135;
            }
            LOBYTE(v117) = 1;
          }
LABEL_181:
          v18 = v116[0];
          goto LABEL_54;
        }
        CDirtyRegion::SetFullDirty(v37);
        CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)(*((_QWORD *)v5 + 17) + 112LL), 0);
        v11 = *((_QWORD *)v27 + 835);
        v18 = 1LL;
        v122 = v11;
      }
    }
    v20 = 0LL;
    goto LABEL_52;
  }
LABEL_131:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
    goto LABEL_132;
  v27 = v120;
  Template_x(v19, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, v120);
LABEL_133:
  if ( (_BYTE)v117 )
    CDrawingContext::PopRenderTargetInternal(v27, 0);
LABEL_135:
  if ( v127 )
    (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v127 + 16LL))(v127, v18);
  return (unsigned int)v4;
}
