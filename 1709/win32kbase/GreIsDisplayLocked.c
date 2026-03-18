/*
 * XREFs of GreIsDisplayLocked @ 0x1C00FC0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsDisplayLocked()
{
  return ExIsResourceAcquiredExclusiveLite((PERESOURCE)ghsemGreLock) != 0;
}
