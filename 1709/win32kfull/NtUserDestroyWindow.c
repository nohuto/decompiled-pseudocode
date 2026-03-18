/*
 * XREFs of NtUserDestroyWindow @ 0x1C005DBA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 */

__int64 __fastcall NtUserDestroyWindow(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v5 = 0;
  if ( v2 )
    v5 = xxxDestroyWindow(v2);
  UserSessionSwitchLeaveCrit(v4, v3);
  return v5;
}
