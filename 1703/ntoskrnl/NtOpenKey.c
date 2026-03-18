/*
 * XREFs of NtOpenKey @ 0x14043BFF0
 * Callers:
 *     CmLogMcUpdateStatus @ 0x1401DFC58 (CmLogMcUpdateStatus.c)
 *     CmGetSystemDriverList @ 0x1407F67B8 (CmGetSystemDriverList.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140807090 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemValues @ 0x1408075C8 (CmpSetSystemValues.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140807834 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     ExpWatchProductTypeInitialization @ 0x14081062C (ExpWatchProductTypeInitialization.c)
 *     CmpCreateControlSet @ 0x14081E0AC (CmpCreateControlSet.c)
 *     IopProtectSystemPartition @ 0x140825828 (IopProtectSystemPartition.c)
 *     CmpAddAliasEntry @ 0x140831E58 (CmpAddAliasEntry.c)
 * Callees:
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 */

NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, 0, 0LL);
}
