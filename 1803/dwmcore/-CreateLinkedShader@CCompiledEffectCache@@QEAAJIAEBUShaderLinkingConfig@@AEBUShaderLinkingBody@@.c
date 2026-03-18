/*
 * XREFs of ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800717A8 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800213B4 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180076AE0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800D4288 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@V-$span@PEBUShaderLinkingBody@@$.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800D5B30 (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x1800D5DE0 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x1800D5FCC (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z @ 0x1800D6000 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18013F4D8 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1801B06F4 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     McTemplateU0s @ 0x1801B0768 (McTemplateU0s.c)
 */

__int64 __fastcall CCompiledEffectCache::CreateLinkedShader(
        const void **a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int128 *a5,
        CMILRefCountBase **a6)
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
  __int128 v26; // xmm0
  __int64 v27; // rax
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-E0h]
  CMILRefCountBase *v30; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v31[2]; // [rsp+38h] [rbp-C8h] BYREF
  struct ID3D10Blob *v32; // [rsp+40h] [rbp-C0h] BYREF
  __int128 *v33; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+50h] [rbp-B0h]
  CCompiledEffectCache *v35; // [rsp+58h] [rbp-A8h]
  CMILRefCountBase **v36; // [rsp+60h] [rbp-A0h]
  char v37[8]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v38; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v39[8]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+100h] [rbp+0h]
  __int128 v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+120h] [rbp+20h]
  char Buffer[32]; // [rsp+130h] [rbp+30h] BYREF

  v6 = 0LL;
  v33 = a5;
  v36 = a6;
  v34 = a4;
  v31[0] = a2;
  v35 = (CCompiledEffectCache *)a1;
  v30 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    StringCchPrintfA(Buffer, 0x20uLL, "id=%p sg=%u lit=%u", a1[4], a2, *(_DWORD *)(a3 + 128) != -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0s(v17, v16, Buffer);
  }
  ShaderLinkingConfig::GetLookupKey(a3, Buffer, a2);
  v32 = 0LL;
  v38 = *v33;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
  LinkedShader = LinkShader(v34, a3, (__int64 *)&v38, (__int64)v37, &v32);
  v10 = LinkedShader;
  if ( LinkedShader >= 0 )
  {
    LOBYTE(v11) = VertexShaderDesc::ResolveKey((__int64)v37);
    v12 = v11;
    v13 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
    if ( v13 )
      v13 = (LPVOID)CLinkedShader::CLinkedShader(v13, v32, v12);
    Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v30, v13);
    v6 = v30;
    if ( !v30 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x6Au);
      goto LABEL_9;
    }
    v14 = v35;
    goto LABEL_7;
  }
  if ( *(_DWORD *)(a3 + 128) == -1 )
  {
    v29 = 102;
  }
  else
  {
    v18 = v31[0];
    v19 = *(_OWORD *)(a3 + 16);
    v39[0] = *(_OWORD *)a3;
    v20 = *(_OWORD *)(a3 + 32);
    v39[1] = v19;
    v21 = *(_OWORD *)(a3 + 48);
    v39[2] = v20;
    v22 = *(_OWORD *)(a3 + 64);
    v39[3] = v21;
    v23 = *(_OWORD *)(a3 + 80);
    v39[4] = v22;
    v24 = *(_OWORD *)(a3 + 96);
    v39[5] = v23;
    v25 = *(_OWORD *)(a3 + 128);
    v39[6] = v24;
    v39[7] = *(_OWORD *)(a3 + 112);
    v26 = *(_OWORD *)(a3 + 144);
    v27 = *(_QWORD *)(a3 + 160);
    v14 = v35;
    v40 = v25;
    v41 = v26;
    v42 = v27;
    LODWORD(v40) = -1;
    *(_QWORD *)v31 = CCompiledEffectCache::LookupShader(v35, v31[0], (const struct ShaderLinkingConfig *)v39);
    if ( *(_QWORD *)v31 )
    {
      v10 = 0;
      *v36 = *(CMILRefCountBase **)v31;
      goto LABEL_9;
    }
    v38 = *v33;
    LinkedShader = CCompiledEffectCache::CreateLinkedShader(
                     (_DWORD)v14,
                     v18,
                     (unsigned int)v39,
                     v34,
                     (__int64)&v38,
                     (__int64)v31);
    v10 = LinkedShader;
    if ( LinkedShader >= 0 )
    {
      Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v30, *(_QWORD *)v31);
      v6 = v30;
LABEL_7:
      if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                           v14,
                           Buffer,
                           &v30) )
      {
        *v36 = v6;
        goto LABEL_9;
      }
      v28 = -2147024882;
      v29 = 111;
      v10 = -2147024882;
      goto LABEL_23;
    }
    v29 = 95;
  }
  v28 = LinkedShader;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v29);
LABEL_9:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v32);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return v10;
}
