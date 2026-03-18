/*
 * XREFs of KeInitializeCatRegisters @ 0x14014ECD8
 * Callers:
 *     KiRestoreFeatureBits @ 0x14014EBA8 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KeInitializeCatRegisters()
{
  __int64 result; // rax

  if ( KiCacheIsoBitmap )
  {
    if ( (KeFeatureBits & 0x100000000000LL) != 0 )
    {
      result = (unsigned int)KiCacheIsoBitmap;
      __writemsr(0xC91u, (unsigned int)KiCacheIsoBitmap);
    }
  }
  return result;
}
