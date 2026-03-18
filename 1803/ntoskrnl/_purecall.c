/*
 * XREFs of _purecall @ 0x1402BB720
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
