/*
 * XREFs of RtlpImageDirectoryEntryToData32 @ 0x18002993C
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpSnapModule @ 0x180027FC0 (LdrpSnapModule.c)
 *     RtlpxLookupFunctionTable @ 0x180028A70 (RtlpxLookupFunctionTable.c)
 *     LdrpGetProcedureAddress @ 0x180028E78 (LdrpGetProcedureAddress.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1800299D0 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData32(
        __int64 a1,
        void *a2,
        unsigned __int16 a3,
        _DWORD *a4,
        PIMAGE_NT_HEADERS NtHeaders,
        _QWORD *a6)
{
  __int64 v7; // rax
  __int64 v8; // r8
  PIMAGE_SECTION_HEADER v9; // rax
  __int64 v10; // r8
  __int64 v11; // r11

  if ( (unsigned int)a3 >= HIDWORD(NtHeaders->OptionalHeader.SizeOfHeapReserve) )
    return 3221225485LL;
  v7 = a3;
  v8 = *((unsigned int *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * a3);
  if ( !(_DWORD)v8 )
    return 3221225474LL;
  *a4 = *((_DWORD *)&NtHeaders->OptionalHeader.SizeOfHeapCommit + 2 * v7 + 1);
  if ( (_BYTE)a2 || (unsigned int)v8 < NtHeaders->OptionalHeader.SizeOfHeaders )
  {
    *a6 = a1 + v8;
    return 0LL;
  }
  else
  {
    v9 = RtlSectionTableFromVirtualAddress(NtHeaders, a2, v8);
    if ( v9 )
      v11 = v10 + a1 + v9->PointerToRawData - (unsigned __int64)v9->VirtualAddress;
    *a6 = v11;
    return v11 == 0 ? 0xC000000D : 0;
  }
}
