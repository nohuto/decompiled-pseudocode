/*
 * XREFs of ??4?$ComPtr@VCLinkedShader@@@WRL@Microsoft@@QEAAAEAV012@PEAVCLinkedShader@@@Z @ 0x180020650
 * Callers:
 *     ?CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@AEBV?$ArrayRef@PEBUShaderLinkingBody@@@@PEAPEAVCLinkedShader@@@Z @ 0x180018420 (-CreateLinkedShader@CCompiledEffectCache@@QEAAJIAEBUShaderLinkingConfig@@AEBUShaderLinkingBody@@.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

CMILRefCountBase **__fastcall Microsoft::WRL::ComPtr<CLinkedShader>::operator=(
        CMILRefCountBase **a1,
        volatile signed __int32 *a2)
{
  CMILRefCountBase *v3; // rcx

  if ( *a1 != (CMILRefCountBase *)a2 )
  {
    if ( a2 )
      _InterlockedIncrement(a2 + 2);
    v3 = *a1;
    *a1 = (CMILRefCountBase *)a2;
    if ( v3 )
      CMILRefCountBase::Release(v3);
  }
  return a1;
}
