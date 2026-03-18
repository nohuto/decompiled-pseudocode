/*
 * XREFs of ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x180017E00
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetD3D11SamplerDesc@SamplerMode@@SA?AUD3D11_SAMPLER_DESC@@U1@@Z @ 0x1800CA76C (-GetD3D11SamplerDesc@SamplerMode@@SA-AUD3D11_SAMPLER_DESC@@U1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetD3DSamplerStateNoRef(__int64 a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r14
  int v8; // eax
  __int64 D3D11SamplerDesc; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  __int16 v13; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int8 v14; // [rsp+32h] [rbp-57h]
  _BYTE v15[56]; // [rsp+40h] [rbp-49h] BYREF
  _OWORD v16[3]; // [rsp+78h] [rbp-11h] BYREF
  int v17; // [rsp+A8h] [rbp+1Fh]

  v3 = 0;
  v6 = a2[2] + 4 * (a2[1] + 4 * (unsigned int)*a2);
  if ( *(_QWORD *)(a1 + 8 * v6 + 1488) )
    goto LABEL_2;
  v13 = *(_WORD *)a2;
  if ( !HIBYTE(v13) || (v8 = 37120, !a2[2]) )
    v8 = 37632;
  if ( *(_DWORD *)(a1 + 740) < v8 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD65u);
    return v3;
  }
  v13 = *(_WORD *)a2;
  v14 = a2[2];
  D3D11SamplerDesc = SamplerMode::GetD3D11SamplerDesc(v15, &v13);
  v10 = *(_QWORD *)(a1 + 640);
  v11 = a1 + 8 * v6;
  v16[0] = *(_OWORD *)D3D11SamplerDesc;
  v16[1] = *(_OWORD *)(D3D11SamplerDesc + 16);
  v16[2] = *(_OWORD *)(D3D11SamplerDesc + 32);
  v17 = *(_DWORD *)(D3D11SamplerDesc + 48);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(v11 + 1488);
  v12 = (*(__int64 (__fastcall **)(__int64, _OWORD *, __int64))(*(_QWORD *)v10 + 184LL))(v10, v16, v11 + 1488);
  v3 = v12;
  if ( v12 >= 0 )
LABEL_2:
    *a3 = *(_QWORD *)(a1 + 8 * v6 + 1488);
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xD69u);
  return v3;
}
