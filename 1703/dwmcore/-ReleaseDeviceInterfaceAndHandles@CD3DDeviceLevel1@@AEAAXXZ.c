/*
 * XREFs of ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800776AC
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180078824 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180078EA0 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(CD3DDeviceLevel1 *this)
{
  if ( *((_QWORD *)this + 77) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 75) + 40LL))(*((_QWORD *)this + 75));
    *((_QWORD *)this + 77) = 0LL;
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 600);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 640);
}
