/*
 * XREFs of ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFB44
 * Callers:
 *     ?Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800BF934 (-Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800BFCB0 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D1.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CTypedConstantBuffer<LightNoOpConstantBuffer>::Initialize(
        struct ID3D11Buffer **a1,
        struct CD3DDeviceLevel1 *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  struct D3D11_SUBRESOURCE_DATA v5; // [rsp+30h] [rbp-38h] BYREF
  struct D3D11_BUFFER_DESC v6; // [rsp+40h] [rbp-28h] BYREF

  v2 = 0;
  if ( !*a1 )
  {
    v6.CPUAccessFlags = 0;
    v6.MiscFlags = 0;
    v6.StructureByteStride = 0;
    *(_QWORD *)&v5.SysMemPitch = 0LL;
    v5.pSysMem = a1 + 2;
    v6.ByteWidth = 272;
    v6.Usage = D3D11_USAGE_IMMUTABLE;
    v6.BindFlags = 4;
    v3 = CTypedConstantBufferBase::Initialize(a1, a2, &v6, &v5);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x44u);
  }
  return v2;
}
