/*
 * XREFs of sub_140003A30 @ 0x140003A30
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x140003A18 (atexit.c)
 *     __crtInitCritSecAndSpinCountEx @ 0x140004240 (__crtInitCritSecAndSpinCountEx.c)
 *     __scrt_fastfail @ 0x140004248 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x140006950 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_140003A30()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  _crtInitCritSecAndSpinCountEx(&CriticalSection, 0xFA0u);
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
    ((void (__fastcall *)(void *))ProcAddress)(&unk_14000F2E0);
    qword_14000F2F0 = _security_cookie ^ __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
    qword_14000F2F8 = _security_cookie ^ __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
  }
  else
  {
    hHandle = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hHandle )
    {
      _scrt_fastfail(7LL);
      JUMPOUT(0x140003B61LL);
    }
  }
  atexit(sub_140003B70);
  return 0LL;
}
