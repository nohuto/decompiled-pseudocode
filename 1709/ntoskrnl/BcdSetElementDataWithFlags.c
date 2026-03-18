/*
 * XREFs of BcdSetElementDataWithFlags @ 0x1405AF6E8
 * Callers:
 *     PopBcdSetDefaultResumeObjectElements @ 0x1405AEE54 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x1405B1C28 (PopBcdSetupResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14070B380 (PopBcdRegenerateResumeObject.c)
 *     PopBcdSetPendingResume @ 0x14070B558 (PopBcdSetPendingResume.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14072FE94 (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x140779378 (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14077A32C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14077A55C (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x14077CE20 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140134AD0 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401637A0 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140290148 (BiSetFirmwareModifiedFromObject.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     BiDeleteElement @ 0x1405AE6E4 (BiDeleteElement.c)
 *     BiCreateKey @ 0x1405AF19C (BiCreateKey.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x1405B022C (BiConvertElementFormatToValueType.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1405B025C (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x1405B0308 (BiSetRegistryValue.c)
 *     BiConvertElementToRegistryData @ 0x1405B03EC (BiConvertElementToRegistryData.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
 */

__int64 __fastcall BcdSetElementDataWithFlags(void *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 result; // rax
  int v11; // eax
  int v12; // ebx
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
  unsigned int v23; // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h] BYREF
  PVOID P; // [rsp+58h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+60h] [rbp-21h] BYREF

  v23 = a2;
  if ( !a4 && a5 )
    return 3221225485LL;
  v21 = 0LL;
  v8 = 0LL;
  v19 = 0;
  v24 = 0LL;
  P = 0LL;
  if ( !a5 )
  {
    BiDeleteElement(a1, a2);
    return 0LL;
  }
  LOBYTE(v9) = BiIsOfflineHandle((char)a1);
  v20 = v9;
  result = BiAcquireBcdSyncMutant(v9);
  if ( (int)result >= 0 )
  {
    BiLogMessage(2LL, L"Setting element %08x", a2);
    v11 = BiOpenKey(a1, L"Elements", 131101LL, &v21);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for object's elements. Status: %x", (unsigned int)v11);
    }
    else
    {
      if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
      {
        v12 = -1073741823;
LABEL_15:
        if ( v21 )
          BiCloseKey(v21);
        if ( v12 >= 0 )
        {
          if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v23) )
            BiSetFirmwareModifiedFromObject(a1);
        }
        LOBYTE(v13) = v20;
        BiReleaseBcdSyncMutant(v13);
        return (unsigned int)v12;
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
        v15 = BiConvertElementToRegistryData(a2, a4, a5);
        v8 = v24;
        v12 = v15;
        v16 = P;
        if ( v15 < 0 )
        {
          BiLogMessage(4LL, L"Failed to convert data for element %s. Status: %x", DstBuf, (unsigned int)v15, &P, &v22);
        }
        else
        {
          BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
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
