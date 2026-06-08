/*
 * XREFs of C1Halt @ 0x1C000C6B0
 * Callers:
 *     C1Idle @ 0x1C00079B0 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C00079F0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
