/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@_NPEBVCRegion@@5@Z @ 0x180155420
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x18014EDA8 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x1801549D4 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18000A6A8 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x18001FC90 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007599C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x1801AE0A0 (-Create@CRegionWrapper@@SAJPEAPEAV1@@Z.c)
 */

void __fastcall CDirectFlipInfo::Init(
        CDirectFlipInfo *this,
        struct COverlayContext *a2,
        struct IRenderTarget *a3,
        const struct CVisual *a4,
        struct CCompositionSurfaceInfo *a5,
        struct ISwapChainContent *a6,
        bool a7,
        const struct FastRegion::Internal::CRgnData **a8)
{
  CMILCOMBase *v10; // rcx
  __int64 v11; // rcx
  CCompositionSurfaceInfo *v12; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax

  *((_QWORD *)this + 1) = a2;
  ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 2, (__int64)a3);
  ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)this + 3, (__int64)a4);
  v10 = (CMILCOMBase *)*((_QWORD *)this + 4);
  if ( v10 )
    CMILCOMBase::InternalRelease(v10);
  *((_QWORD *)this + 4) = a5;
  if ( a5 )
    CBitmapOfDeviceBitmaps::AddRef(a5);
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)this + 5) = a6;
  if ( a6 )
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a6 + 8LL))(a6);
  *((_BYTE *)this + 48) = a7;
  ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 7);
  if ( a8 && (int)CRegionWrapper::Create((struct CRegionWrapper **)this + 7) >= 0 )
    FastRegion::CRegion::Copy((const struct FastRegion::Internal::CRgnData **)(*((_QWORD *)this + 7) + 16LL), a8);
  *((_DWORD *)this + 20) = 0;
  v12 = (CCompositionSurfaceInfo *)*((_QWORD *)this + 4);
  *((_DWORD *)this + 16) = 1;
  *((_QWORD *)this + 9) = *((_QWORD *)a5 + 7);
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v12);
  *((_DWORD *)this + 25) = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)RenderingRealizationNoRef + 13) + 56LL))((__int64)RenderingRealizationNoRef + 104);
}
