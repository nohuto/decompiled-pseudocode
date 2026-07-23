/*
 * XREFs of RtlImageNtHeaderEx @ 0x14003EEE0
 * Callers:
 *     MiLockPagableImageSection @ 0x14000B0B0 (MiLockPagableImageSection.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x14003FAC0 (RtlpImageDirectoryEntryToDataEx.c)
 *     MiProcessKernelCfgImage @ 0x140161788 (MiProcessKernelCfgImage.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x14058CB5C (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpResGetMappingSize @ 0x1405BD604 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1405BD754 (LdrpResGetResourceDirectory.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1405FAA90 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1405FAB30 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrRelocateImageWithBias @ 0x14062BD04 (LdrRelocateImageWithBias.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x14063B3D0 (MiCaptureDynamicRelocationTableRva.c)
 *     VfDriverEnableVerifierForAll @ 0x140815DC0 (VfDriverEnableVerifierForAll.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlImageNtHeaderEx(ULONG Flags, PVOID BaseAddress, ULONGLONG Size, PIMAGE_NT_HEADERS *NtHeader)
{
  NTSTATUS v5; // r10d
  bool v6; // cl
  ULONGLONG v7; // r8
  _IMAGE_NT_HEADERS64 *v8; // rax

  if ( !NtHeader )
    return -1073741811;
  v5 = 0;
  *NtHeader = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 || (char *)BaseAddress - 1 > (char *)0xFFFFFFFFFFFFFFFDLL )
    return -1073741811;
  v6 = (Flags & 1) == 0;
  if ( (!v6 || Size >= 0x40) && *(_WORD *)BaseAddress == 23117 )
  {
    v7 = *((unsigned int *)BaseAddress + 15);
    if ( !v6 || v7 < Size && (unsigned int)v7 < 0xFFFFFFE7 && v7 + 24 < Size )
    {
      v8 = (_IMAGE_NT_HEADERS64 *)((char *)BaseAddress + v7);
      if ( (char *)BaseAddress + v7 >= BaseAddress
        && ((unsigned __int64)BaseAddress >= 0x7FFFFFFEFFFFLL
         || (unsigned __int64)v8 < 0x7FFFFFFEFFFFLL && (unsigned __int64)&v8[1] < 0x7FFFFFFEFFFFLL)
        && v8->Signature == 17744 )
      {
        *NtHeader = v8;
        return v5;
      }
    }
  }
  return -1073741701;
}
