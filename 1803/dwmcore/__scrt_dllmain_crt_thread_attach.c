/*
 * XREFs of __scrt_dllmain_crt_thread_attach @ 0x1800DAD60
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800DC3B0 (dllmain_crt_dispatch.c)
 * Callees:
 *     ?IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800DA100 (-IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 */

char __fastcall _scrt_dllmain_crt_thread_attach(
        CCompositionLight *a1,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  const struct CVisualTree *v3; // rdx
  CCompositionLight *v4; // rcx
  const struct CVisual *v5; // r8
  const struct CVisualTree *v7; // rdx
  CCompositionLight *v8; // rcx
  const struct CVisual *v9; // r8

  if ( !CCompositionLight::IsValid(a1, a2, a3) )
    return 0;
  if ( !CCompositionLight::IsValid(v4, v3, v5) )
  {
    CCompositionLight::IsValid(v8, v7, v9);
    return 0;
  }
  return 1;
}
