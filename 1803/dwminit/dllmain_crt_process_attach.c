/*
 * XREFs of dllmain_crt_process_attach @ 0x180008150
 * Callers:
 *     dllmain_crt_dispatch @ 0x180008100 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180007144 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180007180 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_before_initialize_c @ 0x1800071B4 (__scrt_dllmain_before_initialize_c.c)
 *     __scrt_initialize_crt @ 0x1800072B0 (__scrt_initialize_crt.c)
 *     __scrt_is_nonwritable_in_current_image @ 0x1800073DC (__scrt_is_nonwritable_in_current_image.c)
 *     __scrt_release_startup_lock @ 0x180007478 (__scrt_release_startup_lock.c)
 *     __scrt_fastfail @ 0x1800078B0 (__scrt_fastfail.c)
 *     ?__scrt_initialize_type_info@@YAXXZ @ 0x180008528 (-__scrt_initialize_type_info@@YAXXZ.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180008544 (__scrt_initialize_default_local_stdio_options.c)
 *     __scrt_get_dyn_tls_init_callback @ 0x180008560 (__scrt_get_dyn_tls_init_callback.c)
 *     _RTC_Initialize @ 0x180008568 (_RTC_Initialize.c)
 *     _initterm_0 @ 0x1800085E0 (_initterm_0.c)
 *     _initterm_e_0 @ 0x1800085E6 (_initterm_e_0.c)
 *     _guard_dispatch_icall_nop @ 0x180008750 (_guard_dispatch_icall_nop.c)
 */

__int64 dllmain_crt_process_attach()
{
  char v1; // bl
  char v2; // di
  _QWORD *dyn_tls_init_callback; // rax

  if ( !_scrt_initialize_crt(0) )
    return 0LL;
  v1 = _scrt_acquire_startup_lock();
  v2 = 1;
  if ( _scrt_current_native_startup_state )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x180008269LL);
  }
  _scrt_current_native_startup_state = 1;
  if ( _scrt_dllmain_before_initialize_c() )
  {
    RTC_Initialize();
    __scrt_initialize_type_info();
    _scrt_initialize_default_local_stdio_options();
    if ( !initterm_e_0((_PIFV *)&_xi_a, (_PIFV *)&_xi_z) )
    {
      if ( _scrt_dllmain_after_initialize_c() )
      {
        initterm_0((_PVFV *)&_xc_a, (_PVFV *)&_xc_z);
        _scrt_current_native_startup_state = 2;
        v2 = 0;
      }
    }
  }
  _scrt_release_startup_lock(v1);
  if ( v2 )
    return 0LL;
  dyn_tls_init_callback = (_QWORD *)_scrt_get_dyn_tls_init_callback();
  if ( *dyn_tls_init_callback )
  {
    if ( _scrt_is_nonwritable_in_current_image((__int64)dyn_tls_init_callback) )
      _guard_dispatch_icall_fptr();
  }
  ++dword_18000E71C;
  return 1LL;
}
