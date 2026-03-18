/*
 * XREFs of ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@W4DXGI_COLOR_SPACE_TYPE@@AEBVCLightsMask@@_NAEAVCVertexConstantBuffer@@PEAW4Enum@VertexShaderKey@@@Z @ 0x180073220
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPixelFormatInfo@CD3DSurface@@UEBA?AUPixelFormatInfo@@XZ @ 0x180042AD0 (-GetPixelFormatInfo@CD3DSurface@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800478F0 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResources@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@IEAAXXZ @ 0x180070AA4 (-ReleaseResources@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceL.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DConstantBuffer@@@Z @ 0x180070ADC (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DConstantBuffer@@VCRenderingTechnique@@VCD.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800711B0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800717A8 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceLevel1@@@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAVCD3DPixelShader@@@Z @ 0x180071A64 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD3DPixelShader@@VCLinkedShader@@VCD3DDeviceL.c)
 *     ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x180071BBC (-GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z.c)
 *     ??0ShaderLinkingSamplerDesc@@QEAA@XZ @ 0x180076AC4 (--0ShaderLinkingSamplerDesc@@QEAA@XZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180076AE0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA?AUConstantBufferRequirements@1@XZ @ 0x180076EBC (-GetConstantBufferRequirements@ShaderLinkingConfig@@QEBA-AUConstantBufferRequirements@1@XZ.c)
 *     ?GetSize@CDrawListBitmap@@QEBA?AUD2D_SIZE_U@@XZ @ 0x180076F8C (-GetSize@CDrawListBitmap@@QEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180077420 (-GetPixelFormatInfo@CD2DBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ @ 0x180078290 (-GetShaderResourceView@CHwTextureRenderTarget@@UEBAPEAUID3D11ShaderResourceView@@XZ.c)
 *     ?IsOpaque@CRenderTargetImageSource@@UEBA_NXZ @ 0x18008A030 (-IsOpaque@CRenderTargetImageSource@@UEBA_NXZ.c)
 *     ?ToD3D11TextureAddressMode@ExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z @ 0x1800C9340 (-ToD3D11TextureAddressMode@ExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4Enum@1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?SetData@?$CTypedConstantBuffer@V?$array@M$07@std@@@@QEAAXAEBV?$array@M$07@std@@@Z @ 0x18021BC40 (-SetData@-$CTypedConstantBuffer@V-$array@M$07@std@@@@QEAAXAEBV-$array@M$07@std@@@Z.c)
 */

__int64 __fastcall CBrushRenderingEffect::SetStateOnDevice(
        CBrushRenderingEffect *this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct CLightsMask *a4,
        bool a5,
        struct CVertexConstantBuffer *a6,
        enum VertexShaderKey::Enum *a7)
{
  __int64 *v7; // r15
  struct CVertexConstantBuffer *v10; // r12
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rbx
  ShaderLinkingSamplerDesc *v14; // rsi
  unsigned int v15; // r14d
  float v16; // xmm6_4
  char *v17; // r12
  CHwTextureRenderTarget *v18; // rcx
  struct ID3D11ShaderResourceView *(__fastcall *v19)(CHwTextureRenderTarget *__hidden); // rax
  struct ID3D11ShaderResourceView *ShaderResourceView; // rax
  struct CD3DDeviceLevel1 *v21; // r9
  char *v22; // r8
  int v23; // ebx
  char *v24; // rsi
  unsigned int v25; // esi
  _DWORD *v26; // rcx
  void (__fastcall *v27)(_DWORD *, enum DXGI_FORMAT *); // rax
  unsigned int v28; // r14d
  char *v29; // rax
  char v30; // si
  CCompositionSurfaceBitmap *v31; // rcx
  void (*v32)(void); // rax
  int ColorChannelDepth; // eax
  int v34; // edx
  __int64 v35; // r8
  unsigned __int8 v36; // r9
  int updated; // ebx
  unsigned int v38; // ecx
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // rbx
  CRenderTargetImageSource *v42; // rcx
  char (__fastcall *v43)(CCompositionSurfaceBitmap *); // rax
  char IsOpaque; // al
  float v45; // xmm1_4
  struct CVertexConstantBuffer *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rsi
  char v50; // al
  __int64 v51; // rax
  __int64 *v52; // rsi
  __int64 v53; // r15
  __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  struct CVertexConstantBuffer *v58; // rbx
  __int64 v59; // rax
  unsigned int v60; // r12d
  unsigned int v61; // edx
  _QWORD *v62; // rcx
  __int64 v63; // rbx
  int v64; // ecx
  __int64 v65; // r9
  __int64 v66; // r8
  _QWORD *v67; // rax
  __int64 v68; // rdx
  volatile signed __int32 *v69; // rsi
  struct CD3DDeviceLevel1 *v70; // r12
  int v71; // ecx
  __int64 v72; // rsi
  __int64 v73; // rcx
  __int64 *v74; // r15
  __int64 v75; // rcx
  int v77; // eax
  int v78; // eax
  __int32 v79; // eax
  __int32 v80; // eax
  __int64 v81; // r8
  __int64 v82; // rcx
  __int32 v83; // eax
  __int64 v84; // rcx
  __int64 v85; // r9
  __int64 v86; // rbx
  int v87; // eax
  float v88; // xmm2_4
  float v89; // xmm0_4
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rsi
  unsigned int v93; // eax
  char v94; // [rsp+48h] [rbp-C0h]
  __int64 v95; // [rsp+50h] [rbp-B8h] BYREF
  int v96; // [rsp+58h] [rbp-B0h]
  __int16 v97; // [rsp+68h] [rbp-A0h]
  __int16 v98; // [rsp+78h] [rbp-90h]
  struct CLinkedShader *v99; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v100; // [rsp+90h] [rbp-78h]
  struct CVertexConstantBuffer *v101; // [rsp+98h] [rbp-70h] BYREF
  __int16 v102; // [rsp+A8h] [rbp-60h]
  __int64 v103; // [rsp+B8h] [rbp-50h]
  struct CD3DDeviceLevel1 *v104; // [rsp+C0h] [rbp-48h]
  __int128 v105; // [rsp+C8h] [rbp-40h] BYREF
  int v106; // [rsp+D8h] [rbp-30h]
  int v107; // [rsp+DCh] [rbp-2Ch]
  struct CD3DPixelShader *v108; // [rsp+E0h] [rbp-28h] BYREF
  CMILPoolResource *v109; // [rsp+E8h] [rbp-20h] BYREF
  const struct CLightsMask *v110; // [rsp+F0h] [rbp-18h]
  __int64 v111; // [rsp+F8h] [rbp-10h] BYREF
  __m256i v112; // [rsp+100h] [rbp-8h]
  int v113; // [rsp+120h] [rbp+18h]
  __int64 v114; // [rsp+124h] [rbp+1Ch]
  int v115; // [rsp+12Ch] [rbp+24h]
  int v116; // [rsp+130h] [rbp+28h]
  enum VertexShaderKey::Enum *v117; // [rsp+138h] [rbp+30h]
  enum DXGI_FORMAT v118[4]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v119; // [rsp+150h] [rbp+48h] BYREF
  __int64 v120; // [rsp+158h] [rbp+50h]
  __int128 v121; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v122[7]; // [rsp+178h] [rbp+70h]
  __int128 v123; // [rsp+1E8h] [rbp+E0h]
  __int128 v124; // [rsp+1F8h] [rbp+F0h]
  __int64 v125; // [rsp+208h] [rbp+100h]
  float v126[8]; // [rsp+218h] [rbp+110h] BYREF
  __m256i v127; // [rsp+238h] [rbp+130h] BYREF
  __int128 v128; // [rsp+258h] [rbp+150h]
  int v129; // [rsp+268h] [rbp+160h]
  _OWORD v130[8]; // [rsp+278h] [rbp+170h] BYREF
  __int128 v131; // [rsp+2F8h] [rbp+1F0h]
  __int128 v132; // [rsp+308h] [rbp+200h]
  __int64 v133; // [rsp+318h] [rbp+210h]
  _QWORD v134[4]; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v135[4]; // [rsp+348h] [rbp+240h] BYREF

  v7 = (__int64 *)*((_QWORD *)a2 + 82);
  v10 = a6;
  v117 = a7;
  v104 = a2;
  v100 = v7;
  v11 = 0LL;
  v12 = 0LL;
  v103 = 0LL;
  v110 = a4;
  v101 = a6;
  memset_0(&v121, 0, 0x80uLL);
  v13 = 4LL;
  v14 = (ShaderLinkingSamplerDesc *)&v121;
  do
  {
    ShaderLinkingSamplerDesc::ShaderLinkingSamplerDesc(v14);
    v14 = (ShaderLinkingSamplerDesc *)((char *)v14 + 32);
    --v13;
  }
  while ( v13 );
  LODWORD(v124) = 0;
  *((_QWORD *)&v123 + 1) = "NoOp";
  *((_QWORD *)&v124 + 1) = 0LL;
  v125 = 0LL;
  if ( a3 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
  {
    BYTE8(v124) = 1;
    HIBYTE(v124) = 1;
  }
  else
  {
    BYTE8(v124) = 0;
    HIBYTE(v124) = 0;
  }
  BYTE9(v124) = a5;
  LOBYTE(v125) = 1;
  v94 = 0;
  LODWORD(v123) = *(_DWORD *)v110;
  BYTE10(v124) = *((_BYTE *)a6 + 144);
  LODWORD(v95) = *(_DWORD *)(*((_QWORD *)this + 2) + 92LL);
  v15 = v95;
  memset_0(v126, 0, sizeof(v126));
  v16 = FLOAT_1_0;
  LODWORD(v99) = 0;
  v96 = 8;
  if ( !(_DWORD)v95 )
  {
LABEL_53:
    *((_BYTE *)v10 + 8) = 1;
    if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 96LL) & 0x10) == 0 || v15 >= 4 )
      v16 = 0.0;
    v52 = v100;
    *((float *)v10 + 8) = v16;
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD *))(*v52 + 64))(v52, 0LL, v15, v134);
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD *))(*v52 + 80))(v52, 0LL, v15, v135);
    v53 = *((_QWORD *)this + 2);
    v54 = 0LL;
    v55 = *(_QWORD *)(v53 + 8);
    v130[0] = v121;
    v130[1] = v122[0];
    v130[2] = v122[1];
    v130[3] = v122[2];
    v130[4] = v122[3];
    v130[5] = v122[4];
    v130[6] = v122[5];
    v130[7] = v122[6];
    v131 = v123;
    v132 = v124;
    v133 = v125;
    v56 = *(_QWORD *)(v55 + 144);
    v57 = (unsigned int)(*(_DWORD *)(v55 + 168) - 1);
    BYTE12(v132) = 1;
    if ( *(_QWORD *)(v56 + 8 * v57) == v53 )
    {
      BYTE11(v132) = *(_BYTE *)(v55 + 196);
      BYTE13(v132) = 1;
    }
    else
    {
      BYTE9(v132) = 0;
      LODWORD(v131) = -1;
    }
    ShaderLinkingConfig::GetConstantBufferRequirements(v130, &v101);
    v58 = v101;
    if ( (_DWORD)v101 != *(_DWORD *)(v53 + 276) )
    {
      if ( HIDWORD(v101) != *(_DWORD *)(v53 + 280) )
      {
        CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::ReleaseResources((struct IDeviceResourceNotify *)(v53 + 24));
        *(_BYTE *)(v53 + 284) = 1;
      }
      *(_QWORD *)(v53 + 276) = v58;
    }
    v59 = *(_QWORD *)(v53 + 8);
    v60 = 0;
    v61 = *(_DWORD *)(v59 + 168);
    v62 = *(_QWORD **)(v59 + 144);
    if ( v61 )
    {
      do
      {
        if ( v53 == *v62 )
          break;
        ++v60;
        ++v62;
      }
      while ( v60 < v61 );
    }
    v63 = *(_QWORD *)(v59 + 184);
    ShaderLinkingConfig::GetLookupKey(v130, &v119, v60);
    v64 = 0;
    if ( *(int *)(v63 + 16) <= 0 )
      goto LABEL_95;
    v65 = v120;
    v66 = *(int *)(v63 + 16);
    v67 = *(_QWORD **)v63;
    v68 = 0LL;
    while ( *v67 != v119 || v67[1] != v120 )
    {
      ++v64;
      ++v68;
      v67 += 2;
      if ( v68 >= v66 )
        goto LABEL_95;
    }
    if ( v64 == -1 )
    {
LABEL_95:
      v99 = 0LL;
    }
    else
    {
      v69 = *(volatile signed __int32 **)(*(_QWORD *)(v63 + 8) + 8LL * v64);
      if ( v69 )
      {
        _InterlockedIncrement(v69 + 2);
        if ( _InterlockedExchangeAdd(v69 + 2, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)v69 + 16LL))(
            v69,
            1LL,
            v66,
            v65);
        v12 = v103;
      }
      v99 = (struct CLinkedShader *)v69;
      if ( v69 )
        goto LABEL_70;
      v52 = v100;
    }
    v77 = CRenderingTechnique::AddShaderToCache(
            (CRenderingTechnique *)v53,
            (struct CCompiledEffectCache *)v63,
            v60,
            (const struct ShaderLinkingConfig *)v130,
            &v99);
    updated = v77;
    if ( v77 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x144u);
      v71 = v95;
      v70 = v104;
      v96 = v95;
      goto LABEL_76;
    }
    v69 = (volatile signed __int32 *)v99;
LABEL_70:
    v70 = v104;
    v108 = 0LL;
    updated = CDeviceResourceTable<CD3DPixelShader,CLinkedShader,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                (__int64)(v69 + 8),
                v104,
                &v108);
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x15u);
      v71 = 8;
    }
    else
    {
      v71 = *((_DWORD *)v69 + 6);
      v96 = v71;
      v54 = *((_QWORD *)v108 + 15);
    }
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x147u);
      v71 = v95;
      v96 = v95;
    }
    else
    {
      v12 = v54;
      if ( v54 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
        v71 = v96;
      }
    }
    v52 = v100;
LABEL_76:
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xB8u);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v52 + 88))(
        v52,
        *((_QWORD *)v70 + v71 + 132),
        0LL,
        0LL);
      (*(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*v52 + 72))(v52, v12, 0LL, 0LL);
      v72 = *((_QWORD *)this + 2);
      v95 = 0LL;
      v73 = 0LL;
      if ( !*(_DWORD *)(v72 + 88) && !*(_DWORD *)(v72 + 280) )
        goto LABEL_81;
      v109 = 0LL;
      updated = CDeviceResourceTable<CD3DConstantBuffer,CRenderingTechnique,CD3DDeviceLevel1>::FindOrCreateResourceNoRef(
                  (struct IDeviceResourceNotify *)(v72 + 24),
                  v70,
                  &v109);
      if ( updated < 0 )
      {
        v93 = 349;
      }
      else
      {
        updated = CRenderingTechnique::UpdateConstantBuffers((CRenderingTechnique *)v72);
        if ( updated >= 0 )
        {
          v73 = *((_QWORD *)v109 + 15);
LABEL_81:
          v95 = v73;
          if ( v73 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 8LL))(v73);
            v73 = v95;
          }
          v74 = v100;
          updated = 0;
          if ( v73 )
          {
            (*(void (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(*v100 + 128))(v100, 0LL, 1LL, &v95);
            v75 = v95;
            if ( v95 )
            {
              v95 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
            }
          }
          if ( (*(_BYTE *)(*((_QWORD *)this + 2) + 96LL) & 2) != 0 && *(_DWORD *)v110 == -1
            || (*(_DWORD *)(*((_QWORD *)this + 2) + 96LL) & 4) != 0 )
          {
            v91 = *v74;
            v111 = *(_QWORD *)(*((_QWORD *)v70 + 13) + 848LL);
            (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v91 + 56))(v74, 2LL, 1LL, &v111);
            (*(void (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(*v74 + 128))(v74, 1LL, 1LL, &v111);
          }
          if ( v94 )
          {
            v92 = *((_QWORD *)v70 + 13) + 1136LL;
            CTypedConstantBuffer<std::array<float,8>>::SetData(v92, v126);
            if ( *(_BYTE *)(v92 + 8) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**((_QWORD **)v70 + 82)
                                                                                              + 384LL))(
                *((_QWORD *)v70 + 82),
                *(_QWORD *)v92,
                0LL,
                0LL,
                v92 + 16,
                0,
                0);
              *(_BYTE *)(v92 + 8) = 0;
            }
            *(_QWORD *)&v105 = *(_QWORD *)v92;
            (*(void (__fastcall **)(__int64 *, __int64, __int64, __int128 *))(*v74 + 128))(v74, 3LL, 1LL, &v105);
          }
          *(_DWORD *)v117 = v96;
          goto LABEL_91;
        }
        v93 = 351;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, v93);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xC0u);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v95);
    }
LABEL_91:
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    return (unsigned int)updated;
  }
  while ( 1 )
  {
    v17 = (char *)this + 24 * v11 + 24;
    if ( *(_QWORD *)v17 )
      break;
    v134[v11] = 0LL;
    v41 = 2 * v11;
    v135[v11] = 0LL;
    BYTE10(v122[2 * v11]) = 1;
LABEL_38:
    v47 = *((_QWORD *)this + 2);
    v48 = 16 * v11;
    v49 = 44 * v11;
    if ( BYTE10(v122[v41]) )
      goto LABEL_45;
    if ( *(_BYTE *)(v49 + v47 + 110) && *(float *)((char *)this + v48 + 140) != 0.0 )
    {
      BYTE8(v122[v41]) = 1;
      LOBYTE(v122[v41]) = *(_BYTE *)(v49 + v47 + 108);
      BYTE1(v122[v41]) = *(_BYTE *)(v49 + v47 + 109);
    }
    v50 = *(_BYTE *)(v49 + v47 + 124);
    if ( v50 )
    {
      BYTE13(v122[v41]) = v50;
      BYTE2(v122[v41]) = *(_BYTE *)(v49 + v47 + 116);
      BYTE3(v122[v41]) = *(_BYTE *)(v49 + v47 + 117);
      DWORD1(v122[v41]) = *(_DWORD *)(v49 + v47 + 120);
    }
    if ( BYTE8(v122[v41]) )
    {
LABEL_45:
      v51 = *(_QWORD *)(v49 + v47 + 128) - *(_QWORD *)((char *)this + v48 + 132);
      if ( !v51 )
        v51 = *(_QWORD *)(v49 + v47 + 136) - *(_QWORD *)((char *)this + v48 + 140);
      if ( v51 )
      {
        *(_OWORD *)(v49 + v47 + 128) = *(_OWORD *)((char *)this + v48 + 132);
        *(_BYTE *)(v47 + 284) = 1;
      }
    }
    if ( BYTE13(v122[v41]) )
    {
      v94 = 1;
      CDrawListBitmap::GetSize((CBrushRenderingEffect *)((char *)this + 24 * v11 + 24));
      v88 = *(float *)(v49 + *((_QWORD *)this + 2) + 112);
      v89 = (float)v107;
      v90 = (unsigned int)((_DWORD)v99 + 4);
      v126[v11] = v88 / (float)v106;
      v126[v90] = v88 / v89;
    }
    ++v11;
    LODWORD(v99) = (_DWORD)v99 + 1;
    if ( (unsigned int)v99 >= v15 )
    {
      v10 = v101;
      goto LABEL_53;
    }
  }
  v18 = (CHwTextureRenderTarget *)*((_QWORD *)v17 + 1);
  v19 = *(struct ID3D11ShaderResourceView *(__fastcall **)(CHwTextureRenderTarget *__hidden))(*(_QWORD *)v18 + 32LL);
  if ( v19 == CHwTextureRenderTarget::GetShaderResourceView )
    ShaderResourceView = CHwTextureRenderTarget::GetShaderResourceView(v18);
  else
    ShaderResourceView = (struct ID3D11ShaderResourceView *)((__int64 (__fastcall *)(CHwTextureRenderTarget *, struct ID3D11ShaderResourceView *(__fastcall *)(CHwTextureRenderTarget *__hidden)))v19)(
                                                              v18,
                                                              CHwTextureRenderTarget::GetShaderResourceView);
  v21 = v104;
  v134[v11] = ShaderResourceView;
  v22 = (char *)this + 2 * v11 + 80;
  v23 = 0;
  v97 = *(_WORD *)&v22[v11 + 40];
  v24 = (char *)v21 + 128 * (unsigned int)(unsigned __int8)v97 + 32 * HIBYTE(v97) + 8 * (unsigned __int8)v22[v11 + 42];
  if ( *((_QWORD *)v24 + 175) )
    goto LABEL_10;
  v102 = *(_WORD *)&v22[v11 + 40];
  if ( !HIBYTE(v102) || (v78 = 37120, !v22[v11 + 42]) )
    v78 = 37632;
  if ( *((_DWORD *)v21 + 189) < v78 )
  {
    v23 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0xEA4u);
    v25 = -2147024809;
LABEL_147:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x6Au);
    return v25;
  }
  v98 = *(_WORD *)&v22[v11 + 40];
  v79 = 0;
  if ( (_BYTE)v98 )
    v79 = 21;
  v112.m256i_i32[0] = v79;
  v80 = ExtendMode::ToD3D11TextureAddressMode(HIBYTE(v98));
  v82 = *(unsigned __int8 *)(v11 + v81 + 42);
  v112.m256i_i32[1] = v80;
  v83 = ExtendMode::ToD3D11TextureAddressMode(v82);
  v84 = *((_QWORD *)v24 + 175);
  v112.m256i_i32[2] = v83;
  *(__int64 *)((char *)&v112.m256i_i64[1] + 4) = 3LL;
  v114 = 0LL;
  v113 = 0;
  v115 = 0;
  v86 = *(_QWORD *)(v85 + 648);
  v112.m256i_i32[5] = 1;
  v112.m256i_i64[3] = 8LL;
  v116 = 2139095039;
  v129 = 2139095039;
  v127 = v112;
  v128 = 0u;
  if ( v84 )
  {
    *((_QWORD *)v24 + 175) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v84 + 16LL))(v84);
  }
  v87 = (*(__int64 (__fastcall **)(__int64, __m256i *, char *))(*(_QWORD *)v86 + 184LL))(v86, &v127, v24 + 1400);
  v23 = v87;
  if ( v87 >= 0 )
LABEL_10:
    v135[v11] = *((_QWORD *)v24 + 175);
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v87, 0xEA8u);
  v25 = v23;
  if ( v23 < 0 )
    goto LABEL_147;
  v26 = (_DWORD *)*((_QWORD *)v17 + 1);
  v27 = *(void (__fastcall **)(_DWORD *, enum DXGI_FORMAT *))(*(_QWORD *)v26 + 24LL);
  if ( (char *)v27 == (char *)CD2DBitmap::GetPixelFormatInfo )
  {
    CD2DBitmap::GetPixelFormatInfo(v26, v118);
  }
  else if ( (char *)v27 == (char *)CD3DSurface::GetPixelFormatInfo )
  {
    CD3DSurface::GetPixelFormatInfo(v26, v118);
  }
  else
  {
    v27(v26, v118);
  }
  v28 = 0;
  *(_QWORD *)&v105 = "NoOp";
  v29 = (char *)&unk_180239E18;
  DWORD2(v105) = 0;
  while ( *(_DWORD *)v29 != v118[2] )
  {
    v29 += 4;
    if ( v29 == "NoOp" )
      goto LABEL_17;
  }
  if ( v29 == "NoOp" )
  {
LABEL_17:
    v30 = 0;
    goto LABEL_18;
  }
  v30 = 1;
LABEL_18:
  if ( !v17[16] )
  {
    v31 = *(CCompositionSurfaceBitmap **)v17;
    v32 = *(void (**)(void))(**(_QWORD **)v17 + 104LL);
    if ( (char *)v32 == (char *)CCompositionSurfaceBitmap::IsOpaque )
    {
      CCompositionSurfaceBitmap::IsOpaque(v31);
    }
    else if ( (char *)v32 == (char *)CRenderTargetImageSource::IsOpaque )
    {
      CRenderTargetImageSource::IsOpaque(v31);
    }
    else
    {
      v32();
    }
  }
  ColorChannelDepth = GetColorChannelDepth(v118[0]);
  updated = -2003292288;
  if ( v34 )
  {
    switch ( v34 )
    {
      case 1:
        v38 = 2;
        v39 = 3LL;
        goto LABEL_23;
      case 2:
        if ( ColorChannelDepth == 8 )
        {
          v38 = 14;
          v39 = 15LL;
          goto LABEL_23;
        }
        if ( ColorChannelDepth != 10 )
          goto LABEL_144;
LABEL_136:
        v38 = 22;
        v39 = 23LL;
        goto LABEL_23;
      case 3:
        goto LABEL_136;
      case 12:
        v38 = 10;
        v39 = 11LL;
        goto LABEL_23;
      case 14:
        v38 = 34;
        v39 = 35LL;
        goto LABEL_23;
      case 20:
        if ( ColorChannelDepth == 8 )
        {
          v38 = 18;
          v39 = 19LL;
          goto LABEL_23;
        }
        if ( ColorChannelDepth == 10 )
        {
          v38 = 26;
          v39 = 27LL;
          goto LABEL_23;
        }
LABEL_144:
        v40 = v105;
        break;
      case 21:
        v38 = 30;
        v39 = 31LL;
        goto LABEL_23;
      default:
        goto LABEL_144;
    }
  }
  else
  {
    v35 = v36;
    v38 = 0;
    v39 = 1LL;
LABEL_23:
    if ( !(_BYTE)v35 )
      v39 = v38;
    updated = 0;
    v40 = *((_OWORD *)&ColorConversion::g_rgShaders + v39);
    v105 = v40;
    v28 = DWORD2(v40);
  }
  if ( updated >= 0 )
  {
    if ( v28 > 1 )
      v122[2 * v11 - 1] = v40;
    v41 = 2 * v11;
    BYTE12(v122[2 * v11]) = v30;
    if ( v17[16]
      || ((v42 = *(CRenderTargetImageSource **)v17,
           v43 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(**(_QWORD **)v17 + 104LL),
           v43 != CCompositionSurfaceBitmap::IsOpaque)
        ? ((char *)v43 != (char *)CRenderTargetImageSource::IsOpaque
         ? (IsOpaque = ((__int64 (__fastcall *)(CRenderTargetImageSource *, bool (__fastcall *)(CRenderTargetImageSource *__hidden), __int64, __int16 *))v43)(
                         v42,
                         CRenderTargetImageSource::IsOpaque,
                         v35,
                         &_ImageBase))
         : (IsOpaque = CRenderTargetImageSource::IsOpaque(v42)))
        : (IsOpaque = CCompositionSurfaceBitmap::IsOpaque(v42)),
          IsOpaque) )
    {
      IsOpaque = 1;
    }
    BYTE11(v122[2 * v11]) = IsOpaque;
    if ( *((_BYTE *)this + v11 + 196) )
      v45 = 0.0;
    else
      v45 = FLOAT_1_0;
    v46 = v101;
    if ( *((float *)v101 + v11 + 12) != v45 )
    {
      *((_BYTE *)v101 + 8) = 1;
      *((float *)v46 + v11 + 12) = v45;
    }
    v15 = v95;
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x77u);
  return (unsigned int)updated;
}
