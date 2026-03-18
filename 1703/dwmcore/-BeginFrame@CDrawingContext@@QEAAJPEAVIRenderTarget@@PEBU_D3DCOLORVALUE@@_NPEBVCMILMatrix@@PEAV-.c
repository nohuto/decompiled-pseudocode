/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18000D9B4 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800466C0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?RenderForCapture@CHwndRenderTarget@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006D2A4 (-RenderForCapture@CHwndRenderTarget@@IEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18006E340 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800847E0 (-GetBounds@CRenderData@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800B4740 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18014A2C0 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18017FE9C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileLegacyMilBrush@@PEBULegacyMilBrushContext@.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801A70E4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 * Callees:
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18000FB20 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18003DC40 (-PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x18003DCE0 (-GetDeviceInfo@CSwRenderTargetGetBounds@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18003DD00 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180098570 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800ADDF0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800B63E8 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C89A0 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     CreateNullProcessAttribution @ 0x1800CA3F0 (CreateNullProcessAttribution.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x18012D04C (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     Template_ppffffcb @ 0x18014E3B4 (Template_ppffffcb.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        CDrawingContext *this,
        CSwRenderTargetGetBounds *a2,
        _OWORD *a3,
        char a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // rax
  __int64 (__fastcall *v12)(CSwRenderTargetGetBounds *, struct _LUID *, struct DisplayId *, struct _GUID *); // rax
  struct _LUID *v13; // rdx
  int DeviceInfo; // eax
  int v15; // esi
  char v16; // r12
  unsigned int v17; // r15d
  unsigned int v18; // r13d
  char *v19; // r14
  __int64 v20; // rax
  unsigned int v21; // edx
  _OWORD *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  CSwRenderTargetGetBounds *v25; // rcx
  __int64 (__fastcall *v26)(CSwRenderTargetGetBounds *, struct ID2DContext **); // rax
  int D2DContext; // eax
  int updated; // eax
  CSwRenderTargetGetBounds *v29; // rcx
  struct IRenderTarget *v30; // r8
  struct ID2DContextOwner *v31; // rdx
  __int64 (__fastcall *v32)(CSwRenderTargetGetBounds *, struct ID2DContextOwner *, struct IRenderTarget *); // rax
  int v33; // eax
  bool v34; // zf
  __int64 v35; // r15
  int v36; // ebx
  void *v37; // rsi
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned int v40; // ecx
  __int64 v41; // rax
  int v42; // ebx
  void *v43; // rsi
  unsigned int v44; // eax
  unsigned int v45; // edx
  __int64 v46; // rcx
  bool v47; // r13
  __int64 v48; // rbx
  int v49; // r12d
  char v50; // r15
  CD3DModuleLoaderInternal *v51; // rcx
  CDXGIEnumeration *v52; // r14
  __int64 v53; // rcx
  CMILRefCountBase *v54; // r14
  unsigned int v55; // r8d
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 (__fastcall *v58)(CMILRefCountBase *); // rax
  bool v59; // al
  int v60; // eax
  __int64 NullProcessAttribution; // r14
  __int64 v62; // rax
  int v63; // ebx
  void *v64; // r15
  unsigned int v65; // r12d
  unsigned int v66; // eax
  unsigned int v67; // edx
  unsigned int v68; // eax
  unsigned int v69; // edx
  __int64 v71; // rcx
  __int64 v72; // rax
  unsigned int v73; // r14d
  SIZE_T v74; // r8
  unsigned __int64 v75; // rax
  unsigned int v76; // r14d
  SIZE_T v77; // r8
  unsigned __int64 v78; // rax
  unsigned int v79; // r12d
  SIZE_T v80; // r8
  unsigned __int64 v81; // rax
  int v82; // eax
  unsigned int v83; // r13d
  unsigned int v84; // r13d
  int v85; // eax
  bool v86; // bl
  int v87; // edx
  int v88; // ecx
  int v89; // eax
  unsigned int v90; // [rsp+20h] [rbp-C9h]
  struct ID2DContext *v92; // [rsp+58h] [rbp-91h] BYREF
  __int64 v93; // [rsp+60h] [rbp-89h]
  __int128 v94; // [rsp+68h] [rbp-81h]
  _OWORD *v95; // [rsp+78h] [rbp-71h]
  _BYTE v96[80]; // [rsp+80h] [rbp-69h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-19h] BYREF
  int v98; // [rsp+D8h] [rbp-11h]
  int v99; // [rsp+DCh] [rbp-Dh]
  void *retaddr; // [rsp+128h] [rbp+3Fh]

  v97 = a5;
  v10 = *(_QWORD *)a2;
  v95 = a3;
  v93 = a6;
  v12 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct _LUID *, struct DisplayId *, struct _GUID *))(v10 + 104);
  *(_QWORD *)&v94 = 0LL;
  v13 = (struct _LUID *)((char *)this + 400);
  BYTE8(v94) = 1;
  if ( v12 == CSwRenderTargetGetBounds::GetDeviceInfo )
    DeviceInfo = CSwRenderTargetGetBounds::GetDeviceInfo(a2, v13, 0LL, 0LL);
  else
    DeviceInfo = v12(a2, v13, 0LL, 0LL);
  v15 = DeviceInfo;
  if ( DeviceInfo < 0 )
  {
    v90 = 332;
    goto LABEL_193;
  }
  v16 = 0;
  v92 = 0LL;
  v15 = 0;
  *((_BYTE *)this + 6769) = 1;
  v17 = 0;
  v18 = 0;
  if ( *((_DWORD *)this + 156) )
  {
    v19 = (char *)this + 600;
    while ( 1 )
    {
      v82 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v19 + 8LL * v18), this);
      v15 = v82;
      if ( v82 < 0 )
        break;
      ++v17;
      if ( ++v18 >= *((_DWORD *)this + 156) )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v82, 0x19ECu);
  }
  else
  {
LABEL_5:
    v19 = (char *)this + 600;
    *((_DWORD *)this + 156) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 600, 8u);
  }
  if ( v17 < *((_DWORD *)this + 156) && v17 )
  {
    v83 = *((_DWORD *)v19 + 6);
    if ( v17 > v83 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x234u);
    }
    else
    {
      v84 = v83 - v17;
      if ( v84 )
        memmove(*(void **)v19, (const void *)(*(_QWORD *)v19 + 8LL * v17), 8LL * v84);
      *((_DWORD *)v19 + 6) = v84;
    }
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x19CEu);
  }
  else if ( *((_BYTE *)this + 6770) )
  {
    *(_WORD *)((char *)this + 6769) = 1;
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x145Eu);
    goto LABEL_15;
  }
  v20 = *((unsigned int *)this + 234);
  v21 = v20 + 1;
  v96[0] = 0;
  *(_QWORD *)&v96[4] = 0LL;
  *(_DWORD *)&v96[76] = 32085;
  *(_OWORD *)&v96[12] = _xmm;
  *(_OWORD *)&v96[28] = _xmm;
  *(_OWORD *)&v96[44] = _xmm;
  *(_OWORD *)&v96[60] = _xmm;
  if ( (int)v20 + 1 < (unsigned int)v20 )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  }
  else
  {
    v15 = 0;
    if ( v21 <= *((_DWORD *)this + 233) )
    {
      v22 = (_OWORD *)(*((_QWORD *)this + 114) + 80 * v20);
      *v22 = *(_OWORD *)v96;
      v22[1] = *(_OWORD *)&v96[16];
      v22[2] = *(_OWORD *)&v96[32];
      v22[3] = *(_OWORD *)&v96[48];
      v22[4] = *(_OWORD *)&v96[64];
      *((_DWORD *)this + 234) = v21;
LABEL_14:
      v16 = 1;
      goto LABEL_15;
    }
    v85 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 912, 0x50u, 1, v96);
    v15 = v85;
    if ( v85 >= 0 )
      goto LABEL_148;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0xC0u);
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x3Cu);
LABEL_148:
  if ( v15 >= 0 )
    goto LABEL_14;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1467u);
LABEL_15:
  if ( v15 >= 0 )
  {
    v23 = *((_QWORD *)this + 46);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    *((_QWORD *)this + 46) = a2;
    (*(void (__fastcall **)(CSwRenderTargetGetBounds *))(*(_QWORD *)a2 + 8LL))(a2);
    v24 = *((_QWORD *)this + 47);
    if ( v24 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      *((_QWORD *)this + 47) = 0LL;
    }
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 46))(
      *((_QWORD *)this + 46),
      &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
      (char *)this + 376);
    v25 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 46);
    v26 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct ID2DContext **))(*(_QWORD *)v25 + 56LL);
    if ( v26 == CSwRenderTargetGetBounds::GetD2DContext )
      D2DContext = CSwRenderTargetGetBounds::GetD2DContext(v25, &v92);
    else
      D2DContext = v26(v25, &v92);
    v15 = D2DContext;
    if ( D2DContext < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DContext, 0x25F9u);
    }
    else
    {
      if ( !*((_QWORD *)this + 49) )
      {
        *((_QWORD *)this + 49) = v92;
        v92 = 0LL;
      }
      updated = CDrawingContext::UpdateRenderTargetState(this);
      v15 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x260Au);
      }
      else
      {
        v29 = (CSwRenderTargetGetBounds *)*((_QWORD *)this + 49);
        v30 = (struct IRenderTarget *)*((_QWORD *)this + 46);
        v31 = (CDrawingContext *)((char *)this + 8);
        v32 = *(__int64 (__fastcall **)(CSwRenderTargetGetBounds *, struct ID2DContextOwner *, struct IRenderTarget *))(*(_QWORD *)v29 + 24LL);
        if ( v32 == CSwRenderTargetGetBounds::PushTarget )
        {
          v33 = CSwRenderTargetGetBounds::PushTarget(v29, v31, v30);
        }
        else if ( v32 == CD2DContext::PushTarget )
        {
          v33 = CD2DContext::PushTarget(v29, v31, v30);
        }
        else
        {
          v33 = v32(v29, v31, v30);
        }
        v15 = v33;
        if ( v33 >= 0 )
          goto LABEL_29;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x2610u);
      }
    }
    CDrawingContext::PopClippingScope(this, 0);
    goto LABEL_29;
  }
  if ( v16 )
    --*((_DWORD *)this + 234);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x25E8u);
LABEL_29:
  if ( v92 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v92 + 16LL))(v92);
  if ( v15 < 0 )
  {
    v90 = 340;
LABEL_193:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v90);
    return (unsigned int)v15;
  }
  v34 = *((_BYTE *)this + 3040) == 0;
  v35 = v97;
  *((_QWORD *)this + 48) = a8;
  if ( v34 && !*((_QWORD *)this + 838) && (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
  {
    v86 = v35 && !CMILMatrix::IsIdentity<0>(v35);
    (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 46) + 64LL))(*((_QWORD *)this + 46), &v97);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
      Template_ppffffcb(v88, v87, (_DWORD)this, *((_QWORD *)this + 46), v97, SBYTE4(v97), v98, v99, v86 ? 0x44 : 0, v35);
  }
  if ( v95 )
  {
    *(_OWORD *)((char *)this + 424) = *v95;
  }
  else
  {
    v34 = g_fUseDebugClearColorIfNoClear == 0;
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    if ( !v34 )
    {
      *((_DWORD *)this + 106) = 1065353216;
      *((_DWORD *)this + 109) = 1065353216;
    }
  }
  v36 = 0;
  *((_DWORD *)this + 65) = 1;
  v37 = 0LL;
  *((_QWORD *)this + 33) = 1LL;
  *((_BYTE *)this + 280) = a4 == 0;
  *((_QWORD *)this + 34) = 0LL;
  v38 = *((unsigned int *)this + 753);
  if ( *((_DWORD *)this + 752) != (_DWORD)v38 )
    goto LABEL_37;
  v73 = 2 * v38;
  if ( (unsigned __int64)(2 * v38) > 0xFFFFFFFF )
  {
    v36 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    v15 = -2147024362;
    goto LABEL_171;
  }
  if ( v73 <= 0x40 )
    v73 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v73 <= 4 )
  {
    v36 = -2147024809;
  }
  else
  {
    v74 = 4LL * v73;
    if ( !v74 )
      v74 = 1LL;
    v37 = HeapAlloc(WPF::g_processHeap, 0, v74);
    if ( !v37 )
      v36 = -2147024882;
  }
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x54u);
  }
  else
  {
    v75 = 4LL * *((unsigned int *)this + 752);
    if ( v75 <= 0xFFFFFFFF )
    {
      v36 = 0;
      memcpy_0(v37, *((const void **)this + 378), (unsigned int)v75);
      WPF::ProcessHeapImpl::Free(*((void **)this + 378));
      *((_QWORD *)this + 378) = v37;
      *((_DWORD *)this + 753) = v73;
LABEL_37:
      *(_DWORD *)(*((_QWORD *)this + 378) + 4LL * *((unsigned int *)this + 752)) = 1065353216;
      v39 = *((_DWORD *)this + 758);
      v40 = ++*((_DWORD *)this + 752);
      if ( v39 > v40 )
        v40 = v39;
      *((_DWORD *)this + 758) = v40;
      goto LABEL_40;
    }
    v36 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
  }
  if ( v37 )
    HeapFree(WPF::g_processHeap, 0, v37);
LABEL_40:
  v15 = v36;
  if ( v36 < 0 )
  {
LABEL_171:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x198u);
    return (unsigned int)v15;
  }
  v41 = *((unsigned int *)this + 803);
  v42 = 0;
  v43 = 0LL;
  if ( *((_DWORD *)this + 802) != (_DWORD)v41 )
  {
LABEL_42:
    *(_OWORD *)(*((_QWORD *)this + 403) + 16LL * *((unsigned int *)this + 802)) = v94;
    v44 = *((_DWORD *)this + 808);
    v45 = ++*((_DWORD *)this + 802);
    if ( v44 > v45 )
      v45 = v44;
    *((_DWORD *)this + 808) = v45;
    goto LABEL_45;
  }
  v76 = 2 * v41;
  if ( (unsigned __int64)(2 * v41) > 0xFFFFFFFF )
  {
    v42 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
    v15 = -2147024362;
    goto LABEL_178;
  }
  if ( v76 <= 0x40 )
    v76 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v76 <= 0x10 )
  {
    v42 = -2147024809;
  }
  else
  {
    v77 = 16LL * v76;
    if ( !v77 )
      v77 = 1LL;
    v43 = HeapAlloc(WPF::g_processHeap, 0, v77);
    if ( !v43 )
      v42 = -2147024882;
  }
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x54u);
  }
  else
  {
    v78 = 16LL * *((unsigned int *)this + 802);
    if ( v78 <= 0xFFFFFFFF )
    {
      v42 = 0;
      memcpy_0(v43, *((const void **)this + 403), (unsigned int)v78);
      WPF::ProcessHeapImpl::Free(*((void **)this + 403));
      *((_QWORD *)this + 403) = v43;
      *((_DWORD *)this + 803) = v76;
      goto LABEL_42;
    }
    v42 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
  }
  if ( v43 )
    HeapFree(WPF::g_processHeap, 0, v43);
LABEL_45:
  v15 = v42;
  if ( v42 < 0 )
  {
LABEL_178:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x19Au);
    return (unsigned int)v15;
  }
  v46 = v93;
  *((_QWORD *)this + 431) = v93;
  if ( v46 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 8LL))(v46);
  *((_BYTE *)this + 6772) = a7;
  if ( v35 )
  {
    *((_OWORD *)this + 211) = *(_OWORD *)v35;
    *((_OWORD *)this + 212) = *(_OWORD *)(v35 + 16);
    *((_OWORD *)this + 213) = *(_OWORD *)(v35 + 32);
    *((_OWORD *)this + 214) = *(_OWORD *)(v35 + 48);
    *((_DWORD *)this + 860) = *(_DWORD *)(v35 + 64);
  }
  else if ( this != (CDrawingContext *)-3376LL )
  {
    *((_WORD *)this + 1720) = 32085;
    *((_OWORD *)this + 211) = _xmm;
    *((_OWORD *)this + 212) = _xmm;
    *((_OWORD *)this + 213) = _xmm;
    *((_OWORD *)this + 214) = _xmm;
  }
  *((_WORD *)this + 3388) = 0;
  *((_BYTE *)this + 6778) = 0;
  v47 = 0;
  v48 = *((_QWORD *)this + 50);
  v49 = 0;
  v93 = v48;
  v50 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v52 = qword_18023E530;
  if ( !qword_18023E530 )
    goto LABEL_128;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18023E530 + 2) + 104LL))(*((_QWORD *)qword_18023E530
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness(v53) != *((_DWORD *)v52 + 14)
    || qword_18023E530 != v52 )
  {
    ReleaseInterface<ClipPlaneInfoRef>(&qword_18023E530);
    v50 = 1;
  }
  if ( !qword_18023E530 )
  {
LABEL_128:
    LODWORD(v92) = CD3DModuleLoaderInternal::CreateD3DObjects(v51, &qword_18023E530);
    TranslateDXGIorD3DErrorInContext((int)v92, 4, &v92);
    v49 = (int)v92;
    if ( (int)v92 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, (int)v92, 0x12Bu);
  }
  if ( v50 && qword_18023E540 )
    CSurfaceManager::ResetTokenThread(qword_18023E540);
  v54 = qword_18023E530;
  if ( qword_18023E530 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18023E530)(qword_18023E530);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v49 >= 0 )
  {
    v55 = *((_DWORD *)v54 + 22);
    v47 = 0;
    v56 = 0LL;
    if ( v55 )
    {
      v57 = *((_QWORD *)v54 + 8);
      while ( __PAIR64__(HIDWORD(v93), v48) != *(_QWORD *)(*(_QWORD *)(v57 + 8 * v56) + 336LL) )
      {
        v56 = (unsigned int)(v56 + 1);
        if ( (unsigned int)v56 >= v55 )
          goto LABEL_64;
      }
      v71 = *(_QWORD *)(v57 + 8 * v56);
      if ( *(_DWORD *)(v71 + 296) == 5140 )
        v47 = *(_DWORD *)(v71 + 300) == 140;
    }
LABEL_64:
    v58 = *(__int64 (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v54 + 8LL);
    if ( v58 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v54);
    else
      v58(v54);
  }
  v34 = *((_BYTE *)this + 3040) == 0;
  *((_BYTE *)this + 6779) = v47;
  v59 = 0;
  if ( v34 )
  {
    v72 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 49) + 176LL))(*((_QWORD *)this + 49));
    if ( *(int *)(v72 + 740) >= 37632 && !*(_BYTE *)(v72 + 636) )
      v59 = 1;
  }
  *((_BYTE *)this + 6775) = v59;
  v60 = dword_180241308;
  *((_QWORD *)this + 405) = 0LL;
  if ( (v60 & 1) != 0 )
  {
    NullProcessAttribution = qword_180241310;
  }
  else
  {
    dword_180241308 = v60 | 1;
    NullProcessAttribution = CreateNullProcessAttribution();
    qword_180241310 = NullProcessAttribution;
  }
  v62 = *((unsigned int *)this + 111);
  v63 = 0;
  v64 = 0LL;
  LODWORD(v94) = 10;
  *((_QWORD *)&v94 + 1) = 0LL;
  if ( *((_DWORD *)this + 110) != (_DWORD)v62 )
    goto LABEL_71;
  v79 = 2 * v62;
  if ( (unsigned __int64)(2 * v62) > 0xFFFFFFFF )
  {
    v63 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
LABEL_186:
    ModuleFailFastForHRESULT((unsigned int)v63, retaddr);
    __debugbreak();
  }
  if ( v79 <= 0x40 )
    v79 = 64;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v79 <= 0x10 )
  {
    v63 = -2147024809;
  }
  else
  {
    v80 = 16LL * v79;
    if ( !v80 )
      v80 = 1LL;
    v64 = HeapAlloc(WPF::g_processHeap, 0, v80);
    if ( !v64 )
      v63 = -2147024882;
  }
  if ( v63 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v63, 0x54u);
    v65 = -2147024362;
  }
  else
  {
    v81 = 16LL * *((unsigned int *)this + 110);
    if ( v81 <= 0xFFFFFFFF )
    {
      v63 = 0;
      memcpy_0(v64, *((const void **)this + 57), (unsigned int)v81);
      WPF::ProcessHeapImpl::Free(*((void **)this + 57));
      *((_QWORD *)this + 57) = v64;
      *((_DWORD *)this + 111) = v79;
LABEL_71:
      v65 = -2147024362;
      *(_OWORD *)(*((_QWORD *)this + 57) + 16LL * *((unsigned int *)this + 110)) = v94;
      v66 = *((_DWORD *)this + 116);
      v67 = ++*((_DWORD *)this + 110);
      if ( v66 > v67 )
        v67 = v66;
      *((_DWORD *)this + 116) = v67;
      goto LABEL_74;
    }
    v65 = -2147024362;
    v63 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
  }
  if ( v64 )
    HeapFree(WPF::g_processHeap, 0, v64);
LABEL_74:
  if ( v63 < 0 )
    goto LABEL_186;
  v68 = *((_DWORD *)this + 210);
  v97 = NullProcessAttribution;
  v69 = v68 + 1;
  if ( v68 + 1 < v68 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_190;
  }
  if ( v69 > *((_DWORD *)this + 209) )
  {
    v89 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 816, 8u, 1, &v97);
    v65 = v89;
    if ( v89 >= 0 )
      return (unsigned int)v15;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0xC0u);
LABEL_190:
    ModuleFailFastForHRESULT(v65, retaddr);
    __debugbreak();
  }
  *(_QWORD *)(*((_QWORD *)this + 102) + 8LL * v68) = v97;
  *((_DWORD *)this + 210) = v69;
  return (unsigned int)v15;
}
