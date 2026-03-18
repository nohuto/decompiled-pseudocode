/*
 * XREFs of ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180085CD8
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x18006D5A0 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180085CD8 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x180001F7C (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800028D0 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@@.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180021EE0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x180085CD8 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x1800B5690 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z @ 0x1800C0080 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800C01B8 (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18011C6B0 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x18017F514 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     McTemplateU0s @ 0x18017F588 (McTemplateU0s.c)
 */

__int64 __fastcall CCompiledEffectCache::CreateLinkedShader(
        const void **a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        struct CLinkedShader **a6)
{
  CMILRefCountBase *v6; // rbx
  int LinkedShader; // eax
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ebx
  LPVOID v13; // rax
  CCompiledEffectCache *v14; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  struct CLinkedShader *v26; // rax
  DWORD v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  CMILRefCountBase *v29; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v30[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct ID3D10Blob *v31; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  CCompiledEffectCache *v34; // [rsp+58h] [rbp-A8h]
  struct CLinkedShader **v35; // [rsp+60h] [rbp-A0h]
  char v36[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v37; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v38[6]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-20h]
  __int128 v40; // [rsp+F0h] [rbp-10h]
  char Buffer[32]; // [rsp+100h] [rbp+0h] BYREF

  v6 = 0LL;
  v32 = a5;
  v35 = a6;
  v33 = a4;
  v30[0] = a2;
  v34 = (CCompiledEffectCache *)a1;
  v29 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    StringCchPrintfA(Buffer, 0x20uLL, "id=%p sg=%u lit=%u", a1[4], a2, *(_DWORD *)(a3 + 96) != -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0s(v17, v16, Buffer);
  }
  ShaderLinkingConfig::GetLookupKey(a3, Buffer, a2);
  v31 = 0LL;
  v37 = *v32;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v31);
  LinkedShader = LinkShader(v33, a3, &v37, (__int64)v36, &v31);
  v10 = LinkedShader;
  if ( LinkedShader >= 0 )
  {
    LOBYTE(v11) = VertexShaderDesc::ResolveKey((__int64)v36);
    v12 = v11;
    v13 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
    if ( v13 )
      v13 = (LPVOID)CLinkedShader::CLinkedShader(v13, v31, v12);
    Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v29, v13);
    v6 = v29;
    if ( !v29 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x6Au);
      goto LABEL_9;
    }
    v14 = v34;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a3 + 96) == -1 )
  {
    v28 = 102;
  }
  else
  {
    v18 = v30[0];
    v19 = *(_OWORD *)(a3 + 16);
    v38[0] = *(_OWORD *)a3;
    v20 = *(_OWORD *)(a3 + 32);
    v38[1] = v19;
    v21 = *(_OWORD *)(a3 + 48);
    v38[2] = v20;
    v22 = *(_OWORD *)(a3 + 64);
    v38[3] = v21;
    v23 = *(_OWORD *)(a3 + 80);
    v38[4] = v22;
    v24 = *(_OWORD *)(a3 + 96);
    v38[5] = v23;
    v25 = *(_OWORD *)(a3 + 112);
    v14 = v34;
    v39 = v24;
    LODWORD(v39) = -1;
    v40 = v25;
    v26 = CCompiledEffectCache::LookupShader(v34, v30[0], (const struct ShaderLinkingConfig *)v38);
    *(_QWORD *)v30 = v26;
    if ( v26 )
    {
      v10 = 0;
      *v35 = v26;
      goto LABEL_9;
    }
    v37 = *v32;
    LinkedShader = CCompiledEffectCache::CreateLinkedShader(
                     (_DWORD)v14,
                     v18,
                     (unsigned int)v38,
                     v33,
                     (__int64)&v37,
                     (__int64)v30);
    v10 = LinkedShader;
    if ( LinkedShader >= 0 )
    {
      Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v29, *(_QWORD *)v30);
      v6 = v29;
LABEL_7:
      if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                           v14,
                           Buffer,
                           &v29) )
      {
        *v35 = v6;
        goto LABEL_9;
      }
      v27 = -2147024882;
      v28 = 111;
      v10 = -2147024882;
      goto LABEL_23;
    }
    v28 = 95;
  }
  v27 = LinkedShader;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v27, v28);
LABEL_9:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v31);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return v10;
}
