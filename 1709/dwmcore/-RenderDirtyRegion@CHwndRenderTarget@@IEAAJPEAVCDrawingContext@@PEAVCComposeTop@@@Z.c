/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180018A80
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015570 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ @ 0x180017468 (-NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180018970 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002C140 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x18002EB90 (-NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18003458C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1800363D0 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x180042C58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180042D8C (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x180042E90 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180042F3C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x180060D80 (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180067654 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180077F58 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800B3330 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800B336C (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800C5D44 (ceilf_0.c)
 *     floorf_0 @ 0x1800C5D5C (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180119FB8 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18011AA0C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18011ACDC (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     McTemplateU0qdffff @ 0x180136B6C (McTemplateU0qdffff.c)
 *     McTemplateU0xqq @ 0x180136C98 (McTemplateU0xqq.c)
 *     McTemplateU0xq @ 0x180138D78 (McTemplateU0xq.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180147EA4 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801480E4 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180149490 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180149730 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017DA58 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDirtyRegion(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  __int64 v3; // rsi
  CHwndRenderTarget *v4; // r12
  __int64 v5; // rdx
  int v6; // ebx
  unsigned int v7; // r13d
  bool v8; // zf
  COcclusionContext *v9; // rdi
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rax
  char v13; // r15
  __int64 v14; // rcx
  CHwFullScreenRenderTarget *v15; // rcx
  void (__fastcall *v16)(CHwFullScreenRenderTarget *__hidden, bool); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  bool v19; // r10
  __m128 v20; // xmm0
  int v21; // xmm1_4
  bool v22; // cc
  char v23; // r14
  __int64 v24; // r15
  __int64 v25; // rsi
  unsigned int v26; // r14d
  COverlayContext *v27; // rcx
  int v28; // eax
  CDirtyRegion *v29; // rcx
  CDrawingContext *v30; // rsi
  int v31; // r8d
  __int64 v32; // rcx
  unsigned int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // rdi
  __m128 v37; // xmm2
  CDisplay *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r13
  __int32 v42; // xmm7_4
  float v43; // xmm6_4
  float v44; // xmm8_4
  float v45; // xmm9_4
  __int64 v46; // rcx
  _QWORD **v47; // r15
  _QWORD *v48; // rsi
  COcclusionContext *v49; // r14
  _QWORD *v50; // rdi
  CVisual *v51; // rcx
  struct _LIST_ENTRY *v52; // rbx
  struct _LIST_ENTRY *v53; // rcx
  unsigned int Blink_high; // ebx
  __m128 v55; // xmm1
  float v56; // xmm3_4
  __int64 v57; // rcx
  __int64 (__fastcall *v58)(__int64, _DWORD *, _QWORD); // rax
  int v60; // eax
  int v61; // ecx
  int v62; // r9d
  __m128i *v63; // rax
  float v64; // xmm3_4
  unsigned __int64 v65; // xmm1_8
  float v66; // xmm2_4
  float v67; // xmm4_4
  float v68; // xmm0_4
  float v69; // xmm2_4
  float v70; // xmm1_4
  float v71; // xmm0_4
  char HasVirtualModeScale; // al
  CDisplay *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  float v76; // xmm8_4
  float v77; // xmm1_4
  float v78; // xmm7_4
  float v79; // xmm1_4
  float v80; // xmm6_4
  float v81; // xmm1_4
  float v82; // xmm2_4
  __int64 *v83; // rcx
  __int64 v84; // rax
  __int64 (__fastcall *v85)(__int64 *, __m128 *); // rax
  int v86; // eax
  CDrawingContext *v87; // rdi
  __int64 v89; // r13
  __int64 v90; // rcx
  int v91; // r11d
  CDirectFlipInfo *v92; // rbx
  struct COcclusionInfo *OcclusionInfo; // rax
  int CurrentRealizationAsRenderTarget; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  __int64 v98; // r8
  int v99; // eax
  __int64 v100; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v103; // r9d
  unsigned int v104; // [rsp+28h] [rbp-E0h]
  __int64 v105; // [rsp+38h] [rbp-D0h]
  bool v106[4]; // [rsp+48h] [rbp-C0h] BYREF
  char v107; // [rsp+4Ch] [rbp-BCh]
  char v108; // [rsp+4Dh] [rbp-BBh]
  __int64 v109; // [rsp+50h] [rbp-B8h]
  CDrawingContext *v110; // [rsp+58h] [rbp-B0h]
  __int64 v111; // [rsp+60h] [rbp-A8h]
  __int64 v112; // [rsp+68h] [rbp-A0h]
  COcclusionContext *v113; // [rsp+70h] [rbp-98h] BYREF
  __int64 v114; // [rsp+78h] [rbp-90h]
  struct IRenderTargetBitmap *v115; // [rsp+80h] [rbp-88h] BYREF
  void *v116; // [rsp+88h] [rbp-80h]
  CHwndRenderTarget *v117; // [rsp+90h] [rbp-78h]
  __m128 v118; // [rsp+98h] [rbp-70h] BYREF
  struct CComposeTop *v119; // [rsp+A8h] [rbp-60h]
  char v120[8]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v121; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v122; // [rsp+C0h] [rbp-48h]
  __m128 v123; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v124; // [rsp+D8h] [rbp-30h] BYREF
  __m128 v125; // [rsp+E8h] [rbp-20h] BYREF
  float X; // [rsp+F8h] [rbp-10h] BYREF
  float v127; // [rsp+FCh] [rbp-Ch]
  float v128; // [rsp+100h] [rbp-8h]
  float v129; // [rsp+104h] [rbp-4h]
  _DWORD v130[4]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v131[8]; // [rsp+118h] [rbp+10h]
  __m128 v132[8]; // [rsp+138h] [rbp+30h]

  v3 = 2700LL;
  v4 = this;
  v117 = this;
  v110 = a2;
  v5 = *((_QWORD *)this + 18);
  v119 = a3;
  v6 = 0;
  LODWORD(v111) = 0;
  v7 = 0;
  v8 = *(_BYTE *)(v5 + 2722) == 0;
  v9 = 0LL;
  v10 = *(_DWORD *)(v5 + 1116);
  v115 = 0LL;
  if ( v8 )
    v3 = 956LL;
  v11 = v5 + v3;
  v8 = (*((_DWORD *)this + 93) & 0x10000) == 0;
  v106[0] = *(_BYTE *)(v5 + 2722);
  v12 = *((_QWORD *)this + 2);
  LODWORD(v109) = 0;
  v113 = 0LL;
  v107 = 0;
  v13 = *(_BYTE *)(*(_QWORD *)(v12 + 72) + 148LL);
  v106[2] = v13;
  v106[1] = !v8 && !v13;
  v14 = *((_QWORD *)this + 15);
  LODWORD(v114) = 0x7FFFFFFF;
  (*(void (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v14 + 48LL))(v14, &v124);
  v15 = (CHwFullScreenRenderTarget *)*((_QWORD *)v4 + 15);
  v16 = *(void (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool))(*(_QWORD *)v15 + 456LL);
  if ( v16 == CHwFullScreenRenderTarget::NotifySwapChainFullScreen )
    CHwFullScreenRenderTarget::NotifySwapChainFullScreen(v15, 0);
  else
    v16(v15, 0);
  v19 = v106[0];
  if ( v106[0] )
  {
    v7 = 1;
    LODWORD(v109) = 1;
    v131[0] = 0;
    v132[0] = v124;
  }
  else
  {
    v17 = 0LL;
    if ( v10 )
    {
      v18 = 0LL;
      do
      {
        v20 = *(__m128 *)(v11 + v18);
        v21 = v124.m128_i32[0];
        v22 = v124.m128_f32[0] <= v20.m128_f32[0];
        v132[v7] = v20;
        v125 = v20;
        if ( !v22 )
          v132[v7].m128_i32[0] = v21;
        if ( v124.m128_f32[1] > v132[v7].m128_f32[1] )
          v132[v7].m128_i32[1] = v124.m128_i32[1];
        if ( v132[v7].m128_f32[2] > v124.m128_f32[2] )
          v132[v7].m128_i32[2] = v124.m128_i32[2];
        if ( v132[v7].m128_f32[3] > v124.m128_f32[3] )
          v132[v7].m128_i32[3] = v124.m128_i32[3];
        if ( v132[v7].m128_f32[2] <= v132[v7].m128_f32[0] || v132[v7].m128_f32[3] <= v132[v7].m128_f32[1] )
        {
          v132[v7].m128_u64[1] = 0LL;
          v132[v7].m128_u64[0] = 0LL;
        }
        else
        {
          v131[v7++] = v17;
        }
        v17 = (unsigned int)(v17 + 1);
        v18 += 16LL;
      }
      while ( (unsigned int)v17 < v10 );
      LODWORD(v109) = v7;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xqq(v18, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (_DWORD)v110, 0, v7);
    v19 = v106[0];
  }
  if ( v7 )
  {
    v23 = v106[1];
    v108 = 1;
    if ( v106[1] )
    {
      v9 = (COcclusionContext *)*((_QWORD *)v110 + 843);
      v113 = v9;
      if ( v9 )
      {
        v24 = *((_QWORD *)v4 + 10);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Start);
        v25 = *((_QWORD *)v110 + 843);
        v26 = 0;
        if ( *(_DWORD *)(v25 + 1176) )
        {
          do
          {
            v89 = *(_QWORD *)(v25 + 1152);
            v106[3] = *(_BYTE *)(v89 + 40LL * v26 + 16);
            v112 = *(_QWORD *)(v89 + 40LL * v26 + 8);
            v116 = *(void **)(v89 + 40LL * v26);
            if ( (int)CThreadContext::RegisterGraphWalkRoot(v116) >= 0 )
            {
              if ( v106[3] || !(unsigned __int8)CDrawingContext::IsNodeOccluded(v110, v24, v116, v89 + 40LL * v26 + 20) )
                CCachedVisualImage::EnsureRenderTargetBitmapInfo(
                  v112,
                  *((_QWORD *)v110 + 49),
                  *((unsigned int *)v110 + 100),
                  v120);
              CThreadContext::UnregisterGraphWalkRoot();
            }
            ++v26;
          }
          while ( v26 < *(_DWORD *)(v25 + 1176) );
          v4 = v117;
          v7 = v109;
        }
        *(_DWORD *)(v25 + 1176) = 0;
        DynArrayImpl<0>::ShrinkToSize(v25 + 1152, 40LL);
        v6 = v111;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Stop);
        v19 = v106[0];
        v23 = v106[1];
        v13 = v106[2];
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xq(v18, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v110, 0LL);
        CDrawingContext::CalculateOcclusion(v110, *((struct CVisualTree **)v4 + 10), 0, 0, (__int64)&v113);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xq(v90, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v110, 0LL);
        v9 = v113;
        v19 = v106[0];
      }
    }
    v27 = (COverlayContext *)*((_QWORD *)v4 + 99);
    if ( !v27 )
      goto LABEL_43;
    v106[2] = 0;
    v106[3] = 0;
    v28 = COverlayContext::ApplyOverlayOrDirectFlipConfiguration(v27, &v106[2], &v106[3]);
    v6 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x2DEu);
      goto LABEL_150;
    }
    v19 = v106[0];
    if ( v106[0]
      || (v29 = (CDirtyRegion *)*((_QWORD *)v4 + 18), !v106[2])
      || *((_BYTE *)v29 + 2722)
      || (LODWORD(v109) = 1, v19 = 1, v106[0] = 1, v7 = 1, v131[0] = 0, v132[0] = v124, !v23) )
    {
      v30 = v110;
    }
    else
    {
      CDirtyRegion::SetFullDirty(v29);
      CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)(*((_QWORD *)v4 + 17) + 112LL), 0);
      v30 = v110;
      v19 = 1;
      v9 = (COcclusionContext *)*((_QWORD *)v110 + 843);
      v113 = v9;
    }
    v31 = 0;
    v32 = *(_QWORD *)(*((_QWORD *)v4 + 99) + 1048LL);
    if ( v32 )
    {
      v31 = *(_DWORD *)(v32 + 60);
      if ( v31 == 3 && !CDirectFlipInfo::RenderingRealizationChanged((CDirectFlipInfo *)v32) )
        v31 = v91;
    }
    if ( v31 )
    {
      if ( v31 == 1 )
      {
        v33 = 0;
        v7 = 0;
        LODWORD(v109) = 0;
        goto LABEL_44;
      }
      if ( (unsigned int)(v31 - 2) > 1 )
      {
LABEL_43:
        v33 = 0;
LABEL_44:
        if ( v9 )
        {
          v34 = *((_QWORD *)v4 + 99);
          if ( v34 && *(_BYTE *)(v34 + 1183) )
            v35 = 232LL;
          else
            v35 = 164LL;
          COcclusionContext::SetDeviceTransform(v9, (CHwndRenderTarget *)((char *)v4 + v35));
          v19 = v106[0];
        }
        else
        {
          v23 = 0;
          v106[1] = 0;
        }
        if ( v13 )
          goto LABEL_199;
        if ( !v19 )
          goto LABEL_51;
        if ( CHwndRenderTarget::NeedsBlackBars(v4) )
        {
LABEL_199:
          v87 = v110;
          v97 = CDrawingContext::Clear(v110, &stru_180219A30);
          v6 = v97;
          if ( v97 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v97, 0x348u);
            goto LABEL_148;
          }
          LOBYTE(v98) = 1;
          v99 = CHwndRenderTarget::NotifyRenderedRect(v4, 0LL, v98);
          v6 = v99;
          if ( v99 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0x34Cu);
            goto LABEL_148;
          }
          if ( v13 )
            v7 = 0;
          LODWORD(v109) = v7;
        }
        v19 = v106[0];
LABEL_51:
        LODWORD(v112) = 0;
        if ( v7 )
        {
          v36 = 0LL;
          v116 = 0LL;
          while ( 1 )
          {
            v37 = v132[(_QWORD)v36];
            LODWORD(v121) = v37.m128_i32[0];
            HIDWORD(v122) = _mm_shuffle_ps(v37, v37, 255).m128_u32[0];
            HIDWORD(v121) = _mm_shuffle_ps(v37, v37, 85).m128_u32[0];
            LODWORD(v122) = _mm_shuffle_ps(v37, v37, 170).m128_u32[0];
            if ( !v19 && v23 )
            {
              v38 = (CDisplay *)*((_QWORD *)v4 + 14);
              LOBYTE(v6) = 0;
              LODWORD(v111) = v6;
              if ( v38 )
              {
                if ( CDisplay::HasVirtualModeScale(v38)
                  && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v4 + 192LL))(v4) )
                {
                  v100 = *((_QWORD *)v4 + 99);
                  if ( v100 )
                  {
                    LOBYTE(v6) = *(_BYTE *)(v100 + 1183) == 0;
                    LODWORD(v111) = (unsigned __int8)v6;
                  }
                }
              }
              v39 = *((_QWORD *)v4 + 18);
              v40 = (unsigned int)v131[(_QWORD)v36];
              v41 = *((_QWORD *)v4 + 10);
              if ( *(_BYTE *)(v39 + 2722) )
              {
                v123 = *(__m128 *)(v39 + 2700);
                v43 = v123.m128_f32[2];
                v44 = v123.m128_f32[1];
                v45 = v123.m128_f32[0];
                v42 = _mm_shuffle_ps(v123, v123, 255).m128_u32[0];
              }
              else
              {
                v42 = 0;
                v43 = 0.0;
                v44 = 0.0;
                v45 = 0.0;
                if ( (unsigned int)v40 >= *(_DWORD *)(v39 + 1116) )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x364u);
                }
                else
                {
                  _mm_lfence();
                  v46 = 16LL * *(unsigned int *)(v39 + 4 * v40 + 1084);
                  v47 = (_QWORD **)(v46 + v39 + 280);
                  v48 = *v47;
                  v123 = *(__m128 *)(v46 + v39 + 152);
                  if ( v48 != v47 )
                  {
                    v49 = v113;
                    while ( 1 )
                    {
                      v50 = v48;
                      v48 = (_QWORD *)*v48;
                      v51 = (CVisual *)v50[2];
                      if ( *(_BYTE *)(v41 + 32) )
                      {
                        v52 = (struct _LIST_ENTRY *)((char *)v51 + 280);
                      }
                      else
                      {
                        TreeDataListHead = CVisual::GetTreeDataListHead(v51);
                        if ( !TreeDataListHead )
                          goto LABEL_212;
                        Flink = TreeDataListHead->Flink;
                        if ( TreeDataListHead->Flink == TreeDataListHead )
                          goto LABEL_212;
                        while ( 1 )
                        {
                          v52 = Flink - 14;
                          if ( Flink[2].Flink == (struct _LIST_ENTRY *)v41 )
                            break;
                          Flink = Flink->Flink;
                          if ( Flink == TreeDataListHead )
                            goto LABEL_212;
                        }
                      }
                      if ( !v52 )
                        goto LABEL_212;
                      if ( !v52[2].Flink )
                        v52[2].Flink = (struct _LIST_ENTRY *)((__int64 (__fastcall *)(struct _LIST_ENTRY *))v52[1].Blink->Flink[20].Flink)(v52[1].Blink);
                      v53 = v52[2].Flink;
                      if ( !v53 )
                      {
LABEL_212:
                        Blink_high = 0;
                        goto LABEL_69;
                      }
                      if ( *((_BYTE *)v50 + 24) )
                        Blink_high = HIDWORD(v53->Blink);
                      else
                        Blink_high = ((__int64 (__fastcall *)(struct _LIST_ENTRY *))v53->Flink[1].Blink)(v53);
LABEL_69:
                      v55 = *(__m128 *)((char *)v50 + 28);
                      v56 = _mm_shuffle_ps(v55, v55, 170).m128_f32[0];
                      v118 = v55;
                      if ( v56 > v55.m128_f32[0] && v118.m128_f32[3] > v118.m128_f32[1] )
                      {
                        if ( *((_BYTE *)v49 + 816) )
                        {
                          COcclusionContext::PageInPixelsRectToDeviceRect(v49, &v118, v130);
                        }
                        else
                        {
                          v130[0] = v55.m128_i32[0];
                          v130[1] = v118.m128_i32[1];
                          *(float *)&v130[2] = v56;
                          v130[3] = v118.m128_i32[3];
                        }
                        v57 = *((_QWORD *)v49 + 49);
                        v58 = *(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v57 + 56LL);
                        if ( !((char *)v58 == (char *)CArrayBasedCoverageSet::IsFullyCovered
                             ? CArrayBasedCoverageSet::IsFullyCovered(v57, v130, Blink_high)
                             : (unsigned __int8)v58(v57, v130, Blink_high)) )
                          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v123, &v118);
                      }
                      if ( v48 == v47 )
                      {
                        v4 = v117;
                        LOBYTE(v6) = v111;
                        v36 = v116;
                        v23 = v106[1];
                        break;
                      }
                    }
                  }
                  v43 = v123.m128_f32[2];
                  v45 = v123.m128_f32[0];
                  v42 = v123.m128_i32[3];
                  v44 = v123.m128_f32[1];
                  if ( v123.m128_f32[2] > v123.m128_f32[0] && v123.m128_f32[3] > v123.m128_f32[1] )
                  {
                    if ( (_BYTE)v6 )
                    {
                      InflateRectF_InPlace(&v123);
                      v42 = v123.m128_i32[3];
                      v43 = v123.m128_f32[2];
                      v44 = v123.m128_f32[1];
                      v45 = v123.m128_f32[0];
                    }
                    if ( v124.m128_f32[0] > v45 )
                      v45 = v124.m128_f32[0];
                    if ( v124.m128_f32[1] > v44 )
                      v44 = v124.m128_f32[1];
                    if ( v43 > v124.m128_f32[2] )
                      v43 = v124.m128_f32[2];
                    if ( *(float *)&v42 > v124.m128_f32[3] )
                      v42 = v124.m128_i32[3];
                    if ( v43 <= v45 || *(float *)&v42 <= v44 )
                    {
                      v42 = 0;
                      v43 = 0.0;
                      v44 = 0.0;
                      v45 = 0.0;
                    }
                  }
                  v33 = v112;
                }
              }
              v121 = __PAIR64__(LODWORD(v44), LODWORD(v45));
              v122 = __PAIR64__(v42, LODWORD(v43));
              if ( v124.m128_f32[0] > v45 )
              {
                LODWORD(v121) = v124.m128_i32[0];
                v45 = v124.m128_f32[0];
              }
              if ( v124.m128_f32[1] > v44 )
              {
                HIDWORD(v121) = v124.m128_i32[1];
                v44 = v124.m128_f32[1];
              }
              if ( v43 > v124.m128_f32[2] )
              {
                LODWORD(v122) = v124.m128_i32[2];
                v43 = v124.m128_f32[2];
              }
              if ( *(float *)&v42 > v124.m128_f32[3] )
              {
                HIDWORD(v122) = v124.m128_i32[3];
                v42 = v124.m128_i32[3];
              }
              if ( v43 <= v45 || *(float *)&v42 <= v44 )
              {
                v122 = 0LL;
                v121 = 0LL;
              }
              v7 = v109;
            }
            v60 = (*(__int64 (__fastcall **)(CHwndRenderTarget *, unsigned __int64 *))(*(_QWORD *)v4 + 312LL))(
                    v4,
                    &v121);
            v6 = v60;
            if ( v60 < 0 )
            {
              v104 = 875;
              goto LABEL_223;
            }
            if ( *(float *)&v122 > *(float *)&v121 && *((float *)&v122 + 1) > *((float *)&v121 + 1) )
            {
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
                McTemplateU0qdffff(
                  v61,
                  (unsigned int)&EVTDESC_ETWGUID_DIRTYREGIONEVENT,
                  v131[(_QWORD)v36],
                  v62,
                  v121,
                  SBYTE4(v121),
                  v122,
                  SBYTE4(v122));
              if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v4 + 200LL))(v4)
                || (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v4 + 192LL))(v4)
                || *(_BYTE *)(*((_QWORD *)v4 + 2) + 1297LL) )
              {
                v63 = (__m128i *)(*((_QWORD *)v4 + 14) + 96LL);
              }
              else
              {
                v63 = (__m128i *)((char *)v4 + 412);
              }
              v64 = *(float *)&v121;
              v65 = _mm_srli_si128(*v63, 8).m128i_u64[0];
              v66 = (float)(int)v63->m128i_i64[0];
              v67 = (float)(int)v65;
              v68 = (float)(int)HIDWORD(v63->m128i_i64[0]);
              if ( v66 > *(float *)&v121 )
              {
                *(float *)&v121 = (float)(int)v63->m128i_i64[0];
                v64 = v66;
              }
              v69 = *((float *)&v121 + 1);
              if ( v68 > *((float *)&v121 + 1) )
              {
                *((float *)&v121 + 1) = v68;
                v69 = v68;
              }
              v70 = *(float *)&v122;
              if ( *(float *)&v122 > v67 )
              {
                *(float *)&v122 = v67;
                v70 = v67;
              }
              v71 = *((float *)&v122 + 1);
              if ( *((float *)&v122 + 1) > (float)SHIDWORD(v65) )
              {
                *((float *)&v122 + 1) = (float)SHIDWORD(v65);
                v71 = (float)SHIDWORD(v65);
              }
              if ( v70 <= v64 || v71 <= v69 )
              {
                v122 = 0LL;
                v121 = 0LL;
              }
              HasVirtualModeScale = *((_BYTE *)v4 + 800);
              if ( !HasVirtualModeScale )
              {
                v73 = (CDisplay *)*((_QWORD *)v4 + 14);
                if ( v73 )
                  HasVirtualModeScale = CDisplay::HasVirtualModeScale(v73);
              }
              v60 = CHwndRenderTarget::DrawVisualTree(
                      (__int64)v4,
                      v110,
                      (__int64)&v121,
                      v114,
                      HasVirtualModeScale,
                      v23,
                      v105,
                      v108);
              v6 = v60;
              if ( v60 < 0 )
              {
                v104 = 907;
LABEL_223:
                v103 = v60;
LABEL_225:
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, v104);
LABEL_147:
                v87 = v110;
                goto LABEL_148;
              }
              v74 = *((_QWORD *)v4 + 99);
              if ( v74 && *(_BYTE *)(v74 + 1183) )
                v75 = 232LL;
              else
                v75 = 164LL;
              CMILMatrix::Transform2DBoundsHelper<0>((char *)v4 + v75, &v121, &X);
              v76 = X;
              v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X) & _xmm);
              if ( v77 < 8388608.0 )
                v76 = (float)(int)floorf_0(X);
              v78 = v127;
              X = v76;
              v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v127) & _xmm);
              if ( v79 < 8388608.0 )
                v78 = (float)(int)floorf_0(v127);
              v80 = v128;
              v127 = v78;
              v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v128) & _xmm);
              if ( v81 < 8388608.0 )
                v80 = (float)(int)ceilf_0(v128);
              v82 = v129;
              v128 = v80;
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v129) & _xmm) < 8388608.0 )
                v82 = (float)(int)ceilf_0(v129);
              v83 = (__int64 *)*((_QWORD *)v4 + 15);
              v125.m128_u64[0] = __PAIR64__(LODWORD(v78), LODWORD(v76));
              v125.m128_u64[1] = __PAIR64__(LODWORD(v82), LODWORD(v80));
              v84 = *v83;
              v129 = v82;
              v85 = *(__int64 (__fastcall **)(__int64 *, __m128 *))(v84 + 224);
              if ( (char *)v85 == (char *)CHwDisplayRenderTarget::NotifyRenderedRect )
                v86 = CHwDisplayRenderTarget::NotifyRenderedRect(v83, &v125);
              else
                v86 = v85(v83, &v125);
              v6 = v86;
              if ( v86 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0x9ACu);
              else
                *((_BYTE *)v4 + 804) = 1;
              if ( v6 < 0 )
              {
                v104 = 911;
                v103 = v6;
                goto LABEL_225;
              }
              if ( v119 )
              {
                v60 = CComposeTop::SubtractOverdraw(v119, &v121);
                v6 = v60;
                if ( v60 < 0 )
                {
                  v104 = 917;
                  goto LABEL_223;
                }
              }
            }
            ++v33;
            v36 = (char *)v36 + 1;
            LODWORD(v112) = v33;
            v116 = v36;
            if ( v33 >= v7 )
              goto LABEL_146;
            v19 = v106[0];
          }
        }
        goto LABEL_146;
      }
      v92 = (CDirectFlipInfo *)v32;
      OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v32 + 24), *((const struct CVisualTree **)v4 + 10));
      LODWORD(v114) = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
      CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(v92, &v115);
      v6 = CurrentRealizationAsRenderTarget;
      if ( CurrentRealizationAsRenderTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentRealizationAsRenderTarget, 0x31Du);
        goto LABEL_150;
      }
      (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v115 + 168LL))(v115);
      v95 = CDrawingContext::PushRenderTarget(v30, v115);
      v6 = v95;
      if ( v95 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0x322u);
        goto LABEL_150;
      }
      v107 = 1;
      v108 = 0;
    }
    else
    {
      if ( !v106[3] )
        goto LABEL_43;
      v96 = CDrawingContext::PushRenderTarget(v30, *((struct IRenderTarget **)v4 + 15));
      v6 = v96;
      if ( v96 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v96, 0x301u);
        goto LABEL_150;
      }
      v107 = 1;
    }
    v19 = v106[0];
    goto LABEL_43;
  }
LABEL_146:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) == 0 )
    goto LABEL_147;
  v87 = v110;
  McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, v110);
LABEL_148:
  if ( v107 )
    CDrawingContext::PopRenderTargetInternal(v87, 0);
LABEL_150:
  if ( v115 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, __int64))(*(_QWORD *)v115 + 16LL))(v115, v17);
  return (unsigned int)v6;
}
