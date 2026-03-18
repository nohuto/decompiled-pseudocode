/*
 * XREFs of PopEtInternerUnlock @ 0x140559EC0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock(PopEtGlobals + 40);
}
