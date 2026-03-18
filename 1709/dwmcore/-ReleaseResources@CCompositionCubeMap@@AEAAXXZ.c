/*
 * XREFs of ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x18015AABC
 * Callers:
 *     ??1CCompositionCubeMap@@UEAA@XZ @ 0x18015A20C (--1CCompositionCubeMap@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x18007E70C (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18015A76C (-InternalRelease@-$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCompositionCubeMap::ReleaseResources(CCompositionCubeMap *this)
{
  unsigned int i; // edi
  __int64 v3; // r14
  __int64 v4; // rsi

  for ( i = 0; i < *((_DWORD *)this + 26); ++i )
  {
    v3 = *((_QWORD *)this + 10);
    v4 = 32LL * i;
    if ( *(_QWORD *)(v3 + v4) )
    {
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v3 + 32LL * i));
      *(_QWORD *)(v3 + 32LL * i) = 0LL;
      Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease((CMILCOMBase **)(v4
                                                                                        + *((_QWORD *)this + 10)
                                                                                        + 8LL));
    }
  }
  *((_DWORD *)this + 26) = 0;
  DynArrayImpl<1>::ShrinkToSize((__int64)this + 80, 0x20u);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 17);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
}
