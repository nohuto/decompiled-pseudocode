/*
 * XREFs of NtOpenKey @ 0x14056FB30
 * Callers:
 *     CmLogMcUpdateStatus @ 0x1401E3D98 (CmLogMcUpdateStatus.c)
 *     CmGetSystemDriverList @ 0x140835884 (CmGetSystemDriverList.c)
 *     ExpWatchProductTypeInitialization @ 0x140839140 (ExpWatchProductTypeInitialization.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x14083ACD8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x14083CD84 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetSystemValues @ 0x14083CDF0 (CmpSetSystemValues.c)
 *     CmpCreateControlSet @ 0x14083D05C (CmpCreateControlSet.c)
 *     IopProtectSystemPartition @ 0x1408570AC (IopProtectSystemPartition.c)
 *     CmpAddAliasEntry @ 0x140868D4C (CmpAddAliasEntry.c)
 * Callees:
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 */

NTSTATUS __stdcall NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey(KeyHandle, DesiredAccess, (__int64)ObjectAttributes, 0, 0LL);
}
