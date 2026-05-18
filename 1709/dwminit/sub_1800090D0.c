/*
 * XREFs of sub_1800090D0 @ 0x1800090D0
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x1800083A0 (atexit.c)
 *     __crtInitCritSecAndSpinCountEx @ 0x180009588 (__crtInitCritSecAndSpinCountEx.c)
 *     __scrt_fastfail @ 0x180009590 (__scrt_fastfail.c)
 *     _guard_dispatch_icall_nop @ 0x1800097F0 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_1800090D0()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rsi
  FARPROC v2; // rdi
  FARPROC v3; // rax
  FARPROC v4; // rbx

  _crtInitCritSecAndSpinCountEx(&stru_18000F6B8, 0xFA0u);
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
    ((void (__fastcall *)(void *))ProcAddress)(&unk_18000F6E0);
    qword_18000F6F0 = _security_cookie ^ __ROR8__(v2, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
    qword_18000F6F8 = _security_cookie ^ __ROR8__(v4, 64 - ((unsigned __int8)_security_cookie & 0x3Fu));
  }
  else
  {
    hHandle = CreateEventW(0LL, 1, 0, 0LL);
    if ( !hHandle )
    {
      _scrt_fastfail(7LL);
      JUMPOUT(0x180009201LL);
    }
  }
  atexit(sub_180009210);
  return 0LL;
}
