/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x14001E260
 * Callers:
 *     <none>
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x14001D2A0 (__scrt_initialize_onexit_tables.c)
 *     atexit @ 0x14001D4BC (atexit.c)
 *     __scrt_fastfail @ 0x14001D674 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  InitializeCriticalSectionEx(&stru_140085DC0, 0xFA0u, 0);
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
    ((void (__fastcall *)(void *))ProcAddress)(&unk_140085DE8);
    qword_140085DF8 = _security_cookie ^ __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
    qword_140085E00 = _security_cookie ^ __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
  }
  else
  {
    hHandle = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hHandle )
    {
      _scrt_fastfail(7u);
      JUMPOUT(0x14001E3AALL);
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
