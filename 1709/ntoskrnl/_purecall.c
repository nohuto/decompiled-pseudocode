/*
 * XREFs of _purecall @ 0x140287420
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 */

void __noreturn purecall()
{
  RtlRaiseStatus(-1073741822);
}
