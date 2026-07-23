/*
 * XREFs of BcdSetElementDataWithFlags @ 0x1406088D0
 * Callers:
 *     PopBcdSetPendingResume @ 0x1405ECAD4 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140607868 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x14060A480 (PopBcdSetupResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14076E950 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140793E04 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x1407E1FE4 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1407E2D14 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1407E2F44 (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1407E58FC (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x1401643C4 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _ultow_s @ 0x14018D640 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1402C5DB8 (BiSetFirmwareModifiedFromObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x1405EE92C (BiDeleteKey.c)
 *     BiDeleteElement @ 0x140607AF4 (BiDeleteElement.c)
 *     BiCreateKey @ 0x140608544 (BiCreateKey.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140608E50 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140609030 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1406091E0 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140609238 (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x1406092E4 (BiSetRegistryValue.c)
 *     BiConvertElementFormatToValueType @ 0x1406093C8 (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x1406093F4 (BiConvertElementToRegistryData.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdSetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  NTSTATUS result; // eax
  int v11; // eax
  NTSTATUS v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  PVOID v16; // r15
  int v17; // eax
  int *v18; // [rsp+28h] [rbp-59h]
  bool v19; // [rsp+30h] [rbp-51h] BYREF
  char v20; // [rsp+31h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-49h] BYREF
  int v22; // [rsp+40h] [rbp-41h] BYREF
  ULONG v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h] BYREF
  PVOID P; // [rsp+58h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+60h] [rbp-21h] BYREF

  v23 = BcdElement;
  if ( !Buffer && BufferSize )
    return -1073741811;
  v21 = 0LL;
  v8 = 0LL;
  v19 = 0;
  v24 = 0LL;
  P = 0LL;
  if ( !BufferSize )
  {
    BiDeleteElement(BcdObjectHandle, BcdElement);
    return 0;
  }
  LOBYTE(v9) = BiIsOfflineHandle((char)BcdObjectHandle);
  v20 = v9;
  result = BiAcquireBcdSyncMutant(v9);
  if ( result >= 0 )
  {
    BiLogMessage(2LL, L"Setting element %08x", BcdElement);
    v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131101LL, &v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    }
    else
    {
      if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
      {
        v12 = -1073741823;
LABEL_15:
        if ( v21 )
          BiCloseKey(v21);
        if ( v12 >= 0 )
        {
          if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(BcdObjectHandle, &v23) )
            BiSetFirmwareModifiedFromObject(BcdObjectHandle);
        }
        LOBYTE(v13) = v20;
        BiReleaseBcdSyncMutant(v13);
        return v12;
      }
      v14 = BiCreateKey(v21, DstBuf, 0x10002u, 1u, &v24, &v19);
      v12 = v14;
      if ( v14 < 0 )
      {
        BiLogMessage(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v14);
        v8 = v24;
      }
      else
      {
        v18 = &v22;
        v15 = BiConvertElementToRegistryData(BcdElement, Buffer, BufferSize);
        v8 = v24;
        v12 = v15;
        v16 = P;
        if ( v15 < 0 )
        {
          BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v15, &P, &v22);
        }
        else
        {
          BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
          LODWORD(v18) = v22;
          v17 = BiSetRegistryValue(v8, L"Element", 0LL);
          v12 = v17;
          if ( v17 < 0 )
            BiLogMessage(
              4LL,
              L"Failed to set registry data for element %s. Status: %x",
              DstBuf,
              (unsigned int)v17,
              v16,
              v18);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
      }
    }
    if ( v12 < 0 && v19 )
    {
      BiDeleteKey(v8);
      v8 = 0LL;
    }
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_15;
  }
  return result;
}
