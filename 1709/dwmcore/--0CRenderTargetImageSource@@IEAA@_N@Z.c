/*
 * XREFs of ??0CRenderTargetImageSource@@IEAA@_N@Z @ 0x180090348
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800887C8 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18008B658 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::CRenderTargetImageSource(
        CRenderTargetImageSource *this,
        char a2)
{
  _QWORD *v2; // rcx
  CRenderTargetImageSource *v3; // r9

  *(_QWORD *)this = &IBitmapResource::`vftable';
  CRenderTargetBitmap::CRenderTargetBitmap((CRenderTargetImageSource *)((char *)this + 8), a2);
  *v2 = &CRenderTargetImageSource::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)v3 = &CRenderTargetImageSource::`vftable';
  *((_QWORD *)v3 + 3) = &CRenderTargetImageSource::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)v3 + 4) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)v3 + 12) = &CRenderTargetImageSource::`vftable'{for `CDeviceResource'};
  *((_QWORD *)v3 + 19) = &CRenderTargetImageSource::`vftable'{for `IBitmapRealization'};
  return v3;
}
