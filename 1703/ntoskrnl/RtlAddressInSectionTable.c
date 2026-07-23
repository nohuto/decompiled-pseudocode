/*
 * XREFs of RtlAddressInSectionTable @ 0x140012DC0
 * Callers:
 *     RtlpImageDirectoryEntryToData32 @ 0x140012D24 (RtlpImageDirectoryEntryToData32.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x14008BADC (RtlpImageDirectoryEntryToData64.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14042A100 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x140012E20 (RtlSectionTableFromVirtualAddress.c)
 */

PVOID __cdecl RtlAddressInSectionTable(PIMAGE_NT_HEADERS NtHeaders, PVOID BaseOfImage, ULONG VirtualAddress)
{
  __int64 v3; // rdi
  PIMAGE_SECTION_HEADER v5; // rax

  v3 = VirtualAddress;
  v5 = RtlSectionTableFromVirtualAddress(NtHeaders, BaseOfImage, VirtualAddress);
  if ( v5
    && ((unsigned __int64)BaseOfImage >= 0x7FFFFFFEFFFFLL
     || (unsigned __int64)BaseOfImage + v5->PointerToRawData - (unsigned __int64)v5->VirtualAddress + v3 < 0x7FFFFFFEFFFFLL) )
  {
    return (char *)BaseOfImage + v5->PointerToRawData - (unsigned __int64)v5->VirtualAddress + v3;
  }
  else
  {
    return 0LL;
  }
}
