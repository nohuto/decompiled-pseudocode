/*
 * XREFs of RtlImageRvaToVa @ 0x18007D1F0
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180089CD0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     RtlImageRvaToSection @ 0x180010F00 (RtlImageRvaToSection.c)
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
