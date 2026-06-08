/*
 * XREFs of C1Halt @ 0x1C0004C70
 * Callers:
 *     C1Idle @ 0x1C000BFD0 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000C230 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
