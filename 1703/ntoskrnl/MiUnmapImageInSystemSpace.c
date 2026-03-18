/*
 * XREFs of MiUnmapImageInSystemSpace @ 0x1404974E0
 * Callers:
 *     MiSetPagesModified @ 0x140210F54 (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x140422CC0 (MiValidateSectionCreate.c)
 *     MiParseComImage @ 0x140494F54 (MiParseComImage.c)
 *     MiRelocateImage @ 0x140495140 (MiRelocateImage.c)
 *     MiGetSystemAddressForImage @ 0x1404B1048 (MiGetSystemAddressForImage.c)
 *     MiCreateSessionDriverProtos @ 0x1406BF840 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140060690 (MiRemoveFromSystemSpace.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 */

void __fastcall MiUnmapImageInSystemSpace(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 <= 0x7FFFFFFEFFFFuLL )
  {
    MiUnmapViewOfSection(PsInitialSystemProcess, v1, 0);
    KiUnstackDetachProcess(($5BC46E0569261879018906DEC3127961 *)(a1 + 32), 0LL);
  }
  else
  {
    MiRemoveFromSystemSpace((__int64)&unk_14036C0F8, v1, 1);
  }
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    MiReturnCrossPartitionControlAreaCharges(v3);
}
