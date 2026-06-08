/*
 * XREFs of C1Halt @ 0x1C000BF80
 * Callers:
 *     C1Idle @ 0x1C0007670 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C00076B0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
