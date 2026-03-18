/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18013DF28
 * Callers:
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBUSamplerMode@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1801E53F8 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1802172C0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x1800C92D8 (-GetD3D11SamplerDesc@SamplerMode@@SA-AUD3D11_SAMPLER_DESC@@U1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rsi
  int v7; // eax
  __int64 D3D11SamplerDesc; // rax
  __int64 v9; // rcx
  __int64 v10; // r11
  int v11; // eax
  __int16 v13; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int8 v14; // [rsp+32h] [rbp-57h]
  int v15[14]; // [rsp+40h] [rbp-49h] BYREF
  _OWORD v16[3]; // [rsp+78h] [rbp-11h] BYREF
  int v17; // [rsp+A8h] [rbp+1Fh]

  v4 = 0;
  v6 = a2[2] + 4 * (a2[1] + 4 * (unsigned int)*a2);
  if ( *(_QWORD *)(a1 + 8 * v6 + 1400) )
    goto LABEL_10;
  v13 = *(_WORD *)a2;
  if ( !HIBYTE(v13) || (v7 = 37120, !a2[2]) )
    v7 = 37632;
  if ( *(_DWORD *)(a1 + 756) < v7 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xEA4u);
    return v4;
  }
  v13 = *(_WORD *)a2;
  v14 = a2[2];
  D3D11SamplerDesc = SamplerMode::GetD3D11SamplerDesc(v15, &v13);
  v9 = *(_QWORD *)(a1 + 648);
  v16[0] = *(_OWORD *)D3D11SamplerDesc;
  v16[1] = *(_OWORD *)(D3D11SamplerDesc + 16);
  v16[2] = *(_OWORD *)(D3D11SamplerDesc + 32);
  v17 = *(_DWORD *)(D3D11SamplerDesc + 48);
  v11 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)v9 + 184LL))(v9, v16, v10 + 1400);
  v4 = v11;
  if ( v11 >= 0 )
LABEL_10:
    *a3 = *(_QWORD *)(a1 + 8 * v6 + 1400);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xEA8u);
  return v4;
}
