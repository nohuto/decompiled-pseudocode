/*
 * XREFs of MiSizeMemoryListLocks @ 0x14059F5C8
 * Callers:
 *     MmCreatePartition @ 0x140158808 (MmCreatePartition.c)
 *     MiInitializeMirroring @ 0x14082ED28 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_140388544 + 27);
}
