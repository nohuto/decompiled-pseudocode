/*
 * XREFs of ?QueryWarpExtension@CD3DDeviceLevel1@@AEAAXXZ @ 0x180020C20
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180020D0C (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::QueryWarpExtension(CD3DDeviceLevel1 *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v1 = (__int64 *)((char *)this + 632);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 79);
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 81))(
         *((_QWORD *)this + 81),
         &GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71,
         v1) >= 0 )
  {
    v3 = *v1;
    v4 = 0;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v3 + 24LL))(v3, &v4) >= 0 )
      *((_DWORD *)this + 160) = v5;
  }
}
