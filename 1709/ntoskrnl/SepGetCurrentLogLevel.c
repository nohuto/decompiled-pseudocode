/*
 * XREFs of SepGetCurrentLogLevel @ 0x14025F9D0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140081830 (SeSetLearningModeObjectInformation.c)
 *     SepGetLearningModeObjectInformation @ 0x14025F9F8 (SepGetLearningModeObjectInformation.c)
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
