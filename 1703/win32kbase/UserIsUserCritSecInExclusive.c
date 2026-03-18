/*
 * XREFs of UserIsUserCritSecInExclusive @ 0x1C00805A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 UserIsUserCritSecInExclusive()
{
  return ExIsResourceAcquiredExclusiveLite(gpresUser) == 1;
}
