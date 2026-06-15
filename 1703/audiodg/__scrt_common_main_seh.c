/*
 * XREFs of __scrt_common_main_seh @ 0x14001CC9C
 * Callers:
 *     wWinMainCRTStartup @ 0x14001CE10 (wWinMainCRTStartup.c)
 * Callees:
 *     wWinMain @ 0x140001340 (wWinMain.c)
 *     __scrt_acquire_startup_lock @ 0x14001D218 (__scrt_acquire_startup_lock.c)
 *     __scrt_initialize_crt @ 0x14001D254 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x14001D380 (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x14001D41C (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x14001D440 (__scrt_uninitialize_crt.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x14001D65C (__scrt_get_dyn_tls_init_callback.c)
 *     __scrt_get_dyn_tls_dtor_callback @ 0x14001D664 (__scrt_get_dyn_tls_dtor_callback.c)
 *     __scrt_fastfail @ 0x14001D674 (__scrt_fastfail.c)
 *     __scrt_get_show_window_mode @ 0x14001D7BC (__scrt_get_show_window_mode.c)
 *     __scrt_is_managed_app @ 0x14001D7F8 (__scrt_is_managed_app.c)
 *     _initterm_0 @ 0x14001DB70 (_initterm_0.c)
 *     _initterm_e_0 @ 0x14001DB76 (_initterm_e_0.c)
 *     _c_exit_0 @ 0x14001DB7C (_c_exit_0.c)
 *     _register_thread_local_exe_atexit_callback_0 @ 0x14001DB82 (_register_thread_local_exe_atexit_callback_0.c)
 *     _o__cexit_0 @ 0x14001DBB8 (_o__cexit_0.c)
 *     _o__exit_0 @ 0x14001DBD0 (_o__exit_0.c)
 *     _o__get_wide_winmain_command_line_0 @ 0x14001DBD6 (_o__get_wide_winmain_command_line_0.c)
 *     _seh_filter_exe @ 0x14001DBFC (_seh_filter_exe.c)
 *     _o_exit_0 @ 0x14001DC1A (_o_exit_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 _scrt_common_main_seh()
{
  __int64 v0; // rcx
  char v1; // di
  char v2; // bl
  __int64 v3; // rcx
  __int64 v5; // rcx
  _QWORD *dyn_tls_init_callback; // rax
  __int64 v7; // rcx
  void (__fastcall **v8)(_QWORD, __int64); // rbx
  _tls_callback_type *dyn_tls_dtor_callback; // rax
  __int64 v10; // rcx
  _tls_callback_type *v11; // rbx
  int show_window_mode; // ebx
  __int64 v13; // rcx
  WCHAR *wide_winmain_command_line_0; // rax
  unsigned int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // rcx

  if ( !(unsigned __int8)_scrt_initialize_crt(1LL) )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
  }
  v1 = 0;
  v2 = _scrt_acquire_startup_lock(v0);
  v3 = (unsigned int)_scrt_current_native_startup_state;
  if ( _scrt_current_native_startup_state == 1 )
    _scrt_fastfail(7LL);
  if ( (_DWORD)v3 )
  {
    v1 = 1;
  }
  else
  {
    _scrt_current_native_startup_state = 1;
    if ( initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
      return 255LL;
    initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
    _scrt_current_native_startup_state = 2;
  }
  LOBYTE(v3) = v2;
  _scrt_release_startup_lock(v3);
  dyn_tls_init_callback = (_QWORD *)_scrt_get_dyn_tls_init_callback(v5);
  v8 = (void (__fastcall **)(_QWORD, __int64))dyn_tls_init_callback;
  if ( *dyn_tls_init_callback && (unsigned __int8)_scrt_is_nonwritable_in_current_image(dyn_tls_init_callback) )
    (*v8)(0LL, 2LL);
  dyn_tls_dtor_callback = (_tls_callback_type *)_scrt_get_dyn_tls_dtor_callback(v7);
  v11 = dyn_tls_dtor_callback;
  if ( *dyn_tls_dtor_callback && (unsigned __int8)_scrt_is_nonwritable_in_current_image(dyn_tls_dtor_callback) )
    register_thread_local_exe_atexit_callback_0(*v11);
  show_window_mode = (unsigned __int16)_scrt_get_show_window_mode(v10);
  wide_winmain_command_line_0 = (WCHAR *)o__get_wide_winmain_command_line_0(v13);
  v15 = wWinMain(&_ImageBase, 0LL, wide_winmain_command_line_0, show_window_mode);
  if ( !(unsigned __int8)_scrt_is_managed_app(v16) )
    o_exit_0(v15);
  if ( !v1 )
    o__cexit_0(v17);
  LOBYTE(v17) = 1;
  _scrt_uninitialize_crt(v17, 0LL);
  return v15;
}
