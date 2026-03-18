/*
 * XREFs of ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800778C0
 * Callers:
 *     ?UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ @ 0x180016EDC (-UpdateConstantBuffers@CRenderingTechnique@@QEAAJXZ.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180073434 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800CEC60 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D11Buffer@@2@Z @ 0x180199CFC (-UpdateConstantBufferIfNeeded@CHwLightCollectionBuffer@@QEAAJPEAVCD3DDeviceLevel1@@AEA_KPEAUID3D.c)
 *     ?FillTexture@CHwSolidColorTextureSource@@AEAAJXZ @ 0x18019CBD0 (-FillTexture@CHwSolidColorTextureSource@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::Map(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct D3D11_MAPPED_SUBRESOURCE *a6)
{
  int v7; // eax
  unsigned int v8; // ebx

  v7 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, __int64, __int64, _DWORD, struct D3D11_MAPPED_SUBRESOURCE *))(**((_QWORD **)this + 81) + 112LL))(
         *((_QWORD *)this + 81),
         a2,
         a3,
         a4,
         0,
         a6);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xAC4u);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v8, 0);
}
