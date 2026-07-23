/*
 * XREFs of RtlImageRvaToSection @ 0x180010F00
 * Callers:
 *     sub_180010CB4 @ 0x180010CB4 (sub_180010CB4.c)
 *     sub_18002B318 @ 0x18002B318 (sub_18002B318.c)
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 *     RtlImageRvaToVa @ 0x18007D1F0 (RtlImageRvaToVa.c)
 *     sub_1800D0CF4 @ 0x1800D0CF4 (sub_1800D0CF4.c)
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
