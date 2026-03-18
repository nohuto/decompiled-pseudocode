/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x14001B870
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MiShareExistingControlArea @ 0x1405104F8 (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
