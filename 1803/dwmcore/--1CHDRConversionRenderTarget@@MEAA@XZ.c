/*
 * XREFs of ??1CHDRConversionRenderTarget@@MEAA@XZ @ 0x1801E729C
 * Callers:
 *     ??_GCHDRConversionRenderTarget@@MEAAPEAXI@Z @ 0x1801E72F0 (--_GCHDRConversionRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CHDRConversionRenderTarget::~CHDRConversionRenderTarget(CHDRConversionRenderTarget *this)
{
  *(_QWORD *)this = &CHDRConversionRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *((_QWORD *)this + 20) = &CHDRConversionRenderTarget::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 27) = &CHDRConversionRenderTarget::`vftable';
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 76));
  FastRegion::CRegion::FreeMemory((void **)this + 77);
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
}
