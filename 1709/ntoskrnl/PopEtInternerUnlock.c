/*
 * XREFs of PopEtInternerUnlock @ 0x140459070
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock(PopEtGlobals + 40);
}
