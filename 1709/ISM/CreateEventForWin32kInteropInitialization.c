/*
 * XREFs of CreateEventForWin32kInteropInitialization @ 0x18000EA50
 * Callers:
 *     ?s_RegisterManipulationThreadCallback@Win32kInterop@@SAXP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z1@Z @ 0x18000EAC0 (-s_RegisterManipulationThreadCallback@Win32kInterop@@SAXP6AHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX.c)
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000EC74 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001DC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

HANDLE CreateEventForWin32kInteropInitialization()
{
  DWORD CurrentProcessId; // eax
  int v1; // eax
  __int64 v2; // rcx
  WCHAR Name[264]; // [rsp+20h] [rbp-228h] BYREF

  CurrentProcessId = GetCurrentProcessId();
  v1 = StringCchPrintfW(Name, 260LL, L"Win32kInteropInitializedEvent%lu", CurrentProcessId);
  v2 = 0LL;
  if ( v1 >= 0 )
    return CreateEventW(0LL, 1, 0, Name);
  return (HANDLE)v2;
}
