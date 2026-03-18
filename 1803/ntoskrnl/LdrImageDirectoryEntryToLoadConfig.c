/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x1405FAB30
 * Callers:
 *     RtlGuardCheckLongJumpTarget @ 0x14028F66C (RtlGuardCheckLongJumpTarget.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1405FAA90 (LdrpFetchAddressOfSecurityCookie.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14003EEE0 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x1400BA024 (RtlWow64GetEquivalentMachineCHPE.c)
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
