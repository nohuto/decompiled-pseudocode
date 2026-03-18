/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x14053D034
 * Callers:
 *     MiSetPagesModified @ 0x14025545C (MiSetPagesModified.c)
 *     MiParseComImage @ 0x14053B9A0 (MiParseComImage.c)
 *     MiValidateSectionCreate @ 0x14053BB84 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x14053C470 (MiRelocateImage.c)
 *     MiGetSystemAddressForImage @ 0x1405F8C24 (MiGetSystemAddressForImage.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 *     MiCreateSessionDriverProtos @ 0x140756740 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     MiRemoveFromSystemSpace @ 0x14004671C (MiRemoveFromSystemSpace.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14024FF3C (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x1404D7010 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *a1;
  if ( *a1 <= 0x7FFFFFFEFFFFLL )
  {
    MiUnmapViewOfSection((__int64)KeGetCurrentThread()->ApcState.Process, v1, 0, 0);
    KiUnstackDetachProcess((__int64)(a1 + 4), 0LL);
  }
  else
  {
    MiRemoveFromSystemSpace((__int64)&unk_1403CB5C0, v1, 1LL);
  }
  v3 = a1[1];
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
