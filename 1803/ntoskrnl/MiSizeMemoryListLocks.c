/*
 * XREFs of MiSizeMemoryListLocks @ 0x140584D18
 * Callers:
 *     MmCreatePartition @ 0x140184450 (MmCreatePartition.c)
 *     MiInitializeMirroring @ 0x14089C980 (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_1403CB6DC + 27);
}
