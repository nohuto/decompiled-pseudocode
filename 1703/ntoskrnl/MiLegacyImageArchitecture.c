/*
 * XREFs of MiLegacyImageArchitecture @ 0x14005EB2C
 * Callers:
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
