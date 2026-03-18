/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x140025C34
 * Callers:
 *     MiAllowImageMap @ 0x1404415B0 (MiAllowImageMap.c)
 *     MiMarkPrivateImageCfgBits @ 0x14044169C (MiMarkPrivateImageCfgBits.c)
 *     MmGetSectionInformation @ 0x1404ECBAC (MmGetSectionInformation.c)
 *     MiRelocateImageAgain @ 0x140511290 (MiRelocateImageAgain.c)
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
