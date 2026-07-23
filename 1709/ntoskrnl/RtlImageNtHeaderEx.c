/*
 * XREFs of RtlImageNtHeaderEx @ 0x1400AE3E0
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400AE2D0 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     MiProcessKernelCfgImage @ 0x1400F9950 (MiProcessKernelCfgImage.c)
 *     LdrpResGetMappingSize @ 0x1404DB574 (LdrpResGetMappingSize.c)
 *     LdrpResGetResourceDirectory @ 0x1404DB6C4 (LdrpResGetResourceDirectory.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x1404F1214 (EtwpLocateDbgIdForRegEntry.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x1405430C8 (LdrpFetchAddressOfSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140543168 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrRelocateImageWithBias @ 0x1405BE60C (LdrRelocateImageWithBias.c)
 *     MiCaptureDynamicRelocationTableRva @ 0x1405BF3F8 (MiCaptureDynamicRelocationTableRva.c)
 *     VfDriverEnableVerifierForAll @ 0x1407A8D88 (VfDriverEnableVerifierForAll.c)
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
