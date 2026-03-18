/*
 * XREFs of __scrt_dllmain_uninitialize_critical @ 0x1800DAE30
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800DC51C (dllmain_crt_process_detach.c)
 * Callees:
 *     ?IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800DA100 (-IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 */

char __fastcall _scrt_dllmain_uninitialize_critical(__int64 a1, const struct CVisualTree *a2, const struct CVisual *a3)
{
  const struct CVisualTree *v3; // rdx
  CCompositionLight *v4; // rcx
  const struct CVisual *v5; // r8

  CCompositionLight::IsValid(0LL, a2, a3);
  return CCompositionLight::IsValid(v4, v3, v5);
}
