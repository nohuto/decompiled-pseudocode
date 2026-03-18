/*
 * XREFs of ?GetCommonOrCubeMapRenderingShadersNoRefInternal@CD3DDeviceLevel1@@AEAAJAEBUCommonRenderingShaderDesc@@_NPEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18001FF80
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18001F5A0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AE.c)
 *     ?GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ @ 0x180020FAC (-GenerateShaders@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x1801D4B40 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x180001F7C (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180021EE0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18007FED4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x180088984 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDeviceLevel1@@@Z @ 0x1800B5734 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDeviceLevel1@@V-$CMa.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800BE460 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA?AV?$span@$$CBE@gsl@@AEBU1@@Z @ 0x1801D57E0 (-TryLookupPreCompiledBytecode@CommonRenderingShaderDesc@@SA-AV-$span@$$CBE@gsl@@AEBU1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetCommonOrCubeMapRenderingShadersNoRefInternal(
        CD3DDeviceLevel1 *this,
        const struct CommonRenderingShaderDesc *a2,
        char a3,
        enum VertexShaderKey::Enum *a4,
        struct ID3D11PixelShader **a5)
{
  struct ID3D11PixelShader *v5; // rsi
  __int64 v9; // rcx
  __int128 *v10; // rax
  int v11; // ebx
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  int v14; // r12d
  unsigned int v15; // ebx
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 ShaderLinkingBody; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  int v23; // eax
  unsigned int v24; // ebx
  struct ID3D10Blob *v25; // rbx
  unsigned __int64 v26; // rdi
  void *v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdi
  struct ID3D10Blob *v33; // [rsp+30h] [rbp-D0h] BYREF
  struct CD3DPixelShader *v34; // [rsp+38h] [rbp-C8h] BYREF
  void *v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct ID3D11PixelShader *v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+58h] [rbp-A8h]
  enum VertexShaderKey::Enum *v38; // [rsp+60h] [rbp-A0h]
  struct ID3D11PixelShader **v39; // [rsp+68h] [rbp-98h]
  _OWORD v40[3]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+A0h] [rbp-60h]
  char v42[16]; // [rsp+A8h] [rbp-58h] BYREF
  char v43[56]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v45; // [rsp+F8h] [rbp-8h]
  __int128 v46; // [rsp+100h] [rbp+0h] BYREF
  bool v47; // [rsp+113h] [rbp+13h]
  bool v48; // [rsp+115h] [rbp+15h]
  int v49; // [rsp+160h] [rbp+60h]
  __int128 v50; // [rsp+168h] [rbp+68h]
  __int64 v51; // [rsp+178h] [rbp+78h]

  v5 = 0LL;
  v38 = a4;
  v39 = a5;
  LODWORD(v33) = 0;
  memset_0(&v46, 0, 0x60uLL);
  v9 = 4LL;
  v10 = &v46;
  do
  {
    *(_QWORD *)v10 = "NoOp";
    *((_DWORD *)v10 + 2) = 0;
    v10 = (__int128 *)((char *)v10 + 24);
    --v9;
  }
  while ( v9 );
  v11 = *(_DWORD *)a2;
  v12 = *(_OWORD *)((char *)a2 + 8);
  v51 = 0LL;
  v49 = -1;
  v46 = v12;
  v48 = (v11 & 4) != 0;
  *(_DWORD *)((char *)&v51 + 2) = (v11 & 0x10) != 0;
  LOBYTE(v51) = *((_BYTE *)a2 + 44);
  BYTE1(v51) = (v11 & 8) != 0;
  v13 = *(_OWORD *)((char *)a2 + 24);
  v14 = *((_DWORD *)this + 189);
  BYTE6(v51) = a3;
  v50 = v13;
  if ( v14 >= 37632 )
  {
    v49 = *((_DWORD *)a2 + 10);
    v47 = (v11 & 0x20) != 0;
  }
  v15 = v11 & 3;
  ShaderLinkingConfig::GetLookupKey(&v46, &v44, v15);
  v17 = 0;
  if ( *((int *)this + 282) <= 0 )
    goto LABEL_10;
  v16 = *((int *)this + 282);
  v18 = *((_QWORD *)this + 139);
  v19 = 0LL;
  while ( *(_QWORD *)v18 != v44 || *(_DWORD *)(v18 + 8) != (_DWORD)v45 )
  {
    ++v17;
    ++v19;
    v18 += 16LL;
    if ( v19 >= v16 )
      goto LABEL_10;
  }
  if ( v17 == -1 )
  {
LABEL_10:
    v36 = 0LL;
  }
  else
  {
    v31 = *((_QWORD *)this + 140) + 16LL * v17;
    v5 = *(struct ID3D11PixelShader **)v31;
    v36 = v5;
    if ( v5 )
      ((void (__fastcall *)(struct ID3D11PixelShader *, __int64, __int64, __int64))v5->lpVtbl->AddRef)(
        v5,
        v19,
        v16,
        v45);
    v30 = *(_DWORD *)(v31 + 8);
    if ( v5 )
    {
      v24 = (unsigned int)v33;
      goto LABEL_22;
    }
  }
  v34 = (struct CD3DPixelShader *)0x200000000LL;
  v33 = 0LL;
  if ( !*((_BYTE *)this + 644)
    || (*(_OWORD *)v35 = *(_OWORD *)CommonRenderingShaderDesc::TryLookupPreCompiledBytecode(v42, a2),
        (v26 = _mm_srli_si128(*(__m128i *)v35, 8).m128i_u64[0]) == 0) )
  {
    LOBYTE(v16) = v14 >= 37632;
    ShaderLinkingBody = CommonRenderingShaderBody::GetShaderLinkingBody(v43, v15, v16);
    v21 = *(_OWORD *)(ShaderLinkingBody + 16);
    v40[0] = *(_OWORD *)ShaderLinkingBody;
    v22 = *(_OWORD *)(ShaderLinkingBody + 32);
    v40[1] = v21;
    *(_QWORD *)&v21 = *(_QWORD *)(ShaderLinkingBody + 48);
    v40[2] = v22;
    v41 = v21;
    *(_OWORD *)v35 = 0LL;
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    v23 = LinkShader((__int64)v40, (__int64)&v46, (__int128 *)v35, (__int64)&v34, &v33);
    v24 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x100Cu);
      goto LABEL_31;
    }
    v25 = v33;
    v26 = ((int (__fastcall *)(struct ID3D10Blob *))v33->lpVtbl->GetBufferSize)(v33);
    v27 = (void *)((__int64 (__fastcall *)(struct ID3D10Blob *))v25->lpVtbl->GetBufferPointer)(v25);
    v35[1] = (void *)v26;
    v35[0] = v27;
  }
  LOBYTE(v28) = VertexShaderDesc::ResolveKey((__int64)&v34);
  v37 = v28;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v34);
  v29 = CD3DPixelShader::Create(this, v35[0], (unsigned int)v26, &v34);
  v24 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x101Bu);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v34);
LABEL_31:
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    goto LABEL_23;
  }
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=(&v36, *((_QWORD *)v34 + 15));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(&v34);
  if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDeviceLevel1::CommonRenderingShadersData>>::Add(
                       (char *)this + 1112,
                       &v44,
                       &v36) )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
    v30 = v37;
    v5 = v36;
LABEL_22:
    *(_DWORD *)v38 = v30;
    *v39 = v5;
    goto LABEL_23;
  }
  v24 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1022u);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v33);
  v5 = v36;
LABEL_23:
  if ( v5 )
    ((void (__fastcall *)(struct ID3D11PixelShader *))v5->lpVtbl->Release)(v5);
  return v24;
}
