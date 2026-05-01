/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x1801E24D0
 * Callers:
 *     dllmain_crt_process_detach @ 0x1801E1C84 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?OnViewPropertiesChanging@SingleViewShellExperienceEventHandler@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800079A0 (-OnViewPropertiesChanging@SingleViewShellExperienceEventHandler@@UEAAJPEAVCSingleViewShellExperi.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1801E2C78 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x1801E2E0C (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct CSingleViewShellExperience *v0; // rdx
  SingleViewShellExperienceEventHandler *v1; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = SingleViewShellExperienceEventHandler::OnViewPropertiesChanging(v1, v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
