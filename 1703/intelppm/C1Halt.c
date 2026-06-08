/*
 * XREFs of C1Halt @ 0x1C0004A60
 * Callers:
 *     C1Idle @ 0x1C000BC40 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000BEA0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
