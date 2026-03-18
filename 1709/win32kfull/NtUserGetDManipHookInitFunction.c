/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C0116F50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(NTSTRSAFE_PWSTR pszDest, NTSTRSAFE_PWSTR a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(pszDest, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  PsGetCurrentProcessWin32Process(v4);
  RtlStringCchCopyW(pszDest, 0x104uLL, &gszModuleDManipHook);
  RtlStringCchCopyW(a2, 0x104uLL, L"InitializeDManipHook");
  UserSessionSwitchLeaveCrit(v6, v5);
  return 1LL;
}
