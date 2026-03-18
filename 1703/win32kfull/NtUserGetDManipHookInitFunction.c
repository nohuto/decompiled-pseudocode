/*
 * XREFs of NtUserGetDManipHookInitFunction @ 0x1C010C780
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetDManipHookInitFunction(NTSTRSAFE_PWSTR pszDest, NTSTRSAFE_PWSTR a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  const wchar_t *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterSharedCrit(0LL, 1LL);
  ProbeForWrite(pszDest, 0x208uLL, 2u);
  ProbeForWrite(a2, 0x208uLL, 2u);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5, v4) + 12) & 0x80u) != 0 )
  {
    RtlStringCchCopyW(pszDest, 0x104uLL, &gszModuleDManipHookWOW);
    v6 = &gszFunctionDManipHookWOW;
  }
  else
  {
    RtlStringCchCopyW(pszDest, 0x104uLL, &gszModuleDManipHook);
    v6 = &gszFunctionDManipHook;
  }
  RtlStringCchCopyW(a2, 0x104uLL, v6);
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return 1LL;
}
