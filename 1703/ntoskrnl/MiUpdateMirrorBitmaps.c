/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x14057AB34
 * Callers:
 *     MmDuplicateMemory @ 0x14040BFE8 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140803C7C (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x14057AB74 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&stru_14036C960 + v0, 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
