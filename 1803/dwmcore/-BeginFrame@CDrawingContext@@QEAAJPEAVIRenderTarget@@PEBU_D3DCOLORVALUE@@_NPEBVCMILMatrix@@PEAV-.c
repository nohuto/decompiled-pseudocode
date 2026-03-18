/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BG@@@2PEAVCHwndRenderTarget@@@Z @ 0x18006ED20
 * Callers:
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18000D7E0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D14 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180066318 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x1800703D0 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015CF20 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180170D04 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x1801BCF14 (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x1801FE504 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 * Callees:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180022210 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800427C0 (-GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800654E0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18006F434 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800A35A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA4FC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA-AW.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800CA5A8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppffffcb @ 0x1801634B4 (McTemplateU0ppffffcb.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        struct IRenderTarget *a2,
        _OWORD *a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // rax
  struct _LUID *v13; // rdx
  __int64 (__fastcall *v14)(CSwRenderTargetGetBounds *, struct _LUID *, struct DisplayId *); // rax
  int DeviceInfo; // eax
  int v16; // r14d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // zf
  void *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r9
  unsigned int v24; // eax
  int v25; // ebx
  unsigned int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rbx
  bool v30; // r13
  int v31; // r12d
  char v32; // r15
  CD3DModuleLoaderInternal *v33; // rcx
  CDXGIEnumeration *v34; // rsi
  CMILRefCountBase *v35; // rsi
  unsigned int v36; // r10d
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 (__fastcall *v39)(CMILRefCountBase *); // rax
  __int64 v40; // rax
  bool v41; // al
  __int64 v42; // rcx
  CProcessAttributionManager *v43; // rbx
  _QWORD *ThreadLocalStoragePointer; // rax
  __int64 v45; // rax
  __int64 v46; // rcx
  void *v47; // r15
  unsigned int v48; // eax
  __int64 v49; // rsi
  int v50; // ebx
  int v51; // r12d
  unsigned int v52; // eax
  unsigned int v53; // ecx
  unsigned int v54; // eax
  unsigned int v55; // edx
  unsigned int v57; // r15d
  SIZE_T v58; // r8
  unsigned __int64 v59; // rax
  unsigned int v60; // r12d
  SIZE_T v61; // r8
  unsigned __int64 v62; // rax
  int v63; // eax
  bool v64; // bl
  int v65; // ecx
  unsigned int v66; // eax
  unsigned int v67; // eax
  unsigned int v68; // eax
  int D3DObjects; // [rsp+50h] [rbp-39h] BYREF
  __int16 v70; // [rsp+54h] [rbp-35h]
  __int64 v71; // [rsp+58h] [rbp-31h] BYREF
  __int128 v72; // [rsp+60h] [rbp-29h]
  struct CProcessAttribution *v73; // [rsp+70h] [rbp-19h] BYREF
  int v74; // [rsp+78h] [rbp-11h]
  int v75; // [rsp+7Ch] [rbp-Dh]
  void *retaddr; // [rsp+C8h] [rbp+3Fh]

  v71 = a6;
  v10 = *(_QWORD *)a2;
  *(_QWORD *)&v72 = 0LL;
  BYTE8(v72) = 1;
  v13 = (struct _LUID *)((char *)this + 392);
  v14 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct _LUID *, struct DisplayId *))(v10 + 136);
  if ( v14 == CSwRenderTargetGetBounds::GetDeviceInfo )
    DeviceInfo = CSwRenderTargetGetBounds::GetDeviceInfo(a2, v13, 0LL);
  else
    DeviceInfo = v14(a2, v13, 0LL);
  v16 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceInfo, 0x13Au);
    goto LABEL_51;
  }
  *((float *)this + 110) = (*(float (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 168LL))(a2);
  v17 = CDrawingContext::PushRenderTarget(this, a2);
  v16 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x146u);
    goto LABEL_51;
  }
  v20 = *((_BYTE *)this + 3136) == 0;
  *((_QWORD *)this + 47) = a8;
  if ( v20 && !*((_QWORD *)this + 846) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
  {
    v64 = a5 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a5);
    (*(void (__fastcall **)(_QWORD, struct CProcessAttribution **))(**((_QWORD **)this + 45) + 48LL))(
      *((_QWORD *)this + 45),
      &v73);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      McTemplateU0ppffffcb(
        v65,
        v18,
        (_DWORD)this,
        *((_QWORD *)this + 45),
        (char)v73,
        SBYTE4(v73),
        v74,
        v75,
        v64 ? 0x44 : 0,
        a5);
  }
  if ( a3 )
  {
    *(_OWORD *)((char *)this + 424) = *a3;
  }
  else
  {
    v20 = g_fUseDebugClearColorIfNoClear == 0;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    if ( !v20 )
    {
      *((_DWORD *)this + 106) = 1065353216;
      *((_DWORD *)this + 109) = 1065353216;
    }
  }
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 63) = 1;
  *((_BYTE *)this + 272) = a4 ^ 1;
  v21 = 0LL;
  *((_QWORD *)this + 32) = 1LL;
  v22 = *((unsigned int *)this + 827);
  v23 = 86LL;
  v24 = *((_DWORD *)this + 826);
  if ( v24 != (_DWORD)v22 )
    goto LABEL_11;
  v57 = 2 * v22;
  if ( (unsigned __int64)(2 * v22) > 0xFFFFFFFF )
  {
    v16 = -2147024362;
    v25 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    goto LABEL_99;
  }
  if ( v57 <= 0x40 )
    v57 = 64;
  v25 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v57 <= 0x10 )
  {
    v25 = -2147024809;
  }
  else
  {
    v58 = 16LL * v57;
    if ( !v58 )
      v58 = 1LL;
    v21 = HeapAlloc(WPF::g_processHeap, 0, v58);
    if ( !v21 )
      v25 = -2147024882;
  }
  if ( v25 < 0 )
  {
    v66 = 84;
  }
  else
  {
    v59 = 16LL * *((unsigned int *)this + 826);
    if ( v59 <= 0xFFFFFFFF )
    {
      memcpy_0(v21, *((const void **)this + 415), (unsigned int)v59);
      operator delete(*((void **)this + 415));
      v24 = *((_DWORD *)this + 826);
      *((_QWORD *)this + 415) = v21;
      *((_DWORD *)this + 827) = v57;
LABEL_11:
      v25 = 0;
      *(_OWORD *)(*((_QWORD *)this + 415) + 16LL * v24) = v72;
      v26 = *((_DWORD *)this + 832);
      v27 = *((_DWORD *)this + 826) + 1;
      *((_DWORD *)this + 826) = v27;
      if ( v26 <= v27 )
        v26 = v27;
      *((_DWORD *)this + 832) = v26;
      goto LABEL_14;
    }
    v25 = -2147024362;
    v66 = 86;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v66);
  if ( v21 )
    HeapFree(WPF::g_processHeap, 0, v21);
LABEL_14:
  v16 = v25;
  if ( v25 < 0 )
  {
LABEL_99:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x189u);
    goto LABEL_51;
  }
  v28 = v71;
  *((_QWORD *)this + 443) = v71;
  if ( v28 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v28 + 8LL))(v28, v18, v19, v23);
  *((_BYTE *)this + 6828) = a7;
  if ( a5 )
  {
    *((_OWORD *)this + 217) = *(_OWORD *)a5;
    *((_OWORD *)this + 218) = *(_OWORD *)(a5 + 16);
    *((_OWORD *)this + 219) = *(_OWORD *)(a5 + 32);
    *((_OWORD *)this + 220) = *(_OWORD *)(a5 + 48);
    *((_DWORD *)this + 884) = *(_DWORD *)(a5 + 64);
  }
  else
  {
    *((_WORD *)this + 1768) = 32085;
    *((_OWORD *)this + 217) = _xmm;
    *((_OWORD *)this + 218) = _xmm;
    *((_OWORD *)this + 219) = _xmm;
    *((_OWORD *)this + 220) = _xmm;
  }
  *(_DWORD *)((char *)this + 6834) = 0;
  v29 = *((_QWORD *)this + 49);
  v30 = 0;
  v71 = v29;
  v31 = 0;
  v32 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v34 = qword_1802D6430;
  if ( !qword_1802D6430 )
    goto LABEL_101;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_1802D6430 + 2) + 104LL))(*((_QWORD *)qword_1802D6430
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v34 + 14)
    || qword_1802D6430 != v34 )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)&qword_1802D6430);
    v32 = 1;
  }
  if ( !qword_1802D6430 )
  {
LABEL_101:
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v33, &qword_1802D6430);
    TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
    v31 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, D3DObjects, 0x128u);
  }
  if ( v32 && qword_1802D6440 )
    CSurfaceManager::ResetTokenThread(qword_1802D6440);
  v35 = qword_1802D6430;
  if ( qword_1802D6430 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_1802D6430)(qword_1802D6430);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v31 >= 0 )
  {
    v36 = *((_DWORD *)v35 + 22);
    v30 = 0;
    v37 = 0LL;
    if ( v36 )
    {
      while ( 1 )
      {
        v38 = *(_QWORD *)(*((_QWORD *)v35 + 8) + 8 * v37);
        if ( __PAIR64__(HIDWORD(v71), v29) == *(_QWORD *)(v38 + 336) )
          break;
        v37 = (unsigned int)(v37 + 1);
        if ( (unsigned int)v37 >= v36 )
          goto LABEL_34;
      }
      if ( *(_DWORD *)(v38 + 296) == 5140 )
        v30 = *(_DWORD *)(v38 + 300) == 140;
    }
LABEL_34:
    v39 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v35 + 8LL);
    if ( v39 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v35);
    else
      ((void (__fastcall *)(CMILRefCountBase *, __int64))v39)(v35, v37);
  }
  v20 = *((_BYTE *)this + 3136) == 0;
  *((_BYTE *)this + 6833) = v30;
  v41 = 0;
  if ( v20 )
  {
    v40 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 160LL))(*((_QWORD *)this + 48));
    if ( *(int *)(v40 + 756) >= 37632 && !*(_BYTE *)(v40 + 644) )
      v41 = 1;
  }
  *((_BYTE *)this + 6831) = v41;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetCachedFeatureEnabledState();
  v42 = (unsigned int)tls_index;
  v43 = qword_1802D60A0;
  LODWORD(v71) = 0;
  LOBYTE(v70) = 0;
  WORD2(v71) = v70;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  *((_BYTE *)this + 6832) = 0;
  *((_QWORD *)this + 417) = 0LL;
  v45 = ThreadLocalStoragePointer[v42];
  D3DObjects = 0;
  if ( dword_1802D6B80 > *(_DWORD *)(v45 + 4) )
  {
    Init_thread_header(&dword_1802D6B80);
    if ( dword_1802D6B80 == -1 )
    {
      v63 = CProcessAttributionManager::CreateProcessAttribution(
              v43,
              -1,
              (const struct CProcessAttributionManager::ProcessAttributionRecord *)&unk_1802D9C40,
              0,
              &v73);
      if ( v63 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v63, retaddr);
      qword_1802D6B88 = (__int64)v73;
      Init_thread_footer(&dword_1802D6B80);
    }
  }
  v46 = *((unsigned int *)this + 113);
  v47 = 0LL;
  v48 = *((_DWORD *)this + 112);
  v49 = qword_1802D6B88;
  LODWORD(v72) = 10;
  *((_QWORD *)&v72 + 1) = 0LL;
  if ( v48 != (_DWORD)v46 )
    goto LABEL_44;
  v60 = 2 * v46;
  if ( (unsigned __int64)(2 * v46) > 0xFFFFFFFF )
  {
    v50 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_113:
    ModuleFailFastForHRESULT((unsigned int)v50, retaddr);
  }
  if ( v60 <= 0x40 )
    v60 = 64;
  v50 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v60 <= 0x10 )
  {
    v50 = -2147024809;
  }
  else
  {
    v61 = 16LL * v60;
    if ( !v61 )
      v61 = 1LL;
    v47 = HeapAlloc(WPF::g_processHeap, 0, v61);
    if ( !v47 )
      v50 = -2147024882;
  }
  if ( v50 < 0 )
  {
    v67 = 84;
    v51 = -2147024362;
  }
  else
  {
    v62 = 16LL * *((unsigned int *)this + 112);
    if ( v62 <= 0xFFFFFFFF )
    {
      memcpy_0(v47, *((const void **)this + 58), (unsigned int)v62);
      operator delete(*((void **)this + 58));
      v48 = *((_DWORD *)this + 112);
      *((_QWORD *)this + 58) = v47;
      *((_DWORD *)this + 113) = v60;
LABEL_44:
      v50 = 0;
      v51 = -2147024362;
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v48) = v72;
      v52 = *((_DWORD *)this + 118);
      v53 = *((_DWORD *)this + 112) + 1;
      *((_DWORD *)this + 112) = v53;
      if ( v52 <= v53 )
        v52 = v53;
      *((_DWORD *)this + 118) = v52;
      goto LABEL_47;
    }
    v51 = -2147024362;
    v67 = 86;
    v50 = -2147024362;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, v67);
  if ( v47 )
    HeapFree(WPF::g_processHeap, 0, v47);
LABEL_47:
  if ( v50 < 0 )
    goto LABEL_113;
  v54 = *((_DWORD *)this + 234);
  v71 = v49;
  v55 = v54 + 1;
  if ( v54 + 1 < v54 )
  {
    v68 = 181;
LABEL_115:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, v68);
    ModuleFailFastForHRESULT((unsigned int)v51, retaddr);
  }
  if ( v55 <= *((_DWORD *)this + 233) )
  {
    *(_QWORD *)(*((_QWORD *)this + 114) + 8LL * v54) = v71;
    *((_DWORD *)this + 234) = v55;
    goto LABEL_51;
  }
  v51 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 912, 8LL, 1LL, &v71);
  if ( v51 < 0 )
  {
    v68 = 192;
    goto LABEL_115;
  }
LABEL_51:
  if ( v16 < 0 )
    CDrawingContext::EndFrame(this);
  return (unsigned int)v16;
}
