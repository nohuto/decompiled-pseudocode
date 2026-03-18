/*
 * XREFs of ?CreateEmptyConstantBuffer@CHwLightCollectionBuffer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@1@Z @ 0x180199C18
 * Callers:
 *     ?GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@0@Z @ 0x180196B3C (-GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@0@Z.c)
 * Callees:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x18002150C (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801971E4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHwLightCollectionBuffer::CreateEmptyConstantBuffer(
        struct CD3DDeviceLevel1 ***this,
        struct CD3DConstantBuffer **a2,
        struct CD3DConstantBuffer **a3)
{
  enum D3D11_USAGE v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  enum D3D11_USAGE v9; // r8d
  int v10; // eax
  struct CD3DConstantBuffer *v11; // rax
  struct CD3DConstantBuffer *v12; // rax
  struct CD3DConstantBuffer *v14[2]; // [rsp+30h] [rbp-10h] BYREF
  struct CD3DConstantBuffer *v15; // [rsp+78h] [rbp+38h] BYREF

  v14[0] = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v14);
  v7 = CD3DConstantBuffer::Create(this, 0x110u, v6, &unk_1801FDB00, v14);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x42u);
  }
  else
  {
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v15);
    v10 = CD3DConstantBuffer::Create(this, 0xE0u, v9, &unk_1801FDC10, &v15);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x4Au);
    }
    else
    {
      v11 = v14[0];
      v14[0] = 0LL;
      *a2 = v11;
      v12 = v15;
      v15 = 0LL;
      *a3 = v12;
    }
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v15);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v14);
  return v8;
}
