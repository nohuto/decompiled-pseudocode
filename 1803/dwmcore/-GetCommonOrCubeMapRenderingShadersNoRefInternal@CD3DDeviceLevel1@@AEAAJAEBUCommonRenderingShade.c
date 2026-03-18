/*
 * XREFs of ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x180074CF0
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180074520 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180075ADC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1802172C0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18001F4A4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180076AE0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800C5F64 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x1800C68C0 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800D5B30 (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDeviceLevel1@@@Z @ 0x1800D5E84 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V-$CMa.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE$0?0@gsl@@AEBU1@@Z @ 0x180218914 (-TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA-AV-$span@$$CBE$0-0@gsl@@AEBU1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
        CD3DDeviceLevel1 *this,
        const struct CommonRenderingShaderDesc *a2,
        char a3,
        enum VertexShaderKey::Enum *a4,
        struct ID3D11PixelShader **a5)
{
  __int64 v8; // rcx
  __int128 *v9; // rax
  int v10; // ebx
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  char v13; // al
  int v14; // r12d
  unsigned int v15; // ebx
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi
  struct ID3D11PixelShader *v22; // rdi
  int v23; // eax
  unsigned int v24; // ebx
  __int64 ShaderLinkingBody; // rax
  int v27; // eax
  __int64 *v28; // rbx
  void *v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // esi
  int v32; // eax
  __int64 *v33; // [rsp+30h] [rbp-D0h] BYREF
  struct CD3DPixelShader *v34; // [rsp+38h] [rbp-C8h] BYREF
  void *v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11PixelShader *v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+58h] [rbp-A8h]
  enum VertexShaderKey::Enum *v38; // [rsp+60h] [rbp-A0h]
  struct ID3D11PixelShader **v39; // [rsp+68h] [rbp-98h]
  _OWORD v40[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  char v42[56]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int128 v45; // [rsp+F0h] [rbp-10h] BYREF
  bool v46; // [rsp+109h] [rbp+9h]
  bool v47; // [rsp+10Bh] [rbp+Bh]
  int v48; // [rsp+170h] [rbp+70h]
  __int128 v49; // [rsp+178h] [rbp+78h]
  __int64 v50; // [rsp+188h] [rbp+88h]
  __int64 v51; // [rsp+190h] [rbp+90h]

  v39 = a5;
  v38 = a4;
  LODWORD(v33) = 0;
  memset_0(&v45, 0, 0x80uLL);
  v8 = 4LL;
  v9 = &v45;
  do
  {
    *(_QWORD *)v9 = "NoOp";
    *((_DWORD *)v9 + 2) = 0;
    v9 += 2;
    --v8;
  }
  while ( v8 );
  v10 = *(_DWORD *)a2;
  v11 = *(_OWORD *)((char *)a2 + 8);
  v50 = 0LL;
  v51 = 0LL;
  v48 = -1;
  v45 = v11;
  v47 = (v10 & 4) != 0;
  *(_DWORD *)((char *)&v50 + 2) = (v10 & 0x10) != 0;
  LOBYTE(v50) = *((_BYTE *)a2 + 44);
  BYTE1(v50) = (v10 & 8) != 0;
  v12 = *(_OWORD *)((char *)a2 + 24);
  v13 = *((_BYTE *)a2 + 45);
  v14 = *((_DWORD *)this + 189);
  BYTE6(v50) = a3;
  HIBYTE(v50) = v13;
  v49 = v12;
  if ( v14 >= 37632 )
  {
    v48 = *((_DWORD *)a2 + 10);
    v46 = (v10 & 0x20) != 0;
  }
  v15 = v10 & 3;
  ShaderLinkingConfig::GetLookupKey(&v45, &v43, v15);
  v17 = 0;
  if ( *((int *)this + 284) <= 0 )
    goto LABEL_19;
  v18 = v44;
  v16 = *((int *)this + 284);
  v19 = (_QWORD *)*((_QWORD *)this + 140);
  v20 = 0LL;
  while ( *v19 != v43 || v19[1] != v44 )
  {
    ++v17;
    ++v20;
    v19 += 2;
    if ( v20 >= v16 )
      goto LABEL_19;
  }
  if ( v17 == -1 )
  {
LABEL_19:
    v22 = 0LL;
    v36 = 0LL;
  }
  else
  {
    v21 = *((_QWORD *)this + 141) + 16LL * v17;
    v22 = *(struct ID3D11PixelShader **)v21;
    v36 = v22;
    if ( v22 )
      ((void (__fastcall *)(struct ID3D11PixelShader *, __int64, __int64, __int64))v22->lpVtbl->AddRef)(
        v22,
        v20,
        v16,
        v44);
    v23 = *(_DWORD *)(v21 + 8);
    if ( v22 )
    {
      v24 = (unsigned int)v33;
LABEL_14:
      *(_DWORD *)v38 = v23;
      *v39 = v22;
      goto LABEL_15;
    }
  }
  v33 = 0LL;
  v34 = (struct CD3DPixelShader *)0x200000000LL;
  if ( !*((_BYTE *)this + 644)
    || (*(_OWORD *)v35 = *(_OWORD *)CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(v35, a2),
        v31 = (unsigned int)v35[0],
        !v35[0]) )
  {
    LOBYTE(v16) = v14 >= 37632;
    ShaderLinkingBody = CommonRenderingShaderBody::GetShaderLinkingBody(v42, v15, v16);
    v40[0] = *(_OWORD *)ShaderLinkingBody;
    v40[1] = *(_OWORD *)(ShaderLinkingBody + 16);
    v40[2] = *(_OWORD *)(ShaderLinkingBody + 32);
    v41 = *(_QWORD *)(ShaderLinkingBody + 48);
    *(_OWORD *)v35 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    v27 = LinkShader((unsigned int)v40, (unsigned int)&v45, (unsigned int)v35, (unsigned int)&v34, (__int64)&v33);
    v24 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x10A5u);
      goto LABEL_32;
    }
    v28 = v33;
    v29 = (void *)(*(int (__fastcall **)(__int64 *))(*v33 + 32))(v33);
    v30 = *v28;
    v35[0] = v29;
    v35[1] = (void *)(*(__int64 (__fastcall **)(__int64 *))(v30 + 24))(v28);
    v31 = (unsigned int)v35[0];
  }
  v37 = VertexShaderDesc::ResolveKey(&v34);
  v34 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v34);
  v32 = CD3DPixelShader::Create(this, v35[1], v31, &v34);
  v24 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x10B4u);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v34);
LABEL_32:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v36, *((_QWORD *)v34 + 15));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v34);
  if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData>>::Add(
                       (char *)this + 1120,
                       &v43,
                       &v36) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    v23 = v37;
    v22 = v36;
    goto LABEL_14;
  }
  v24 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x10BBu);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
  v22 = v36;
LABEL_15:
  if ( v22 )
    ((void (__fastcall *)(struct ID3D11PixelShader *, __int64, __int64, __int64))v22->lpVtbl->Release)(
      v22,
      v20,
      v16,
      v18);
  return v24;
}
