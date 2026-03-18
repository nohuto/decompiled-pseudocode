/*
 * XREFs of MiSizeMemoryListLocks @ 0x14045EEA0
 * Callers:
 *     MiInitializeMirroring @ 0x140803C7C (MiInitializeMirroring.c)
 * Callees:
 *     <none>
 */

__int64 MiSizeMemoryListLocks()
{
  return 24LL * ((unsigned int)(unsigned __int16)KeNumberNodes + 2 * dword_14036C1FC + 27);
}
