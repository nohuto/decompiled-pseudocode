/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x180149600
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180148B60 (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18004AE00 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893D0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800BC4E8 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x1801C8A30 (-Create@CRegionWrapper@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CMILCOMBase *a5,
        __int64 a6,
        int a7,
        const struct FastRegion::Internal::CRgnData **a8)
{
  CMILCOMBase *v10; // rcx
  __int64 v11; // rcx
  CCompositionSurfaceInfo *v12; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 result; // rax
  _BYTE v15[16]; // [rsp+20h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 8) = a2;
  ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)(a1 + 16), a3);
  ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)(a1 + 24), a4);
  v10 = *(CMILCOMBase **)(a1 + 32);
  if ( v10 )
    CMILCOMBase::InternalRelease(v10);
  *(_QWORD *)(a1 + 32) = a5;
  if ( a5 )
    CMILCOMBase::InternalAddRef(a5);
  v11 = *(_QWORD *)(a1 + 40);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *(_QWORD *)(a1 + 40) = a6;
  if ( a6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
  ReleaseInterface<CRemoteApplicationWindow>((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 56) = 1;
  *(_DWORD *)(a1 + 60) = a7;
  if ( a7 >= 2 && a8 && (int)CRegionWrapper::Create((struct CRegionWrapper **)(a1 + 48)) >= 0 )
    FastRegion::CRegion::Copy((const struct FastRegion::Internal::CRgnData **)(*(_QWORD *)(a1 + 48) + 16LL), a8);
  *(_DWORD *)(a1 + 72) = 0;
  v12 = *(CCompositionSurfaceInfo **)(a1 + 32);
  *(_QWORD *)(a1 + 64) = *((_QWORD *)a5 + 7);
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v12);
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
             (__int64)RenderingRealizationNoRef + 144,
             v15);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(result + 8);
  return result;
}
