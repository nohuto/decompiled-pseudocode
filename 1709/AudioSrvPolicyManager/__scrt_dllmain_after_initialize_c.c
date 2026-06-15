/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x180026C74
 * Callers:
 *     dllmain_crt_process_attach @ 0x180026660 (dllmain_crt_process_attach.c)
 * Callees:
 *     _get_startup_argv_mode @ 0x1800068A0 (_get_startup_argv_mode.c)
 *     __isa_available_init @ 0x1800273A0 (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18002755C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x1800275B2 (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x1800275C4 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode startup_argv_mode; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    startup_argv_mode = get_startup_argv_mode();
    if ( o__configure_narrow_argv_0(startup_argv_mode) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
