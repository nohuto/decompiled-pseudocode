/*
 * XREFs of ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180016690
 * Callers:
 *     ??_GCRenderTargetImageSource@@MEAAPEAXI@Z @ 0x1800166DC (--_GCRenderTargetImageSource@@MEAAPEAXI@Z.c)
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
  *((_QWORD *)this + 14) = &CRenderTargetImageSource::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CRenderTargetImageSource::`vftable'{for `IDeviceResource'};
  CRenderTargetBitmap::~CRenderTargetBitmap(v2);
}
