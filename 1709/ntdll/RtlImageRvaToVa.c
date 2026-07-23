/*
 * XREFs of RtlImageRvaToVa @ 0x180081870
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008A5B0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1800299D0 (RtlSectionTableFromVirtualAddress.c)
 */

PVOID __cdecl RtlImageRvaToVa(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG Rva,
        PIMAGE_SECTION_HEADER *LastRvaSection)
{
  PIMAGE_SECTION_HEADER v7; // r10
  ULONG VirtualAddress; // r8d

  if ( !LastRvaSection
    || (v7 = *LastRvaSection) == 0LL
    || (VirtualAddress = v7->VirtualAddress, Rva < VirtualAddress)
    || Rva >= VirtualAddress + v7->SizeOfRawData )
  {
    v7 = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, Rva);
  }
  if ( !v7 )
    return 0LL;
  if ( LastRvaSection )
    *LastRvaSection = v7;
  return (char *)BaseOfImage + Rva - v7->VirtualAddress + v7->PointerToRawData;
}
