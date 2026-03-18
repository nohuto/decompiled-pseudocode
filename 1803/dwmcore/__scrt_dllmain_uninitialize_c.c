/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x1800DAE00
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800DC51C (dllmain_crt_process_detach.c)
 * Callees:
 *     ?AddOcclusionInformation@CGenericInk@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800D6260 (-AddOcclusionInformation@CGenericInk@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800DB6F8 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x1800DB72E (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct COcclusionContext *v0; // rdx
  CGenericInk *v1; // rcx
  const struct D2D_SIZE_F *v2; // r8
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = CGenericInk::AddOcclusionInformation(v1, v0, v2);
  if ( !result )
    return o__cexit_0();
  return result;
}
