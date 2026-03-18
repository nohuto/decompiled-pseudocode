/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x140543168
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x1402572FC (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1405430C8 (LdrpFetchAddressOfSecurityCookie.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400AE2A0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1400AE3E0 (RtlImageNtHeaderEx.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1400E5A10 (RtlWow64GetEquivalentMachineCHPE.c)
 */

__int64 __fastcall LdrImageDirectoryEntryToLoadConfig(PVOID BaseAddress)
{
  _DWORD *v2; // rax
  __int64 v3; // r8
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS NtHeader; // [rsp+38h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(1u, BaseAddress, 0LL, &NtHeader);
  if ( BaseAddress
    && (v2 = RtlImageDirectoryEntryToData(BaseAddress, 1u, 0xAu, &Size)) != 0LL
    && Size
    && Size == *v2
    && RtlWow64GetEquivalentMachineCHPE(NtHeader->FileHeader.Machine) == -31132 )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}
