/*
 * XREFs of ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x1800174C0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW46VertexShaderKey@@@Z @ 0x180015EA0 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBURenderTargetInfo@@W4DXGI.c)
 * Callees:
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180017350 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x1800181C4 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180018328 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x180018600 (-GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA-AUConstantBufferRequirements@1@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateLinkerConstantBufferRequirements@CRenderingTechnique@@AEAAXAEBUConstantBufferRequirements@ShaderLinkingConfig@@@Z @ 0x1801BB3C4 (-UpdateLinkerConstantBufferRequirements@CRenderingTechnique@@AEAAXAEBUConstantBufferRequirements.c)
 */

__int64 __fastcall CRenderingTechnique::GetShaders(
        CRenderingTechnique *this,
        struct CD3DDeviceLevel1 *a2,
        const struct ShaderLinkingConfig *a3,
        enum VertexShaderKey::Enum *a4,
        struct ID3D11PixelShader **a5)
{
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  struct ID3D11PixelShader *v9; // r14
  __int64 v10; // rdx
  int v11; // r12d
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // r8
  char *v17; // rdx
  char *v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // esi
  unsigned int v21; // edx
  CRenderingTechnique **v22; // rax
  CCompiledEffectCache *v23; // r15
  struct CLinkedShader *v24; // rdi
  int v25; // eax
  int v26; // ebx
  struct ID3D11PixelShader **v27; // rax
  int v29; // eax
  struct CLinkedShader *v30; // [rsp+30h] [rbp-61h] BYREF
  struct CD3DDeviceLevel1 *v31; // [rsp+38h] [rbp-59h]
  struct ID3D11PixelShader **v32; // [rsp+40h] [rbp-51h]
  _OWORD v33[3]; // [rsp+50h] [rbp-41h] BYREF
  __int128 v34; // [rsp+80h] [rbp-11h]

  v6 = *((_OWORD *)a3 + 1);
  v7 = *(_OWORD *)a3;
  v31 = a2;
  v9 = 0LL;
  v10 = *((_QWORD *)this + 1);
  v32 = a5;
  v11 = 8;
  v33[1] = v6;
  v12 = *((_OWORD *)a3 + 3);
  v13 = *(_QWORD *)(v10 + 304);
  v14 = (unsigned int)(*(_DWORD *)(v10 + 328) - 1);
  v33[0] = v7;
  v15 = *((_OWORD *)a3 + 2);
  v34 = v12;
  v33[2] = v15;
  BYTE11(v34) = 1;
  if ( *(CRenderingTechnique **)(v13 + 8 * v14) == this )
  {
    BYTE10(v34) = *(_BYTE *)(v10 + 356);
    BYTE12(v34) = 1;
  }
  else
  {
    LODWORD(v34) = -1;
    BYTE8(v34) = 0;
  }
  if ( *((_DWORD *)this + 27) )
  {
    v16 = *((unsigned int *)this + 27);
    v17 = (char *)v33 + 6;
    v18 = (char *)this + 126;
    do
    {
      v17[3] = v18[18];
      if ( *v18 )
      {
        *(v17 - 2) = *(v18 - 2);
        *(v17 - 1) = *(v18 - 1);
        *v17 = 1;
      }
      v18 += 32;
      v17 += 12;
      --v16;
    }
    while ( v16 );
  }
  ShaderLinkingConfig::GetConstantBufferRequirements(v33, &v30);
  if ( (_DWORD)v30 != *((_DWORD *)this + 61) )
    CRenderingTechnique::UpdateLinkerConstantBufferRequirements(
      this,
      (const struct ShaderLinkingConfig::ConstantBufferRequirements *)&v30);
  v19 = *((_QWORD *)this + 1);
  v20 = 0;
  v21 = *(_DWORD *)(v19 + 328);
  v22 = *(CRenderingTechnique ***)(v19 + 304);
  if ( v21 )
  {
    do
    {
      if ( this == *v22 )
        break;
      ++v20;
      ++v22;
    }
    while ( v20 < v21 );
  }
  v23 = *(CCompiledEffectCache **)(v19 + 344);
  v30 = CCompiledEffectCache::LookupShader(v23, v20, (const struct ShaderLinkingConfig *)v33);
  v24 = v30;
  if ( !v30 )
  {
    v29 = CRenderingTechnique::AddShaderToCache(this, v23, v20, (const struct ShaderLinkingConfig *)v33, &v30);
    v26 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0xEDu);
      return (unsigned int)v26;
    }
    v24 = v30;
  }
  v30 = 0LL;
  v25 = CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
          (char *)v24 + 32,
          v31,
          &v30);
  v26 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x16u);
  }
  else
  {
    v11 = *((_DWORD *)v24 + 6);
    v9 = (struct ID3D11PixelShader *)*((_QWORD *)v30 + 16);
  }
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xF0u);
  }
  else
  {
    v27 = v32;
    *(_DWORD *)a4 = v11;
    *v27 = v9;
    if ( v9 )
      ((void (__fastcall *)(struct ID3D11PixelShader *))v9->lpVtbl->AddRef)(v9);
  }
  return (unsigned int)v26;
}
