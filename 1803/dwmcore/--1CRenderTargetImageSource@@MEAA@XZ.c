/*
 * XREFs of ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180089F9C
 * Callers:
 *     ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x180089FEC (--_GCRenderTargetImageSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetImageSource::~CRenderTargetImageSource(CRenderTargetImageSource *this)
{
  CRenderTargetBitmap *v2; // rcx

  *(_QWORD *)this = &CRenderTargetImageSource::`vftable';
  v2 = (CRenderTargetImageSource *)((char *)this + 8);
  *(_QWORD *)v2 = &CRenderTargetImageSource::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 3) = &CRenderTargetImageSource::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 4) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 12) = &CRenderTargetImageSource::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 19) = &CRenderTargetImageSource::`vftable'{for `IBitmapRealization'};
  CRenderTargetBitmap::~CRenderTargetBitmap(v2);
}
