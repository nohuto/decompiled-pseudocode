/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x1400BB4B0
 * Callers:
 *     MmGetSectionInformation @ 0x14048C730 (MmGetSectionInformation.c)
 *     MiAllowImageMap @ 0x1404D21DC (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x140504210 (MiRelocateImageAgain.c)
 *     MiMarkPrivateImageCfgBits @ 0x1405873F8 (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 result; // rax

  result = **(_QWORD **)(a1 + 96);
  if ( result )
    result += 72LL;
  return result;
}
