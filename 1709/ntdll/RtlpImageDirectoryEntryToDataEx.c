/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x180026720
 * Callers:
 *     LdrpInitializeTls @ 0x18001C128 (LdrpInitializeTls.c)
 *     LdrpHandleTlsData @ 0x18001C3A8 (LdrpHandleTlsData.c)
 *     LdrpCompleteMapModule @ 0x180021F28 (LdrpCompleteMapModule.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002259C (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlInsertInvertedFunctionTable @ 0x180022828 (RtlInsertInvertedFunctionTable.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1800230B8 (LdrImageDirectoryEntryToLoadConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x180023EAC (LdrpAccessResourceData.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18002403C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002B994 (LdrpCfgProcessLoadConfig.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18002DDC8 (LdrpSnapKernelBaseExtensions.c)
 *     EtwpFindDebugId @ 0x1800676FC (EtwpFindDebugId.c)
 *     RtlFindExportedRoutineByName @ 0x180079440 (RtlFindExportedRoutineByName.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180079880 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpRelocateImage @ 0x180084884 (LdrpRelocateImage.c)
 *     LdrRelocateImageWithBias @ 0x180086228 (LdrRelocateImageWithBias.c)
 *     RtlImageDirectoryEntryToData @ 0x180086C60 (RtlImageDirectoryEntryToData.c)
 *     LdrpCorValidateImage @ 0x18008772C (LdrpCorValidateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008A5B0 (LdrVerifyImageMatchesChecksumEx.c)
 *     LdrpProcessMachineMismatch @ 0x18008B6B8 (LdrpProcessMachineMismatch.c)
 *     LdrpCorFixupImage @ 0x18008E810 (LdrpCorFixupImage.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D0704 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D08EC (LdrpEnclaveAddForwarderModules.c)
 *     LdrpGetDelayloadDescriptor @ 0x1800D1840 (LdrpGetDelayloadDescriptor.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 *     RtlComputeImportTableHash @ 0x1800DF8F0 (RtlComputeImportTableHash.c)
 *     LdrEnumResources @ 0x1800E0300 (LdrEnumResources.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F6A00 (RtlpUnsuppressForwardReferencingCallTarget.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x180020840 (RtlAddressInSectionTable.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x18002993C (RtlpImageDirectoryEntryToData32.c)
 */

NTSTATUS __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rsi
  int v6; // ebx
  char v9; // r14
  char *v10; // rdi
  char v12; // dl
  NTSTATUS result; // eax
  int v14; // edx
  PIMAGE_NT_HEADERS v15; // rcx
  __int64 VirtualAddress; // rdx
  PVOID v17; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  OutHeaders = 0LL;
  v9 = a2;
  v10 = (char *)a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = (char *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    v12 = 0;
    if ( (a1 & 1) == 0 )
      v12 = a2;
    v9 = v12;
  }
  result = RtlImageNtHeaderEx(1u, v10, 0LL, &OutHeaders);
  v15 = OutHeaders;
  if ( OutHeaders )
  {
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      LOBYTE(v14) = v9;
      return RtlpImageDirectoryEntryToData32((int)v10, v14, a3, (int)a4, OutHeaders, (__int64)v5);
    }
    else if ( OutHeaders->OptionalHeader.Magic == 523 && a3 < OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
    {
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[a3].VirtualAddress;
      if ( (_DWORD)VirtualAddress )
      {
        *a4 = OutHeaders->OptionalHeader.DataDirectory[a3].Size;
        if ( v9 || (unsigned int)VirtualAddress < v15->OptionalHeader.SizeOfHeaders )
        {
          *v5 = &v10[VirtualAddress];
        }
        else
        {
          v17 = RtlAddressInSectionTable(v15, v10, VirtualAddress);
          *v5 = v17;
          return v17 == 0LL ? 0xC000000D : 0;
        }
      }
      else
      {
        return -1073741822;
      }
    }
    else
    {
      return -1073741811;
    }
    return v6;
  }
  return result;
}
