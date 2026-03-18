/*
 * XREFs of MiLegacyImageArchitecture @ 0x14009D544
 * Callers:
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
