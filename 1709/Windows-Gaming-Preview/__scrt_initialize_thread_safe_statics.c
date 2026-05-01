/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x180041660
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x1800413B0 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x1800415CC (atexit.c)
 *     __scrt_fastfail @ 0x180041AFC (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  InitializeCriticalSectionEx(&stru_18005BA58, 0xFA0u, 0);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
    {
      _scrt_fastfail(7LL);
      __debugbreak();
    }
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "InitializeConditionVariable");
  v2 = GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  v3 = GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  v4 = v3;
  if ( ProcAddress && v2 && v3 )
  {
    hObject = 0LL;
    ((void (__fastcall *)(void *))ProcAddress)(&unk_18005BA80);
    qword_18005BA90 = _security_cookie ^ __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
    qword_18005BA98 = _security_cookie ^ __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
  }
  else
  {
    hObject = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hObject )
    {
      _scrt_fastfail(7LL);
      JUMPOUT(0x1800417AALL);
    }
  }
  if ( !_scrt_initialize_onexit_tables(0) )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
  }
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
