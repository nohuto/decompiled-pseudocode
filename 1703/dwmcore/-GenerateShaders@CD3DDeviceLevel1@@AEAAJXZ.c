/*
 * XREFs of ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800781F8
 * Callers:
 *     ?Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z @ 0x180078824 (-Init@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@W4D3D_FEATURE_LEVEL@@PEAVCDXGIAdapterLimited@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureHDRConversionResources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800784C4 (-EnsureHDRConversionResources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0 (-GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800BB82C (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?GetBytecode@VertexShaderDesc@@SA?AV?$ArrayRef@$$CBE@@W4Enum@VertexShaderKey@@@Z @ 0x1800BDA78 (-GetBytecode@VertexShaderDesc@@SA-AV-$ArrayRef@$$CBE@@W4Enum@VertexShaderKey@@@Z.c)
 *     ?GetInputLayout@VertexFormatDesc@@SA?AV?$ArrayRef@$$CBUD3D11_INPUT_ELEMENT_DESC@@@@W4Enum@VertexFormatKey@@@Z @ 0x1800C9A14 (-GetInputLayout@VertexFormatDesc@@SA-AV-$ArrayRef@$$CBUD3D11_INPUT_ELEMENT_DESC@@@@W4Enum@Vertex.c)
 *     ?GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z @ 0x1800C9F2C (-GetD3D11DepthStencilDesc@DepthStencilMode@@YAAEBUD3D11_DEPTH_STENCIL_DESC@@W4Enum@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GenerateShaders(CD3DDeviceLevel1 *this)
{
  unsigned int i; // r14d
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int j; // edi
  int CommonRenderingShadersNoRef; // eax
  int v8; // eax
  unsigned int k; // r14d
  unsigned int v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rdi
  char *v15; // rbx
  int v16; // eax
  __int64 v17; // r14
  __int64 v18; // rdi
  char *v19; // rbx
  int v20; // eax
  __int64 v21; // r14
  _QWORD *v22; // rdi
  char *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 D3D11DepthStencilDesc; // rax
  __int64 v27; // r9
  int v28; // eax
  int v29; // eax
  __int64 v31; // [rsp+40h] [rbp-20h] BYREF
  int v32; // [rsp+48h] [rbp-18h]
  int v33; // [rsp+4Ch] [rbp-14h]
  __int64 v34; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-8h]
  BOOL v36; // [rsp+88h] [rbp+28h] BYREF
  int v37; // [rsp+8Ch] [rbp+2Ch]
  struct ID3D11PixelShader *v38; // [rsp+90h] [rbp+30h] BYREF

  for ( i = 0; i < 8; ++i )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_q(this, &EVTDESC_D3DSHADER_CREATE_Start, 0LL);
    VertexShaderDesc::GetBytecode(&v31, i);
    v3 = *((_QWORD *)this + 80);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 8 * i + 1144);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char *))(*(_QWORD *)v3 + 96LL))(
           v3,
           v31,
           v32,
           0LL,
           (char *)this + 8 * i + 1144);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2B6u);
      return v5;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_q(this, &EVTDESC_D3DSHADER_CREATE_Stop, 0LL);
  }
  for ( j = 0; j < 4; ++j )
  {
    v33 = -1;
    v31 = j;
    v32 = 0;
    CommonRenderingShadersNoRef = CD3DDeviceLevel1::GetCommonRenderingShadersNoRef(
                                    this,
                                    (const struct CommonRenderingShaderDesc *)&v31,
                                    (enum VertexShaderKey::Enum *)&v36,
                                    &v38);
    v5 = CommonRenderingShadersNoRef;
    if ( CommonRenderingShadersNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, CommonRenderingShadersNoRef, 0x2C2u);
      return v5;
    }
    if ( (v31 & 1) != 0 )
    {
      LODWORD(v31) = v31 | 4;
      v8 = CD3DDeviceLevel1::GetCommonRenderingShadersNoRef(
             this,
             (const struct CommonRenderingShaderDesc *)&v31,
             (enum VertexShaderKey::Enum *)&v36,
             &v38);
      v5 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2C8u);
        return v5;
      }
    }
  }
  for ( k = 0; k < 4; ++k )
  {
    VertexFormatDesc::GetInputLayout(&v34, k);
    v36 = k - 2 <= 1;
    v37 = ((k - 1) & 0xFFFFFFFD) != 0 ? 2 : 4;
    v10 = VertexShaderDesc::ResolveKey(&v36);
    VertexShaderDesc::GetBytecode(&v31, v10);
    v11 = *((_QWORD *)this + 80);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((char *)this + 8 * k + 1264);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD, char *))(*(_QWORD *)v11 + 88LL))(
            v11,
            v34,
            v35,
            v31,
            v32,
            (char *)this + 8 * k + 1264);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x2D6u);
      return v5;
    }
  }
  v13 = 0LL;
  do
  {
    v14 = *((_QWORD *)this + 80);
    v15 = (char *)this + 8 * v13;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(v15 + 1296);
    v16 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v14 + 160LL))(
            v14,
            &byte_1801F9DF0[264 * (int)v13],
            v15 + 1296);
    v5 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2DDu);
      return v5;
    }
    v13 = (unsigned int)(v13 + 1);
  }
  while ( (unsigned int)v13 < 0x18 );
  v17 = 0LL;
  do
  {
    v18 = *((_QWORD *)this + 80);
    v19 = (char *)this + 8 * v17;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(v19 + 1872);
    v20 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v18 + 176LL))(
            v18,
            &byte_1801FB6B0[40 * (int)v17],
            v19 + 1872);
    v5 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x2E4u);
      return v5;
    }
    v17 = (unsigned int)(v17 + 1);
  }
  while ( !(_DWORD)v17 );
  v21 = 0LL;
  do
  {
    v22 = (_QWORD *)*((_QWORD *)this + 80);
    v23 = (char *)this + 8 * v21;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(v23 + 1880);
    D3D11DepthStencilDesc = DepthStencilMode::GetD3D11DepthStencilDesc((unsigned int)v21, v24, v25, *v22);
    v28 = (*(__int64 (__fastcall **)(_QWORD *, __int64, char *))(v27 + 168))(v22, D3D11DepthStencilDesc, v23 + 1880);
    v5 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x2EBu);
      return v5;
    }
    v21 = (unsigned int)(v21 + 1);
  }
  while ( (unsigned int)v21 < 4 );
  v29 = CD3DDeviceLevel1::EnsureHDRConversionResources(this);
  v5 = v29;
  if ( v29 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x2EEu);
  return v5;
}
