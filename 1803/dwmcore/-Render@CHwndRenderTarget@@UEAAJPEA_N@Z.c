/*
 * XREFs of ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x1801700D0 (-Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18001DBF0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180060FC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x180062F10 (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180062F50 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x180062FA0 (-SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18006BB20 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Release@CD3DDeviceLevel1@@UEAAKXZ @ 0x180074BE0 (-Release@CD3DDeviceLevel1@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?PostRender@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18007BB70 (-PostRender@CHwFullScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800961C0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18009DE60 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800C53F0 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C57DC (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C5B90 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     PubSebRegisterRpc @ 0x1800CA238 (PubSebRegisterRpc.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800D7A60 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z @ 0x18013BD28 (-SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1801403B0 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ @ 0x180158624 (-CopyFrontToBackBuffer@CHwndRenderTarget@@QEBAJXZ.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180158940 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180158D04 (-RenderDebugFrameCounter@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     McTemplateU0zqq @ 0x1801591B4 (McTemplateU0zqq.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801626C4 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180166B04 (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAVIRenderTargetDisplay@@AEBUDCompWetInkStrokeRenderState@@PEA_N@Z @ 0x180171848 (-TryEnqueueSuperWetScribble@CWetInkManager@@AEAAJPEAVCGenericInk@@PEAUIDCompositionDirectInkWetS.c)
 *     ?erase@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CWetInkManager@@@std@@@std@@@2@@Z @ 0x180171C48 (-erase@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke@CWetInkManager@@@st.c)
 *     ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180172AE0 (-RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18018F3FC (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801AC5C4 (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801C8460 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x18020D838 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::Render(CHwndRenderTarget *this, bool *a2)
{
  int v2; // edi
  char *v3; // rsi
  struct CComposeTop *v5; // rbx
  __int64 v6; // r15
  char v7; // r12
  char v8; // r13
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  bool (__fastcall *v12)(CHwndRenderTarget *__hidden); // rax
  char v13; // al
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // eax
  char v18; // r12
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  char v24; // r13
  char v25; // r12
  int v26; // eax
  __int64 v27; // rax
  int v28; // ebx
  int v29; // r8d
  int v30; // ebx
  int v31; // edx
  __int64 v32; // rbx
  CCompositionSurfaceInfo *v33; // rdi
  unsigned int v34; // r13d
  __int64 v35; // rcx
  struct _SEB_RPC_PUBLISH_DATA *v36; // rcx
  char updated; // bl
  struct _SEB_RPC_PUBLISH_DATA *v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  int v41; // eax
  __int64 v42; // r13
  int v43; // eax
  int v44; // eax
  LPVOID v45; // r12
  int v46; // eax
  int v47; // eax
  LPVOID v48; // r12
  CMILRefCountBase *v49; // rcx
  int v50; // eax
  int v51; // eax
  __int64 v52; // rcx
  int v53; // eax
  int v54; // eax
  unsigned int v55; // r12d
  __int64 v56; // r12
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  CD2DContext *v61; // rcx
  const struct ID2DContextOwner *v62; // rdx
  __int64 (__fastcall *v63)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **); // rax
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rcx
  CD3DDeviceLevel1 *v67; // rcx
  void (*v68)(void); // rax
  CGdiSpriteBitmap *v69; // rcx
  void (*v70)(void); // rax
  __int64 v71; // rcx
  bool v72; // zf
  __int64 v73; // rcx
  __int64 v74; // rax
  struct IRenderTargetDisplay *v75; // rcx
  CWetInkManager *v76; // r13
  __int64 v77; // rbx
  CHwFullScreenRenderTarget *v78; // rcx
  __int64 (__fastcall *v79)(CHwFullScreenRenderTarget *__hidden, bool *); // rax
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rcx
  bool v83; // al
  CDirtyRegion *v84; // rcx
  void (*v85)(void); // rax
  __int64 result; // rax
  unsigned int v87; // eax
  __int64 v88; // rbx
  unsigned int v89; // eax
  unsigned int v90; // eax
  __int64 v91; // rbx
  unsigned int v92; // eax
  __int64 v93; // rbx
  unsigned int v94; // eax
  __int64 v95; // rbx
  unsigned int v96; // eax
  __int64 v97; // rbx
  unsigned int v98; // eax
  void (*v99)(void); // rax
  int v100; // eax
  unsigned int v101; // r8d
  int v102; // r8d
  unsigned int v103; // r8d
  int v104; // r8d
  __int64 v105; // rax
  char v106; // r9
  int v107; // eax
  int v108; // eax
  __int64 v109; // r8
  bool v110; // al
  int v111; // eax
  __int64 v112; // rax
  int v113; // eax
  int v114; // eax
  __int64 v115; // rax
  UINT v116; // r8d
  SIZE_T v117; // r8
  LPVOID v118; // r12
  int v119; // r9d
  SIZE_T v120; // r8
  LPVOID v121; // r12
  int v122; // r9d
  int v123; // r9d
  __int64 v124; // rcx
  SIZE_T v125; // r8
  int v126; // r9d
  SIZE_T v127; // r8
  LPVOID v128; // r12
  int v129; // r9d
  SIZE_T v130; // r8
  LPVOID v131; // r12
  int v132; // r9d
  SIZE_T v133; // r8
  LPVOID v134; // rbx
  int v135; // eax
  int v136; // eax
  int v137; // ebx
  __int64 v138; // rax
  int v139; // eax
  CGenericInk *v140; // rcx
  int DirectInkWetStroke; // eax
  struct CGenericInk *v142; // rdx
  int v143; // eax
  int IsOptedIn; // eax
  char v145; // al
  int v146; // [rsp+20h] [rbp-59h]
  char v147; // [rsp+40h] [rbp-39h]
  char v148; // [rsp+41h] [rbp-38h]
  struct IDCompositionDirectInkWetStrokePartner *v149; // [rsp+48h] [rbp-31h] BYREF
  struct ID2DContext *v150; // [rsp+50h] [rbp-29h] BYREF
  struct IRenderTargetDisplay *v151; // [rsp+58h] [rbp-21h]
  _BYTE v152[8]; // [rsp+60h] [rbp-19h] BYREF
  DXGI_HDR_METADATA_HDR10 v153; // [rsp+68h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  char v155; // [rsp+E0h] [rbp+67h]
  struct IRenderTarget *v157; // [rsp+F0h] [rbp+77h] BYREF
  bool v158; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = 0;
  v3 = (char *)this - 64;
  if ( !*((_QWORD *)this + 6) )
  {
    v100 = CDrawingContext::Create(*((struct CComposition **)v3 + 2), (struct CDrawingContext **)v3 + 14);
    if ( v100 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v100, 0x3Eu);
  }
  v5 = 0LL;
  v6 = *((_QWORD *)v3 + 14);
  v7 = 0;
  v148 = 0;
  v147 = 0;
  v155 = 0;
  v8 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 72LL) + 114LL);
  *a2 = 0;
  if ( *(int *)(*((_QWORD *)this - 6) + 1184LL) >= 3 )
    goto LABEL_211;
  v9 = *((_QWORD *)this + 16);
  if ( v9 )
  {
    v5 = *(struct CComposeTop **)(v9 + 320);
    if ( v5 )
    {
      if ( *((_QWORD *)v5 + 1) )
      {
        v7 = 1;
        CHwndRenderTarget::CopyFrontToBackBuffer((CHwndRenderTarget *)v3);
      }
    }
  }
  v10 = *((_QWORD *)this + 15);
  if ( v10 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 56LL))(v10, *((unsigned __int8 *)this + 788));
  v11 = *((_QWORD *)this + 17);
  if ( !v11 )
    goto LABEL_140;
  if ( !*(_BYTE *)(v11 + 2883) )
  {
    if ( !*(_BYTE *)(v11 + 2886) )
    {
      v101 = 0;
      while ( IsEmpty((const struct D2D_RECT_F *)(16LL * v101 + v11 + 24)) )
      {
        v101 = v102 + 1;
        if ( v101 >= 8 )
          goto LABEL_140;
      }
      goto LABEL_11;
    }
    if ( !*(_DWORD *)(v11 + 1276) )
    {
LABEL_140:
      if ( !v7 )
        goto LABEL_31;
    }
  }
LABEL_11:
  v12 = *(bool (__fastcall **)(CHwndRenderTarget *__hidden))(*(_QWORD *)v3 + 208LL);
  if ( v12 == CHwndRenderTarget::SupportsMoveOptimization )
    v13 = CHwndRenderTarget::SupportsMoveOptimization((CHwndRenderTarget *)v3);
  else
    v13 = v12((CHwndRenderTarget *)v3);
  v14 = v13;
  v15 = *((_QWORD *)v3 + 105);
  if ( v15 && *(_BYTE *)(v15 + 1195) )
    v16 = 288LL;
  else
    v16 = 220LL;
  v17 = CDrawingContext::BeginFrame(
          (CDrawingContext *)v6,
          *((struct IRenderTarget **)this + 14),
          (__int64)&v3[v16],
          0LL,
          v14,
          (__int64)v3);
  v2 = v17;
  if ( v17 >= 0 )
  {
    v18 = 1;
    v155 = 1;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 216LL))(v3) )
    {
      v148 = 1;
      *(_BYTE *)(*((_QWORD *)this - 6) + 1344LL) = 1;
    }
    v19 = *((_QWORD *)this + 17);
    if ( v19 )
    {
      if ( *(_BYTE *)(v19 + 2883) )
        goto LABEL_23;
      if ( !*(_BYTE *)(v19 + 2886) )
      {
        v103 = 0;
        while ( IsEmpty((const struct D2D_RECT_F *)(16LL * v103 + v19 + 24)) )
        {
          v103 = v104 + 1;
          if ( v103 >= 8 )
            goto LABEL_24;
        }
LABEL_23:
        v20 = CHwndRenderTarget::RenderDirtyRegion((CHwndRenderTarget *)v3, (struct CDrawingContext *)v6, v5);
        v2 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC4u);
          goto LABEL_127;
        }
        goto LABEL_24;
      }
      if ( *(_DWORD *)(v19 + 1276) )
        goto LABEL_23;
    }
LABEL_24:
    if ( v5 && !v8 )
    {
      v105 = *((_QWORD *)this + 17);
      v106 = v105 ? *(_BYTE *)(v105 + 2883) : 0;
      v107 = CHwndRenderTarget::RenderComposeTop((CHwndRenderTarget *)v3, (struct CDrawingContext *)v6, v5, v106);
      v2 = v107;
      if ( v107 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v107, 0xCDu);
        goto LABEL_127;
      }
    }
    v21 = *(_QWORD *)(*((_QWORD *)this - 6) + 512LL);
    if ( v21 )
    {
      if ( *(_BYTE *)(v21 + 24) )
      {
        if ( CHwndRenderTarget::IsPrimaryMonitor((CHwndRenderTarget *)v3) )
        {
          v108 = CHwndRenderTarget::RenderDebugFrameCounter((CHwndRenderTarget *)v3, (struct CDrawingContext *)v6);
          v2 = v108;
          if ( v108 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v108, 0xD4u);
            goto LABEL_127;
          }
        }
      }
    }
    if ( !(*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 216LL))(v3) )
    {
      v22 = *((_QWORD *)v3 + 21);
      if ( *(_BYTE *)(v22 + 324) )
      {
        if ( *(_BYTE *)(v22 + 325) )
          v147 = 1;
      }
    }
LABEL_31:
    v23 = *((_QWORD *)this + 97);
    if ( v23 )
    {
      v24 = 0;
      v25 = 0;
      v26 = COverlayContext::SetMultiplaneOverlayPresentInfo(*((COverlayContext **)this + 97));
      v2 = v26;
      if ( v26 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x5FBu);
      }
      else
      {
        v2 = 0;
        if ( *(_QWORD *)(v23 + 1056) )
        {
          v110 = CDirectFlipInfo::RenderingRealizationChanged(*(CDirectFlipInfo **)(v23 + 1056))
              && *(int *)(*(_QWORD *)(v109 + 32) + 76LL) <= 1;
          *(_BYTE *)(v109 + 76) = v110;
          *(_DWORD *)(v109 + 72) = *(_DWORD *)(*(_QWORD *)(v109 + 32) + 72LL);
          if ( *(_BYTE *)(v109 + 76) )
            *(_BYTE *)(v23 + 1189) = 1;
          v111 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v23 + 1056) + 16LL))(*(_QWORD *)(v23 + 1056));
          v2 = v111;
          if ( v111 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v111, 0x100Du);
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x5FCu);
        }
        else
        {
          v24 = *(_BYTE *)(v23 + 1189);
          v25 = *(_BYTE *)(v23 + 1190);
          *(_WORD *)(v23 + 1189) = 0;
        }
      }
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xE7u);
        goto LABEL_126;
      }
      if ( v25 )
      {
        v112 = *((_QWORD *)v3 + 2);
        v3[857] = 1;
        v3[850] = 1;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v112 + 552) + 104LL))(
          *(_QWORD *)(v112 + 552),
          0LL,
          512LL);
      }
      else if ( v24 )
      {
        *((_BYTE *)this + 786) = 1;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v3 + 216LL))(v3) )
      goto LABEL_63;
    v27 = *((_QWORD *)v3 + 21);
    if ( !*(_BYTE *)(v27 + 324) || !*(_BYTE *)(v27 + 325) )
      goto LABEL_63;
    v28 = 0;
    EnterCriticalSection(&g_DisplayManager);
    if ( qword_1802D6428 )
      v28 = *((_DWORD *)qword_1802D6428 + 18);
    LeaveCriticalSection(&g_DisplayManager);
    if ( v28 != 1 )
    {
LABEL_63:
      if ( !v155 )
        goto LABEL_112;
      v2 = 0;
      v155 = 0;
      v39 = 0xFFFFFFFFLL;
      *(_QWORD *)(v6 + 6768) = 0LL;
      *(_DWORD *)(v6 + 448) = 0;
      v40 = *(_DWORD *)(v6 + 456);
      if ( v40 != 10 )
      {
        v41 = v40 + 1;
        goto LABEL_66;
      }
      v90 = *(_DWORD *)(v6 + 472);
      v91 = 64LL;
      if ( v90 > 0x40 )
        v91 = v90;
      if ( (unsigned __int64)(3 * v91) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else
      {
        if ( (unsigned int)(3 * v91) > *(_DWORD *)(v6 + 452) )
        {
LABEL_159:
          *(_DWORD *)(v6 + 472) = 0;
          v41 = 0;
LABEL_66:
          *(_DWORD *)(v6 + 456) = v41;
          v42 = 8LL;
          *(_DWORD *)(v6 + 480) = 0;
          v43 = *(_DWORD *)(v6 + 488);
          if ( v43 != 8 )
          {
            v44 = v43 + 1;
            LODWORD(v45) = 0;
            goto LABEL_68;
          }
          v87 = *(_DWORD *)(v6 + 504);
          v88 = 8LL;
          if ( v87 > 8 )
            v88 = v87;
          if ( (unsigned __int64)(3 * v88) > 0xFFFFFFFF )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
          }
          else
          {
            if ( (unsigned int)(3 * v88) > *(_DWORD *)(v6 + 484) )
            {
LABEL_149:
              LODWORD(v45) = 0;
              *(_DWORD *)(v6 + 504) = 0;
              v44 = 0;
LABEL_68:
              *(_DWORD *)(v6 + 488) = v44;
              *(_DWORD *)(v6 + 512) = 0;
              v46 = *(_DWORD *)(v6 + 520);
              if ( v46 != 10 )
              {
                v47 = v46 + 1;
                goto LABEL_70;
              }
              v92 = *(_DWORD *)(v6 + 536);
              v93 = 64LL;
              if ( v92 > 0x40 )
                v93 = v92;
              if ( (unsigned __int64)(3 * v93) > 0xFFFFFFFF )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
              }
              else if ( (unsigned int)(3 * v93) <= *(_DWORD *)(v6 + 516) )
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v93 <= 1 )
                {
                  v123 = -2147024809;
                }
                else
                {
                  v45 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v93);
                  if ( v45 )
                  {
                    operator delete(*(void **)(v6 + 528));
                    *(_QWORD *)(v6 + 528) = v45;
                    LODWORD(v45) = 0;
                    *(_DWORD *)(v6 + 516) = v93;
                    goto LABEL_164;
                  }
                  v123 = -2147024882;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v123, 0x100u);
              }
LABEL_164:
              *(_DWORD *)(v6 + 536) = 0;
              v47 = 0;
LABEL_70:
              *(_DWORD *)(v6 + 520) = v47;
              while ( *(_DWORD *)(v6 + 568) )
                CDrawingContext::PopLayerInternal(v6, v39);
              if ( *(_DWORD *)(v6 + 696) )
              {
                do
                {
                  v124 = *(_QWORD *)(*(_QWORD *)(v6 + 672) + 16LL * (unsigned int)v45);
                  if ( v124 )
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v124 + 16LL))(v124, v39);
                  LODWORD(v45) = (_DWORD)v45 + 1;
                }
                while ( (unsigned int)v45 < *(_DWORD *)(v6 + 696) );
              }
              LODWORD(v48) = 0;
              *(_DWORD *)(v6 + 696) = 0;
              DynArrayImpl<0>::ShrinkToSize(v6 + 672, 16LL);
              v49 = *(CMILRefCountBase **)(v6 + 776);
              if ( v49 )
              {
                v99 = *(void (**)(void))(*(_QWORD *)v49 + 8LL);
                if ( (char *)v99 == (char *)CMILRefCountBase::Release )
                  CMILRefCountBase::Release(v49);
                else
                  v99();
                *(_QWORD *)(v6 + 776) = 0LL;
              }
              *(_DWORD *)(v6 + 880) = 0;
              DynArrayImpl<0>::ShrinkToSize(v6 + 856, 8LL);
              *(_DWORD *)(v6 + 936) = 0;
              *(_DWORD *)(v6 + 976) = 0;
              v50 = *(_DWORD *)(v6 + 984);
              if ( v50 != 10 )
              {
                v51 = v50 + 1;
                goto LABEL_75;
              }
              v94 = *(_DWORD *)(v6 + 1000);
              v95 = 64LL;
              if ( v94 > 0x40 )
                v95 = v94;
              if ( (unsigned __int64)(3 * v95) > 0xFFFFFFFF )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
              }
              else if ( (unsigned int)(3 * v95) <= *(_DWORD *)(v6 + 980) )
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v95 <= 0x1C )
                {
                  v126 = -2147024809;
                }
                else
                {
                  v125 = 28LL * (unsigned int)v95;
                  if ( !v125 )
                    v125 = 1LL;
                  v48 = HeapAlloc(WPF::g_processHeap, 0, v125);
                  if ( v48 )
                  {
                    operator delete(*(void **)(v6 + 992));
                    *(_QWORD *)(v6 + 992) = v48;
                    LODWORD(v48) = 0;
                    *(_DWORD *)(v6 + 980) = v95;
                    goto LABEL_169;
                  }
                  v126 = -2147024882;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v126, 0x100u);
              }
LABEL_169:
              *(_DWORD *)(v6 + 1000) = (_DWORD)v48;
              v51 = (int)v48;
LABEL_75:
              *(_DWORD *)(v6 + 984) = v51;
              *(_DWORD *)(v6 + 1032) = (_DWORD)v48;
              DynArrayImpl<0>::ShrinkToSize(v6 + 1008, 80LL);
              *(_DWORD *)(v6 + 3072) = (_DWORD)v48;
              v53 = *(_DWORD *)(v6 + 3080);
              if ( v53 != 8 )
              {
                v54 = v53 + 1;
                goto LABEL_77;
              }
              v89 = *(_DWORD *)(v6 + 3096);
              v52 = 0xFFFFFFFFLL;
              if ( v89 > 8 )
                v42 = v89;
              if ( (unsigned __int64)(3 * v42) > 0xFFFFFFFF )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
              }
              else if ( (unsigned int)(3 * v42) <= *(_DWORD *)(v6 + 3076) )
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v42 <= 0x10 )
                {
                  v129 = -2147024809;
                }
                else
                {
                  v127 = 16LL * (unsigned int)v42;
                  if ( !v127 )
                    v127 = 1LL;
                  v128 = HeapAlloc(WPF::g_processHeap, 0, v127);
                  if ( v128 )
                  {
                    operator delete(*(void **)(v6 + 3088));
                    *(_QWORD *)(v6 + 3088) = v128;
                    *(_DWORD *)(v6 + 3076) = v42;
                    goto LABEL_154;
                  }
                  v129 = -2147024882;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v129, 0x100u);
              }
LABEL_154:
              *(_DWORD *)(v6 + 3096) = 0;
              v54 = 0;
LABEL_77:
              v55 = 0;
              for ( *(_DWORD *)(v6 + 3080) = v54; v55 < *(_DWORD *)(v6 + 1864); ++v55 )
                CScopedClipStack::FreeCpuClipStackState(
                  (CScopedClipStack *)v52,
                  (struct CScopedClipStack::CpuClipStackState *)(*(_QWORD *)(v6 + 1840) + 120LL * v55));
              *(_DWORD *)(v6 + 1864) = 0;
              DynArrayImpl<0>::ShrinkToSize(v6 + 1840, 120LL);
              *(_DWORD *)(v6 + 3104) = 0;
              v56 = 64LL;
              v57 = *(_DWORD *)(v6 + 3112);
              if ( v57 != 10 )
              {
                v58 = v57 + 1;
                goto LABEL_80;
              }
              v96 = *(_DWORD *)(v6 + 3128);
              v97 = 64LL;
              if ( v96 > 0x40 )
                v97 = v96;
              if ( (unsigned __int64)(3 * v97) > 0xFFFFFFFF )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
              }
              else if ( (unsigned int)(3 * v97) <= *(_DWORD *)(v6 + 3108) )
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v97 <= 4 )
                {
                  v132 = -2147024809;
                }
                else
                {
                  v130 = 4 * v97;
                  if ( !(4 * v97) )
                    v130 = 1LL;
                  v131 = HeapAlloc(WPF::g_processHeap, 0, v130);
                  if ( v131 )
                  {
                    operator delete(*(void **)(v6 + 3120));
                    *(_QWORD *)(v6 + 3120) = v131;
                    v56 = 64LL;
                    *(_DWORD *)(v6 + 3108) = v97;
                    goto LABEL_174;
                  }
                  v132 = -2147024882;
                  v56 = 64LL;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v132, 0x100u);
              }
LABEL_174:
              *(_DWORD *)(v6 + 3128) = 0;
              v58 = 0;
LABEL_80:
              *(_DWORD *)(v6 + 3112) = v58;
              *(_DWORD *)(v6 + 3304) = 0;
              v59 = *(_DWORD *)(v6 + 3312);
              if ( v59 != 10 )
              {
                v60 = v59 + 1;
LABEL_82:
                *(_DWORD *)(v6 + 3312) = v60;
                if ( *(_QWORD *)(v6 + 360) )
                {
                  v61 = *(CD2DContext **)(v6 + 384);
                  v157 = 0LL;
                  v62 = (const struct ID2DContextOwner *)(v6 + 8);
                  v63 = *(__int64 (__fastcall **)(CD2DContext *__hidden, const struct ID2DContextOwner *, struct IRenderTarget **))(*(_QWORD *)v61 + 32LL);
                  if ( v63 == CD2DContext::PopTarget )
                    v64 = CD2DContext::PopTarget(v61, v62, &v157);
                  else
                    v64 = v63(v61, v62, &v157);
                  v2 = v64;
                  if ( v64 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x2578u);
                  }
                  else if ( g_LockAndReadD2DTarget )
                  {
                    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v6 + 360) + 224LL))(
                      *(_QWORD *)(v6 + 360),
                      0LL,
                      0LL);
                  }
                  v65 = *(_QWORD *)(v6 + 360);
                  if ( v65 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
                    *(_QWORD *)(v6 + 360) = 0LL;
                  }
                  v66 = *(_QWORD *)(v6 + 368);
                  if ( v66 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
                    *(_QWORD *)(v6 + 368) = 0LL;
                  }
                  if ( v157 )
                    (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)v157 + 16LL))(v157);
                  *(_BYTE *)(v6 + 6825) = 1;
                  if ( v2 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1DCu);
                }
                v67 = *(CD3DDeviceLevel1 **)(v6 + 384);
                if ( v67 )
                {
                  v68 = *(void (**)(void))(*(_QWORD *)v67 + 16LL);
                  if ( (char *)v68 == (char *)CD3DDeviceLevel1::Release )
                    CD3DDeviceLevel1::Release(v67);
                  else
                    v68();
                  *(_QWORD *)(v6 + 384) = 0LL;
                }
                v69 = *(CGdiSpriteBitmap **)(v6 + 4040);
                if ( v69 )
                {
                  v70 = *(void (**)(void))(*(_QWORD *)v69 + 16LL);
                  if ( (char *)v70 == (char *)CGdiSpriteBitmap::Release )
                    CGdiSpriteBitmap::Release(v69);
                  else
                    v70();
                  *(_QWORD *)(v6 + 4040) = 0LL;
                }
                v71 = *(_QWORD *)(v6 + 3544);
                if ( v71 )
                {
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
                  *(_QWORD *)(v6 + 3544) = 0LL;
                }
                v72 = *(_BYTE *)(v6 + 3136) == 0;
                *(_BYTE *)(v6 + 6828) = 0;
                if ( v72 && !*(_QWORD *)(v6 + 6768) )
                {
                  v73 = *(_QWORD *)(v6 + 6800);
                  if ( v73 )
                  {
                    v136 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v73 + 24) + 88LL))(*(_QWORD *)(v73 + 24));
                    v137 = v136;
                    if ( v136 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v136, 0x1F3u);
                    if ( !v2 || v2 >= 0 && v137 < 0 )
                      v2 = v137;
                    *(_QWORD *)(v6 + 6800) = 0LL;
                  }
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
                    McTemplateU0(
                      &Microsoft_Windows_Dwm_Core_Provider_Context,
                      &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop);
                }
                *(_QWORD *)(v6 + 3336) = 0LL;
                if ( v2 >= 0 )
                {
LABEL_112:
                  v74 = *((_QWORD *)this - 6);
                  v75 = (struct IRenderTargetDisplay *)*((_QWORD *)this + 14);
                  v151 = v75;
                  v76 = *(CWetInkManager **)(v74 + 120);
                  v77 = *((_QWORD *)v76 + 1);
                  while ( v77 != *((_QWORD *)v76 + 2) )
                  {
                    if ( *(struct IRenderTargetDisplay **)(v77 + 8) == v75 )
                    {
                      if ( *(_BYTE *)(v77 + 64) )
                      {
                        *(_BYTE *)(v77 + 64) = 0;
                        v77 += 72LL;
                      }
                      else
                      {
                        v138 = *(_QWORD *)v75;
                        v150 = 0LL;
                        v139 = (*(__int64 (__fastcall **)(struct IRenderTargetDisplay *, struct ID2DContext **))(v138 + 40))(
                                 v75,
                                 &v150);
                        v2 = v139;
                        if ( v139 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0xA1,
                            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
                            (const char *)(unsigned int)v139,
                            v146);
LABEL_183:
                          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v150);
                          if ( v2 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xFFu);
                            goto LABEL_126;
                          }
                          break;
                        }
                        v140 = *(CGenericInk **)v77;
                        v149 = 0LL;
                        DirectInkWetStroke = CGenericInk::GetDirectInkWetStroke(v140, v150, &v149);
                        v2 = DirectInkWetStroke;
                        if ( DirectInkWetStroke < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0xA4,
                            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
                            (const char *)(unsigned int)DirectInkWetStroke,
                            v146);
                          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v149);
                          goto LABEL_183;
                        }
                        v142 = *(struct CGenericInk **)v77;
                        LOBYTE(v157) = 0;
                        v143 = CWetInkManager::TryEnqueueSuperWetScribble(
                                 v76,
                                 v142,
                                 v149,
                                 v151,
                                 (const struct DCompWetInkStrokeRenderState *)(v77 + 16),
                                 (bool *)&v157);
                        v2 = v143;
                        if ( v143 < 0 )
                        {
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0xA9,
                            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\wetinkmanager.cpp",
                            (const char *)(unsigned int)v143,
                            v146);
                          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v149);
                          goto LABEL_183;
                        }
                        if ( (_BYTE)v157 )
                          v77 += 72LL;
                        else
                          v77 = *(_QWORD *)std::vector<CWetInkManager::SuperWetStroke>::erase(
                                             (char *)v76 + 8,
                                             v152,
                                             v77);
                        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v149);
                        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v150);
                        v75 = v151;
                      }
                    }
                    else
                    {
                      v77 += 72LL;
                    }
                  }
                  v78 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 14);
                  v79 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool *))(*(_QWORD *)v78 + 232LL);
                  if ( v79 == CHwFullScreenRenderTarget::PostRender )
                    v80 = CHwFullScreenRenderTarget::PostRender(v78, &v158);
                  else
                    v80 = v79(v78, &v158);
                  v2 = v80;
                  if ( v80 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x104u);
                  }
                  else
                  {
                    if ( v158 )
                      *((_BYTE *)this + 785) = 1;
                    v83 = 0;
                    if ( (v147 || *((_BYTE *)this + 786) || *((_BYTE *)this + 785)) && !v3[857] )
                    {
                      v81 = *((_QWORD *)v3 + 105);
                      if ( !v81
                        || (!*(_DWORD *)(v81 + 280) || !*(_BYTE *)(v81 + 1191))
                        && ((v82 = *(_QWORD *)(v81 + 1056)) == 0 || !*(_BYTE *)(v82 + 78) || *(_BYTE *)(v82 + 76)) )
                      {
                        v83 = 1;
                      }
                    }
                    *a2 = v83;
                  }
                  goto LABEL_126;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xFBu);
LABEL_126:
                v18 = v155;
                goto LABEL_127;
              }
              v98 = *(_DWORD *)(v6 + 3328);
              if ( v98 > 0x40 )
                v56 = v98;
              if ( (unsigned __int64)(3 * v56) > 0xFFFFFFFF )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
              }
              else if ( (unsigned int)(3 * v56) <= *(_DWORD *)(v6 + 3308) )
              {
                if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v56 <= 0x10 )
                {
                  v135 = -2147024809;
                }
                else
                {
                  v133 = 16LL * (unsigned int)v56;
                  if ( !v133 )
                    v133 = 1LL;
                  v134 = HeapAlloc(WPF::g_processHeap, 0, v133);
                  if ( v134 )
                  {
                    operator delete(*(void **)(v6 + 3320));
                    *(_QWORD *)(v6 + 3320) = v134;
                    *(_DWORD *)(v6 + 3308) = v56;
                    goto LABEL_179;
                  }
                  v135 = -2147024882;
                }
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v135, 0x100u);
              }
LABEL_179:
              *(_DWORD *)(v6 + 3328) = 0;
              v60 = 0;
              goto LABEL_82;
            }
            if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v88 <= 0x44 )
            {
              v122 = -2147024809;
              goto LABEL_257;
            }
            v120 = 68LL * (unsigned int)v88;
            if ( !v120 )
              v120 = 1LL;
            v121 = HeapAlloc(WPF::g_processHeap, 0, v120);
            if ( !v121 )
            {
              v122 = -2147024882;
LABEL_257:
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v122, 0x100u);
              goto LABEL_258;
            }
            operator delete(*(void **)(v6 + 496));
            *(_QWORD *)(v6 + 496) = v121;
            *(_DWORD *)(v6 + 484) = v88;
          }
LABEL_258:
          v39 = 0xFFFFFFFFLL;
          goto LABEL_149;
        }
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v91 <= 0x10 )
        {
          v119 = -2147024809;
          goto LABEL_247;
        }
        v117 = 16LL * (unsigned int)v91;
        if ( !v117 )
          v117 = 1LL;
        v118 = HeapAlloc(WPF::g_processHeap, 0, v117);
        if ( !v118 )
        {
          v119 = -2147024882;
LABEL_247:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v119, 0x100u);
          goto LABEL_248;
        }
        operator delete(*(void **)(v6 + 464));
        *(_QWORD *)(v6 + 464) = v118;
        *(_DWORD *)(v6 + 452) = v91;
      }
LABEL_248:
      v39 = 0xFFFFFFFFLL;
      goto LABEL_159;
    }
    v30 = 0;
    if ( *((_QWORD *)v3 + 108) || (v113 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_VIDEO_PLAYBACK), v30 = v113, v113 >= 0) )
    {
      v31 = (_DWORD)v3 + 872;
      if ( !*((_QWORD *)v3 + 109) )
      {
        v114 = PubSebRegisterRpc(WNF_SEB_FULL_SCREEN_HDR_VIDEO_PLAYBACK);
        v30 = v114;
        if ( v114 >= 0 )
        {
LABEL_49:
          v32 = *((_QWORD *)v3 + 105);
          if ( !v32 )
            goto LABEL_55;
          v33 = 0LL;
          v31 = 0;
          v34 = 0;
          if ( *(_DWORD *)(v32 + 280) )
          {
            while ( 1 )
            {
              v151 = (struct IRenderTargetDisplay *)v34;
              if ( COverlayContext::IsFullscreen(
                     (COverlayContext *)v32,
                     (const struct COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v32 + 256) + 248LL * v34)) )
              {
                break;
              }
              if ( ++v34 >= *(_DWORD *)(v32 + 280) )
              {
                v31 = 0;
                goto LABEL_51;
              }
            }
            v115 = *(_QWORD *)(v32 + 256);
            v33 = *(CCompositionSurfaceInfo **)(248LL * (_QWORD)v151 + v115 + 24);
            v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(248LL * (_QWORD)v151 + v115 + 16) + 88LL))(*(_QWORD *)(248LL * (_QWORD)v151 + v115 + 16));
          }
LABEL_51:
          if ( !v33 )
          {
            v35 = *(_QWORD *)(*((_QWORD *)v3 + 105) + 1056LL);
            if ( v35 )
            {
              v33 = *(CCompositionSurfaceInfo **)(v35 + 32);
              v31 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v35 + 40) + 88LL))(*(_QWORD *)(v35 + 40));
            }
            if ( !v33 )
              goto LABEL_55;
          }
          if ( v31 == 1 )
          {
            if ( CCompositionSurfaceInfo::GetHDR10MetaData(v33, &v153) )
              v116 = v153.MaxMasteringLuminance / 0x2710;
            CHwndRenderTarget::SignalSEB((CHwndRenderTarget *)v3, 1, v116);
          }
          else
          {
LABEL_55:
            v36 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)v3 + 109);
            updated = 0;
            if ( v36 && v3[856] )
              PubSebiUpdateLevelEventRpc(v36, 0);
            v38 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)v3 + 108);
            if ( v38 && v3[855] )
              updated = PubSebiUpdateLevelEventRpc(v38, 0);
            if ( v3[855] || v3[856] )
            {
              *(_WORD *)(v3 + 855) = 0;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
                McTemplateU0zqq((_DWORD)v38, v31, v29, 0, updated);
            }
          }
          goto LABEL_63;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276934, 1u, v114, 0x218u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180276934, 1u, v113, 0x212u);
    }
    if ( v30 < 0 )
      goto LABEL_63;
    goto LABEL_49;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xACu);
LABEL_211:
  v18 = 0;
LABEL_127:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture((CDrawingContext *)v6);
  if ( v18 )
    CDrawingContext::EndFrame((CDrawingContext *)v6);
  v84 = (CDirtyRegion *)*((_QWORD *)this + 17);
  if ( v84 )
  {
    v85 = *(void (**)(void))(*(_QWORD *)v84 + 8LL);
    if ( (char *)v85 == (char *)CDirtyRegion::Release )
      CDirtyRegion::Release(v84);
    else
      v85();
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( v148 )
  {
    *(_BYTE *)(*((_QWORD *)this - 6) + 1344LL) = 0;
    *((_BYTE *)this + 789) = *(_BYTE *)(v6 + 6835);
  }
  if ( v2 < 0 )
  {
    *((_BYTE *)this + 786) = 0;
    if ( v2 != -2003304442 )
    {
      if ( v2 == -2003304309 )
      {
        v2 = 0;
        goto LABEL_353;
      }
      if ( v2 == -2003304307 )
      {
        v2 = -2003304307;
        goto LABEL_353;
      }
      if ( v2 != -2003304306 )
      {
LABEL_353:
        CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
        v3[161] = 1;
        return (unsigned int)v2;
      }
      if ( byte_1802DA4D8 )
      {
        v145 = byte_1802DA4D9;
      }
      else
      {
        IsOptedIn = WinSqmIsOptedIn();
        byte_1802DA4D8 = 1;
        v145 = IsOptedIn != 0;
        byte_1802DA4D9 = v145;
      }
      if ( v145 )
        CDwmCoreWinSqm::RecordDisplayDriverName();
    }
    v2 = -2003304442;
    goto LABEL_353;
  }
  if ( v2 < 142213121 )
    return (unsigned int)v2;
  switch ( v2 )
  {
    case 142213121:
      v3[851] = 1;
      return (unsigned int)v2;
    case 142213129:
      v3[851] = 0;
      v3[161] = 1;
      CHwndRenderTarget::UpdateMPOCaps((CHwndRenderTarget *)v3, 1);
      return 0LL;
    case 142213130:
    case 142213167:
      ScheduleCompositionPass(0LL, 0x2000LL);
      result = 0LL;
      v3[849] = 1;
      break;
    default:
      return (unsigned int)v2;
  }
  return result;
}
