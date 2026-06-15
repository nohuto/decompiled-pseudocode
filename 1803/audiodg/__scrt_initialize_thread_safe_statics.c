/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x14001D110
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x14001C0D0 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x14001C2EC (atexit.c)
 *     __scrt_fastfail @ 0x14001C4A8 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  InitializeCriticalSectionAndSpinCount(&stru_140087DC8, 0xFA0u);
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
    hEvent = 0LL;
    ((void (__fastcall *)(void *))ProcAddress)(&unk_140087DF0);
    qword_140087E00 = _security_cookie ^ __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
    qword_140087E08 = _security_cookie ^ __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
  }
  else
  {
    hEvent = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hEvent )
    {
      _scrt_fastfail(7u);
      JUMPOUT(0x14001D257LL);
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
