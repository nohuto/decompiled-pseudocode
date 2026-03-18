/*
 * XREFs of UserIsUserCritSecInShared @ 0x1C0090E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UserIsUserCritSecInShared()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) )
    return ExIsResourceAcquiredSharedLite(gpresUser) != 0;
  return v0;
}
