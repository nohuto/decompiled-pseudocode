/*
 * XREFs of ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800D7D7C
 * Callers:
 *     ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x1800D7E10 (--_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x1801E729C (--1CHDRConversionRenderTarget@@MEAA@XZ.c)
 *     ??1CHwStereoFullScreenRenderTarget@@MEAA@XZ @ 0x1801F0E60 (--1CHwStereoFullScreenRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1802189AC (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(CHwFullScreenRenderTarget *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 27) = &CHwFullScreenRenderTarget::`vftable';
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 73));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 74));
  v2 = (void *)*((_QWORD *)this + 71);
  if ( v2 )
  {
    CComputeScribbleRenderer::~CComputeScribbleRenderer(*((CComputeScribbleRenderer **)this + 71));
    operator delete(v2, 0x40uLL);
  }
  FastRegion::CRegion::FreeMemory((void **)this + 62);
  FastRegion::CRegion::FreeMemory((void **)this + 53);
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
}
