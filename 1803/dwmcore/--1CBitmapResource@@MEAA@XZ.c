/*
 * XREFs of ??1CBitmapResource@@MEAA@XZ @ 0x1800B5298
 * Callers:
 *     ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x1800B5634 (--_GCBitmapResource@@MEAAPEAXI@Z.c)
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x1800B5C90 (--1CHwndBitmap@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 */

void __fastcall CBitmapResource::~CBitmapResource(CBitmapResource *this)
{
  *(_QWORD *)this = &CBitmapResource::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CBitmapResource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CBitmapResource::`vftable'{for `CContent'};
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  CResource::~CResource((CBitmapResource *)((char *)this + 16));
}
