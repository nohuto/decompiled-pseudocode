/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x1407756BC
 * Callers:
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140775304 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140775418 (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1407755AC (ViTargetTrackContiguousMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 ViTargetUpdateTreeAllowed()
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
    return ViTargetInitialized != 0;
  return result;
}
