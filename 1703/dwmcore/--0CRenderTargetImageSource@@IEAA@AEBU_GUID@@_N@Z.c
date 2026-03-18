/*
 * XREFs of ??0CRenderTargetImageSource@@IEAA@AEBU_GUID@@_N@Z @ 0x1800AF978
 * Callers:
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x1800D4F00 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z @ 0x1800470B8 (--0CRenderTargetBitmap@@IEAA@AEBU_GUID@@_N@Z.c)
 */

CRenderTargetImageSource *__fastcall CRenderTargetImageSource::CRenderTargetImageSource(
        CRenderTargetImageSource *this,
        const struct _GUID *a2,
        char a3)
{
  _QWORD *v3; // rcx
  CRenderTargetImageSource *v4; // r10

  *(_QWORD *)this = &IImageSource::`vftable';
  CRenderTargetBitmap::CRenderTargetBitmap((CRenderTargetImageSource *)((char *)this + 8), a2, a3);
  *v3 = &CRenderTargetImageSource::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)v4 = &CRenderTargetImageSource::`vftable';
  *((_QWORD *)v4 + 3) = &CRenderTargetImageSource::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)v4 + 4) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)v4 + 14) = &CRenderTargetImageSource::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)v4 + 15) = &CRenderTargetImageSource::`vftable'{for `IDeviceResource'};
  return v4;
}
