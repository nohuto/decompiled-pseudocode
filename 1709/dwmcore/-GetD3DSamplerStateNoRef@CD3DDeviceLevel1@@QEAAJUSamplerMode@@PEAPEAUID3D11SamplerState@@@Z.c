/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180021E48
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18006CA90 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 *     ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBUSamplerMode@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1801AB588 (-RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPOR.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x1801D4B40 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x1801548F8 (-GetD3D11SamplerDesc@SamplerMode@@SA-AUD3D11_SAMPLER_DESC@@U1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rdi
  int v7; // eax
  __int64 D3D11SamplerDesc; // rax
  __int64 v9; // rcx
  __int64 v10; // r11
  __int64 v11; // rbx
  int v12; // eax
  __int16 v13; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 v14; // [rsp+32h] [rbp-47h]
  _BYTE v15[56]; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v16[3]; // [rsp+78h] [rbp-1h] BYREF
  int v17; // [rsp+A8h] [rbp+2Fh]

  v3 = 0;
  v5 = (__int64 *)(a1 + 8 * (a2[2] + 4 * (a2[1] + 4 * (unsigned int)*a2) + 174LL));
  if ( *v5 )
    goto LABEL_2;
  v13 = *(_WORD *)a2;
  if ( !HIBYTE(v13) || (v7 = 37120, !a2[2]) )
    v7 = 37632;
  if ( *(_DWORD *)(a1 + 756) < v7 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xDFDu);
    return v3;
  }
  v13 = *(_WORD *)a2;
  v14 = a2[2];
  D3D11SamplerDesc = SamplerMode::GetD3D11SamplerDesc(v15, &v13);
  v9 = *v5;
  v11 = *(_QWORD *)(v10 + 648);
  v16[0] = *(_OWORD *)D3D11SamplerDesc;
  v16[1] = *(_OWORD *)(D3D11SamplerDesc + 16);
  v16[2] = *(_OWORD *)(D3D11SamplerDesc + 32);
  v17 = *(_DWORD *)(D3D11SamplerDesc + 48);
  if ( v9 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64 *))(*(_QWORD *)v11 + 184LL))(v11, v16, v5);
  v3 = v12;
  if ( v12 >= 0 )
LABEL_2:
    *a3 = *v5;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xE01u);
  return v3;
}
