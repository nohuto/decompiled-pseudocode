/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x1404B15A0
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x140240FAC (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1404B1500 (LdrpFetchAddressOfSecurityCookie.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14008B8F0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x14008BA30 (RtlImageNtHeaderEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(PVOID BaseAddress)
{
  _DWORD *result; // rax
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+38h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &NtHeader);
  if ( !BaseAddress )
    return 0LL;
  result = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0xAu, &Size);
  if ( !result || !Size || Size != *result || NtHeader->FileHeader.Machine != 0x8664 )
    return 0LL;
  return result;
}
