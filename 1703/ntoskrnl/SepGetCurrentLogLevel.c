/*
 * XREFs of SepGetCurrentLogLevel @ 0x1402482B0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x1400EE8E0 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x1402482D8 (SepGetLearningModeObjectInformation.c)
 * Callees:
 *     <none>
 */

__int64 SepGetCurrentLogLevel()
{
  if ( KeGetCurrentIrql() )
    return 2LL;
  else
    return KeGetCurrentThread()->ApcState.InProgressFlags & 1;
}
