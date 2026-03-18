/*
 * XREFs of ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800BFCB0
 * Callers:
 *     ?Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800BF934 (-Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Initialize@?$CTypedConstantBuffer@V?$array@M$07@std@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFACC (-Initialize@-$CTypedConstantBuffer@V-$array@M$07@std@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFB44 (-Initialize@-$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D1.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFBC0 (-Initialize@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFC38 (-Initialize@-$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CTypedConstantBufferBase::Initialize(
        struct ID3D11Buffer **this,
        struct CD3DDeviceLevel1 *a2,
        const struct D3D11_BUFFER_DESC *a3,
        const struct D3D11_SUBRESOURCE_DATA *a4)
{
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this);
  return CD3DDeviceLevel1::CreateBuffer(a2, a3, a4, this);
}
