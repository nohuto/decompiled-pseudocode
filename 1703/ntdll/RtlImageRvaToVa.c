/*
 * XREFs of RtlImageRvaToVa @ 0x180081E30
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008D0E0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageRvaToSection @ 0x18002FC40 (RtlImageRvaToSection.c)
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
    v7 = RtlImageRvaToSection(NtHeaders, BaseOfImage, Rva);
  }
  if ( !v7 )
    return 0LL;
  if ( LastRvaSection )
    *LastRvaSection = v7;
  return (char *)BaseOfImage + Rva - v7->VirtualAddress + v7->PointerToRawData;
}
