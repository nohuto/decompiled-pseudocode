/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18008B5D4
 * Callers:
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180076D90 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x1800903BC (--1CRenderTargetImageSource@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x18008B158 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  *(_QWORD *)this = &CDecodeBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CRenderTargetBitmap::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 19);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 12);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
