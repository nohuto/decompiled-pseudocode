/*
 * XREFs of ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@_NPEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x180196DA8
 * Callers:
 *     ?HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z @ 0x1801A0D70 (-HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800C51B4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x1800C59BC (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetConversionShader@ColorConversion@@SA?AW4ShaderType@1@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_ALPHA_MODE@@0@Z @ 0x18015FCD0 (-GetConversionShader@ColorConversion@@SA-AW4ShaderType@1@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_ALPHA_M.c)
 *     ??$As@UID3D11DeviceContext3@@@?$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UID3D11DeviceContext3@@@WRL@Microsoft@@@Details@12@@Z @ 0x180195EC8 (--$As@UID3D11DeviceContext3@@@-$ComPtr@UID3D11DeviceContext1@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180195F4C (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?Add@?$CMap@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEAAHAEBIAEBV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@Z @ 0x180195FC0 (-Add@-$CMap@IV-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@UID3D11.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@AEBI@Z @ 0x180197204 (-Lookup@-$CMap@IV-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@UID3.c)
 *     ?CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D10Blob@@@Z @ 0x1801BAE20 (-CreateColorConversionShader@@YAJW4D3D_FEATURE_LEVEL@@W4ShaderType@ColorConversion@@PEAPEAUID3D1.c)
 */

__int64 __fastcall CD3DDeviceLevel1::HDRConvert(
        CD3DDeviceLevel1 *this,
        struct ID3D11ShaderResourceView *a2,
        int a3,
        int a4,
        enum DXGI_ALPHA_MODE a5,
        enum DXGI_COLOR_SPACE_TYPE a6,
        bool a7,
        struct ID3D11RenderTargetView *a8,
        enum DXGI_COLOR_SPACE_TYPE a9,
        struct tagRECT *a10)
{
  _QWORD *v10; // r14
  __int64 v11; // rbx
  unsigned int v13; // edi
  unsigned int ConversionShader; // eax
  unsigned int v16; // r15d
  char *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rdi
  const void *v23; // rax
  int v24; // eax
  struct tagRECT *v25; // r8
  __int64 v26; // rcx
  __int64 v28; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v29; // [rsp+38h] [rbp-89h] BYREF
  struct CD3DPixelShader *v30; // [rsp+40h] [rbp-81h] BYREF
  __int64 v31; // [rsp+48h] [rbp-79h] BYREF
  __int64 v32; // [rsp+50h] [rbp-71h] BYREF
  __int64 v33; // [rsp+58h] [rbp-69h] BYREF
  int v34; // [rsp+60h] [rbp-61h]
  struct ID3D11RenderTargetView *v35; // [rsp+68h] [rbp-59h] BYREF
  struct ID3D11ShaderResourceView *v36; // [rsp+70h] [rbp-51h] BYREF
  struct tagRECT *v37; // [rsp+78h] [rbp-49h]
  __int64 v38; // [rsp+80h] [rbp-41h] BYREF
  __int64 v39; // [rsp+88h] [rbp-39h] BYREF
  int v40; // [rsp+90h] [rbp-31h]
  int v41; // [rsp+94h] [rbp-2Dh]
  __int64 v42; // [rsp+98h] [rbp-29h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-21h]
  __int64 v44; // [rsp+A8h] [rbp-19h]

  v10 = (_QWORD *)((char *)this + 648);
  v11 = *((_QWORD *)this + 81);
  v35 = a8;
  v37 = a10;
  v13 = 0;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v34 = a4;
  v36 = a2;
  v33 = 0LL;
  v32 = 0LL;
  v31 = 0LL;
  v39 = 0LL;
  v40 = a3;
  v41 = a4;
  v38 = 0LL;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v33);
  (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 1048LL))(v11, *((_QWORD *)this + 157), &v33);
  if ( a7 && (int)Microsoft::WRL::ComPtr<ID3D11DeviceContext1>::As<ID3D11DeviceContext3>(v10, &v32) >= 0 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 1160LL))(v32, 1LL);
  (*(void (__fastcall **)(_QWORD, struct ID3D11RenderTargetView *))(*(_QWORD *)*v10 + 944LL))(*v10, v35);
  ConversionShader = ColorConversion::GetConversionShader(1, a5, 12);
  v16 = ConversionShader;
  if ( !ConversionShader )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xA26u);
    goto LABEL_21;
  }
  v29 = ConversionShader;
  v17 = (char *)CMap<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Lookup(
                  (char *)this + 1912,
                  &v28,
                  &v29);
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v31, v17);
  v18 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v31;
  if ( v31 )
    goto LABEL_14;
  v28 = 0LL;
  v30 = 0LL;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v28);
  v20 = CreateColorConversionShader(*((unsigned int *)this + 185), v16, &v28);
  v13 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xA2Fu);
    goto LABEL_23;
  }
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v30);
  v21 = v28;
  v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
  v23 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
  v24 = CD3DPixelShader::Create(this, v23, v22, &v30);
  v13 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xA35u);
LABEL_23:
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v30);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v28);
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v31, *((_QWORD *)v30 + 16));
  v29 = v16;
  if ( (unsigned int)CMap<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<ID3D11PixelShader>>>::Add(
                       (__int64)this + 1912,
                       &v29,
                       &v31) )
  {
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v30);
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v28);
    v19 = v31;
LABEL_14:
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v10 + 72LL))(*v10, v19, 0LL, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, struct ID3D11ShaderResourceView **))(*(_QWORD *)*v10 + 64LL))(
      *v10,
      0LL,
      1LL,
      &v36);
    (*(void (__fastcall **)(_QWORD, __int64, struct ID3D11RenderTargetView **, _QWORD))(*(_QWORD *)*v10 + 264LL))(
      *v10,
      1LL,
      &v35,
      0LL);
    v25 = (struct tagRECT *)&v39;
    if ( v37 )
      v25 = v37;
    (*(void (__fastcall **)(_QWORD, __int64, struct tagRECT *))(*(_QWORD *)*v10 + 360LL))(*v10, 1LL, v25);
    v26 = *v10;
    *(float *)&v43 = (float)a3;
    *((float *)&v43 + 1) = (float)v34;
    *((float *)&v44 + 1) = FLOAT_1_0;
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v26 + 352LL))(v26, 1LL, &v42);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v10 + 104LL))(*v10, 6LL, 0LL);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(*(_QWORD *)*v10 + 64LL))(*v10, 0LL, 1LL, &v38);
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)*v10 + 264LL))(*v10, 0LL, 0LL, 0LL);
    if ( v32 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v32 + 1160LL))(v32, 0LL);
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)*v10 + 1048LL))(*v10, v33, 0LL);
    goto LABEL_19;
  }
  v13 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA3Au);
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v30);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v28);
  v19 = v31;
LABEL_19:
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v33);
  return v13;
}
