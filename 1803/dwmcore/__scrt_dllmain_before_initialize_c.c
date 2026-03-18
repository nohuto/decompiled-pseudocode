/*
 * XREFs of __scrt_dllmain_before_initialize_c @ 0x1800DAD48
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800DC400 (dllmain_crt_process_attach.c)
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x1800DAE90 (__scrt_initialize_onexit_tables.c)
 */

bool _scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)_scrt_initialize_onexit_tables(0LL) != 0;
}
