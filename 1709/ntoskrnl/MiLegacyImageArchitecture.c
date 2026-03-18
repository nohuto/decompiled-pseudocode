/*
 * XREFs of MiLegacyImageArchitecture @ 0x1400B7968
 * Callers:
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiCreateImageFileMap @ 0x1404F8B90 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
