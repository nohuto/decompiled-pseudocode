/*
 * XREFs of RtlpImageDirectoryEntryToData64 @ 0x14008BADC
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x140012DC0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData64(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 VirtualAddress; // rcx
  PVOID v9; // rax

  if ( a3 >= NtHeaders->OptionalHeader.NumberOfRvaAndSizes )
    return 3221225485LL;
  VirtualAddress = NtHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
  if ( !(_DWORD)VirtualAddress )
    return 3221225474LL;
  if ( (unsigned __int64)BaseOfImage < 0x7FFFFFFEFFFFLL
    && (unsigned __int64)&BaseOfImage[VirtualAddress] >= 0x7FFFFFFEFFFFLL )
  {
    return 3221225485LL;
  }
  *a4 = NtHeaders->OptionalHeader.DataDirectory[a3].Size;
  if ( a2 || (unsigned int)VirtualAddress < NtHeaders->OptionalHeader.SizeOfHeaders )
  {
    *a6 = &BaseOfImage[VirtualAddress];
    return 0LL;
  }
  else
  {
    v9 = RtlAddressInSectionTable(NtHeaders, BaseOfImage, VirtualAddress);
    *a6 = v9;
    return v9 == 0LL ? 0xC000000D : 0;
  }
}
