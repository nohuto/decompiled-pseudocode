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

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 *v5; // rsi
  unsigned int v6; // ebx
  char v9; // r14
  unsigned __int64 v10; // rdi
  char v12; // dl
  __int64 result; // rax
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = a5;
  v6 = 0;
  v18 = 0LL;
  v9 = a2;
  v10 = a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v12 = 0;
    if ( (a1 & 1) == 0 )
      v12 = a2;
    v9 = v12;
  }
  result = RtlImageNtHeaderEx(1LL, v10, 0LL, &v18);
  v15 = v18;
  if ( v18 )
  {
    if ( *(_WORD *)(v18 + 24) == 267 )
    {
      LOBYTE(v14) = v9;
      return (unsigned int)RtlpImageDirectoryEntryToData32(v10, v14, a3, (_DWORD)a4, v18, (__int64)v5);
    }
    else if ( *(_WORD *)(v18 + 24) == 523 && (unsigned int)a3 < *(_DWORD *)(v18 + 132) )
    {
      v16 = *(unsigned int *)(v18 + 8LL * a3 + 136);
      if ( (_DWORD)v16 )
      {
        *a4 = *(_DWORD *)(v18 + 8LL * a3 + 140);
        if ( v9 || (unsigned int)v16 < *(_DWORD *)(v15 + 84) )
        {
          *v5 = v10 + v16;
        }
        else
        {
          v17 = RtlAddressInSectionTable();
          *v5 = v17;
          return v17 == 0 ? 0xC000000D : 0;
        }
      }
      else
      {
        return (unsigned int)-1073741822;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v6;
  }
  return result;
}
