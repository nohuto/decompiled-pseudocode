/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x180035E20
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x1800352D0 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x1800354EC (atexit.c)
 *     __scrt_fastfail @ 0x1800356C0 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  InitializeCriticalSectionAndSpinCount(&stru_18004ED68, 0xFA0u);
  ModuleHandleW = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ( !ModuleHandleW )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( !ModuleHandleW )
    {
      _scrt_fastfail(7u);
      __debugbreak();
    }
  }
  ProcAddress = GetProcAddress(ModuleHandleW, "InitializeConditionVariable");
  v2 = GetProcAddress(ModuleHandleW, "SleepConditionVariableCS");
  v3 = GetProcAddress(ModuleHandleW, "WakeAllConditionVariable");
  v4 = v3;
  if ( ProcAddress && v2 && v3 )
  {
    hHandle = 0LL;
    ((void (__fastcall *)(void *))ProcAddress)(&unk_18004ED90);
    qword_18004EDA0 = _security_cookie ^ __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
    qword_18004EDA8 = _security_cookie ^ __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
  }
  else
  {
    hHandle = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hHandle )
    {
      _scrt_fastfail(7u);
      JUMPOUT(0x180035F67LL);
    }
  }
  if ( !_scrt_initialize_onexit_tables(0) )
  {
    _scrt_fastfail(7u);
    __debugbreak();
  }
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
