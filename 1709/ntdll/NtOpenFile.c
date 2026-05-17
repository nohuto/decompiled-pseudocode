/*
 * XREFs of NtOpenFile @ 0x1800A0720
 * Callers:
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800180C0 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800187FC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpMapDllNtFileName @ 0x180020A44 (LdrpMapDllNtFileName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x18007A228 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007AA7C (RtlpCreateNewDirectoryReference.c)
 *     RtlpCheckRelativeDrive @ 0x18007BAE8 (RtlpCheckRelativeDrive.c)
 *     RtlpSysVolTakeOwnership @ 0x18008A1B0 (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800D2988 (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0604 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED098 (RtlpMUIEnumerateFolder.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800F66E8 (RtlpOpenAndMapCustomCultureFile.c)
 *     _ResFindFirstFileExW @ 0x18010FB90 (_ResFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
