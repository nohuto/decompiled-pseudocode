/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x1800987F0
 * Callers:
 *     dllmain_crt_process_detach @ 0x180097F7C (dllmain_crt_process_detach.c)
 * Callees:
 *     ?OnVisibilityRevokedChanged@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800963A0 (-OnVisibilityRevokedChanged@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180098F9C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x180099158 (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct CSingleViewShellExperience *v0; // rdx
  CToastCenterExperienceManager *v1; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = CToastCenterExperienceManager::OnVisibilityRevokedChanged(v1, v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
