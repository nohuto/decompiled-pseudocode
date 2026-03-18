/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1400B2120
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     MiShareExistingControlArea @ 0x1404C11C4 (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
