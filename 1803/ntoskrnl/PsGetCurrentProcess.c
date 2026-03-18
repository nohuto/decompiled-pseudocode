/*
 * XREFs of PsGetCurrentProcess @ 0x1400627B0
 * Callers:
 *     MiGetPageProtection @ 0x140022690 (MiGetPageProtection.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
