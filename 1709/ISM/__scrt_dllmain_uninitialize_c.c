/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x1800CA370
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800C9F34 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?GetEndpoint@DWMNullInputTarget@@UEBA_KXZ @ 0x18000B160 (-GetEndpoint@DWMNullInputTarget@@UEBA_KXZ.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800CA9C4 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x1800CAA12 (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  DWMNullInputTarget *v0; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = DWMNullInputTarget::GetEndpoint(v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
