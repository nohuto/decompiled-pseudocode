/*
 * XREFs of RtlAddressInSectionTable @ 0x1800782B0
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     sub_18001014C @ 0x18001014C (sub_18001014C.c)
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 *     sub_1800DA518 @ 0x1800DA518 (sub_1800DA518.c)
 *     sub_1800DA5D4 @ 0x1800DA5D4 (sub_1800DA5D4.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 *     sub_1800E4978 @ 0x1800E4978 (sub_1800E4978.c)
 * Callees:
 *     RtlImageRvaToSection @ 0x180010F00 (RtlImageRvaToSection.c)
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
