/*
 * XREFs of ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C019533C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C000A1A0 (xxxLW_LoadFonts.c)
 * Callees:
 *     <none>
 */

LeaveEnterCrit *__fastcall LeaveEnterCrit::LeaveEnterCrit(LeaveEnterCrit *this, __int64 a2, __int64 a3, __int64 a4)
{
  UserSessionSwitchLeaveCrit(this, a2, a3, a4);
  return this;
}
