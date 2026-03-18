/*
 * XREFs of ?GetCompositingPixelShaderNoRef@CD3DDeviceLevel1@@AEAAJV?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801A7528
 * Callers:
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801A7A60 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x1801A7E1C (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x18007EF3C (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18007FED4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x180088984 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Add@?$CMap@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@W4CompositingShaderLookupKey@@V?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBW4CompositingShaderLookupKey@@AEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x1801A5EF0 (-Add@-$CMap@W4CompositingShaderLookupKey@@V-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V-$CMapE.c)
 *     ?CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x1801D4E10 (-CreateCompositingShader@@YAJW4D3D_FEATURE_LEVEL@@V-$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COL.c)
 *     ?GetCompositingShaderLookupKey@@YA?AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V?$span@$$CBUPixelFormatInfo@@@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801D5320 (-GetCompositingShaderLookupKey@@YA-AW4CompositingShaderLookupKey@@W4D3D_FEATURE_LEVEL@@V-$span@$.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetCompositingPixelShaderNoRef(
        struct CD3DDeviceLevel1 *this,
        __int128 *a2,
        unsigned int a3,
        __int64 *a4)
{
  unsigned int v8; // edi
  __int64 CompositingShaderLookupKey; // r11
  int v10; // eax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rbx
  __int128 v14; // xmm0
  signed int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // rdi
  const void *v18; // rax
  signed int v19; // eax
  __int64 v21[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int128 v23; // [rsp+50h] [rbp-10h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF
  struct CD3DPixelShader *v25; // [rsp+A8h] [rbp+48h] BYREF

  v22 = *a2;
  v8 = 0;
  CompositingShaderLookupKey = GetCompositingShaderLookupKey(*((unsigned int *)this + 189), &v22);
  *(_QWORD *)&v22 = CompositingShaderLookupKey;
  v10 = 0;
  if ( *((int *)this + 288) <= 0 )
  {
LABEL_5:
    v10 = -1;
  }
  else
  {
    v11 = 0LL;
    v12 = (_QWORD *)*((_QWORD *)this + 142);
    while ( *v12 != CompositingShaderLookupKey )
    {
      ++v10;
      ++v11;
      ++v12;
      if ( v11 >= *((int *)this + 288) )
        goto LABEL_5;
    }
  }
  if ( v10 == -1 )
  {
    v21[0] = 0LL;
  }
  else
  {
    v21[0] = *(_QWORD *)(*((_QWORD *)this + 143) + 8LL * v10);
    v13 = v21[0];
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v21);
    if ( v13 )
      goto LABEL_14;
  }
  v14 = *a2;
  v24 = 0LL;
  v23 = v14;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
  v15 = CreateCompositingShader(*((unsigned int *)this + 189), &v23, a3, &v24);
  v8 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x1039u);
    goto LABEL_19;
  }
  v25 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v25);
  v16 = v24;
  v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
  v18 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  v19 = CD3DPixelShader::Create((struct CD3DDeviceLevel1 ***)this, v18, v17, &v25);
  v8 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x103Cu);
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(v21, *((_QWORD *)v25 + 15));
  if ( !(unsigned int)CMap<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<enum CompositingShaderLookupKey,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
                        (__int64)this + 1136,
                        &v22,
                        v21) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1042u);
LABEL_17:
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v25);
LABEL_19:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v25);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v24);
  v13 = v21[0];
LABEL_14:
  *a4 = v13;
LABEL_15:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(v21);
  return v8;
}
