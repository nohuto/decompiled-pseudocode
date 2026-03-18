/*
 * XREFs of dllmain_crt_process_detach @ 0x1800DC51C
 * Callers:
 *     dllmain_crt_dispatch @ 0x1800DC3B0 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x1800DACD8 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800DAE00 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x1800DAE30 (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x1800DB00C (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x1800DB030 (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x1800DB3F0 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x1800DC7E0 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x1800DC84C (_RTC_Terminate.c)
 */

__int64 __fastcall dllmain_crt_process_detach(char a1)
{
  unsigned int v2; // ebx
  char v4; // di
  const struct CVisualTree *v5; // rdx
  __int64 v6; // rcx
  const struct CVisual *v7; // r8
  CCompositionLight *v8; // rcx
  const struct CVisual *v9; // r8

  v2 = 0;
  if ( dword_1802D5E18 <= 0 )
    return 0LL;
  --dword_1802D5E18;
  v4 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7u);
    __debugbreak();
    JUMPOUT(0x1800DC5AALL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_dllmain_uninitialize_critical(v6, v5, v7);
  _scrt_release_startup_lock(v4);
  LOBYTE(v8) = a1;
  LOBYTE(v2) = _scrt_uninitialize_crt(v8, 0LL, v9) != 0;
  return v2;
}
