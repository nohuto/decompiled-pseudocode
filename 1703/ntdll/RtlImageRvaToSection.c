/*
 * XREFs of RtlImageRvaToSection @ 0x18002FC40
 * Callers:
 *     sub_18002FC7C @ 0x18002FC7C (sub_18002FC7C.c)
 *     sub_18003A658 @ 0x18003A658 (sub_18003A658.c)
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 *     RtlImageRvaToVa @ 0x180081E30 (RtlImageRvaToVa.c)
 *     sub_1800D7D58 @ 0x1800D7D58 (sub_1800D7D58.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlImageRvaToSection(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG Rva)
{
  unsigned int NumberOfSections; // r10d
  _IMAGE_SECTION_HEADER *v4; // r9
  int v5; // edx
  ULONG VirtualAddress; // ecx

  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  v4 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  v5 = 0;
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    VirtualAddress = v4->VirtualAddress;
    if ( Rva >= VirtualAddress && Rva < v4->SizeOfRawData + VirtualAddress )
      break;
    ++v4;
    if ( ++v5 >= NumberOfSections )
      return 0LL;
  }
  return v4;
}
