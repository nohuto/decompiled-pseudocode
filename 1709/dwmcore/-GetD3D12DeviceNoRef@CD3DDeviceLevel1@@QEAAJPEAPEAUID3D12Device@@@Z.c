/*
 * XREFs of ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801A7740
 * Callers:
 *     ?Initialize@CD3DPhysicalSwapChainBuffer@@AEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1801A8D90 (-Initialize@CD3DPhysicalSwapChainBuffer@@AEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3D12DeviceNoRef(CD3DDeviceLevel1 *this, struct ID3D12Device **a2)
{
  unsigned int v2; // edi
  void **v3; // rbx
  HRESULT Device; // eax

  v2 = 0;
  v3 = (void **)((char *)this + 720);
  if ( *((_QWORD *)this + 90)
    || (Device = D3D12CreateDevice(
                   *(IUnknown **)(*((_QWORD *)this + 89) + 24LL),
                   D3D_FEATURE_LEVEL_12_0,
                   &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
                   v3),
        v2 = Device,
        Device >= 0) )
  {
    *a2 = (struct ID3D12Device *)*v3;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Device, 0x51Au);
  }
  return v2;
}
