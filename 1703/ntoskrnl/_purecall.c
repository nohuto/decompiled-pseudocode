/*
 * XREFs of _purecall @ 0x14025D8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
