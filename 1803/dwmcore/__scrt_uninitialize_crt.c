/*
 * XREFs of __scrt_uninitialize_crt @ 0x1800DB030
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800DC51C (dllmain_crt_process_detach.c)
 * Callees:
 *     ?IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800DA100 (-IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 */

char __fastcall _scrt_uninitialize_crt(CCompositionLight *a1, const struct CVisualTree *a2, const struct CVisual *a3)
{
  char v3; // bl
  CCompositionLight *v4; // rcx
  const struct CVisualTree *v5; // rdx
  const struct CVisual *v6; // r8

  v3 = (char)a1;
  if ( !byte_1802D5D28 || !(_BYTE)a2 )
  {
    CCompositionLight::IsValid(a1, a2, a3);
    LOBYTE(v4) = v3;
    CCompositionLight::IsValid(v4, v5, v6);
  }
  return 1;
}
