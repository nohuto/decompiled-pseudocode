/*
 * XREFs of NtUserCloseDesktop @ 0x1C0048E70
 * Callers:
 *     <none>
 * Callees:
 *     _CloseDesktop @ 0x1C0048EAC (_CloseDesktop.c)
 */

_BOOL8 __fastcall NtUserCloseDesktop(HANDLE Handle)
{
  _BOOL8 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx

  EnterCrit(0LL, 1LL);
  v2 = (int)CloseDesktop(Handle) >= 0;
  UserSessionSwitchLeaveCrit(v4, v3);
  return v2;
}
