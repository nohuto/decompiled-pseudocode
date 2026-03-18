/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x140115110
 * Callers:
 *     MiShareExistingControlArea @ 0x14049C820 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
