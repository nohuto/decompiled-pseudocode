/*
 * XREFs of ?RunShader@CSurfaceShaderComposer@@QEAAJPEBXIPEAPEAUID3D11ShaderResourceView@@IAEBUD3D11_VIEWPORT@@W4Enum@BlendMode@@AEBUSamplerMode@@_NPEAUID3D11RenderTargetView@@PEAUID3D11PixelShader@@PEBUtagRECT@@5@Z @ 0x1801E53F8
 * Callers:
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180176660 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801771EC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801E04C0 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801E087C (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18013DF28 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJUSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 */

__int64 __fastcall CSurfaceShaderComposer::RunShader(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        float *a6,
        int a7,
        __int16 *a8,
        char a9,
        __int64 a10,
        __int64 a11,
        __int128 *a12,
        char a13)
{
  __int64 v15; // rcx
  __int64 v17; // rbx
  int D3DSamplerStateNoRef; // eax
  unsigned int v19; // esi
  float v20; // xmm1_4
  float v21; // xmm0_4
  int v22; // eax
  float v23; // xmm1_4
  int v24; // eax
  _OWORD *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int16 v31; // [rsp+40h] [rbp-79h] BYREF
  char v32; // [rsp+42h] [rbp-77h]
  __int64 v33; // [rsp+50h] [rbp-69h] BYREF
  __int64 v34; // [rsp+58h] [rbp-61h] BYREF
  int v35; // [rsp+60h] [rbp-59h]
  __int64 v36; // [rsp+68h] [rbp-51h] BYREF
  __int64 v37; // [rsp+70h] [rbp-49h] BYREF
  __int64 v38; // [rsp+78h] [rbp-41h] BYREF
  _OWORD *v39; // [rsp+80h] [rbp-39h] BYREF
  __int128 v40; // [rsp+90h] [rbp-29h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-19h] BYREF

  v15 = *(_QWORD *)(a1 + 88);
  v35 = a7;
  v38 = a10;
  v36 = a11;
  v34 = 0LL;
  v33 = 0LL;
  v17 = *(_QWORD *)(v15 + 656);
  v37 = 0LL;
  v31 = *a8;
  v32 = *((_BYTE *)a8 + 2);
  v40 = 0LL;
  D3DSamplerStateNoRef = CD3DDeviceLevel1::GetD3DSamplerStateNoRef(v15, (unsigned __int8 *)&v31, &v37);
  v19 = D3DSamplerStateNoRef;
  if ( D3DSamplerStateNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D3DSamplerStateNoRef, 0xE9u);
  }
  else
  {
    if ( a12 )
    {
      v41 = *a12;
    }
    else
    {
      v20 = a6[1];
      v21 = *a6 + a6[2];
      LODWORD(v41) = (int)*a6;
      v22 = (int)v20;
      v23 = v20 + a6[3];
      DWORD1(v41) = v22;
      DWORD2(v41) = (int)v21;
      HIDWORD(v41) = (int)v23;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
    (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 1048LL))(v17, *(_QWORD *)(a1 + 64), &v34);
    if ( a9 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
             v17,
             &GUID_b4e3c01d_e79e_4637_91b2_510e9f4c9b8f,
             &v33) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 1160LL))(v33, 1LL);
    }
    v24 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _OWORD **))(*(_QWORD *)v17 + 112LL))(
            v17,
            *(_QWORD *)(a1 + 56),
            0LL,
            4LL,
            0,
            &v39);
    v19 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x116u);
    }
    else
    {
      v25 = v39;
      *v39 = *a2;
      v25[1] = a2[1];
      v25[2] = a2[2];
      v25[3] = a2[3];
      v25[4] = a2[4];
      v25[5] = a2[5];
      v25[6] = a2[6];
      v25[7] = a2[7];
      v25[8] = a2[8];
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 120LL))(v17, *(_QWORD *)(a1 + 56), 0LL);
      if ( a13 )
        (*(void (__fastcall **)(__int64, __int64, __int128 *, __int64))(*(_QWORD *)v17 + 1064LL))(v17, v38, &v41, 1LL);
      (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v17 + 72LL))(v17, v36, 0LL, 0LL);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 64LL))(v17, 0LL, a5, a4);
      v26 = *(_QWORD *)(a1 + 72);
      if ( v26 )
      {
        v27 = &v36;
        v28 = *(unsigned int *)(a1 + 80);
        v29 = 1LL;
        v36 = *(_QWORD *)(v26 + 120);
      }
      else
      {
        v27 = 0LL;
        v29 = 0LL;
        v28 = 0LL;
      }
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v17 + 128LL))(v17, v28, v29, v27);
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v17 + 80LL))(v17, 0LL, 1LL, &v37);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 280LL))(
        v17,
        *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8LL * v35 + 1208),
        0LL,
        0xFFFFFFFFLL);
      (*(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(*(_QWORD *)v17 + 264LL))(v17, 1LL, &v38, 0LL);
      (*(void (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v17 + 360LL))(v17, 1LL, &v41);
      (*(void (__fastcall **)(__int64, __int64, float *))(*(_QWORD *)v17 + 352LL))(v17, 1LL, a6);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 104LL))(v17, 6LL);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *))(*(_QWORD *)v17 + 64LL))(v17, 0LL, a5, &v40);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 264LL))(v17, 0LL, 0LL, 0LL);
      if ( v33 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 1160LL))(v33, 0LL);
    }
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 1048LL))(v17, v34, 0LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
  return v19;
}
