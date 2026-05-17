/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180018ED0
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x18001621C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800187FC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpIsReparsePoint @ 0x180018D88 (LdrpIsReparsePoint.c)
 *     LdrpResMapFile @ 0x1800E2DF4 (LdrpResMapFile.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     _ResCreateFile @ 0x18010F424 (_ResCreateFile.c)
 *     _ResGetFileAttributesEx @ 0x1801101AC (_ResGetFileAttributesEx.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180031E9C (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToRelativeNtPathName_U(int a1, int a2, int a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(2, a1, a2, a3, a4) >= 0;
}
