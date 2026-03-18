/*
 * XREFs of ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800B861C
 * Callers:
 *     ?Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800B8060 (-Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800B835C (-Initialize@-$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D1.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800B8490 (-Initialize@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800B85A4 (-Initialize@-$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
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
