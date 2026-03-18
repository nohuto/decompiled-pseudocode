/*
 * XREFs of pre_c_initialization @ 0x140002DC0
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x1400030EC (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x140003308 (atexit.c)
 *     _get_startup_argv_mode @ 0x140003888 (_get_startup_argv_mode.c)
 *     _get_startup_file_mode @ 0x140003890 (_get_startup_file_mode.c)
 *     __scrt_initialize_winrt @ 0x140003898 (__scrt_initialize_winrt.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x14000389C (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_stub_for_acrt_uninitialize @ 0x1400038AC (__scrt_stub_for_acrt_uninitialize.c)
 *     _guard_check_icall_nop @ 0x1400038B0 (_guard_check_icall_nop.c)
 *     __scrt_fastfail @ 0x1400038E8 (__scrt_fastfail.c)
 *     _RTC_Initialize @ 0x140003B18 (_RTC_Initialize.c)
 *     __p__commode @ 0x140003D8E (__p__commode.c)
 *     _configthreadlocale @ 0x140003DA0 (_configthreadlocale.c)
 *     _o__configure_wide_argv_0 @ 0x140003DA6 (_o__configure_wide_argv_0.c)
 *     _o__initialize_wide_environment_0 @ 0x140003DC4 (_o__initialize_wide_environment_0.c)
 *     _set_app_type @ 0x140003DDC (_set_app_type.c)
 *     _o__set_fmode_0 @ 0x140003DE2 (_o__set_fmode_0.c)
 */

__int64 pre_c_initialization()
{
  unsigned int startup_file_mode; // eax
  int *v1; // rbx
  _crt_argv_mode startup_argv_mode; // eax
  int v3; // eax

  set_app_type(_crt_gui_app);
  startup_file_mode = get_startup_file_mode();
  o__set_fmode_0(startup_file_mode);
  v1 = _p__commode();
  *v1 = _scrt_initialize_winrt();
  if ( !(unsigned __int8)_scrt_initialize_onexit_tables(1LL) )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
  }
  RTC_Initialize();
  atexit(RTC_Terminate);
  startup_argv_mode = get_startup_argv_mode();
  if ( (unsigned int)o__configure_wide_argv_0((unsigned int)startup_argv_mode) )
  {
    _scrt_fastfail(7LL);
    JUMPOUT(0x140002E65LL);
  }
  __scrt_initialize_type_info();
  v3 = _scrt_initialize_winrt();
  configthreadlocale(v3);
  if ( (unsigned __int8)_scrt_stub_for_acrt_uninitialize() )
    o__initialize_wide_environment_0();
  _scrt_initialize_winrt();
  return 0LL;
}
