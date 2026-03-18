/*
 * XREFs of ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180041320
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?GetBounds@CVisualTree@@QEAAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800412BC (-GetBounds@CVisualTree@@QEAAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x1800441D0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D14 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ @ 0x18013E474 (-ProcessOffTheadPreComputeRequests@CComposition@@IEAAPEAU_SLIST_ENTRY@@XZ.c)
 *     ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x180158678 (-EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ.c)
 *     ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x18015C990 (-PreRender@CRemoteAppRenderTarget@@UEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?PreCompute@CHolographicInteropTarget@@AEAAJXZ @ 0x1801FDD24 (-PreCompute@CHolographicInteropTarget@@AEAAJXZ.c)
 * Callees:
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x180040B44 (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     ??_GCBackdropRegion@@UEAAPEAXI@Z @ 0x180040F60 (--_GCBackdropRegion@@UEAAPEAXI@Z.c)
 *     ?AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180042200 (-AddInvalidRects@CRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x180043600 (-NotifyTreeDirtyRegion@CDesktopRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z @ 0x180050210 (-AddAdditionalDirtyRects@CVisual@@QEAAJPEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18005FA80 (-NotifyTreeDirtyRegion@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800602F0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180065164 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18009DE60 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18009DF20 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z @ 0x18009F180 (-CalcAcceleration@CDirtyRegion@@AEAAMAEBUDirtyRegionCachedData@1@0@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x18009F47C (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     McTemplateU0xq @ 0x18014F948 (McTemplateU0xq.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1801705D8 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?SetRedrawRects@CDirtyRegion@@AEAAXXZ @ 0x180170710 (-SetRedrawRects@CDirtyRegion@@AEAAXXZ.c)
 */

__int64 __fastcall CVisualTree::PreCompute(struct CVisualTree *a1, __int128 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  volatile signed __int32 *v4; // rbx
  struct CVisualTree *v6; // rbp
  int v7; // r15d
  char *v8; // r14
  __int64 v9; // rax
  char *v10; // rax
  _QWORD **v11; // r15
  _QWORD *v12; // r12
  LPVOID v13; // rax
  __int128 v14; // xmm6
  char *v15; // r13
  __int64 v16; // rdi
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  char *v20; // rax
  __int64 v21; // rcx
  int i; // edi
  CRenderTarget *v23; // rcx
  void (*v24)(CHwndRenderTarget *__hidden, const struct CVisualTree *, struct CDirtyRegion *, struct CBackdropRegion *); // rax
  unsigned int v25; // r15d
  unsigned int v26; // r8d
  unsigned int v27; // edx
  __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // r10
  char v31; // r15
  __int64 v32; // rbp
  unsigned int v33; // eax
  char *v34; // rdx
  int v35; // r8d
  unsigned int v36; // r9d
  char v37; // dl
  CVisual *v38; // rdi
  int j; // edi
  CHwndRenderTarget *v40; // rcx
  void (__fastcall *v41)(CDesktopRenderTarget *__hidden, const struct CVisualTree *, const struct CDirtyRegion *); // rax
  unsigned int (__fastcall *v42)(CDirtyRegion *__hidden); // rax
  CBackdropRegion *(__fastcall *v43)(CBackdropRegion *, char); // rax
  __int64 v45; // rbx
  unsigned int v46; // r8d
  float *v47; // r13
  float *v48; // r9
  const struct MilRectF *v49; // rdx
  const struct MilRectF *v50; // rcx
  __int64 v51; // r15
  _QWORD *v52; // rdx
  __int64 v53; // r11
  float v54; // xmm4_4
  float v55; // xmm1_4
  __int64 v56; // r9
  float v57; // xmm3_4
  float v58; // xmm2_4
  bool v59; // cc
  bool v60; // al
  float v61; // xmm1_4
  float v62; // xmm2_4
  __int64 v63; // r8
  float *v64; // r10
  unsigned int v65; // edx
  __int64 v66; // rcx
  float v67; // xmm1_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm2_4
  float v71; // xmm1_4
  float v72; // xmm1_4
  _QWORD *v73; // rdx
  __int64 v74; // r11
  char *v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  float *v78; // rcx
  float v79; // xmm1_4
  float v80; // xmm0_4
  float v81; // xmm2_4
  float v82; // xmm1_4
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm2_4
  float v86; // xmm2_4
  float v87; // xmm2_4
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rcx
  const struct CDirtyRegion::DirtyRegionCachedData *v96; // rdx
  CDirtyRegion *v97; // rcx
  float v98; // xmm0_4
  __int64 v99; // rdx
  float *v100; // rcx
  __int64 v101; // r10
  __int64 v102; // r15
  unsigned int v103; // eax
  char *v104; // r15
  __int64 v105; // r12
  _QWORD *v106; // rcx
  unsigned int v107; // ecx
  const struct D2D_RECT_F *v108; // rdi
  __int64 v109; // rbp
  unsigned int v110; // r8d
  int v111; // r8d
  bool v112; // [rsp+30h] [rbp-C8h]
  unsigned int v113; // [rsp+34h] [rbp-C4h]
  int updated; // [rsp+38h] [rbp-C0h]
  __m128 v115; // [rsp+40h] [rbp-B8h] BYREF
  float *v116; // [rsp+50h] [rbp-A8h]
  CBackdropRegion *v117; // [rsp+58h] [rbp-A0h]
  __int64 v118; // [rsp+60h] [rbp-98h]
  volatile signed __int32 *v119; // [rsp+68h] [rbp-90h]
  struct CVisualTree *v120; // [rsp+70h] [rbp-88h]
  __int128 v121; // [rsp+78h] [rbp-80h]
  void *retaddr; // [rsp+F8h] [rbp+0h]

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0LL;
  v4 = 0LL;
  v6 = a1;
  v120 = a1;
  v7 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(v2 + 384);
  v118 = v9;
  v117 = 0LL;
  if ( *((_BYTE *)a1 + 33) )
  {
    v7 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x157u);
    return (unsigned int)v7;
  }
  *((_BYTE *)a1 + 33) = 1;
  if ( *((_QWORD *)a1 + 152) == v9 )
    goto LABEL_58;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0xq(a1, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, a1, *((unsigned __int8 *)a1 + 32));
  v10 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xB48uLL);
  v8 = v10;
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *((_DWORD *)v10 + 238) = 0;
  v11 = (_QWORD **)(v10 + 1280);
  v12 = v10 + 280;
  *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
  *((_DWORD *)v10 + 2) = 0;
  *(_QWORD *)v10 = &CDirtyRegion::`vftable';
  *((_QWORD *)v10 + 162) = v10 + 1280;
  *((_QWORD *)v10 + 163) = v10 + 1280;
  *((_QWORD *)v10 + 161) = v10 + 1296;
  *((_QWORD *)v10 + 160) = v10 + 1296;
  *((_DWORD *)v10 + 712) = 0;
  v10[2880] = 0;
  *((_QWORD *)v10 + 35) = v10 + 280;
  *((_QWORD *)v10 + 36) = v10 + 280;
  *((_QWORD *)v10 + 38) = v10 + 296;
  *((_QWORD *)v10 + 37) = v10 + 296;
  *((_QWORD *)v10 + 40) = v10 + 312;
  *((_QWORD *)v10 + 39) = v10 + 312;
  *((_QWORD *)v10 + 42) = v10 + 328;
  *((_QWORD *)v10 + 41) = v10 + 328;
  *((_QWORD *)v10 + 44) = v10 + 344;
  *((_QWORD *)v10 + 43) = v10 + 344;
  *((_QWORD *)v10 + 46) = v10 + 360;
  *((_QWORD *)v10 + 45) = v10 + 360;
  *((_QWORD *)v10 + 48) = v10 + 376;
  *((_QWORD *)v10 + 47) = v10 + 376;
  *((_QWORD *)v10 + 50) = v10 + 392;
  *((_QWORD *)v10 + 49) = v10 + 392;
  (**(void (__fastcall ***)(LPVOID))v10)(v10);
  v13 = HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
  if ( v13 )
  {
    *(_QWORD *)v13 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v13 = &CBackdropRegion::`vftable';
    *((_DWORD *)v13 + 2) = 0;
    *((_QWORD *)v13 + 2) = 0LL;
    *((_QWORD *)v13 + 3) = 0LL;
    *((_QWORD *)v13 + 4) = 0LL;
    *((_DWORD *)v13 + 10) = 0;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xFu);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xFEu);
    goto LABEL_56;
  }
  _InterlockedIncrement((volatile signed __int32 *)v13 + 2);
  v119 = (volatile signed __int32 *)v13;
  v4 = (volatile signed __int32 *)v13;
  v117 = (CBackdropRegion *)v13;
  updated = 0;
  if ( a2 )
  {
    v14 = *a2;
  }
  else
  {
    v121 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v14 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  v112 = !g_bUseDirtyRegion;
  v15 = v8 + 24;
  v16 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 384LL);
  memset_0(v8 + 24, 0, 0x80uLL);
  memset_0(v8 + 536, 0, 0x120uLL);
  *((_QWORD *)v8 + 2) = v16;
  *((_DWORD *)v8 + 719) = 1065353216;
  *(_WORD *)(v8 + 2885) = 0;
  *((_DWORD *)v8 + 714) = 0;
  *((_DWORD *)v8 + 319) = 0;
  v8[2884] = 0;
  *(_WORD *)(v8 + 2881) = 0;
  v8[2883] = v112;
  *(_OWORD *)(v8 + 2860) = v14;
  if ( !v8[2880] )
  {
    *v12 = v12;
    *((_QWORD *)v8 + 36) = v8 + 280;
    *((_QWORD *)v8 + 38) = v8 + 296;
    *((_QWORD *)v8 + 37) = v8 + 296;
    *((_QWORD *)v8 + 40) = v8 + 312;
    *((_QWORD *)v8 + 39) = v8 + 312;
    *((_QWORD *)v8 + 42) = v8 + 328;
    *((_QWORD *)v8 + 41) = v8 + 328;
    *((_QWORD *)v8 + 44) = v8 + 344;
    *((_QWORD *)v8 + 43) = v8 + 344;
    *((_QWORD *)v8 + 46) = v8 + 360;
    *((_QWORD *)v8 + 45) = v8 + 360;
    *((_QWORD *)v8 + 48) = v8 + 376;
    *((_QWORD *)v8 + 47) = v8 + 376;
    *((_QWORD *)v8 + 50) = v8 + 392;
    *((_QWORD *)v8 + 49) = v8 + 392;
    v17 = (_QWORD *)*((_QWORD *)v8 + 161);
    if ( (_QWORD **)*v17 != v11 || (v18 = (_QWORD *)v17[1], (_QWORD *)*v18 != v17) )
      __fastfail(3u);
    *((_QWORD *)v8 + 161) = v18;
    *v18 = v11;
    while ( 1 )
    {
      v19 = *v11;
      if ( *v11 == v11 )
        break;
      if ( (_QWORD **)v19[1] != v11 || (v106 = (_QWORD *)*v19, *(_QWORD **)(*v19 + 8LL) != v19) )
        __fastfail(3u);
      *v11 = v106;
      v106[1] = v11;
      operator delete(v19);
    }
    *((_QWORD *)v8 + 162) = v8 + 1280;
    *((_QWORD *)v8 + 163) = v8 + 1280;
    *((_QWORD *)v8 + 161) = v8 + 1296;
    *((_QWORD *)v8 + 160) = v8 + 1296;
    *((_DWORD *)v8 + 712) = 0;
  }
  v20 = v8 + 160;
  v21 = 8LL;
  do
  {
    *(_QWORD *)v20 = 0LL;
    *((_QWORD *)v20 - 1) = 0LL;
    v20[260] = 1;
    *(_QWORD *)(v20 + 252) = 0LL;
    *((_DWORD *)v20 + 62) = 0;
    *((_QWORD *)v20 - 16) = 0LL;
    *((_QWORD *)v20 - 17) = 0LL;
    v20 += 16;
    --v21;
  }
  while ( v21 );
  if ( (*(_BYTE *)(*((_QWORD *)v6 + 3) + 88LL) & 0x7F) != 0 )
  {
    updated = CPreComputeContext::PreCompute(
                (struct CVisualTree *)((char *)v6 + 64),
                v6,
                (struct CDirtyRegion *)v8,
                (struct CBackdropRegion *)v4);
    v7 = updated;
    if ( updated >= 0 )
      goto LABEL_21;
    v107 = 282;
LABEL_177:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v107);
    goto LABEL_56;
  }
  if ( !*((_BYTE *)v6 + 32) )
  {
    updated = CPreComputeContext::UpdateTransformChildren((struct CVisualTree *)((char *)v6 + 64), v6, 1);
    v7 = updated;
    if ( updated < 0 )
    {
      v107 = 290;
      goto LABEL_177;
    }
  }
LABEL_21:
  for ( i = *((_DWORD *)v6 + 300); i > 0; --i )
  {
    v23 = *(CRenderTarget **)(*((_QWORD *)v6 + 147) + 8LL * (unsigned int)(i - 1));
    v24 = *(void (**)(CHwndRenderTarget *__hidden, const struct CVisualTree *, struct CDirtyRegion *, struct CBackdropRegion *))(*(_QWORD *)v23 + 32LL);
    if ( v24 == CRenderTarget::AddInvalidRects )
    {
      CRenderTarget::AddInvalidRects(v23, v6, (struct CDirtyRegion *)v8, (struct CBackdropRegion *)v4);
    }
    else if ( v24 == CHwndRenderTarget::AddInvalidRects )
    {
      CHwndRenderTarget::AddInvalidRects(v23, v6, (struct CDirtyRegion *)v8, (struct CBackdropRegion *)v4);
    }
    else
    {
      ((void (__fastcall *)(CRenderTarget *, struct CVisualTree *, char *, volatile signed __int32 *))v24)(
        v23,
        v6,
        v8,
        v4);
    }
  }
  v25 = 1;
  if ( qword_1802D6428 )
  {
    v26 = *((_DWORD *)qword_1802D6428 + 18);
    v27 = 0;
    if ( v26 )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)qword_1802D6428 + 6) + 8LL * v27) + 232LL) )
      {
        if ( ++v27 >= v26 )
          goto LABEL_29;
      }
      v28 = *((_QWORD *)v6 + 2);
      goto LABEL_169;
    }
  }
LABEL_29:
  v28 = *((_QWORD *)v6 + 2);
  if ( *(_DWORD *)(*(_QWORD *)(v28 + 72) + 100LL) )
LABEL_169:
    v25 = 0;
  if ( *(_DWORD *)(v28 + 1304) )
    v25 = 0;
  if ( *(_QWORD *)(v28 + 560) )
    v25 = 2;
  if ( v8[2883] )
  {
    v36 = 1;
    goto LABEL_48;
  }
  memset_0(v8 + 1116, 0, 0x80uLL);
  if ( v8[2885] )
  {
    v108 = (const struct D2D_RECT_F *)(v8 + 24);
    v109 = 8LL;
    do
    {
      if ( !IsEmpty(v108) )
        InflateRectF_InPlace();
      ++v108;
      --v109;
    }
    while ( v109 );
  }
  v29 = 0;
  v30 = v25;
  *(_QWORD *)&v121 = v25;
  do
  {
    v31 = 0;
    v32 = 16LL * v29;
    if ( *(float *)&v15[v32 + 8] <= *(float *)&v15[v32] )
      goto LABEL_38;
    if ( *(float *)&v15[v32 + 12] <= *(float *)&v15[v32 + 4] )
      goto LABEL_38;
    v45 = v29 + 1;
    v46 = v45;
    v113 = v29 + 1;
    if ( (unsigned int)v45 >= 8 )
      goto LABEL_38;
    v47 = (float *)&v8[16 * (unsigned int)v45 + 36];
    v48 = (float *)&v8[32 * v45 + 536 + 4 * v29];
    v116 = v48;
    while ( 1 )
    {
      if ( *(v47 - 1) <= *(v47 - 3) || *v47 <= *(v47 - 2) )
        goto LABEL_76;
      if ( v30 == 2
        || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                              &v8[v32 + 24],
                              &v8[16 * v46 + 24]) )
      {
        break;
      }
      if ( v30 )
      {
        if ( *v48 >= 0.86000001 )
          break;
        v80 = CalcOvehead(v50, v49);
        v46 = v113;
        if ( v80 < 50000.0 )
          break;
        v48 = v116;
        v30 = v121;
      }
LABEL_76:
      ++v46;
      v48 += 8;
      v47 += 4;
      v113 = v46;
      v116 = v48;
      if ( v46 >= 8 )
      {
        v15 = v8 + 24;
        goto LABEL_38;
      }
    }
    v51 = v46;
    v115 = *(__m128 *)&v8[v32 + 24];
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v115, &v8[16 * v46 + 24]);
    v54 = v115.m128_f32[0];
    v55 = v115.m128_f32[3];
    v56 = (__int64)&v8[v32 + 408];
    v57 = v115.m128_f32[1];
    v58 = _mm_shuffle_ps(v115, v115, 170).m128_f32[0];
    v59 = v58 <= v115.m128_f32[0];
    *(__m128 *)&v8[v32 + 24] = v115;
    v60 = v59 || v55 <= v57;
    *(_BYTE *)(v56 + 12) = v60;
    v61 = v55 - v57;
    v62 = v58 - v54;
    *(float *)(v56 + 8) = v61 * v62;
    *(float *)(v56 + 4) = (float)(v61 * 0.5) + v57;
    *(float *)v56 = (float)(v62 * 0.5) + v54;
    v8[v53 + 420] = 1;
    *(_DWORD *)&v8[16 * v51 + 416] = 0;
    *(_QWORD *)&v8[v53 + 408] = 0LL;
    v52[1] = 0LL;
    *v52 = 0LL;
    if ( v29 )
    {
      v96 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v8 + 408);
      v97 = (CDirtyRegion *)&v8[32 * v29 + 536];
      do
      {
        v98 = CDirtyRegion::CalcAcceleration(v97, v96, (const struct CDirtyRegion::DirtyRegionCachedData *)v56);
        v96 = (const struct CDirtyRegion::DirtyRegionCachedData *)(v99 + 16);
        *v100 = v98;
        v97 = (CDirtyRegion *)(v100 + 1);
      }
      while ( v101 != 1 );
    }
    if ( (unsigned int)(8 - v45) >= 6 )
    {
      v63 = (__int64)&v8[16 * (unsigned int)v45 + 412];
      v64 = (float *)&v8[32 * v45 + 568 + 4 * v29];
      v65 = (2 - (int)v45) / 6u + 1;
      v66 = v65;
      v45 = (unsigned int)v45 + 6 * v65;
      do
      {
        v67 = 0.0;
        if ( *(_BYTE *)(v63 + 8) )
        {
          if ( !*(_BYTE *)(v56 + 12) )
            v67 = FLOAT_3_4028235e38;
        }
        else if ( !*(_BYTE *)(v56 + 12) )
        {
          v81 = (float)((float)(*(float *)v63 - *(float *)(v56 + 4)) * (float)(*(float *)v63 - *(float *)(v56 + 4)))
              + (float)((float)(*(float *)(v63 - 4) - *(float *)v56) * (float)(*(float *)(v63 - 4) - *(float *)v56));
          if ( v81 != 0.0 )
            v67 = (float)(*(float *)(v56 + 8) + *(float *)(v63 + 4)) / v81;
        }
        *(v64 - 8) = v67;
        v68 = 0.0;
        if ( *(_BYTE *)(v63 + 24) )
        {
          if ( !*(_BYTE *)(v56 + 12) )
            v68 = FLOAT_3_4028235e38;
        }
        else if ( !*(_BYTE *)(v56 + 12) )
        {
          v82 = (float)((float)(*(float *)(v63 + 16) - *(float *)(v56 + 4))
                      * (float)(*(float *)(v63 + 16) - *(float *)(v56 + 4)))
              + (float)((float)(*(float *)(v63 + 12) - *(float *)v56) * (float)(*(float *)(v63 + 12) - *(float *)v56));
          if ( v82 != 0.0 )
            v68 = (float)(*(float *)(v56 + 8) + *(float *)(v63 + 20)) / v82;
        }
        *v64 = v68;
        v69 = 0.0;
        if ( *(_BYTE *)(v63 + 40) )
        {
          if ( !*(_BYTE *)(v56 + 12) )
            v69 = FLOAT_3_4028235e38;
        }
        else if ( !*(_BYTE *)(v56 + 12) )
        {
          v83 = (float)((float)(*(float *)(v63 + 32) - *(float *)(v56 + 4))
                      * (float)(*(float *)(v63 + 32) - *(float *)(v56 + 4)))
              + (float)((float)(*(float *)(v63 + 28) - *(float *)v56) * (float)(*(float *)(v63 + 28) - *(float *)v56));
          if ( v83 != 0.0 )
            v69 = (float)(*(float *)(v56 + 8) + *(float *)(v63 + 36)) / v83;
        }
        v64[8] = v69;
        v70 = 0.0;
        if ( *(_BYTE *)(v63 + 56) )
        {
          if ( !*(_BYTE *)(v56 + 12) )
            v70 = FLOAT_3_4028235e38;
        }
        else if ( !*(_BYTE *)(v56 + 12) )
        {
          v84 = (float)((float)(*(float *)(v63 + 48) - *(float *)(v56 + 4))
                      * (float)(*(float *)(v63 + 48) - *(float *)(v56 + 4)))
              + (float)((float)(*(float *)(v63 + 44) - *(float *)v56) * (float)(*(float *)(v63 + 44) - *(float *)v56));
          if ( v84 != 0.0 )
            v70 = (float)(*(float *)(v56 + 8) + *(float *)(v63 + 52)) / v84;
        }
        v64[16] = v70;
        v71 = 0.0;
        if ( *(_BYTE *)(v63 + 72) )
        {
          if ( !*(_BYTE *)(v56 + 12) )
            v71 = FLOAT_3_4028235e38;
        }
        else if ( !*(_BYTE *)(v56 + 12) )
        {
          v85 = (float)((float)(*(float *)(v63 + 64) - *(float *)(v56 + 4))
                      * (float)(*(float *)(v63 + 64) - *(float *)(v56 + 4)))
              + (float)((float)(*(float *)(v63 + 60) - *(float *)v56) * (float)(*(float *)(v63 + 60) - *(float *)v56));
          if ( v85 != 0.0 )
            v71 = (float)(*(float *)(v56 + 8) + *(float *)(v63 + 68)) / v85;
        }
        v64[24] = v71;
        v72 = 0.0;
        if ( *(_BYTE *)(v63 + 88) )
        {
          if ( !*(_BYTE *)(v56 + 12) )
            v72 = FLOAT_3_4028235e38;
        }
        else if ( !*(_BYTE *)(v56 + 12) )
        {
          v86 = (float)((float)(*(float *)(v63 + 80) - *(float *)(v56 + 4))
                      * (float)(*(float *)(v63 + 80) - *(float *)(v56 + 4)))
              + (float)((float)(*(float *)(v63 + 76) - *(float *)v56) * (float)(*(float *)(v63 + 76) - *(float *)v56));
          if ( v86 != 0.0 )
            v72 = (float)(*(float *)(v56 + 8) + *(float *)(v63 + 84)) / v86;
        }
        v64[32] = v72;
        v63 += 96LL;
        v64 += 48;
        --v66;
      }
      while ( v66 );
    }
    if ( (unsigned int)v45 < 8 )
    {
      v76 = (__int64)&v8[16 * (unsigned int)v45 + 412];
      v77 = (unsigned int)(8 - v45);
      v78 = (float *)&v8[32 * v45 + 536 + 4 * v29];
      do
      {
        v79 = 0.0;
        if ( *(_BYTE *)(v76 + 8) )
        {
          if ( !*(_BYTE *)(v56 + 12) )
            v79 = FLOAT_3_4028235e38;
        }
        else if ( !*(_BYTE *)(v56 + 12) )
        {
          v87 = (float)((float)(*(float *)v76 - *(float *)(v56 + 4)) * (float)(*(float *)v76 - *(float *)(v56 + 4)))
              + (float)((float)(*(float *)(v76 - 4) - *(float *)v56) * (float)(*(float *)(v76 - 4) - *(float *)v56));
          if ( v87 != 0.0 )
            v79 = (float)(*(float *)(v56 + 8) + *(float *)(v76 + 4)) / v87;
        }
        *v78 = v79;
        v76 += 16LL;
        v78 += 8;
        --v77;
      }
      while ( v77 );
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v8[v32 + 152], &v8[v53 + 152]);
    v73[1] = 0LL;
    v75 = &v8[v74 + 280];
    *v73 = 0LL;
    if ( *(char **)v75 != v75 )
    {
      **(_QWORD **)&v8[16 * v29 + 288] = *(_QWORD *)v75;
      *(_QWORD *)(*(_QWORD *)v75 + 8LL) = *(_QWORD *)&v8[16 * v29 + 288];
      **(_QWORD **)&v8[16 * v51 + 288] = &v8[v32 + 280];
      *(_QWORD *)&v8[16 * v29 + 288] = *(_QWORD *)&v8[16 * v51 + 288];
      *((_QWORD *)v75 + 1) = v75;
      *(_QWORD *)v75 = v75;
    }
    v31 = 1;
    v15 = v8 + 24;
LABEL_38:
    v30 = v121;
    v33 = v29 + 1;
    v29 = 0;
    if ( !v31 )
      v29 = v33;
  }
  while ( v29 < 8 );
  v4 = v119;
  v34 = v8 + 36;
  v35 = 2;
  v36 = 0;
  do
  {
    if ( *((float *)v34 - 1) > *((float *)v34 - 3) && *(float *)v34 > *((float *)v34 - 2) )
    {
      v88 = 2LL * v36;
      v89 = v36++;
      *(_OWORD *)&v8[8 * v88 + 1116] = *(_OWORD *)(v34 - 12);
      *(_DWORD *)&v8[4 * v89 + 1244] = v35 - 2;
    }
    if ( *((float *)v34 + 3) > *((float *)v34 + 1) && *((float *)v34 + 4) > *((float *)v34 + 2) )
    {
      v90 = 2LL * v36;
      v91 = v36++;
      *(_OWORD *)&v8[8 * v90 + 1116] = *(_OWORD *)(v34 + 4);
      *(_DWORD *)&v8[4 * v91 + 1244] = v35 - 1;
    }
    if ( *((float *)v34 + 7) > *((float *)v34 + 5) && *((float *)v34 + 8) > *((float *)v34 + 6) )
    {
      v92 = 2LL * v36;
      v93 = v36++;
      *(_OWORD *)&v8[8 * v92 + 1116] = *(_OWORD *)(v34 + 20);
      *(_DWORD *)&v8[4 * v93 + 1244] = v35;
    }
    if ( *((float *)v34 + 11) > *((float *)v34 + 9) && *((float *)v34 + 12) > *((float *)v34 + 10) )
    {
      v94 = 2LL * v36;
      v95 = v36++;
      *(_OWORD *)&v8[8 * v94 + 1116] = *(_OWORD *)(v34 + 36);
      *(_DWORD *)&v8[4 * v95 + 1244] = v35 + 1;
    }
    v35 += 4;
    v34 += 64;
  }
  while ( (unsigned int)(v35 - 2) < 8 );
  v6 = v120;
LABEL_48:
  *((_DWORD *)v8 + 319) = v36;
  v8[2886] = 1;
  if ( v8[2881] )
  {
    CDirtyRegion::SetRedrawRects((CDirtyRegion *)v8);
    CDirtyRegion::SetFullDirty((CDirtyRegion *)v8);
    *(_WORD *)(v8 + 2881) = 0;
  }
  else if ( v8[2882] )
  {
    CDirtyRegion::SetFullDirty((CDirtyRegion *)v8);
    v8[2882] = 0;
  }
  v37 = v8[2883];
  if ( v37 )
    goto LABEL_54;
  if ( !v8[2886] )
  {
    v110 = 0;
    while ( IsEmpty((const struct D2D_RECT_F *)&v8[16 * v110 + 24]) )
    {
      v110 = v111 + 1;
      if ( v110 >= 8 )
        goto LABEL_55;
    }
LABEL_54:
    v38 = *(CVisual **)(*((_QWORD *)v6 + 3) + 80LL);
    if ( v38 )
    {
      v102 = 2860LL;
      if ( !v37 )
        v102 = 1116LL;
      v103 = *((_DWORD *)v8 + 319);
      v104 = &v8[v102];
      if ( v103 )
      {
        v105 = v103;
        do
        {
          CVisual::AddAdditionalDirtyRects(v38, (const struct MilRectF *)&v104[v3]);
          v3 += 16LL;
          --v105;
        }
        while ( v105 );
      }
    }
    goto LABEL_55;
  }
  if ( *((_DWORD *)v8 + 319) )
    goto LABEL_54;
LABEL_55:
  v7 = updated;
  *((_QWORD *)v6 + 152) = v118;
LABEL_56:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, v6);
LABEL_58:
  *((_BYTE *)v6 + 33) = 0;
  if ( v7 < 0 )
  {
LABEL_64:
    if ( v8 )
    {
      v42 = *(unsigned int (__fastcall **)(CDirtyRegion *__hidden))(*(_QWORD *)v8 + 8LL);
      if ( v42 == CDirtyRegion::Release )
        CDirtyRegion::Release((CDirtyRegion *)v8);
      else
        v42((CDirtyRegion *)v8);
    }
  }
  else if ( v8 )
  {
    for ( j = *((_DWORD *)v6 + 300); j > 0; --j )
    {
      v40 = *(CHwndRenderTarget **)(*((_QWORD *)v6 + 147) + 8LL * (unsigned int)(j - 1));
      v41 = *(void (__fastcall **)(CDesktopRenderTarget *__hidden, const struct CVisualTree *, const struct CDirtyRegion *))(*(_QWORD *)v40 + 24LL);
      if ( v41 == CHwndRenderTarget::NotifyTreeDirtyRegion )
      {
        CHwndRenderTarget::NotifyTreeDirtyRegion(v40, v6, (const struct CDirtyRegion *)v8);
      }
      else if ( v41 == CDesktopRenderTarget::NotifyTreeDirtyRegion )
      {
        CDesktopRenderTarget::NotifyTreeDirtyRegion(v40, v6, (const struct CDirtyRegion *)v8);
      }
      else
      {
        v41(v40, v6, (const struct CDirtyRegion *)v8);
      }
    }
    goto LABEL_64;
  }
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    v43 = *(CBackdropRegion *(__fastcall **)(CBackdropRegion *, char))(*(_QWORD *)v117 + 16LL);
    if ( v43 == CBackdropRegion::`scalar deleting destructor' )
      CBackdropRegion::`scalar deleting destructor'(v117, 1);
    else
      v43(v117, 1);
  }
  return (unsigned int)v7;
}
