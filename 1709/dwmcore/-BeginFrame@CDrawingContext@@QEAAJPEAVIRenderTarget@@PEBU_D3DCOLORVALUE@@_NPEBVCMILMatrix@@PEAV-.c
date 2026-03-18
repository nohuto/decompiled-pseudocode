/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30
 * Callers:
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800187B8 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180019700 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003CCF8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x180045DA4 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x180078680 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008A984 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18013A398 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180148524 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x180187A0C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEAPEAVCProcessAttribution@@@Z @ 0x180007DA8 (-CreateProcessAttribution@CProcessAttributionManager@@AEAAJKPEBUProcessAttributionRecord@1@_NPEA.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18002C7C0 (-PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18002C860 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18002C8A0 (-GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180045370 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058F90 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800818D0 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C0360 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800C2F28 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800C2F88 (_Init_thread_header.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18011ACB4 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     McTemplateU0ppffffcb @ 0x18013F58C (McTemplateU0ppffffcb.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        CSwRenderTargetGetBounds *a2,
        _OWORD *a3,
        char a4,
        __int64 a5,
        struct CProcessAttribution *a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // rax
  __int64 (__fastcall *v12)(CSwRenderTargetGetBounds *, struct _LUID *, struct DisplayId *); // rax
  struct _LUID *v13; // rdx
  int DeviceInfo; // eax
  int v15; // esi
  float v16; // xmm0_4
  char v17; // r13
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  int v20; // r12d
  char *v21; // r14
  __int64 v22; // rax
  unsigned int v23; // edx
  _OWORD *v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  CSwRenderTargetGetBounds *v27; // rcx
  __int64 (__fastcall *v28)(CSwRenderTargetGetBounds *, struct ID2DContext **); // rax
  int D2DContext; // eax
  int updated; // eax
  CSwRenderTargetGetBounds *v31; // rcx
  struct IRenderTarget *v32; // r8
  struct ID2DContextOwner *v33; // rdx
  __int64 (__fastcall *v34)(CSwRenderTargetGetBounds *, struct ID2DContextOwner *, struct IRenderTarget *); // rax
  int v35; // eax
  bool v36; // zf
  __int64 v37; // r15
  void *v38; // rsi
  __int64 v39; // rax
  int v40; // ebx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  struct CProcessAttribution *v43; // rcx
  struct CProcessAttribution *v44; // rbx
  bool v45; // r13
  char v46; // r15
  CD3DModuleLoaderInternal *v47; // rcx
  CDXGIEnumeration *v48; // r14
  CMILRefCountBase *v49; // r14
  unsigned int v50; // r9d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 (__fastcall *v53)(CMILRefCountBase *); // rax
  bool v54; // al
  __int64 v55; // rcx
  CProcessAttributionManager *v56; // rbx
  _QWORD *ThreadLocalStoragePointer; // rax
  __int64 v58; // rax
  void *v59; // r15
  __int64 v60; // r14
  int v61; // ebx
  unsigned int v62; // r12d
  unsigned int v63; // eax
  unsigned int v64; // ecx
  unsigned int v65; // eax
  unsigned int v66; // edx
  __int64 v68; // rax
  unsigned int v69; // r14d
  SIZE_T v70; // r8
  unsigned __int64 v71; // rax
  unsigned int v72; // r12d
  SIZE_T v73; // r8
  unsigned __int64 v74; // rax
  int v75; // eax
  int v76; // eax
  unsigned int v77; // r12d
  unsigned int v78; // r12d
  int v79; // eax
  bool v80; // bl
  int v81; // edx
  int v82; // ecx
  int v83; // eax
  unsigned int v84; // [rsp+20h] [rbp-C9h]
  struct ID2DContext *v86; // [rsp+58h] [rbp-91h] BYREF
  struct CProcessAttribution *v87; // [rsp+60h] [rbp-89h] BYREF
  __int128 v88; // [rsp+68h] [rbp-81h]
  _OWORD *v89; // [rsp+78h] [rbp-71h]
  _BYTE v90[80]; // [rsp+80h] [rbp-69h] BYREF
  __int64 v91; // [rsp+D0h] [rbp-19h] BYREF
  int v92; // [rsp+D8h] [rbp-11h]
  int v93; // [rsp+DCh] [rbp-Dh]
  void *retaddr; // [rsp+128h] [rbp+3Fh]

  v91 = a5;
  v10 = *(_QWORD *)a2;
  v89 = a3;
  v87 = a6;
  v12 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct _LUID *, struct DisplayId *))(v10 + 88);
  *(_QWORD *)&v88 = 0LL;
  v13 = (struct _LUID *)((char *)this + 392);
  BYTE8(v88) = 1;
  if ( v12 == CSwRenderTargetGetBounds::GetDeviceInfo )
    DeviceInfo = CSwRenderTargetGetBounds::GetDeviceInfo(a2, v13, 0LL);
  else
    DeviceInfo = v12(a2, v13, 0LL);
  v15 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    v84 = 336;
    goto LABEL_171;
  }
  v16 = (*(float (__fastcall **)(CSwRenderTargetGetBounds *))(*(_QWORD *)a2 + 160LL))(a2);
  v17 = 0;
  v86 = 0LL;
  v15 = 0;
  *((float *)this + 110) = v16;
  v18 = 0;
  *((_BYTE *)this + 6825) = 1;
  v19 = 0;
  if ( *((_DWORD *)this + 158) )
  {
    v21 = (char *)this + 608;
    while ( 1 )
    {
      v76 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v21 + 8LL * v19), this);
      v15 = v76;
      if ( v76 < 0 )
        break;
      ++v18;
      if ( ++v19 >= *((_DWORD *)this + 158) )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x17C6u);
    v20 = 0;
  }
  else
  {
LABEL_5:
    v20 = 0;
    v21 = (char *)this + 608;
    *((_DWORD *)this + 158) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 608, 8LL);
  }
  if ( v18 < *((_DWORD *)this + 158) && v18 )
  {
    v77 = *((_DWORD *)v21 + 6);
    if ( v18 > v77 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x234u);
    }
    else
    {
      v78 = v77 - v18;
      if ( v78 )
        memmove(*(void **)v21, (const void *)(*(_QWORD *)v21 + 8LL * v18), 8LL * v78);
      *((_DWORD *)v21 + 6) = v78;
    }
    v20 = 0;
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x17A8u);
  }
  else if ( *((_BYTE *)this + 6826) )
  {
    *(_WORD *)((char *)this + 6825) = 1;
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1214u);
    goto LABEL_15;
  }
  v22 = *((unsigned int *)this + 258);
  v23 = v22 + 1;
  v90[0] = 0;
  *(_QWORD *)&v90[4] = 0LL;
  *(_DWORD *)&v90[76] = 32085;
  *(_OWORD *)&v90[12] = _xmm;
  *(_OWORD *)&v90[28] = _xmm;
  *(_OWORD *)&v90[44] = _xmm;
  *(_OWORD *)&v90[60] = _xmm;
  if ( (int)v22 + 1 < (unsigned int)v22 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    if ( v23 <= *((_DWORD *)this + 257) )
    {
      v15 = 0;
      v24 = (_OWORD *)(*((_QWORD *)this + 126) + 80 * v22);
      *v24 = *(_OWORD *)v90;
      v24[1] = *(_OWORD *)&v90[16];
      v24[2] = *(_OWORD *)&v90[32];
      v24[3] = *(_OWORD *)&v90[48];
      v24[4] = *(_OWORD *)&v90[64];
      *((_DWORD *)this + 258) = v23;
LABEL_14:
      v17 = 1;
      goto LABEL_15;
    }
    v79 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 1008, 80LL, 1LL, v90);
    v15 = v79;
    if ( v79 >= 0 )
      goto LABEL_126;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0xC0u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x3Cu);
LABEL_126:
  if ( v15 >= 0 )
    goto LABEL_14;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x121Du);
LABEL_15:
  if ( v15 >= 0 )
  {
    v25 = *((_QWORD *)this + 45);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    *((_QWORD *)this + 45) = a2;
    (*(void (__fastcall **)(CSwRenderTargetGetBounds *))(*(_QWORD *)a2 + 8LL))(a2);
    v26 = *((_QWORD *)this + 46);
    if ( v26 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      *((_QWORD *)this + 46) = 0LL;
    }
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 45))(
      *((_QWORD *)this + 45),
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 368);
    v27 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 45);
    v28 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct ID2DContext **))(*(_QWORD *)v27 + 40LL);
    if ( v28 == CSwRenderTargetGetBounds::GetD2DContext )
      D2DContext = CSwRenderTargetGetBounds::GetD2DContext(v27, &v86);
    else
      D2DContext = v28(v27, &v86);
    v15 = D2DContext;
    if ( D2DContext < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DContext, 0x2402u);
    }
    else
    {
      if ( !*((_QWORD *)this + 48) )
      {
        *((_QWORD *)this + 48) = v86;
        v86 = 0LL;
      }
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v15 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x2413u);
      }
      else
      {
        v31 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 48);
        v32 = (struct IRenderTarget *)*((_QWORD *)this + 45);
        v33 = (CDrawingContext *)((char *)this + 8);
        v34 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct ID2DContextOwner *, struct IRenderTarget *))(*(_QWORD *)v31 + 24LL);
        if ( v34 == CSwRenderTargetGetBounds::PushTarget )
        {
          v35 = CSwRenderTargetGetBounds::PushTarget(v31, v33, v32);
        }
        else if ( v34 == CD2DContext::PushTarget )
        {
          v35 = CD2DContext::PushTarget(v31, v33, v32);
        }
        else
        {
          v35 = v34(v31, v33, v32);
        }
        v15 = v35;
        if ( v35 >= 0 )
          goto LABEL_29;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x2419u);
      }
    }
    CDrawingContext::PopClippingScope(this, 0);
    goto LABEL_29;
  }
  if ( v17 )
    --*((_DWORD *)this + 258);
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x23F1u);
LABEL_29:
  if ( v86 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v86 + 16LL))(v86);
  if ( v15 < 0 )
  {
    v84 = 348;
LABEL_171:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, v84);
    return (unsigned int)v15;
  }
  v36 = *((_BYTE *)this + 3136) == 0;
  v37 = v91;
  *((_QWORD *)this + 47) = a8;
  if ( v36 && !*((_QWORD *)this + 846) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
  {
    v80 = v37 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(v37);
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 45) + 48LL))(*((_QWORD *)this + 45), &v91);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      McTemplateU0ppffffcb(
        v82,
        v81,
        (_DWORD)this,
        *((_QWORD *)this + 45),
        v91,
        SBYTE4(v91),
        v92,
        v93,
        v80 ? 0x44 : 0,
        v37);
  }
  if ( v89 )
  {
    *(_OWORD *)((char *)this + 424) = *v89;
  }
  else
  {
    v36 = g_fUseDebugClearColorIfNoClear == 0;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    if ( !v36 )
    {
      *((_DWORD *)this + 106) = 1065353216;
      *((_DWORD *)this + 109) = 1065353216;
    }
  }
  v38 = 0LL;
  *((_DWORD *)this + 63) = 1;
  *((_BYTE *)this + 272) = a4 ^ 1;
  *((_QWORD *)this + 32) = 1LL;
  *((_QWORD *)this + 33) = 0LL;
  v39 = *((unsigned int *)this + 827);
  if ( *((_DWORD *)this + 826) != (_DWORD)v39 )
    goto LABEL_39;
  v69 = 2 * v39;
  if ( (unsigned __int64)(2 * v39) > 0xFFFFFFFF )
  {
    v40 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    v15 = -2147024362;
    goto LABEL_149;
  }
  if ( v69 <= 0x40 )
    v69 = 64;
  v40 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v69 <= 0x10 )
  {
    v40 = -2147024809;
  }
  else
  {
    v70 = 16LL * v69;
    if ( !v70 )
      v70 = 1LL;
    v38 = HeapAlloc(WPF::g_processHeap, 0, v70);
    if ( !v38 )
      v40 = -2147024882;
  }
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x54u);
  }
  else
  {
    v71 = 16LL * *((unsigned int *)this + 826);
    if ( v71 <= 0xFFFFFFFF )
    {
      memcpy_0(v38, *((const void **)this + 415), (unsigned int)v71);
      WPF::ProcessHeapImpl::Free(*((void **)this + 415));
      *((_QWORD *)this + 415) = v38;
      *((_DWORD *)this + 827) = v69;
LABEL_39:
      v40 = 0;
      *(_OWORD *)(*((_QWORD *)this + 415) + 16LL * *((unsigned int *)this + 826)) = v88;
      v41 = *((_DWORD *)this + 832);
      v42 = ++*((_DWORD *)this + 826);
      if ( v41 > v42 )
        v42 = v41;
      *((_DWORD *)this + 832) = v42;
      goto LABEL_42;
    }
    v40 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
  }
  if ( v38 )
    HeapFree(WPF::g_processHeap, 0, v38);
LABEL_42:
  v15 = v40;
  if ( v40 < 0 )
  {
LABEL_149:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x1A0u);
    return (unsigned int)v15;
  }
  v43 = v87;
  *((_QWORD *)this + 443) = v87;
  if ( v43 )
    (*(void (__fastcall **)(struct CProcessAttribution *))(*(_QWORD *)v43 + 8LL))(v43);
  *((_BYTE *)this + 6828) = a7;
  if ( v37 )
  {
    *((_OWORD *)this + 217) = *(_OWORD *)v37;
    *((_OWORD *)this + 218) = *(_OWORD *)(v37 + 16);
    *((_OWORD *)this + 219) = *(_OWORD *)(v37 + 32);
    *((_OWORD *)this + 220) = *(_OWORD *)(v37 + 48);
    *((_DWORD *)this + 884) = *(_DWORD *)(v37 + 64);
  }
  else if ( this != (CDrawingContext *)-3472LL )
  {
    *((_WORD *)this + 1768) = 32085;
    *((_OWORD *)this + 217) = _xmm;
    *((_OWORD *)this + 218) = _xmm;
    *((_OWORD *)this + 219) = _xmm;
    *((_OWORD *)this + 220) = _xmm;
  }
  *((_DWORD *)this + 1708) = 0;
  v44 = (struct CProcessAttribution *)*((_QWORD *)this + 49);
  v45 = 0;
  v87 = v44;
  v46 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v48 = qword_18026EEB0;
  if ( !qword_18026EEB0 )
    goto LABEL_151;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18026EEB0 + 2) + 104LL))(*((_QWORD *)qword_18026EEB0
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v48 + 14)
    || qword_18026EEB0 != v48 )
  {
    ReleaseInterface<CRemoteApplicationWindow>(&qword_18026EEB0);
    v46 = 1;
  }
  if ( !qword_18026EEB0 )
  {
LABEL_151:
    LODWORD(v86) = CD3DModuleLoaderInternal::CreateD3DObjects(v47, &qword_18026EEB0);
    TranslateDXGIorD3DErrorInContext((int)v86, 4, &v86);
    v20 = (int)v86;
    if ( (int)v86 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202590, 1u, (int)v86, 0x128u);
  }
  if ( v46 && qword_18026EEC0 )
    CSurfaceManager::ResetTokenThread(qword_18026EEC0);
  v49 = qword_18026EEB0;
  if ( qword_18026EEB0 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18026EEB0)(qword_18026EEB0);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v20 >= 0 )
  {
    v50 = *((_DWORD *)v49 + 22);
    v45 = 0;
    v51 = 0LL;
    if ( v50 )
    {
      while ( 1 )
      {
        v52 = *(_QWORD *)(*((_QWORD *)v49 + 8) + 8 * v51);
        if ( __PAIR64__(HIDWORD(v87), (unsigned int)v44) == *(_QWORD *)(v52 + 336) )
          break;
        v51 = (unsigned int)(v51 + 1);
        if ( (unsigned int)v51 >= v50 )
          goto LABEL_60;
      }
      if ( *(_DWORD *)(v52 + 296) == 5140 )
        v45 = *(_DWORD *)(v52 + 300) == 140;
    }
LABEL_60:
    v53 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v49 + 8LL);
    if ( v53 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v49);
    else
      ((void (__fastcall *)(CMILRefCountBase *, __int64))v53)(v49, v51);
  }
  v36 = *((_BYTE *)this + 3136) == 0;
  *((_BYTE *)this + 6836) = v45;
  v54 = 0;
  if ( v36 )
  {
    v68 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 48) + 152LL))(*((_QWORD *)this + 48));
    if ( *(int *)(v68 + 756) >= 37632 && !*(_BYTE *)(v68 + 644) )
      v54 = 1;
  }
  v55 = (unsigned int)tls_index;
  v56 = qword_180272960;
  *((_BYTE *)this + 6831) = v54;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  *((_QWORD *)this + 417) = 0LL;
  if ( dword_180272290 > *(_DWORD *)(ThreadLocalStoragePointer[v55] + 4LL) )
  {
    Init_thread_header(&dword_180272290);
    if ( dword_180272290 == -1 )
    {
      v83 = CProcessAttributionManager::CreateProcessAttribution(
              v56,
              -1,
              (const struct CProcessAttributionManager::ProcessAttributionRecord *)&unk_1802728F0,
              0,
              &v87);
      if ( v83 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v83, retaddr);
      qword_180272020 = (__int64)v87;
      Init_thread_footer(&dword_180272290);
    }
  }
  v58 = *((unsigned int *)this + 113);
  v59 = 0LL;
  v60 = qword_180272020;
  LODWORD(v88) = 10;
  *((_QWORD *)&v88 + 1) = 0LL;
  if ( *((_DWORD *)this + 112) != (_DWORD)v58 )
    goto LABEL_66;
  v72 = 2 * v58;
  if ( (unsigned __int64)(2 * v58) > 0xFFFFFFFF )
  {
    v61 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_166:
    ModuleFailFastForHRESULT((unsigned int)v61, retaddr);
  }
  if ( v72 <= 0x40 )
    v72 = 64;
  v61 = 0;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v72 <= 0x10 )
  {
    v61 = -2147024809;
  }
  else
  {
    v73 = 16LL * v72;
    if ( !v73 )
      v73 = 1LL;
    v59 = HeapAlloc(WPF::g_processHeap, 0, v73);
    if ( !v59 )
      v61 = -2147024882;
  }
  if ( v61 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x54u);
    v62 = -2147024362;
  }
  else
  {
    v74 = 16LL * *((unsigned int *)this + 112);
    if ( v74 <= 0xFFFFFFFF )
    {
      memcpy_0(v59, *((const void **)this + 58), (unsigned int)v74);
      WPF::ProcessHeapImpl::Free(*((void **)this + 58));
      *((_QWORD *)this + 58) = v59;
      *((_DWORD *)this + 113) = v72;
LABEL_66:
      v61 = 0;
      v62 = -2147024362;
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * *((unsigned int *)this + 112)) = v88;
      v63 = *((_DWORD *)this + 118);
      v64 = ++*((_DWORD *)this + 112);
      if ( v63 > v64 )
        v64 = v63;
      *((_DWORD *)this + 118) = v64;
      goto LABEL_69;
    }
    v62 = -2147024362;
    v61 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
  }
  if ( v59 )
    HeapFree(WPF::g_processHeap, 0, v59);
LABEL_69:
  if ( v61 < 0 )
    goto LABEL_166;
  v65 = *((_DWORD *)this + 234);
  v91 = v60;
  v66 = v65 + 1;
  if ( v65 + 1 < v65 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_168;
  }
  if ( v66 > *((_DWORD *)this + 233) )
  {
    v75 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 912, 8LL, 1LL, &v91);
    v62 = v75;
    if ( v75 >= 0 )
      return (unsigned int)v15;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0xC0u);
LABEL_168:
    ModuleFailFastForHRESULT(v62, retaddr);
  }
  *(_QWORD *)(*((_QWORD *)this + 114) + 8LL * v65) = v91;
  *((_DWORD *)this + 234) = v66;
  return (unsigned int)v15;
}
