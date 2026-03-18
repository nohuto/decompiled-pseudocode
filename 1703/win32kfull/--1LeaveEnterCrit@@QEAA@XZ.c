/*
 * XREFs of ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C019535C
 * Callers:
 *     xxxLW_LoadFonts @ 0x1C000A1A0 (xxxLW_LoadFonts.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveEnterCrit::~LeaveEnterCrit(LeaveEnterCrit *this)
{
  EnterCrit(0LL, 1LL);
}
