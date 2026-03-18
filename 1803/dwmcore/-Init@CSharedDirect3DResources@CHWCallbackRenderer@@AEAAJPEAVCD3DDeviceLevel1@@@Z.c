/*
 * XREFs of ?Init@CSharedDirect3DResources@CHWCallbackRenderer@@AEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800BF934
 * Callers:
 *     ?Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z @ 0x1800BF768 (-Create@CSharedDirect3DResources@CHWCallbackRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV12@@Z.c)
 * Callees:
 *     ?Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x18005A128 (-Initialize@CD3DDynamicAppendBuffer@@QEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@?$CTypedConstantBuffer@V?$array@M$07@std@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFACC (-Initialize@-$CTypedConstantBuffer@V-$array@M$07@std@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFB44 (-Initialize@-$CTypedConstantBuffer@ULightNoOpConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D1.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFBC0 (-Initialize@-$CTypedConstantBuffer@ULightPSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_.c)
 *     ?Initialize@?$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_USAGE@@@Z @ 0x1800BFC38 (-Initialize@-$CTypedConstantBuffer@ULightVSConstantBuffer@@@@QEAAJPEAVCD3DDeviceLevel1@@W4D3D11_.c)
 *     ?Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D11_SUBRESOURCE_DATA@@@Z @ 0x1800BFCB0 (-Initialize@CTypedConstantBufferBase@@IEAAJPEAVCD3DDeviceLevel1@@AEBUD3D11_BUFFER_DESC@@AEBUD3D1.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CHWCallbackRenderer::CSharedDirect3DResources::Init(
        struct ID3D11Buffer **this,
        struct CD3DDeviceLevel1 *a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v9; // r9d
  unsigned int v10; // [rsp+20h] [rbp-40h]
  D3D11_SUBRESOURCE_DATA v11; // [rsp+30h] [rbp-30h] BYREF
  struct D3D11_BUFFER_DESC v12; // [rsp+40h] [rbp-20h] BYREF

  v4 = CD3DDynamicAppendBuffer::Initialize((CD3DDynamicAppendBuffer *)(this + 2), a2, 0x27100u);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 55;
    goto LABEL_25;
  }
  v4 = CD3DDynamicAppendBuffer::Initialize((CD3DDynamicAppendBuffer *)(this + 8), a2, 0x3E80u);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 56;
    goto LABEL_25;
  }
  v5 = 0;
  if ( !this[14] )
  {
    v12.Usage = D3D11_USAGE_DEFAULT;
    v12.CPUAccessFlags = 0;
    v12.MiscFlags = 0;
    v12.StructureByteStride = 0;
    *(_QWORD *)&v11.SysMemPitch = 0LL;
    v11.pSysMem = this + 16;
    v12.ByteWidth = 128;
    v12.BindFlags = 4;
    v6 = CTypedConstantBufferBase::Initialize(this + 14, a2, &v12, &v11);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x44u);
  }
  if ( v5 < 0 )
  {
    v10 = 57;
    goto LABEL_22;
  }
  v5 = 0;
  if ( !this[34] )
  {
    v12.Usage = D3D11_USAGE_DEFAULT;
    v12.CPUAccessFlags = 0;
    v12.MiscFlags = 0;
    v12.StructureByteStride = 0;
    *(_QWORD *)&v11.SysMemPitch = 0LL;
    v11.pSysMem = this + 36;
    v12.ByteWidth = 16;
    v12.BindFlags = 4;
    v7 = CTypedConstantBufferBase::Initialize(this + 34, a2, &v12, &v11);
    v5 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x44u);
  }
  if ( v5 < 0 )
  {
    v10 = 62;
LABEL_22:
    v9 = v5;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v10);
    return (unsigned int)v5;
  }
  v4 = CTypedConstantBuffer<LightVSConstantBuffer>::Initialize(this + 38, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 63;
    goto LABEL_25;
  }
  v4 = CTypedConstantBuffer<LightPSConstantBuffer>::Initialize(this + 74, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 64;
    goto LABEL_25;
  }
  v4 = CTypedConstantBuffer<LightNoOpConstantBuffer>::Initialize(this + 106, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 65;
    goto LABEL_25;
  }
  v4 = CTypedConstantBuffer<std::array<float,8>>::Initialize(this + 142, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    v10 = 66;
LABEL_25:
    v9 = v4;
    goto LABEL_26;
  }
  return (unsigned int)v5;
}
