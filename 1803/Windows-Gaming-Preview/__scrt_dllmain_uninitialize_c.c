/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180042310
 * Callers:
 *     dllmain_crt_process_detach @ 0x180041D2C (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_MarshalAdditionalData@CFTMCrossProcBase@@MEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x18000FB40 (-v_MarshalAdditionalData@CFTMCrossProcBase@@MEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x180042E74 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x18004302E (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct IStream *v0; // rdx
  CFTMCrossProcBase *v1; // rcx
  const struct _GUID *v2; // r8
  void *v3; // r9
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = CFTMCrossProcBase::v_MarshalAdditionalData(v1, v0, v2, v3);
  if ( !result )
    return o__cexit_0();
  return result;
}
