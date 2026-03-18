/*
 * XREFs of ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C019532C
 * Callers:
 *     UserOnGreTextReady @ 0x1C000A0E0 (UserOnGreTextReady.c)
 *     NtUserSetCursorIconData @ 0x1C00468C0 (NtUserSetCursorIconData.c)
 *     NtUserFindWindowEx @ 0x1C00A41E0 (NtUserFindWindowEx.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall EnterLeaveCrit::~EnterLeaveCrit(EnterLeaveCrit *this, __int64 a2, __int64 a3, __int64 a4)
{
  UserSessionSwitchLeaveCrit(this, a2, a3, a4);
}
