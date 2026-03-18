/*
 * XREFs of PopFxWorkOrderWatchdog @ 0x14022C760
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 */

void __fastcall __noreturn PopFxWorkOrderWatchdog(__int64 a1, ULONG_PTR a2)
{
  PopFxBugCheck(0x618uLL, a2, 0LL, 0LL);
}
