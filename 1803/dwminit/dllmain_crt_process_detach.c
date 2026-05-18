/*
 * XREFs of dllmain_crt_process_detach @ 0x18000826C
 * Callers:
 *     dllmain_crt_dispatch @ 0x180008100 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x180007144 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18000726C (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18000729C (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x180007478 (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18000749C (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x1800078B0 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180008538 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x1800085A4 (_RTC_Terminate.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  unsigned int v2; // ebx
  char v4; // di
  __int64 v5; // rcx

  v2 = 0;
  if ( dword_18000E71C <= 0 )
    return 0LL;
  --dword_18000E71C;
  v4 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x1800082FALL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_dllmain_uninitialize_critical();
  _scrt_release_startup_lock(v4);
  LOBYTE(v5) = a1;
  LOBYTE(v2) = _scrt_uninitialize_crt(v5, 0) != 0;
  return v2;
}
