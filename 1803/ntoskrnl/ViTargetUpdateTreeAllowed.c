/*
 * XREFs of ViTargetUpdateTreeAllowed @ 0x1408225F8
 * Callers:
 *     ViTargetAddToCounter @ 0x140822108 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140822230 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x14082234C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1408224E8 (ViTargetTrackContiguousMemory.c)
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
