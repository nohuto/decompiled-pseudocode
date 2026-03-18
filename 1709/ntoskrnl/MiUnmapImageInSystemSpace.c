/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1404F73D4
 * Callers:
 *     MiSetPagesModified @ 0x140218768 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1404F6218 (MiValidateSectionCreate.c)
 *     MiRelocateImage @ 0x1404F8070 (MiRelocateImage.c)
 *     MiParseComImage @ 0x1404FB3CC (MiParseComImage.c)
 *     MiGetSystemAddressForImage @ 0x140542BF0 (MiGetSystemAddressForImage.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1406E8AAC (MiLoadSectionIntoVsmEnclave.c)
 *     MiCreateSessionDriverProtos @ 0x1406ED2F8 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x1400B69C0 (MiRemoveFromSystemSpace.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140211AE8 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
  {
    MiUnmapViewOfSection((__int64)KeGetCurrentThread()->ApcState.Process, v1, 0);
    KiUnstackDetachProcess(($709EDFC2F9E0D4565D6AA3C4377BC643 *)(a1 + 32), 0LL);
  }
  else
  {
    MiRemoveFromSystemSpace((__int64)&unk_140388438, v1, 1);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
