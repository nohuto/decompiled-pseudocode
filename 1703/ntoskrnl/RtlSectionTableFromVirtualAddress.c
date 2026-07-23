/*
 * XREFs of RtlSectionTableFromVirtualAddress @ 0x140012E20
 * Callers:
 *     RtlAddressInSectionTable @ 0x140012DC0 (RtlAddressInSectionTable.c)
 *     KiShadowProcessorAllocation @ 0x140403934 (KiShadowProcessorAllocation.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14042A100 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     CcInitializeBcbProfiler @ 0x1407DC30C (CcInitializeBcbProfiler.c)
 *     sub_1407DDD64 @ 0x1407DDD64 (sub_1407DDD64.c)
 * Callees:
 *     <none>
 */

PIMAGE_SECTION_HEADER __cdecl RtlSectionTableFromVirtualAddress(
        PIMAGE_NT_HEADERS NtHeaders,
        PVOID BaseOfImage,
        ULONG VirtualAddress)
{
  _IMAGE_SECTION_HEADER *v3; // r9
  int v4; // r10d
  ULONG v5; // eax
  unsigned __int64 Name; // rax

  v3 = (_IMAGE_SECTION_HEADER *)((char *)&NtHeaders->OptionalHeader + NtHeaders->FileHeader.SizeOfOptionalHeader);
  if ( (unsigned __int64)NtHeaders <= 0x7FFFFFFEFFFFLL )
  {
    if ( (unsigned __int64)v3 > 0x7FFFFFFEFFFFLL )
      return 0LL;
    Name = (unsigned __int64)v3[NtHeaders->FileHeader.NumberOfSections].Name;
    if ( Name < (unsigned __int64)v3 || Name >= 0x7FFFFFFEFFFFLL )
      return 0LL;
  }
  v4 = 0;
  if ( !NtHeaders->FileHeader.NumberOfSections )
    return 0LL;
  while ( 1 )
  {
    v5 = v3->VirtualAddress;
    if ( VirtualAddress >= v5 && VirtualAddress < v5 + v3->SizeOfRawData )
      break;
    ++v3;
    if ( ++v4 >= (unsigned int)NtHeaders->FileHeader.NumberOfSections )
      return 0LL;
  }
  return v3;
}
