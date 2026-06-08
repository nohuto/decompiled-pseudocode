/*
 * XREFs of C1Halt @ 0x1C000C8D0
 * Callers:
 *     C1Idle @ 0x1C0004AE0 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C0004B20 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
