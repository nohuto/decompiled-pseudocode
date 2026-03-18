/*
 * XREFs of ??1EnterLeaveCrit@@QEAA@XZ @ 0x1C01A0580
 * Callers:
 *     NtUserFindWindowEx @ 0x1C006E540 (NtUserFindWindowEx.c)
 *     NtUserSetCursorIconData @ 0x1C0098670 (NtUserSetCursorIconData.c)
 * Callees:
 *     <none>
 */

void __fastcall EnterLeaveCrit::~EnterLeaveCrit(EnterLeaveCrit *this, __int64 a2)
{
  UserSessionSwitchLeaveCrit(this, a2);
}
