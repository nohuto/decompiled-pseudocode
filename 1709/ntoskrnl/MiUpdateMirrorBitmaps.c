/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x1406E1088
 * Callers:
 *     MmDuplicateMemory @ 0x14042F6D8 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x14082ED28 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x1406E0F88 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap((__int64)(&stru_140388B58 + v0), 0) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
