/*
 * XREFs of SepAccessStatusHasAccessDenied @ 0x1401A6E0C
 * Callers:
 *     SeAccessCheckByType @ 0x14005CD40 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404D7DC4 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     <none>
 */

bool __fastcall SepAccessStatusHasAccessDenied(char a1, int a2, unsigned __int64 a3)
{
  __int64 v4; // rax

  if ( !KeGetCurrentThread()->PreviousMode || a1 && !a2 )
    return 0;
  v4 = 0x7FFFFFFF0000LL;
  if ( a3 < 0x7FFFFFFF0000LL )
    v4 = a3;
  return *(int *)v4 < 0;
}
