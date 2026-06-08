/*
 * XREFs of C1Halt @ 0x1C0004ED0
 * Callers:
 *     C1Idle @ 0x1C000C3C0 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000C620 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
