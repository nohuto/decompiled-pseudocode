/*
 * XREFs of ?GetCommonRenderingShadersNoRef@CD3DDeviceLevel1@@QEAAJAEBUCommonRenderingShaderDesc@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800795A0
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x1800771F0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXG.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x1800781F8 (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180079970 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800BB82C (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDeviceLevel1@@@Z @ 0x1800C4608 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V-$CMa.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x1800C51B4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x1800C59BC (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800C76D4 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$ArrayRef@$$CBE@@AEBU1@@Z @ 0x1801BBA0C (-TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA-AV-$ArrayRef@$$CBE@@AEBU1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetCommonRenderingShadersNoRef(
        CD3DDeviceLevel1 *this,
        const struct CommonRenderingShaderDesc *a2,
        enum VertexShaderKey::Enum *a3,
        struct ID3D11PixelShader **a4)
{
  int v6; // esi
  int v7; // r12d
  unsigned int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r9
  struct ID3D11PixelShader *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rbx
  unsigned int v17; // r15d
  const void *v18; // rbx
  int v19; // eax
  int v20; // eax
  __int64 v21; // rbx
  __int64 v23; // rax
  __int64 v24; // [rsp+30h] [rbp-D0h] BYREF
  struct CD3DPixelShader *v25; // [rsp+38h] [rbp-C8h] BYREF
  struct ID3D11PixelShader *v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+48h] [rbp-B8h]
  enum VertexShaderKey::Enum *v28; // [rsp+50h] [rbp-B0h]
  struct ID3D11PixelShader **v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h]
  char v32[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v33[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-40h]
  int v36; // [rsp+D0h] [rbp-30h] BYREF
  bool v37; // [rsp+D7h] [rbp-29h]
  bool v38; // [rsp+D9h] [rbp-27h]
  int v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+104h] [rbp+4h]
  int v41; // [rsp+10Ch] [rbp+Ch]

  v28 = a3;
  v29 = a4;
  LODWORD(v24) = 0;
  memset_0(&v36, 0, 0x30uLL);
  v6 = *(_DWORD *)a2;
  v39 = -1;
  v40 = 0LL;
  v41 = 0;
  v36 = *((_DWORD *)a2 + 1);
  v38 = (v6 & 4) != 0;
  *(_WORD *)((char *)&v40 + 5) = (v6 & 0x10) != 0;
  BYTE4(v40) = (v6 & 8) != 0;
  v7 = *((_DWORD *)this + 185);
  LODWORD(v40) = *((_DWORD *)a2 + 2);
  if ( v7 >= 37632 )
  {
    v39 = *((_DWORD *)a2 + 3);
    v37 = (v6 & 0x20) != 0;
  }
  v8 = v6 & 3;
  ShaderLinkingConfig::GetLookupKey(&v36, &v34, v8);
  v10 = 0LL;
  if ( *((int *)this + 306) <= 0 )
    goto LABEL_7;
  v11 = *((_QWORD *)this + 151);
  v12 = *((int *)this + 306);
  v9 = 0LL;
  while ( *(_QWORD *)v11 != v34 || *(_DWORD *)(v11 + 8) != (_DWORD)v35 )
  {
    v10 = (unsigned int)(v10 + 1);
    ++v9;
    v11 += 16LL;
    if ( v9 >= v12 )
      goto LABEL_7;
  }
  if ( (_DWORD)v10 == -1 )
  {
LABEL_7:
    v13 = 0LL;
    v26 = 0LL;
  }
  else
  {
    v21 = *((_QWORD *)this + 152) + 16LL * (int)v10;
    v13 = *(struct ID3D11PixelShader **)v21;
    v26 = v13;
    if ( v13 )
      ((void (__fastcall *)(struct ID3D11PixelShader *, __int64, __int64, __int64))v13->lpVtbl->AddRef)(
        v13,
        v10,
        v9,
        v12);
    v20 = *(_DWORD *)(v21 + 8);
    if ( v13 )
    {
      v15 = v24;
      goto LABEL_20;
    }
  }
  v24 = 0LL;
  v25 = (struct CD3DPixelShader *)0x200000000LL;
  if ( !*((_BYTE *)this + 636)
    || (v23 = CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(v32, a2),
        v17 = *(_DWORD *)(v23 + 8),
        v18 = *(const void **)v23,
        !v17) )
  {
    LOBYTE(v9) = v7 >= 37632;
    CommonRenderingShaderBody::GetShaderLinkingBody(v33, v8, v9);
    v31 = 0;
    v30 = 0LL;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v24);
    v14 = LinkShader((unsigned int)v33, (unsigned int)&v36, (unsigned int)&v30, (unsigned int)&v25, (__int64)&v24);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF6Cu);
      goto LABEL_30;
    }
    v16 = v24;
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v18 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  }
  v27 = VertexShaderDesc::ResolveKey(&v25);
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v25);
  v19 = CD3DPixelShader::Create(this, v18, v17, &v25);
  v15 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xF7Bu);
    Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v25);
LABEL_30:
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v24);
    goto LABEL_21;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v26, *((_QWORD *)v25 + 16));
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v25);
  if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData>>::Add(
                       (char *)this + 1208,
                       &v34,
                       &v26) )
  {
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v24);
    v20 = v27;
    v13 = v26;
LABEL_20:
    *(_DWORD *)v28 = v20;
    *v29 = v13;
    goto LABEL_21;
  }
  v15 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xF82u);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v24);
  v13 = v26;
LABEL_21:
  if ( v13 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v13->lpVtbl->Release)(v13);
  return v15;
}
