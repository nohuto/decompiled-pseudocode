/*
 * XREFs of ?IsValid@CCompositionLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1800DA100
 * Callers:
 *     __scrt_dllmain_crt_thread_attach @ 0x1800DAD60 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x1800DAD88 (__scrt_dllmain_crt_thread_detach.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x1800DAE30 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_initialize_crt @ 0x1800DAE44 (__scrt_initialize_crt.c)
 *     __scrt_uninitialize_crt @ 0x1800DB030 (__scrt_uninitialize_crt.c)
 *     ?IsValid@CDesktopRenderTarget@@WGI@EBA_NXZ @ 0x1800DD510 (-IsValid@CDesktopRenderTarget@@WGI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CCompositionLight::IsValid(
        CCompositionLight *this,
        const struct CVisualTree *a2,
        const struct CVisual *a3)
{
  return 1;
}
