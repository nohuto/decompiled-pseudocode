/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180047190
 * Callers:
 *     ??$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z @ 0x18004B1C0 (--$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C4BC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z @ 0x18007CD08 (--$ReleaseInterface@VCD2DBitmap@@@@YAXAEAPEAVCD2DBitmap@@@Z.c)
 *     ??$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z @ 0x18007E5AC (--$ReleaseInterface@UIUnknown@@@@YAXAEAPEAUIUnknown@@@Z.c)
 *     ?Release@CRenderTarget@@WEI@EAAKXZ @ 0x1800D55F0 (-Release@CRenderTarget@@WEI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WEA@EAAKXZ @ 0x1800D5610 (-Release@CDesktopRenderTarget@@WEA@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800D5680 (-Release@CSystemMemoryBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800D5B50 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800D5B60 (-Release@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?Release@GeometrySink@CDrawListPrimitiveBuilder@@WBA@EAAKXZ @ 0x1800D5BA0 (-Release@GeometrySink@CDrawListPrimitiveBuilder@@WBA@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800D5BB0 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?Release@CCoRenderContent@@WDI@EAAKXZ @ 0x1800D66D0 (-Release@CCoRenderContent@@WDI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800D66F0 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800D6750 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WOA@EAAKXZ @ 0x1800D67C0 (-Release@CCompressedSourceBitmap@@WOA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WOI@EAAKXZ @ 0x1800D67D0 (-Release@CCompressedSourceBitmap@@WOI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800D6810 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBKI@EAAKXZ @ 0x1800D6860 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBKI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WGI@EAAKXZ @ 0x1800D6870 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WGI@EAAKXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@WBJI@EAAKXZ @ 0x1800D68B0 (-Release@CDxHandleYUVBitmapRealization@@WBJI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WHA@EAAKXZ @ 0x1800D68C0 (-Release@CDesktopRenderTarget@@WHA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILCOMBase::InternalRelease(this);
}
