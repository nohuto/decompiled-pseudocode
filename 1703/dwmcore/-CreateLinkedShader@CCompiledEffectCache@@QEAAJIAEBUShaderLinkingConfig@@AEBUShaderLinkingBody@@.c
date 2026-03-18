/*
 * XREFs of ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180017350 (-AddShaderToCache@CRenderingTechnique@@QEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ??0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z @ 0x180018144 (--0CLinkedShader@@QEAA@PEAUID3D10Blob@@W4Enum@VertexShaderKey@@@Z.c)
 *     ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x180018328 (-LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z.c)
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@V?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBV?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@@Z @ 0x18001855C (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@V-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@V-$CMapEqu.c)
 *     ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x180020650 (--4-$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180079970 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAUVertexShaderDesc@@PEAPEAUID3D10Blob@@@Z @ 0x1800B8A74 (-LinkShader@@YAJAEBUShaderLinkingBody@@AEBUShaderLinkingConfig@@AEBV-$ArrayRef@PEBUShaderLinking.c)
 *     ?ResolveKey@VertexShaderDesc@@QEBA?AW4Enum@VertexShaderKey@@XZ @ 0x1800BB82C (-ResolveKey@VertexShaderDesc@@QEBA-AW4Enum@VertexShaderKey@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x180178A24 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     Template_s @ 0x180178A98 (Template_s.c)
 */

__int64 __fastcall CCompiledEffectCache::CreateLinkedShader(
        const void **a1,
        unsigned int a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        struct CLinkedShader **a6)
{
  CMILRefCountBase *v6; // rbx
  int LinkedShader; // eax
  unsigned int v10; // edi
  int v11; // ebx
  __int64 v12; // rax
  CCompiledEffectCache *v13; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  struct CLinkedShader *v21; // rax
  int v22; // r9d
  unsigned int v23; // [rsp+20h] [rbp-99h]
  CMILRefCountBase *v24; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v25[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v26; // [rsp+40h] [rbp-79h] BYREF
  __int64 v27; // [rsp+48h] [rbp-71h]
  __int64 v28; // [rsp+50h] [rbp-69h]
  CCompiledEffectCache *v29; // [rsp+58h] [rbp-61h]
  struct CLinkedShader **v30; // [rsp+60h] [rbp-59h]
  char v31[8]; // [rsp+68h] [rbp-51h] BYREF
  _OWORD v32[3]; // [rsp+70h] [rbp-49h] BYREF
  __int128 v33; // [rsp+A0h] [rbp-19h]
  char Buffer[32]; // [rsp+B0h] [rbp-9h] BYREF

  v6 = 0LL;
  v27 = a5;
  v30 = a6;
  v28 = a4;
  v25[0] = a2;
  v29 = (CCompiledEffectCache *)a1;
  v24 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    StringCchPrintfA(Buffer, 0x20uLL, "id=%p sg=%u lit=%u", a1[4], a2, *((_DWORD *)a3 + 12) != -1);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_s(v16, v15, Buffer);
  }
  ShaderLinkingConfig::GetLookupKey(a3, Buffer, a2);
  v26 = 0LL;
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v26);
  LinkedShader = LinkShader(v28, (_DWORD)a3, v27, (unsigned int)v31, (__int64)&v26);
  v10 = LinkedShader;
  if ( LinkedShader >= 0 )
  {
    v11 = VertexShaderDesc::ResolveKey(v31);
    v12 = (__int64)HeapAlloc(WPF::g_processHeap, 0, 0x70uLL);
    if ( v12 )
      v12 = CLinkedShader::CLinkedShader(v12, v26, v11);
    Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v24, v12);
    v6 = v24;
    if ( !v24 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x6Bu);
      goto LABEL_9;
    }
    v13 = v29;
    goto LABEL_7;
  }
  if ( *((_DWORD *)a3 + 12) == -1 )
  {
    v23 = 103;
  }
  else
  {
    v17 = v25[0];
    v18 = *a3;
    v32[1] = a3[1];
    v19 = a3[3];
    v32[0] = v18;
    v20 = a3[2];
    v13 = v29;
    v33 = v19;
    LODWORD(v33) = -1;
    v32[2] = v20;
    v21 = CCompiledEffectCache::LookupShader(v29, v25[0], (const struct ShaderLinkingConfig *)v32);
    *(_QWORD *)v25 = v21;
    if ( v21 )
    {
      v10 = 0;
      *v30 = v21;
      goto LABEL_9;
    }
    LinkedShader = CCompiledEffectCache::CreateLinkedShader((_DWORD)v13, v17, (unsigned int)v32, v28, v27, (__int64)v25);
    v10 = LinkedShader;
    if ( LinkedShader >= 0 )
    {
      Microsoft::WRL::ComPtr<CLinkedShader>::operator=(&v24, *(_QWORD *)v25);
      v6 = v24;
LABEL_7:
      if ( (unsigned int)CMap<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>,CMapEqualHelper<ShaderLinkingConfig::LookupKey,Microsoft::WRL::ComPtr<CLinkedShader>>>::Add(
                           v13,
                           Buffer,
                           &v24) )
      {
        *v30 = v6;
        goto LABEL_9;
      }
      v22 = -2147024882;
      v23 = 112;
      v10 = -2147024882;
      goto LABEL_23;
    }
    v23 = 96;
  }
  v22 = LinkedShader;
LABEL_23:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, v23);
LABEL_9:
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v26);
  if ( v6 )
    CMILRefCountBase::Release(v6);
  return v10;
}
