/*
 * XREFs of _RTC_Terminate @ 0x180035848
 * Callers:
 *     dllmain_crt_process_detach @ 0x180034C5C (dllmain_crt_process_detach.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __cdecl RTC_Terminate()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_tzz; i < &_rtc_tzz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
