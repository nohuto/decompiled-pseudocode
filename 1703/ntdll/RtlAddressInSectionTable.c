/*
 * XREFs of RtlAddressInSectionTable @ 0x18007FD90
 * Callers:
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     sub_1800324E0 @ 0x1800324E0 (sub_1800324E0.c)
 *     sub_180032C0C @ 0x180032C0C (sub_180032C0C.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 *     sub_1800E0C98 @ 0x1800E0C98 (sub_1800E0C98.c)
 *     sub_1800E0D54 @ 0x1800E0D54 (sub_1800E0D54.c)
 *     RtlComputeImportTableHash @ 0x1800E0F80 (RtlComputeImportTableHash.c)
 *     sub_1800E9728 @ 0x1800E9728 (sub_1800E9728.c)
 * Callees:
 *     RtlImageRvaToSection @ 0x18002FC40 (RtlImageRvaToSection.c)
 */

PVOID __cdecl RtlAddressInSectionTable(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG VirtualAddress)
{
  PVOID result; // rax
  unsigned int v4; // r8d
  __int64 v5; // r11

  result = RtlImageRvaToSection(NtHeaders, BaseOfImage, VirtualAddress);
  if ( result )
    return (PVOID)(v5 + *((unsigned int *)result + 5) - (unsigned __int64)*((unsigned int *)result + 3) + v4);
  return result;
}
