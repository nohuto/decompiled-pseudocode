/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x180032DA4
 * Callers:
 *     dllmain_crt_process_attach @ 0x180032790 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?Release@AudioEffectsWatcher@@UEAAKXZ @ 0x180031D70 (-Release@AudioEffectsWatcher@@UEAAKXZ.c)
 *     __isa_available_init @ 0x1800337F8 (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800339B4 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x180033A08 (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x180033A1A (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  AudioEffectsWatcher *v0; // rcx
  _crt_argv_mode v1; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    v1 = (unsigned int)AudioEffectsWatcher::Release(v0);
    if ( o__configure_narrow_argv_0(v1) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
