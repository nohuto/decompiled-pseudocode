/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x180060CB0
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800606CC (dllmain_crt_process_detach.c)
 * Callees:
 *     ?GetName@CPolicyConfig@@UEAAPEBGXZ @ 0x18003FCA0 (-GetName@CPolicyConfig@@UEAAPEBGXZ.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800617D0 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x18006182E (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  CPolicyConfig *v0; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = (unsigned int)CPolicyConfig::GetName(v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
