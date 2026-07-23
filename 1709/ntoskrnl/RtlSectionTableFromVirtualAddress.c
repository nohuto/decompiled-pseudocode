/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x1400AE6E0
 * Callers:
 *     RtlAddressInSectionTable @ 0x1400AE680 (RtlAddressInSectionTable.c)
 *     KiShadowProcessorAllocation @ 0x14042391C (KiShadowProcessorAllocation.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404DA728 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     KiVerifyXcpt15 @ 0x14080C330 (KiVerifyXcpt15.c)
 *     CcInitializeBcbProfiler @ 0x14080C364 (CcInitializeBcbProfiler.c)
 *     sub_14080DE60 @ 0x14080DE60 (sub_14080DE60.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  _IMAGE_SECTION_HEADER *v3; // r9
  unsigned int NumberOfSections; // r10d
  int v5; // edx
  ULONG v6; // ecx
  unsigned __int64 Name; // rax

  v3 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  NumberOfSections = NtHeaders->FileHeader.NumberOfSections;
  if ( (unsigned __int64)NtHeaders <= 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned __int64)v3 > 0x7FFFFFFEFFFFLL )
      return 0LL;
    Name = (unsigned __int64)v3[NtHeaders->FileHeader.NumberOfSections].Name;
    if ( Name < (unsigned __int64)v3 || Name >= 0x7FFFFFFEFFFFLL )
      return 0LL;
  }
  v5 = 0;
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    v6 = v3->VirtualAddress;
    if ( VirtualAddress >= v6 && VirtualAddress < v3->SizeOfRawData + v6 )
      break;
    ++v3;
    if ( ++v5 >= NumberOfSections )
      return 0LL;
  }
  return v3;
}
