/*
 * XREFs of sub_1800E9728 @ 0x1800E9728
 * Callers:
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall sub_1800E9728(
        char *BaseOfImage,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v8; // rdx
  PVOID v9; // rax

  if ( (unsigned int)a3 >= HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
    return 3221225485LL;
  v8 = *((unsigned int *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
  if ( !(_DWORD)v8 )
    return 3221225474LL;
  *a4 = *((_DWORD *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3 + 1);
  if ( a2 || (unsigned int)v8 < NtHeaders->OptionalHeader.SizeOfHeaders )
  {
    *a6 = &BaseOfImage[v8];
    return 0LL;
  }
  else
  {
    v9 = RtlAddressInSectionTable(NtHeaders, BaseOfImage, v8);
    *a6 = v9;
    return v9 == 0LL ? 0xC000000D : 0;
  }
}
