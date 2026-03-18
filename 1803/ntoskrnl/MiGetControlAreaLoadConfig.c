/*
 * XREFs of MiGetControlAreaLoadConfig @ 0x14003E604
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1404B4820 (MiMarkSharedImageCfgBits.c)
 *     MiAllowImageMap @ 0x1404B5C48 (MiAllowImageMap.c)
 *     MiRelocateImageAgain @ 0x1404F16CC (MiRelocateImageAgain.c)
 *     MmGetSectionInformation @ 0x1404F91C0 (MmGetSectionInformation.c)
 *     MiMarkPrivateImageCfgBits @ 0x140574F8C (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaLoadConfig(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 32LL);
  if ( result )
    result += 72LL;
  return result;
}
