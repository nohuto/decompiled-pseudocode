/*
 * XREFs of ?LookupShader@CCompiledEffectCache@@QEBAPEAVCLinkedShader@@IAEBUShaderLinkingConfig@@@Z @ 0x18013F4D8
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@V?$span@PEBUShaderLinkingBody@@$0?0@gsl@@PEAPEAVCLinkedShader@@@Z @ 0x1800D5C80 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetLookupKey@ShaderLinkingConfig@@QEBA?AULookupKey@1@I@Z @ 0x180076AE0 (-GetLookupKey@ShaderLinkingConfig@@QEBA-AULookupKey@1@I@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

struct CLinkedShader *__fastcall CCompiledEffectCache::LookupShader(
        CCompiledEffectCache *this,
        int a2,
        const struct ShaderLinkingConfig *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  ShaderLinkingConfig::GetLookupKey((__int64)a3, &v9, a2);
  v4 = 0;
  if ( *((int *)this + 4) <= 0 )
  {
LABEL_6:
    v4 = -1;
  }
  else
  {
    v5 = 0LL;
    v6 = *(_QWORD **)this;
    while ( *v6 != (_QWORD)v9 || v6[1] != *((_QWORD *)&v9 + 1) )
    {
      ++v4;
      ++v5;
      v6 += 2;
      if ( v5 >= *((int *)this + 4) )
        goto LABEL_6;
    }
  }
  if ( v4 == -1 )
    return 0LL;
  v7 = *(volatile signed __int32 **)(*((_QWORD *)this + 1) + 8LL * v4);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    CMILRefCountBase::Release((CMILRefCountBase *)v7);
  }
  return (struct CLinkedShader *)v7;
}
