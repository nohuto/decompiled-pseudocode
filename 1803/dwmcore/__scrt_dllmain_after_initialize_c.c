/*
 * XREFs of __scrt_dllmain_after_initialize_c @ 0x1800DAD14
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800DC400 (dllmain_crt_process_attach.c)
 * Callees:
 *     ?GetMaxStackCount@CNaturalAnimation@@UEBAIXZ @ 0x1800D6350 (-GetMaxStackCount@CNaturalAnimation@@UEBAIXZ.c)
 *     __isa_available_init @ 0x1800DB53C (__isa_available_init.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x1800DB6F8 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__configure_narrow_argv_0 @ 0x1800DB734 (_o__configure_narrow_argv_0.c)
 *     _initialize_narrow_environment @ 0x1800DB746 (_initialize_narrow_environment.c)
 */

char _scrt_dllmain_after_initialize_c()
{
  CNaturalAnimation *v0; // rcx
  _crt_argv_mode MaxStackCount; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    _isa_available_init();
  }
  else
  {
    MaxStackCount = (unsigned int)CNaturalAnimation::GetMaxStackCount(v0);
    if ( o__configure_narrow_argv_0(MaxStackCount) )
      return 0;
    initialize_narrow_environment();
  }
  return 1;
}
