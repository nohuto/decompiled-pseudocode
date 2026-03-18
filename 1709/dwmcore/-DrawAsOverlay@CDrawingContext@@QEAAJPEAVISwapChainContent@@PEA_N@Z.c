/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x18003B044
 * Callers:
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180025750 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800293F0 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x180028E10 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028F20 (-IsOverlayCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800308F0 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180030950 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x18003BCDC (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ @ 0x18003CBD8 (-IsDirectRenderingToDisplayRenderTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180040F90 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180041C44 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180059220 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x1800896B4 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180089710 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x18011BC30 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z @ 0x18013F0D4 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawAsOverlay(CDrawingContext *this, struct ISwapChainContent *a2, bool *a3)
{
  unsigned int v6; // r15d
  char v7; // r13
  bool v8; // r12
  CDrawingContext *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned int v12; // esi
  char (__fastcall *v13)(__int64); // rax
  char (__fastcall *v15)(CCompositionSurfaceBitmap *); // rax
  char IsOverlayCompatible; // al
  const struct CVisual *CurrentVisual; // rax
  bool IsOverlayAssigned; // al
  bool v19; // r14
  CMILMatrix *TopByReference; // rax
  enum DXGI_MODE_ROTATION Rotation; // eax
  struct _D3DCOLORVALUE v22; // xmm0
  __int64 v23; // rcx
  int v24; // eax
  FastRegion::Internal::CRgnData *v25; // rcx
  bool v26; // [rsp+30h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v27; // [rsp+38h] [rbp-C8h] BYREF
  struct tagRECT v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v30[4]; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v31; // [rsp+60h] [rbp-A0h]
  LONG *v32; // [rsp+68h] [rbp-98h]
  __int64 v33; // [rsp+70h] [rbp-90h]
  int v34; // [rsp+78h] [rbp-88h]
  struct tagRECT v35; // [rsp+88h] [rbp-78h] BYREF
  FastRegion::Internal::CRgnData *v36[10]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v37[80]; // [rsp+F0h] [rbp-10h] BYREF

  *a3 = 0;
  v6 = 0;
  v7 = 0;
  if ( *((_BYTE *)this + 3136) || *((_QWORD *)this + 846) )
    return v6;
  v8 = 0;
  v26 = 0;
  if ( !CDrawingContext::IsDirectRenderingToDisplayRenderTarget(this)
    || *(_BYTE *)(*((_QWORD *)v9 + 4) + 1296LL) != (_BYTE)v11 )
  {
    LOBYTE(v12) = v11;
LABEL_7:
    LOBYTE(v10) = v12;
    v13 = *(char (__fastcall **)(__int64))(*(_QWORD *)a2 + 176LL);
    if ( v13 == CCompositionSurfaceBitmap::SetCompositionMode )
      CCompositionSurfaceBitmap::SetCompositionMode((__int64)a2);
    else
      ((void (__fastcall *)(struct ISwapChainContent *, _QWORD, __int64))v13)(a2, 0LL, v10);
    return v6;
  }
  v12 = v11 + 1;
  if ( *((_QWORD *)v9 + 849) == v11 || CDrawingContext::IsInLayer(v9) )
    goto LABEL_7;
  v15 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 104LL);
  if ( v15 == CCompositionSurfaceBitmap::IsOverlayCompatible )
    IsOverlayCompatible = CCompositionSurfaceBitmap::IsOverlayCompatible(a2);
  else
    IsOverlayCompatible = v15(a2);
  if ( IsOverlayCompatible )
  {
    CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
    IsOverlayAssigned = COverlayContext::IsOverlayAssigned(
                          *((COverlayContext **)this + 849),
                          CurrentVisual,
                          a2,
                          &v26,
                          &v28,
                          &v35);
    v8 = v26;
    *a3 = IsOverlayAssigned;
  }
  if ( !*a3 )
    goto LABEL_7;
  v19 = CCommonRegistryData::m_dwOverlayTestMode >= v12;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
  Rotation = CMILMatrix::GetRotation(TopByReference);
  (*(void (__fastcall **)(struct ISwapChainContent *, _QWORD))(*(_QWORD *)a2 + 184LL))(a2, (unsigned int)Rotation);
  if ( !v8 || v19 )
  {
    *(_QWORD *)&v27.r = 0LL;
    *(_QWORD *)&v27.b = 0LL;
    if ( v19 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 152LL))(a2) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 160LL))(a2) )
          *(struct _D3DCOLORVALUE *)&v22.r = (struct _D3DCOLORVALUE)_xmm;
        else
          *(struct _D3DCOLORVALUE *)&v22.r = (struct _D3DCOLORVALUE)_xmm;
      }
      else
      {
        v23 = *((_QWORD *)this + 46);
        if ( v23 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v23 + 392LL))(v23) )
          *(struct _D3DCOLORVALUE *)&v22.r = (struct _D3DCOLORVALUE)_xmm;
        else
          *(struct _D3DCOLORVALUE *)&v22.r = (struct _D3DCOLORVALUE)_xmm;
      }
      *(struct _D3DCOLORVALUE *)&v27.r = *(struct _D3DCOLORVALUE *)&v22.r;
    }
    if ( !v8 )
    {
      memset_0(v30, 0, 0x24uLL);
      HIDWORD(v31) = v12;
      v29 = 20;
      HIDWORD(v32) = v12;
      v24 = CDrawingContext::PushRenderOptionsInternal(this, 0LL, (const struct MilRenderOptions *)&v29, v12);
      v6 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x1EA1u);
        return v6;
      }
      v7 = v12;
    }
    *((_DWORD *)this + 192) += v12;
    CDrawingContext::RenderOverlayColor(this, &v27, &v35);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v37, &v35);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v36, &v28);
    FastRegion::CRegion::Subtract((FastRegion::CRegion *)v36, (const struct CRegion *)v37);
    FastRegion::Internal::CRgnData::BeginIterator(v36[0], (struct FastRegion::CRegion::Iterator *)&v29);
    while ( (unsigned __int64)v32 < v31 )
    {
      v28.top = *v32;
      v28.bottom = v32[2];
      v28.left = *(_DWORD *)(v33 + 8LL * v34);
      v28.right = *(_DWORD *)(v33 + 4LL * (2 * v34 + 1));
      CDrawingContext::RenderOverlayColor(this, &stru_180219A30, &v28);
      FastRegion::Internal::CRgnData::StepIterator(v25, (struct FastRegion::CRegion::Iterator *)&v29);
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v36);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v37);
    --*((_DWORD *)this + 192);
    if ( v7 )
      CDrawingContext::PopRenderOptionsInternal(this, v12);
  }
  return v6;
}
