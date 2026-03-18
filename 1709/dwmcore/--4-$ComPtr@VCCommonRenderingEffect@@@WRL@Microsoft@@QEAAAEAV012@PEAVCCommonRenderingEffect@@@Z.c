/*
 * XREFs of ??4?$ComPtr@VCCommonRenderingEffect@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCommonRenderingEffect@@@Z @ 0x1800BE6B0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

CMILRefCountBase **__fastcall Microsoft::WRL::ComPtr<CCommonRenderingEffect>::operator=(
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
