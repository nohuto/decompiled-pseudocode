/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18008E060 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?GetColorSpace@CRenderTargetBitmap@@UEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x180016450 (-GetColorSpace@CRenderTargetBitmap@@UEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180016590 (-GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJAEBURenderTargetInfo@@PEAPEAUID3D11S.c)
 *     ?GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x180016750 (-GetCurrentRenderingRealization@CRenderTargetImageSource@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x180017118 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 *     ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800174C0 (-GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@V.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180017E00 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsColorConversionRequired@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@0@Z @ 0x18007ADD4 (-IsColorConversionRequired@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetConversionShader@ColorConversion@@SA?AW4ShaderType@1@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_ALPHA_MODE@@0@Z @ 0x18015FCD0 (-GetConversionShader@ColorConversion@@SA-AW4ShaderType@1@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_ALPHA_M.c)
 *     ?GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@0@Z @ 0x180196B3C (-GetEmptyLightConstantBufferNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D11Buffer@@0@Z.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        __int64 a1,
        struct CD3DDeviceLevel1 *a2,
        struct ID3D11Buffer *a3,
        DXGI_COLOR_SPACE_TYPE a4,
        _DWORD *a5,
        int a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 v8; // rsi
  __int64 v11; // r12
  unsigned int v12; // edi
  unsigned int v13; // eax
  _BYTE *v14; // rcx
  __int16 *v15; // r8
  float *v16; // r14
  __int64 v17; // r12
  CRenderTargetImageSource *v18; // rbx
  __int64 (__fastcall *v19)(CRenderTargetImageSource *__hidden, struct IBitmapRealization **); // rax
  int v20; // eax
  unsigned int v21; // edi
  __int64 v22; // rbx
  struct ID3D11ShaderResourceView **v23; // r8
  HRESULT (__stdcall *GetPrivateData)(ID3D11Buffer *, const GUID *const, UINT *, void *); // rax
  int BitmapShaderResourceViewNoRef; // eax
  int D3DSamplerStateNoRef; // eax
  __int64 (*GetType)(void); // rax
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  DXGI_COLOR_SPACE_TYPE v29; // edi
  enum DXGI_COLOR_SPACE_TYPE v30; // ebx
  float v31; // xmm1_4
  int Shaders; // eax
  struct ID3D11Buffer *v33; // rbx
  int v34; // r14d
  int ConstantBuffer; // eax
  unsigned int v37; // eax
  int EmptyLightConstantBufferNoRef; // eax
  char v39; // [rsp+40h] [rbp-C0h]
  struct ID3D11Buffer *v40; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v41; // [rsp+50h] [rbp-B0h] BYREF
  char v42; // [rsp+52h] [rbp-AEh]
  unsigned int v43; // [rsp+60h] [rbp-A0h]
  int v44; // [rsp+64h] [rbp-9Ch] BYREF
  struct ID3D11Buffer *v45; // [rsp+68h] [rbp-98h] BYREF
  struct ID3D11Buffer *v46; // [rsp+70h] [rbp-90h] BYREF
  DXGI_COLOR_SPACE_TYPE v47; // [rsp+78h] [rbp-88h]
  __int16 *v48; // [rsp+80h] [rbp-80h]
  _BYTE *v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 v51; // [rsp+98h] [rbp-68h]
  _DWORD *v52; // [rsp+A0h] [rbp-60h]
  _DWORD *v53; // [rsp+A8h] [rbp-58h]
  _BYTE v54[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v55[40]; // [rsp+B8h] [rbp-48h] BYREF
  int v56; // [rsp+E0h] [rbp-20h]
  int v57; // [rsp+E4h] [rbp-1Ch]
  int v58; // [rsp+E8h] [rbp-18h]
  int v59; // [rsp+ECh] [rbp-14h]
  _QWORD v60[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v61[4]; // [rsp+110h] [rbp+10h] BYREF

  v8 = *((_QWORD *)a2 + 81);
  v11 = a7;
  v46 = 0LL;
  v45 = a3;
  v47 = a4;
  v52 = a5;
  v51 = a7;
  v53 = a8;
  memset_0(v54, 0, 0x30uLL);
  v39 = 0;
  v57 = 0;
  v59 = 0;
  v58 = a6 == 22;
  v56 = *a5;
  BYTE1(v58) = *(_BYTE *)(a7 + 120);
  v12 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 108LL);
  v13 = 0;
  v44 = v12;
  v43 = 0;
  if ( !v12 )
  {
LABEL_22:
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v8 + 64LL))(v8, 0LL, v12, v60);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v8 + 80LL))(v8, 0LL, v12, v61);
    Shaders = CRenderingTechnique::GetShaders(
                *(CRenderingTechnique **)(a1 + 16),
                a2,
                (const struct ShaderLinkingConfig *)v54,
                (enum VertexShaderKey::Enum *)&v44,
                (struct ID3D11PixelShader **)&v46);
    v33 = v46;
    v21 = Shaders;
    if ( Shaders < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Shaders, 0x8Fu);
    }
    else
    {
      v34 = v44;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v8 + 88LL))(
        v8,
        *((_QWORD *)a2 + v44 + 143),
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64, struct ID3D11Buffer *, _QWORD, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, v33, 0LL, 0LL);
      if ( v39 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**((_QWORD **)a2 + 81) + 384LL))(
          *((_QWORD *)a2 + 81),
          *(_QWORD *)(v11 + 112),
          0LL,
          0LL,
          v11,
          0,
          0);
      v40 = 0LL;
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v40);
      ConstantBuffer = CRenderingTechnique::GetConstantBuffer(*(CRenderingTechnique **)(a1 + 16), a2, &v40);
      v21 = ConstantBuffer;
      if ( ConstantBuffer < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ConstantBuffer, 0x9Du);
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v40);
      }
      else
      {
        if ( v40 )
          (*(void (__fastcall **)(__int64, _QWORD, __int64, struct ID3D11Buffer **))(*(_QWORD *)v8 + 128LL))(
            v8,
            0LL,
            1LL,
            &v40);
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v40);
        if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 16) + 112LL) & 2) == 0 || *v52 != -1)
          && (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 112LL) & 4) == 0 )
        {
          goto LABEL_30;
        }
        EmptyLightConstantBufferNoRef = CD3DDeviceLevel1::GetEmptyLightConstantBufferNoRef(a2, &v46, &v45);
        v21 = EmptyLightConstantBufferNoRef;
        if ( EmptyLightConstantBufferNoRef >= 0 )
        {
          if ( v46 )
            (*(void (__fastcall **)(__int64, __int64, __int64, struct ID3D11Buffer **))(*(_QWORD *)v8 + 56LL))(
              v8,
              2LL,
              1LL,
              &v46);
          if ( v45 )
            (*(void (__fastcall **)(__int64, __int64, __int64, struct ID3D11Buffer **))(*(_QWORD *)v8 + 128LL))(
              v8,
              1LL,
              1LL,
              &v45);
LABEL_30:
          *v53 = v34;
          goto LABEL_31;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, EmptyLightConstantBufferNoRef, 0xACu);
      }
    }
LABEL_31:
    if ( v33 )
      ((void (__fastcall *)(struct ID3D11Buffer *))v33->lpVtbl->Release)(v33);
    return v21;
  }
  v14 = v55;
  v15 = (__int16 *)(a1 + 56);
  v49 = v55;
  v16 = (float *)(a7 + 16);
  v48 = (__int16 *)(a1 + 56);
  v17 = 0LL;
  while ( 1 )
  {
    v50 = (int)v13;
    v18 = (CRenderTargetImageSource *)(*(_QWORD *)(a1 + 8LL * (int)v13 + 24) & 0xFFFFFFFFFFFFFFFEuLL);
    if ( !v18 )
    {
      v60[v17] = 0LL;
      v61[v17] = 0LL;
      *v14 = 1;
      goto LABEL_20;
    }
    v40 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v40);
    v19 = *(__int64 (__fastcall **)(CRenderTargetImageSource *__hidden, struct IBitmapRealization **))(*(_QWORD *)v18 + 72LL);
    v20 = v19 == CRenderTargetImageSource::GetCurrentRenderingRealization
        ? CRenderTargetImageSource::GetCurrentRenderingRealization(v18, (struct IBitmapRealization **)&v40)
        : v19(v18, (struct IBitmapRealization **)&v40);
    v21 = v20;
    if ( v20 < 0 )
      break;
    v22 = v43;
    v23 = (struct ID3D11ShaderResourceView **)&v60[v43];
    GetPrivateData = v40->lpVtbl[1].GetPrivateData;
    if ( (char *)GetPrivateData == (char *)CRenderTargetBitmap::GetBitmapShaderResourceViewNoRef )
      BitmapShaderResourceViewNoRef = CRenderTargetBitmap::GetBitmapShaderResourceViewNoRef(
                                        (CRenderTargetBitmap *)v40,
                                        (const struct RenderTargetInfo *)v45,
                                        v23);
    else
      BitmapShaderResourceViewNoRef = ((__int64 (__fastcall *)(struct ID3D11Buffer *, struct ID3D11Buffer *, struct ID3D11ShaderResourceView **))GetPrivateData)(
                                        v40,
                                        v45,
                                        v23);
    v21 = BitmapShaderResourceViewNoRef;
    if ( BitmapShaderResourceViewNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapShaderResourceViewNoRef, 0x62u);
      goto LABEL_41;
    }
    v41 = *v48;
    v42 = *((_BYTE *)v48 + 2);
    D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef(a2, &v41, &v61[v22]);
    v21 = D3DSamplerStateNoRef;
    if ( D3DSamplerStateNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSamplerStateNoRef, 0x66u);
      goto LABEL_41;
    }
    GetType = (__int64 (*)(void))v40->lpVtbl->GetType;
    if ( (char *)GetType == (char *)CRenderTargetBitmap::GetColorSpace )
      ColorSpace = CRenderTargetBitmap::GetColorSpace((CRenderTargetBitmap *)v40);
    else
      ColorSpace = (unsigned int)GetType();
    v29 = v47;
    v30 = ColorSpace;
    if ( ColorConversion::IsColorConversionRequired(ColorSpace, v47) )
    {
      v37 = ((__int64 (__fastcall *)(struct ID3D11Buffer *))v40->lpVtbl->SetPrivateDataInterface)(v40);
      *((_DWORD *)v49 - 2) = ColorConversion::GetConversionShader((unsigned int)v30, v37, (unsigned int)v29);
    }
    if ( (*(_BYTE *)(a1 + 8 * v50 + 24) & 1) != 0 )
      v31 = 0.0;
    else
      v31 = FLOAT_1_0;
    if ( *v16 != v31 )
    {
      *v16 = v31;
      v39 = 1;
    }
    Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v40);
    v13 = v43;
    v14 = v49;
    v15 = v48;
    v12 = v44;
LABEL_20:
    ++v13;
    v15 = (__int16 *)((char *)v15 + 3);
    v14 += 12;
    v43 = v13;
    ++v16;
    v48 = v15;
    ++v17;
    v49 = v14;
    if ( v13 >= v12 )
    {
      v11 = v51;
      goto LABEL_22;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x5Eu);
LABEL_41:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v40);
  return v21;
}
