/*
 * XREFs of ?DetermineIdealAtlasSize@CAtlasManager@@CAII@Z @ 0x18001184C
 * Callers:
 *     ?AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z @ 0x18001171C (-AllocateGradientStrip@CAtlasManager@@QEAAJPEAVCAtlasEntry@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?RoundToPow2@@YAII@Z @ 0x1801C6930 (-RoundToPow2@@YAII@Z.c)
 */

unsigned int __fastcall CAtlasManager::DetermineIdealAtlasSize(int a1)
{
  unsigned int v1; // ecx
  unsigned int result; // eax

  v1 = a1 + 1;
  result = 8;
  if ( v1 >= 8 )
  {
    result = RoundToPow2(v1 + 1);
    if ( result >= 0x800 )
      return 2048;
  }
  return result;
}
