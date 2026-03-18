/*
 * XREFs of ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180043720 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ @ 0x18005FAF8 (-NeedsBlackBars@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180060EAC (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180064B20 (-IsFullyCovered@CArrayBasedCoverageSet@@UEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M_NPEAPEAVCOcclusionContext@@@Z @ 0x1800653F4 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800654E0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800657F0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006589C (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180079C9C (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z @ 0x18007B930 (-NotifySwapChainFullScreen@CHwFullScreenRenderTarget@@UEAAX_N@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z @ 0x1800A87CC (-SetDeviceTransform@COcclusionContext@@QEAAJPEBVCMILMatrix@@@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x1800B3E5C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x1800B7C58 (-HasVirtualModeScale@CDisplay@@QEBA_NXZ.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x1800BEDE4 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x1800BEE20 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800DD3B9 (ceilf_0.c)
 *     floorf_0 @ 0x1800DD3C5 (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18013BDF4 (-NotifyRenderedRect@CHwndRenderTarget@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z @ 0x18013C568 (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@@Z.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18013D258 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     McTemplateU0qdffff @ 0x180159018 (McTemplateU0qdffff.c)
 *     McTemplateU0xqq @ 0x180159144 (McTemplateU0xqq.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1801705D8 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801708D4 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x180172818 (-GetCurrentRealizationAsRenderTarget@CDirectFlipInfo@@QEAAJPEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180172AE0 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADEF8 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 */

__int64 __fastcall CHwndRenderTarget::RenderDirtyRegion(
        CHwndRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // esi
  bool v6; // zf
  int v7; // r12d
  unsigned int v8; // r13d
  COcclusionContext *v9; // rdi
  CHwndRenderTarget *v10; // r15
  char v11; // cl
  __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // r14
  __int64 v15; // rcx
  CHwFullScreenRenderTarget *v16; // rcx
  void (__fastcall *v17)(CHwFullScreenRenderTarget *__hidden, bool); // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  BOOL v20; // r9d
  __m128 v21; // xmm0
  __int32 v22; // xmm1_4
  bool v23; // cc
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm2_4
  float v27; // xmm0_4
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // r14
  unsigned int v32; // esi
  __int64 v33; // rcx
  int v34; // eax
  CDrawingContext *v35; // rsi
  __int64 v36; // rax
  int v37; // r8d
  unsigned int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rax
  void *v41; // rdi
  __m128 v42; // xmm0
  float v43; // xmm5_4
  float v44; // xmm3_4
  float v45; // xmm4_4
  float v46; // xmm2_4
  __int64 v47; // rax
  __int64 v48; // r13
  __int32 v49; // xmm9_4
  float v50; // xmm8_4
  float v51; // xmm7_4
  float v52; // xmm6_4
  _QWORD **v53; // r12
  _QWORD *v54; // rsi
  __int64 v55; // r14
  _QWORD *v56; // rdi
  __int64 v57; // rbx
  unsigned int v58; // ebx
  __m128 v59; // xmm1
  float v60; // xmm2_4
  __int64 v61; // rcx
  __int64 (__fastcall *v62)(__int64, __m128 *, _QWORD); // rax
  float v64; // xmm3_4
  float v65; // xmm2_4
  float v66; // xmm1_4
  __m128i *v67; // rax
  float v68; // xmm4_4
  unsigned __int64 v69; // xmm1_8
  float v70; // xmm2_4
  float v71; // xmm3_4
  float v72; // xmm0_4
  float v73; // xmm2_4
  float v74; // xmm1_4
  float v75; // xmm0_4
  char HasVirtualModeScale; // al
  CDisplay *v77; // rcx
  CDrawingContext *v78; // rbx
  int v79; // eax
  __int64 v80; // rax
  __int64 v81; // rax
  float v82; // xmm8_4
  float v83; // xmm1_4
  float v84; // xmm7_4
  float v85; // xmm1_4
  float v86; // xmm6_4
  float v87; // xmm1_4
  float v88; // xmm2_4
  __int64 *v89; // rcx
  __int64 v90; // rax
  int v91; // eax
  __int64 v93; // r12
  char v94; // r13
  __int64 v95; // rcx
  int v96; // r10d
  struct COcclusionInfo *OcclusionInfo; // rax
  int CurrentRealizationAsRenderTarget; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  __int64 v102; // r8
  int v103; // eax
  __int64 v104; // rax
  __int64 *TreeDataListHead; // rax
  __int64 v106; // rax
  unsigned int v107; // [rsp+28h] [rbp-E0h]
  __int64 v108; // [rsp+38h] [rbp-D0h]
  bool v109[4]; // [rsp+48h] [rbp-C0h] BYREF
  bool v110[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  int v111; // [rsp+50h] [rbp-B8h]
  int v112; // [rsp+54h] [rbp-B4h]
  CDrawingContext *v113; // [rsp+58h] [rbp-B0h]
  __int64 v114; // [rsp+60h] [rbp-A8h]
  __int64 v115; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v116; // [rsp+70h] [rbp-98h]
  __int64 v117; // [rsp+78h] [rbp-90h]
  struct IRenderTargetBitmap *v118; // [rsp+80h] [rbp-88h] BYREF
  void *v119; // [rsp+88h] [rbp-80h]
  CHwndRenderTarget *v120; // [rsp+90h] [rbp-78h]
  __m128 v121; // [rsp+98h] [rbp-70h] BYREF
  struct CComposeTop *v122; // [rsp+A8h] [rbp-60h]
  _BYTE v123[8]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v124; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v125; // [rsp+C0h] [rbp-48h]
  __m128 v126; // [rsp+C8h] [rbp-40h] BYREF
  __m128 v127; // [rsp+D8h] [rbp-30h] BYREF
  __m128 v128; // [rsp+E8h] [rbp-20h] BYREF
  float X; // [rsp+F8h] [rbp-10h]
  float v130; // [rsp+FCh] [rbp-Ch]
  float v131; // [rsp+100h] [rbp-8h]
  float v132; // [rsp+104h] [rbp-4h]
  _DWORD v133[4]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v134[8]; // [rsp+118h] [rbp+10h]
  __m128 v135[8]; // [rsp+138h] [rbp+30h]

  v3 = *((_QWORD *)this + 25);
  v4 = 2860LL;
  v5 = *(_DWORD *)(v3 + 1276);
  v120 = this;
  v113 = a2;
  v6 = *(_BYTE *)(v3 + 2883) == 0;
  v7 = 0;
  v118 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = this;
  v122 = a3;
  v111 = 0;
  if ( v6 )
    v4 = 1116LL;
  v112 = 0;
  v11 = *(_BYTE *)(v3 + 2883);
  v12 = v3 + v4;
  v6 = (*((_DWORD *)v10 + 107) & 0x10000) == 0;
  v13 = *((_QWORD *)v10 + 2);
  v109[0] = v11;
  v115 = 0LL;
  v109[3] = 0;
  v14 = *(_BYTE *)(*(_QWORD *)(v13 + 72) + 114LL);
  v109[2] = v14;
  v109[1] = !v6 && !v14;
  v15 = *((_QWORD *)v10 + 22);
  LODWORD(v116) = 0x7FFFFFFF;
  (*(void (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v15 + 48LL))(v15, &v127);
  v16 = (CHwFullScreenRenderTarget *)*((_QWORD *)v10 + 22);
  v17 = *(void (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool))(*(_QWORD *)v16 + 504LL);
  if ( v17 == CHwFullScreenRenderTarget::NotifySwapChainFullScreen )
    CHwFullScreenRenderTarget::NotifySwapChainFullScreen(v16, 0);
  else
    v17(v16, 0);
  v20 = v109[0];
  if ( v109[0] )
  {
    v8 = 1;
    v112 = 1;
    v134[0] = 0;
    v135[0] = v127;
  }
  else
  {
    v18 = 0LL;
    if ( v5 )
    {
      v19 = 0LL;
      do
      {
        v21 = *(__m128 *)(v12 + v19);
        v22 = v127.m128_i32[0];
        v23 = v127.m128_f32[0] <= v21.m128_f32[0];
        v135[v8] = v21;
        v128 = v21;
        if ( !v23 )
          v135[v8].m128_i32[0] = v22;
        if ( v127.m128_f32[1] > v135[v8].m128_f32[1] )
          v135[v8].m128_i32[1] = v127.m128_i32[1];
        v24 = v135[v8].m128_f32[2];
        v25 = v127.m128_f32[2];
        if ( v24 > v127.m128_f32[2] )
        {
          v135[v8].m128_i32[2] = v127.m128_i32[2];
          v24 = v25;
        }
        v26 = v135[v8].m128_f32[3];
        v27 = v127.m128_f32[3];
        if ( v26 > v127.m128_f32[3] )
        {
          v135[v8].m128_i32[3] = v127.m128_i32[3];
          v26 = v27;
          v24 = v135[v8].m128_f32[2];
        }
        if ( v24 <= v135[v8].m128_f32[0] || v26 <= v135[v8].m128_f32[1] )
        {
          v135[v8].m128_u64[1] = 0LL;
          v135[v8].m128_u64[0] = 0LL;
        }
        else
        {
          v134[v8++] = v18;
        }
        v18 = (unsigned int)(v18 + 1);
        v19 += 16LL;
      }
      while ( (unsigned int)v18 < v5 );
      v112 = v8;
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xqq(v19, (unsigned int)&EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start, (_DWORD)v113, 0, v8);
    v20 = v109[0];
  }
  if ( !v8 )
  {
LABEL_141:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v78 = v113;
      McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, v113);
      goto LABEL_143;
    }
    goto LABEL_142;
  }
  LODWORD(v28) = v109[1];
  v110[1] = 1;
  if ( v109[1] )
  {
    v29 = *((_QWORD *)v113 + 843);
    v115 = v29;
    if ( v29 )
    {
      v30 = v29;
      v31 = *((_QWORD *)v10 + 15);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Start);
        v30 = *((_QWORD *)v113 + 843);
      }
      v32 = 0;
      if ( *(_DWORD *)(v30 + 1176) )
      {
        do
        {
          v93 = *(_QWORD *)(v30 + 1152);
          v94 = *(_BYTE *)(v93 + 40LL * v32 + 16);
          v117 = *(_QWORD *)(v93 + 40LL * v32 + 8);
          v119 = *(void **)(v93 + 40LL * v32);
          if ( (int)CThreadContext::RegisterGraphWalkRoot(v119) >= 0 )
          {
            if ( v94 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(v113, v31, v119, v93 + 40LL * v32 + 20) )
              CCachedVisualImage::EnsureRenderTargetBitmapInfo(
                v117,
                *((_QWORD *)v113 + 49),
                *((unsigned int *)v113 + 100),
                v123);
            CThreadContext::UnregisterGraphWalkRoot();
          }
          ++v32;
        }
        while ( v32 < *(_DWORD *)(v30 + 1176) );
        v10 = v120;
        v7 = v111;
        v8 = v112;
      }
      *(_DWORD *)(v30 + 1176) = 0;
      DynArrayImpl<0>::ShrinkToSize(v30 + 1152, 40LL);
      v9 = (COcclusionContext *)v115;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_RENDER_CVIPASS_Stop);
      v14 = v109[2];
      LODWORD(v28) = v109[1];
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xq(v19, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, v113, 0LL);
      CDrawingContext::CalculateOcclusion(v113, *((struct CVisualTree **)v10 + 15), 0, 0, (__int64)&v115);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xq(v95, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, v113, 0LL);
      v9 = (COcclusionContext *)v115;
    }
    v20 = v109[0];
  }
  v33 = *((_QWORD *)v10 + 105);
  if ( !v33 )
    goto LABEL_44;
  v109[2] = 0;
  v110[0] = 0;
  v34 = COverlayContext::ApplyOverlayOrDirectFlipConfiguration((COverlayContext *)v33, &v109[2], v110);
  v111 = v34;
  v7 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x327u);
    goto LABEL_145;
  }
  v20 = v109[0];
  if ( v109[0]
    || (v33 = *((_QWORD *)v10 + 25), v109[2] == v109[0])
    || *(_BYTE *)(v33 + 2883)
    || (v112 = 1, LOBYTE(v20) = 1, v109[0] = 1, v8 = 1, v134[0] = 0, v135[0] = v127, !(_BYTE)v28) )
  {
    v35 = v113;
  }
  else
  {
    CDirtyRegion::SetFullDirty((CDirtyRegion *)v33);
    CDesktopRenderTarget::CalculateOcclusion((CDesktopRenderTarget *)(*((_QWORD *)v10 + 24) + 168LL), 0LL);
    v35 = v113;
    v20 = 1;
    v9 = (COcclusionContext *)*((_QWORD *)v113 + 843);
    v115 = (__int64)v9;
  }
  v36 = *((_QWORD *)v10 + 105);
  v37 = 0;
  v28 = *(_QWORD *)(v36 + 1056);
  if ( v28 )
  {
    v37 = *(_DWORD *)(v28 + 60);
    if ( v37 == 3 && !CDirectFlipInfo::RenderingRealizationChanged(*(CDirectFlipInfo **)(v36 + 1056)) )
      v37 = v96;
  }
  if ( !v37 )
  {
    if ( !v110[0] )
      goto LABEL_44;
    v100 = CDrawingContext::PushRenderTarget(v35, *((struct IRenderTarget **)v10 + 22));
    v111 = v100;
    v7 = v100;
    if ( v100 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v100, 0x34Au);
      goto LABEL_145;
    }
    v109[3] = 1;
LABEL_184:
    v20 = v109[0];
    goto LABEL_44;
  }
  if ( v37 == 1 )
  {
    v38 = 0;
    dword_1802D6244 |= 2u;
    v8 = 0;
    v112 = 0;
    goto LABEL_45;
  }
  if ( (unsigned int)(v37 - 2) <= 1 )
  {
    OcclusionInfo = CVisual::GetOcclusionInfo(*(CVisual **)(v28 + 24), *((const struct CVisualTree **)v10 + 15));
    LODWORD(v116) = (*(__int64 (__fastcall **)(struct COcclusionInfo *))(*(_QWORD *)OcclusionInfo + 24LL))(OcclusionInfo);
    CurrentRealizationAsRenderTarget = CDirectFlipInfo::GetCurrentRealizationAsRenderTarget(
                                         (CDirectFlipInfo *)v28,
                                         &v118);
    v7 = CurrentRealizationAsRenderTarget;
    if ( CurrentRealizationAsRenderTarget < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CurrentRealizationAsRenderTarget, 0x369u);
      goto LABEL_145;
    }
    (*(void (__fastcall **)(struct IRenderTargetBitmap *))(*(_QWORD *)v118 + 176LL))(v118);
    v99 = CDrawingContext::PushRenderTarget(v35, v118);
    v111 = v99;
    v7 = v99;
    if ( v99 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v99, 0x36Eu);
      goto LABEL_145;
    }
    v109[3] = 1;
    v110[1] = 0;
    goto LABEL_184;
  }
LABEL_44:
  v38 = 0;
LABEL_45:
  if ( v9 )
  {
    v39 = *((_QWORD *)v10 + 105);
    if ( v39 && *(_BYTE *)(v39 + 1195) )
      v40 = 288LL;
    else
      v40 = 220LL;
    COcclusionContext::SetDeviceTransform(v9, (CHwndRenderTarget *)((char *)v10 + v40));
    v20 = v109[0];
    LODWORD(v28) = v109[1];
  }
  else
  {
    LOBYTE(v28) = 0;
    v109[1] = 0;
  }
  if ( v14 )
    goto LABEL_194;
  if ( !v20 )
    goto LABEL_52;
  if ( CHwndRenderTarget::NeedsBlackBars(v10) )
  {
LABEL_194:
    v101 = CDrawingContext::Clear(v113, &stru_1802AD270);
    v7 = v101;
    if ( v101 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v101, 0x394u);
    }
    else
    {
      LOBYTE(v102) = 1;
      v103 = CHwndRenderTarget::NotifyRenderedRect(v10, 0LL, v102);
      v111 = v103;
      v7 = v103;
      if ( v103 >= 0 )
      {
        if ( v14 )
          v8 = 0;
        v112 = v8;
        goto LABEL_162;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, 0x398u);
    }
LABEL_142:
    v78 = v113;
    goto LABEL_143;
  }
LABEL_162:
  v20 = v109[0];
LABEL_52:
  LODWORD(v114) = 0;
  if ( !v8 )
    goto LABEL_141;
  v41 = 0LL;
  v119 = 0LL;
  while ( 1 )
  {
    v42 = v135[(_QWORD)v41];
    LODWORD(v124) = v42.m128_i32[0];
    LODWORD(v43) = _mm_shuffle_ps(v42, v42, 85).m128_u32[0];
    LODWORD(v44) = _mm_shuffle_ps(v42, v42, 170).m128_u32[0];
    LODWORD(v45) = _mm_shuffle_ps(v42, v42, 255).m128_u32[0];
    v46 = v42.m128_f32[0];
    *((float *)&v124 + 1) = v43;
    v125 = __PAIR64__(LODWORD(v45), LODWORD(v44));
    if ( !v20 && (_BYTE)v28 )
    {
      v33 = *((_QWORD *)v10 + 21);
      LOBYTE(v28) = 0;
      LODWORD(v117) = v28;
      if ( v33 )
      {
        if ( CDisplay::HasVirtualModeScale((CDisplay *)v33)
          && !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v10 + 216LL))(v10) )
        {
          v104 = *((_QWORD *)v10 + 105);
          if ( v104 )
          {
            LOBYTE(v28) = *(_BYTE *)(v104 + 1195) == 0;
            LODWORD(v117) = (unsigned __int8)v28;
          }
        }
      }
      v18 = *((_QWORD *)v10 + 25);
      v47 = (unsigned int)v134[(_QWORD)v41];
      v48 = *((_QWORD *)v10 + 15);
      if ( *(_BYTE *)(v18 + 2883) )
      {
        v126 = *(__m128 *)(v18 + 2860);
        v50 = v126.m128_f32[2];
        v51 = v126.m128_f32[1];
        v52 = v126.m128_f32[0];
        v49 = _mm_shuffle_ps(v126, v126, 255).m128_u32[0];
      }
      else
      {
        v49 = 0;
        v50 = 0.0;
        v51 = 0.0;
        v52 = 0.0;
        if ( (unsigned int)v47 >= *(_DWORD *)(v18 + 1276) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x387u);
        }
        else
        {
          _mm_lfence();
          v33 = 16LL * *(unsigned int *)(v18 + 4 * v47 + 1244);
          v53 = (_QWORD **)(v33 + v18 + 280);
          v54 = *v53;
          v126 = *(__m128 *)(v33 + v18 + 152);
          if ( v54 != v53 )
          {
            v55 = v115;
            while ( 1 )
            {
              v56 = v54;
              v54 = (_QWORD *)*v54;
              v33 = v56[2];
              if ( *(_BYTE *)(v48 + 32) )
              {
                v57 = v33 + 288;
              }
              else
              {
                TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v33);
                if ( !TreeDataListHead || (v33 = *TreeDataListHead, (__int64 *)*TreeDataListHead == TreeDataListHead) )
                {
LABEL_209:
                  v58 = 0;
                  goto LABEL_68;
                }
                while ( 1 )
                {
                  v57 = v33 - 224;
                  if ( *(_QWORD *)(v33 + 32) == v48 )
                    break;
                  v33 = *(_QWORD *)v33;
                  if ( (__int64 *)v33 == TreeDataListHead )
                    goto LABEL_209;
                }
              }
              if ( !v57 )
                goto LABEL_209;
              v33 = *(_QWORD *)(v57 + 32);
              if ( !v33 )
              {
                v106 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v57 + 24) + 328LL))(*(_QWORD *)(v57 + 24));
                *(_QWORD *)(v57 + 32) = v106;
                v33 = v106;
                if ( !v106 )
                  goto LABEL_209;
              }
              if ( *((_BYTE *)v56 + 24) )
                v58 = *(_DWORD *)(v33 + 12);
              else
                v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 24LL))(v33);
LABEL_68:
              v59 = *(__m128 *)((char *)v56 + 28);
              v60 = _mm_shuffle_ps(v59, v59, 170).m128_f32[0];
              v121 = v59;
              if ( v60 > v59.m128_f32[0] && v121.m128_f32[3] > v121.m128_f32[1] )
              {
                if ( *(_BYTE *)(v55 + 816) )
                {
                  COcclusionContext::PageInPixelsRectToDeviceRect(v55, &v121, &v128);
                }
                else
                {
                  v128.m128_u64[0] = __PAIR64__(v121.m128_u32[1], v59.m128_u32[0]);
                  v128.m128_u64[1] = __PAIR64__(v121.m128_u32[3], LODWORD(v60));
                }
                v61 = *(_QWORD *)(v55 + 392);
                v62 = *(__int64 (__fastcall **)(__int64, __m128 *, _QWORD))(*(_QWORD *)v61 + 56LL);
                if ( !((char *)v62 == (char *)CArrayBasedCoverageSet::IsFullyCovered
                     ? CArrayBasedCoverageSet::IsFullyCovered(v61, &v128, v58)
                     : (unsigned __int8)v62(v61, &v128, v58)) )
                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v126, &v121);
              }
              if ( v54 == v53 )
              {
                v10 = v120;
                LOBYTE(v28) = v117;
                v41 = v119;
                break;
              }
            }
          }
          v50 = v126.m128_f32[2];
          v52 = v126.m128_f32[0];
          v49 = v126.m128_i32[3];
          v51 = v126.m128_f32[1];
          if ( v126.m128_f32[2] > v126.m128_f32[0] && v126.m128_f32[3] > v126.m128_f32[1] )
          {
            if ( (_BYTE)v28 )
            {
              InflateRectF_InPlace(&v126);
              v49 = v126.m128_i32[3];
              v50 = v126.m128_f32[2];
              v51 = v126.m128_f32[1];
              v52 = v126.m128_f32[0];
            }
            if ( v127.m128_f32[0] > v52 )
              v52 = v127.m128_f32[0];
            v64 = v51;
            if ( v127.m128_f32[1] > v51 )
            {
              v51 = v127.m128_f32[1];
              v64 = v127.m128_f32[1];
            }
            v65 = v50;
            if ( v50 > v127.m128_f32[2] )
            {
              v50 = v127.m128_f32[2];
              v65 = v127.m128_f32[2];
            }
            v66 = *(float *)&v49;
            if ( *(float *)&v49 > v127.m128_f32[3] )
            {
              v49 = v127.m128_i32[3];
              v66 = v127.m128_f32[3];
            }
            if ( v65 <= v52 || v66 <= v64 )
            {
              v49 = 0;
              v50 = 0.0;
              v51 = 0.0;
              v52 = 0.0;
            }
          }
          v38 = v114;
          v7 = v111;
        }
      }
      v44 = v50;
      LODWORD(v45) = v49;
      v124 = __PAIR64__(LODWORD(v51), LODWORD(v52));
      v46 = v52;
      v125 = __PAIR64__(v49, LODWORD(v50));
      v43 = v51;
      if ( v127.m128_f32[0] > v52 )
      {
        LODWORD(v124) = v127.m128_i32[0];
        v46 = v127.m128_f32[0];
      }
      if ( v127.m128_f32[1] > v51 )
      {
        HIDWORD(v124) = v127.m128_i32[1];
        v43 = v127.m128_f32[1];
        v51 = v127.m128_f32[1];
      }
      if ( v50 > v127.m128_f32[2] )
      {
        LODWORD(v125) = v127.m128_i32[2];
        v44 = v127.m128_f32[2];
        v50 = v127.m128_f32[2];
      }
      if ( *(float *)&v49 > v127.m128_f32[3] )
      {
        HIDWORD(v125) = v127.m128_i32[3];
        v45 = v127.m128_f32[3];
        v49 = v127.m128_i32[3];
      }
      if ( v50 <= v46 || *(float *)&v49 <= v51 )
      {
        v8 = v112;
        v125 = 0LL;
        v124 = 0LL;
        goto LABEL_140;
      }
      v8 = v112;
    }
    if ( v44 > v46 && v45 > v43 )
      break;
LABEL_140:
    ++v38;
    v41 = (char *)v41 + 1;
    LODWORD(v114) = v38;
    v119 = v41;
    if ( v38 >= v8 )
      goto LABEL_141;
    v20 = v109[0];
    LODWORD(v28) = v109[1];
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
  {
    McTemplateU0qdffff(
      v33,
      (unsigned int)&EVTDESC_ETWGUID_DIRTYREGIONEVENT,
      v134[(_QWORD)v41],
      v20,
      SLOBYTE(v46),
      SLOBYTE(v43),
      SLOBYTE(v44),
      SLOBYTE(v45));
    v45 = *((float *)&v125 + 1);
    LODWORD(v44) = v125;
    v43 = *((float *)&v124 + 1);
    v46 = *(float *)&v124;
  }
  dword_1802D6258 += (int)(float)((float)(v44 - v46) * (float)(v45 - v43));
  if ( (*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v10 + 216LL))(v10)
    || *(_BYTE *)(*((_QWORD *)v10 + 2) + 1345LL) )
  {
    v67 = (__m128i *)(*((_QWORD *)v10 + 21) + 120LL);
  }
  else
  {
    v67 = (__m128i *)((char *)v10 + 468);
  }
  v68 = *(float *)&v124;
  v69 = _mm_srli_si128(*v67, 8).m128i_u64[0];
  v70 = (float)(int)v67->m128i_i64[0];
  v71 = (float)(int)v69;
  v72 = (float)(int)HIDWORD(v67->m128i_i64[0]);
  if ( v70 > *(float *)&v124 )
  {
    *(float *)&v124 = (float)(int)v67->m128i_i64[0];
    v68 = v70;
  }
  v73 = *((float *)&v124 + 1);
  if ( v72 > *((float *)&v124 + 1) )
  {
    *((float *)&v124 + 1) = v72;
    v73 = v72;
  }
  v74 = *(float *)&v125;
  if ( *(float *)&v125 > v71 )
  {
    *(float *)&v125 = v71;
    v74 = v71;
  }
  v75 = *((float *)&v125 + 1);
  if ( *((float *)&v125 + 1) > (float)SHIDWORD(v69) )
  {
    *((float *)&v125 + 1) = (float)SHIDWORD(v69);
    v75 = (float)SHIDWORD(v69);
  }
  if ( v74 <= v68 || v75 <= v73 )
  {
    v125 = 0LL;
    v124 = 0LL;
  }
  HasVirtualModeScale = *((_BYTE *)v10 + 160);
  if ( !HasVirtualModeScale )
  {
    v77 = (CDisplay *)*((_QWORD *)v10 + 21);
    if ( v77 )
      HasVirtualModeScale = CDisplay::HasVirtualModeScale(v77);
  }
  v78 = v113;
  v79 = CHwndRenderTarget::DrawVisualTree(
          (__int64)v10,
          v113,
          (__int64)&v124,
          v116,
          HasVirtualModeScale,
          v109[1],
          v108,
          v110[1]);
  v7 = v79;
  if ( v79 >= 0 )
  {
    v80 = *((_QWORD *)v10 + 105);
    if ( v80 && *(_BYTE *)(v80 + 1195) )
      v81 = 288LL;
    else
      v81 = 220LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CHwndRenderTarget *)((char *)v10 + v81));
    v82 = X;
    v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(X) & _xmm);
    if ( v83 < 8388608.0 )
      v82 = (float)(int)floorf_0(X);
    v84 = v130;
    X = v82;
    v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v130) & _xmm);
    if ( v85 < 8388608.0 )
      v84 = (float)(int)floorf_0(v130);
    v86 = v131;
    v130 = v84;
    v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v131) & _xmm);
    if ( v87 < 8388608.0 )
      v86 = (float)(int)ceilf_0(v131);
    v88 = v132;
    v131 = v86;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v132) & _xmm) < 8388608.0 )
      v88 = (float)(int)ceilf_0(v132);
    v89 = (__int64 *)*((_QWORD *)v10 + 22);
    *(float *)v133 = v82;
    *(float *)&v133[1] = v84;
    *(float *)&v133[2] = v86;
    *(float *)&v133[3] = v88;
    v90 = *v89;
    v132 = v88;
    v91 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *))(v90 + 184))(v89, v133);
    v111 = v91;
    v7 = v91;
    if ( v91 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v91, 0x960u);
    else
      *((_BYTE *)v10 + 850) = 1;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x3DAu);
      goto LABEL_143;
    }
    if ( v122 )
    {
      v79 = CComposeTop::SubtractOverdraw(v122, &v124);
      v111 = v79;
      v7 = v79;
      if ( v79 < 0 )
      {
        v107 = 992;
        goto LABEL_220;
      }
    }
    goto LABEL_140;
  }
  v107 = 982;
LABEL_220:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, v107);
LABEL_143:
  if ( v109[3] )
    CDrawingContext::PopRenderTargetInternal(v78, 0);
LABEL_145:
  if ( v118 )
    (*(void (__fastcall **)(struct IRenderTargetBitmap *, __int64))(*(_QWORD *)v118 + 16LL))(v118, v18);
  return (unsigned int)v7;
}
