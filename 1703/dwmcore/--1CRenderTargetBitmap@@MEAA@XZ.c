/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180047028
 * Callers:
 *     ??1CRenderTargetImageSource@@MEAA@XZ @ 0x180016690 (--1CRenderTargetImageSource@@MEAA@XZ.c)
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180046E50 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ @ 0x1800474A8 (-ReleaseRenderTargetBitmap@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CDecodeBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDecodeBitmap::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 13) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 14) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
  CRenderTargetBitmap::ReleaseRenderTargetBitmap(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 152);
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 136);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 128);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 120);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
