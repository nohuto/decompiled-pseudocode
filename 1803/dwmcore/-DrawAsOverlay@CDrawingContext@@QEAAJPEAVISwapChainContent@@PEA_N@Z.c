/*
 * XREFs of ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8
 * Callers:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180007470 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180099B40 (-DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x180007380 (-SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180007C2C (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180007CE8 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?IsInLayer@CDrawingContext@@QEAA_NXZ @ 0x180008128 (-IsInLayer@CDrawingContext@@QEAA_NXZ.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18000F220 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180066650 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F30C (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18007F370 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180080234 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18008028C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@3@Z @ 0x18013E7E0 (-IsOverlayAssigned@COverlayContext@@QEAA_NPEBVCVisual@@PEAVISwapChainContent@@PEA_NPEAUtagRECT@@.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180162DEC (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 */

__int64 __fastcall CDrawingContext::DrawAsOverlay(COverlayContext **this, struct ISwapChainContent *a2, bool *a3)
{
  unsigned int v6; // r15d
  char v7; // r13
  bool v8; // si
  CDrawingContext *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  bool IsNormalDesktopRender; // r14
  char (__fastcall *v13)(__int64); // rax
  const struct CVisual *CurrentVisual; // rax
  bool IsOverlayAssigned; // al
  bool v17; // r14
  CMILMatrix *TopByReference; // rax
  enum DXGI_MODE_ROTATION Rotation; // eax
  struct _D3DCOLORVALUE v20; // xmm0
  COverlayContext *v21; // rcx
  int v22; // eax
  LONG right; // edx
  LONG top; // r10d
  int left; // r8d
  LONG v26; // eax
  LONG bottom; // ecx
  LONG v28; // eax
  FastRegion::Internal::CRgnData *v29; // rcx
  bool v30; // [rsp+30h] [rbp-D0h] BYREF
  struct _D3DCOLORVALUE v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v33[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-B0h]
  LONG *v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  int v37; // [rsp+68h] [rbp-98h]
  struct tagRECT v38; // [rsp+80h] [rbp-80h]
  struct tagRECT v39; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v40; // [rsp+A0h] [rbp-60h] BYREF
  FastRegion::Internal::CRgnData *v41[10]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v42[80]; // [rsp+100h] [rbp+0h] BYREF

  *a3 = 0;
  v6 = 0;
  v7 = 0;
  if ( !*((_BYTE *)this + 3136) && !this[846] )
  {
    v8 = 0;
    v30 = 0;
    IsNormalDesktopRender = CDrawingContext::IsNormalDesktopRender((CDrawingContext *)this);
    if ( !IsNormalDesktopRender || *((_QWORD *)v9 + 849) == v11 || CDrawingContext::IsInLayer(v9) )
      goto LABEL_6;
    if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 104LL))(a2) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(this + 1));
      IsOverlayAssigned = COverlayContext::IsOverlayAssigned(this[849], CurrentVisual, a2, &v30, &v39, &v40);
      v8 = v30;
      *a3 = IsOverlayAssigned;
    }
    if ( !*a3 )
    {
LABEL_6:
      LOBYTE(v10) = IsNormalDesktopRender;
      v13 = *(char (__fastcall **)(__int64))(*(_QWORD *)a2 + 176LL);
      if ( v13 == CCompositionSurfaceBitmap::SetCompositionMode )
        CCompositionSurfaceBitmap::SetCompositionMode((__int64)a2);
      else
        ((void (__fastcall *)(struct ISwapChainContent *, _QWORD, __int64))v13)(a2, 0LL, v10);
    }
    else
    {
      v17 = CCommonRegistryData::m_dwOverlayTestMode != 0;
      TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(this + 60));
      Rotation = CMILMatrix::GetRotation(TopByReference);
      (*(void (__fastcall **)(struct ISwapChainContent *, _QWORD))(*(_QWORD *)a2 + 184LL))(a2, (unsigned int)Rotation);
      if ( !v8 || v17 )
      {
        *(_QWORD *)&v31.r = 0LL;
        *(_QWORD *)&v31.b = 0LL;
        if ( v17 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 152LL))(a2) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 160LL))(a2) )
              *(struct _D3DCOLORVALUE *)&v20.r = (struct _D3DCOLORVALUE)_xmm;
            else
              *(struct _D3DCOLORVALUE *)&v20.r = (struct _D3DCOLORVALUE)_xmm;
          }
          else
          {
            v21 = this[46];
            if ( v21 && (*(unsigned __int8 (__fastcall **)(COverlayContext *))(*(_QWORD *)v21 + 440LL))(v21) )
              *(struct _D3DCOLORVALUE *)&v20.r = (struct _D3DCOLORVALUE)_xmm;
            else
              *(struct _D3DCOLORVALUE *)&v20.r = (struct _D3DCOLORVALUE)_xmm;
          }
          *(struct _D3DCOLORVALUE *)&v31.r = *(struct _D3DCOLORVALUE *)&v20.r;
        }
        if ( !v8 )
        {
          memset_0(v33, 0, 0x24uLL);
          HIDWORD(v34) = 1;
          v32 = 20;
          HIDWORD(v35) = 1;
          v22 = CDrawingContext::PushRenderOptionsInternal(
                  (CDrawingContext *)this,
                  0LL,
                  (const struct MilRenderOptions *)&v32,
                  1);
          v6 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x1FA4u);
            return v6;
          }
          v7 = 1;
        }
        ++*((_DWORD *)this + 192);
        right = v39.right;
        v38 = v40;
        top = v40.top;
        left = _mm_cvtsi128_si32((__m128i)v40);
        v26 = v40.right;
        if ( v39.left > left )
          left = v39.left;
        v38.left = left;
        if ( v39.top > v40.top )
          top = v39.top;
        v38.top = top;
        if ( v39.right >= v40.right )
          right = v40.right;
        else
          v26 = v39.right;
        bottom = v39.bottom;
        v38.right = v26;
        v28 = v40.bottom;
        if ( v39.bottom < v40.bottom )
          v28 = v39.bottom;
        v38.bottom = v28;
        if ( right <= left )
          goto LABEL_42;
        if ( v39.bottom >= v40.bottom )
          bottom = v40.bottom;
        if ( bottom <= top )
LABEL_42:
          v38 = (struct tagRECT)0LL;
        CDrawingContext::RenderOverlayColor((CDrawingContext *)this, &v31);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v42, &v40);
        FastRegion::CRegion::CRegion((FastRegion::CRegion *)v41, &v39);
        FastRegion::CRegion::Subtract((FastRegion::CRegion *)v41, (const struct CRegion *)v42);
        FastRegion::Internal::CRgnData::BeginIterator(v41[0], (struct FastRegion::CRegion::Iterator *)&v32);
        while ( (unsigned __int64)v35 < v34 )
        {
          v39.top = *v35;
          v39.bottom = v35[2];
          v39.left = *(_DWORD *)(v36 + 8LL * v37);
          v39.right = *(_DWORD *)(v36 + 4LL * (2 * v37 + 1));
          CDrawingContext::RenderOverlayColor((CDrawingContext *)this, (struct _D3DCOLORVALUE *)&stru_1802AD270);
          FastRegion::Internal::CRgnData::StepIterator(v29, (struct FastRegion::CRegion::Iterator *)&v32);
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v41);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v42);
        --*((_DWORD *)this + 192);
        if ( v7 )
          CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)this, 1);
      }
    }
  }
  return v6;
}
