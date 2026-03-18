/*
 * XREFs of PopEtInternerUnlock @ 0x1406D2C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock(PopEtGlobals + 40);
}
