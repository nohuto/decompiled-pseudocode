/*
 * XREFs of KeGetClockOwner @ 0x140203200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeGetClockOwner()
{
  return (unsigned int)KiClockTimerOwner;
}
