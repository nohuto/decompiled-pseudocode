/*
 * XREFs of ??1CBitmapResource@@MEAA@XZ @ 0x18008D544
 * Callers:
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x1800745E0 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ??_GCBitmapResource@@MEAAPEAXI@Z @ 0x18008D654 (--_GCBitmapResource@@MEAAPEAXI@Z.c)
 *     ??1CFlipChain@@MEAA@XZ @ 0x1801649AC (--1CFlipChain@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 */

void __fastcall CBitmapResource::~CBitmapResource(CBitmapResource *this)
{
  *(_QWORD *)this = &CBitmapResource::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CBitmapResource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CBitmapResource::`vftable'{for `CContent'};
  ReleaseInterface<IBitmapLock>((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  CResource::~CResource((CBitmapResource *)((char *)this + 16));
}
