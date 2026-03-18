/*
 * XREFs of ?CreateBuffer@CD3DDeviceLevel1@@QEAAJAEBUD3D11_BUFFER_DESC@@PEBUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Buffer@@@Z @ 0x1800208D0
 * Callers:
 *     ?EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z @ 0x18001F190 (-EnsureByteSpace@CD3DDynamicAppendBuffer@@QEAAJI_N@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18007ECD0 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800B861C (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D1.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateBuffer(
        CD3DDeviceLevel1 *this,
        const struct D3D11_BUFFER_DESC *a2,
        const struct D3D11_SUBRESOURCE_DATA *a3,
        struct ID3D11Buffer **a4)
{
  int v5; // eax
  unsigned int v6; // ebx

  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct D3D11_BUFFER_DESC *, const struct D3D11_SUBRESOURCE_DATA *, struct ID3D11Buffer **))(**((_QWORD **)this + 81) + 24LL))(
         *((_QWORD *)this + 81),
         a2,
         a3,
         a4);
  v6 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5A8u);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext((__int64)this, v6, 0);
}
