/*
 * XREFs of __scrt_initialize_crt @ 0x1800DAE44
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800DC400 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800DA100 (-IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     __isa_available_init @ 0x1800DB53C (__isa_available_init.c)
 */

char __fastcall _scrt_initialize_crt(int a1)
{
  char v1; // al
  const struct CVisualTree *v2; // rdx
  CCompositionLight *v3; // rcx
  const struct CVisual *v4; // r8
  const struct CVisualTree *v5; // rdx
  CCompositionLight *v6; // rcx
  const struct CVisual *v7; // r8
  const struct CVisualTree *v9; // rdx
  const struct CVisual *v10; // r8

  v1 = byte_1802D5D28;
  if ( !a1 )
    v1 = 1;
  byte_1802D5D28 = v1;
  _isa_available_init();
  if ( !CCompositionLight::IsValid(v3, v2, v4) )
    return 0;
  if ( !CCompositionLight::IsValid(v6, v5, v7) )
  {
    CCompositionLight::IsValid(0LL, v9, v10);
    return 0;
  }
  return 1;
}
