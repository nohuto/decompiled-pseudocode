/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x1405EFF68
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x14089C980 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x1405EFFA8 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_1403CBDF0[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
