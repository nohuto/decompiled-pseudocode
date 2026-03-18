/*
 * XREFs of ?GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@0@Z @ 0x180196B3C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Buffer@@@Z @ 0x180195F04 (--4-$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11Buffer@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801971E4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateEmptyConstantBuffer@CHwLightCollectionBuffer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@1@Z @ 0x180199C18 (-CreateEmptyConstantBuffer@CHwLightCollectionBuffer@@SAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstan.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetEmptyLightConstantBufferNoRef(
        CD3DDeviceLevel1 *this,
        struct ID3D11Buffer **a2,
        struct ID3D11Buffer **a3)
{
  unsigned int v3; // ebx
  __int64 *v4; // rsi
  int v8; // eax
  struct CD3DConstantBuffer *v10; // [rsp+60h] [rbp+30h] BYREF
  struct CD3DConstantBuffer *v11; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0;
  v4 = (__int64 *)((char *)this + 1936);
  *a2 = 0LL;
  *a3 = 0LL;
  if ( !*((_QWORD *)this + 242) )
  {
    v11 = 0LL;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v11);
    v8 = CHwLightCollectionBuffer::CreateEmptyConstantBuffer(this, &v11, &v10);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x577u);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v10);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v11);
      return v3;
    }
    Microsoft::WRL::ComPtr<ID3D11Buffer>::operator=(v4, *((_QWORD *)v11 + 16));
    Microsoft::WRL::ComPtr<ID3D11Buffer>::operator=((__int64 *)this + 243, *((_QWORD *)v10 + 16));
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v11);
  }
  *a2 = (struct ID3D11Buffer *)*v4;
  *a3 = (struct ID3D11Buffer *)*((_QWORD *)this + 243);
  return v3;
}
