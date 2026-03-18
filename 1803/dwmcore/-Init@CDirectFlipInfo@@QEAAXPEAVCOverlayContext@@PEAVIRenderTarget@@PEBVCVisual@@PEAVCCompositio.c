/*
 * XREFs of ?Init@CDirectFlipInfo@@QEAAXPEAVCOverlayContext@@PEAVIRenderTarget@@PEBVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainContent@@W4Enum@DirectFlipMode@@PEBVCRegion@@@Z @ 0x18017298C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ??0CDirectFlipInfo@@QEAA@AEBV0@@Z @ 0x180171EBC (--0CDirectFlipInfo@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180008F14 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z @ 0x1800C2B58 (--$ReplaceInterface@UIDXGIResource@@U1@@@YAXAEAPEAUIDXGIResource@@PEAU0@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Create@CRegionWrapper@@SAJPEAPEAV1@@Z @ 0x180205170 (-Create@CRegionWrapper@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDirectFlipInfo::Init(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        CMILCOMBase *a5,
        __int64 a6,
        int a7,
        int **a8)
{
  __int64 v10; // rcx
  CMILCOMBase *v11; // rcx
  __int64 v12; // rcx
  CCompositionSurfaceInfo *v13; // rcx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 result; // rax
  _BYTE v16[16]; // [rsp+20h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 8) = a2;
  ReplaceInterface<IDXGIResource,IDXGIResource>((__int64 *)(a1 + 16), a3);
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  *(_QWORD *)(a1 + 24) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  v11 = *(CMILCOMBase **)(a1 + 32);
  if ( v11 )
    CMILCOMBase::InternalRelease(v11);
  *(_QWORD *)(a1 + 32) = a5;
  if ( a5 )
    CMILCOMBase::InternalAddRef(a5);
  v12 = *(_QWORD *)(a1 + 40);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *(_QWORD *)(a1 + 40) = a6;
  if ( a6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
  ReleaseInterface<CD3DSurface>((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 56) = 1;
  *(_DWORD *)(a1 + 60) = a7;
  if ( a7 >= 2 && a8 && (int)CRegionWrapper::Create((struct CRegionWrapper **)(a1 + 48)) >= 0 )
    FastRegion::CRegion::Copy((int **)(*(_QWORD *)(a1 + 48) + 16LL), a8);
  *(_DWORD *)(a1 + 72) = 0;
  v13 = *(CCompositionSurfaceInfo **)(a1 + 32);
  *(_QWORD *)(a1 + 64) = *((_QWORD *)a5 + 7);
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v13);
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*((_QWORD *)RenderingRealizationNoRef + 18) + 24LL))(
             (__int64)RenderingRealizationNoRef + 144,
             v16);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(result + 8);
  return result;
}
