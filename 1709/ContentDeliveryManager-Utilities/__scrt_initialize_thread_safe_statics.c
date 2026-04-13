/*
 * XREFs of __scrt_initialize_thread_safe_statics @ 0x1800B3EA0
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x1800B3E18 (atexit.c)
 *     __crtInitCritSecAndSpinCountEx @ 0x1800B4574 (__crtInitCritSecAndSpinCountEx.c)
 *     __scrt_fastfail @ 0x1800B457C (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 _scrt_initialize_thread_safe_statics()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  _crtInitCritSecAndSpinCountEx(&stru_18015D820, 0xFA0u);
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
    hHandle = 0LL;
    ((void (__fastcall *)(void *))ProcAddress)(&unk_18015D848);
    qword_18015D858 = _security_cookie ^ __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
    qword_18015D860 = _security_cookie ^ __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
  }
  else
  {
    hHandle = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hHandle )
    {
      _scrt_fastfail(7LL);
      JUMPOUT(0x1800B3FD1LL);
    }
  }
  atexit(_scrt_uninitialize_thread_safe_statics);
  return 0LL;
}
