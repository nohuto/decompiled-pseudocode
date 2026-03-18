/*
 * XREFs of ?GetShaders@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@AEBUShaderLinkingConfig@@PEAW4Enum@VertexShaderKey@@PEAPEAUID3D11PixelShader@@@Z @ 0x18006D750
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@W4Enum@BlendMode@@AEAVCVertexConstantBuffer@@PEAW45VertexShaderKey@@@Z @ 0x18006CA90 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEB.c)
 * Callees:
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180021EE0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x180022130 (-GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA-AUConstantBufferRequirements@1@XZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18006D5A0 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?UpdateSurfaceProperties@CRenderingTechnique@@QEAAXI@Z @ 0x18006DF10 (-UpdateSurfaceProperties@CRenderingTechnique@@QEAAXI@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x18006DF98 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x18006E5B4 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceL.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::GetShaders(
        CRenderingTechnique *this,
        struct CD3DDeviceLevel1 *a2,
        const struct ShaderLinkingConfig *a3,
        enum VertexShaderKey::Enum *a4,
        struct ID3D11PixelShader **a5)
{
  __int128 v6; // xmm0
  int v8; // r12d
  __int128 v9; // xmm1
  struct ID3D11PixelShader *v10; // r15
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int64 v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // r8
  char *v20; // rdx
  char *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned int v24; // esi
  unsigned int v25; // edx
  CRenderingTechnique **v26; // rax
  int *v27; // r14
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rax
  struct CLinkedShader *v33; // rbx
  int v34; // eax
  int v35; // edi
  struct ID3D11PixelShader **v36; // rax
  int v38; // eax
  unsigned int v39; // r10d
  int v40; // eax
  struct CLinkedShader *v41; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v42; // [rsp+38h] [rbp-C8h]
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  struct CD3DDeviceLevel1 *v45; // [rsp+50h] [rbp-B0h]
  struct ID3D11PixelShader **v46; // [rsp+58h] [rbp-A8h]
  __int128 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v49[5]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-30h]
  __int128 v51; // [rsp+E0h] [rbp-20h]

  v6 = *(_OWORD *)a3;
  v49[0] = *((_OWORD *)a3 + 1);
  v8 = 8;
  v9 = *((_OWORD *)a3 + 3);
  v10 = 0LL;
  v48 = v6;
  v11 = *((_OWORD *)a3 + 2);
  v49[2] = v9;
  v12 = *((_OWORD *)a3 + 5);
  v49[1] = v11;
  v13 = *((_OWORD *)a3 + 4);
  v45 = a2;
  v14 = *((_QWORD *)this + 1);
  v46 = a5;
  v49[4] = v12;
  v15 = *((_OWORD *)a3 + 7);
  v16 = *(_QWORD *)(v14 + 304);
  v17 = (unsigned int)(*(_DWORD *)(v14 + 328) - 1);
  v49[3] = v13;
  v18 = *((_OWORD *)a3 + 6);
  v51 = v15;
  v50 = v18;
  BYTE12(v51) = 1;
  if ( *(CRenderingTechnique **)(v16 + 8 * v17) == this )
  {
    BYTE11(v51) = *(_BYTE *)(v14 + 356);
    BYTE13(v51) = 1;
  }
  else
  {
    LODWORD(v50) = -1;
    BYTE9(v51) = 0;
  }
  if ( *((_DWORD *)this + 23) )
  {
    v19 = *((unsigned int *)this + 23);
    v20 = (char *)v49 + 2;
    v21 = (char *)this + 110;
    do
    {
      v20[3] = v21[18];
      if ( *v21 )
      {
        *(v20 - 2) = *(v21 - 2);
        *(v20 - 1) = *(v21 - 1);
        *v20 = 1;
      }
      v21 += 32;
      v20 += 24;
      --v19;
    }
    while ( v19 );
  }
  ShaderLinkingConfig::GetConstantBufferRequirements(&v48, (unsigned int *)&v43);
  v22 = v43;
  if ( (_DWORD)v43 != *((_DWORD *)this + 57) )
  {
    if ( HIDWORD(v43) != *((_DWORD *)this + 58) )
      CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResources((CRenderingTechnique *)((char *)this + 24));
    v39 = 0;
    *(_QWORD *)((char *)this + 228) = v22;
    for ( *((_BYTE *)this + 236) = 1; v39 < *((_DWORD *)this + 23); ++v39 )
    {
      v40 = *((_DWORD *)this + 57);
      if ( _bittest(&v40, v39) )
        CRenderingTechnique::UpdateSurfaceProperties(this, v39);
    }
  }
  v23 = *((_QWORD *)this + 1);
  v24 = 0;
  v25 = *(_DWORD *)(v23 + 328);
  v26 = *(CRenderingTechnique ***)(v23 + 304);
  if ( v25 )
  {
    do
    {
      if ( this == *v26 )
        break;
      ++v24;
      ++v26;
    }
    while ( v24 < v25 );
  }
  v27 = *(int **)(v23 + 344);
  ShaderLinkingConfig::GetLookupKey((__int64)&v48, &v47, v24);
  v30 = 0;
  if ( v27[4] <= 0 )
  {
LABEL_27:
    v30 = -1;
  }
  else
  {
    v28 = v27[4];
    v31 = 0LL;
    v32 = *(_QWORD *)v27;
    v29 = *((_QWORD *)&v47 + 1);
    while ( *(_QWORD *)v32 != (_QWORD)v47 || *(_DWORD *)(v32 + 8) != DWORD2(v47) )
    {
      ++v30;
      ++v31;
      v32 += 16LL;
      if ( v31 >= v28 )
        goto LABEL_27;
    }
  }
  if ( v30 == -1 )
  {
    v41 = 0LL;
  }
  else
  {
    v33 = *(struct CLinkedShader **)(*((_QWORD *)v27 + 1) + 8LL * v30);
    v42 = (volatile signed __int32 *)v33;
    if ( v33 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v33 + 2);
      v33 = (struct CLinkedShader *)v42;
      if ( !_InterlockedDecrement(v42 + 2) )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)v42 + 16LL))(
          v42,
          1LL,
          v28,
          v29);
    }
    v41 = v33;
    if ( v33 )
      goto LABEL_20;
  }
  v38 = CRenderingTechnique::AddShaderToCache(
          this,
          (struct CCompiledEffectCache *)v27,
          v24,
          (const struct ShaderLinkingConfig *)&v48,
          &v41);
  v35 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0xEDu);
    return (unsigned int)v35;
  }
  v33 = v41;
LABEL_20:
  v44 = 0LL;
  v34 = CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
          (char *)v33 + 32,
          v45,
          &v44,
          v29);
  v35 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x15u);
  }
  else
  {
    v8 = *((_DWORD *)v33 + 6);
    v10 = *(struct ID3D11PixelShader **)(v44 + 120);
  }
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0xF0u);
  }
  else
  {
    v36 = v46;
    *(_DWORD *)a4 = v8;
    *v36 = v10;
    if ( v10 )
      ((void (__fastcall *)(struct ID3D11PixelShader *))v10->lpVtbl->AddRef)(v10);
  }
  return (unsigned int)v35;
}
