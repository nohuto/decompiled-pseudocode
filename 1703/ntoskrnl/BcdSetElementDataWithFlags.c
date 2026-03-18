/*
 * XREFs of BcdSetElementDataWithFlags @ 0x14058B49C
 * Callers:
 *     PopBcdSetPendingResume @ 0x14057B828 (PopBcdSetPendingResume.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14058AC08 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdSetupResumeObject @ 0x14058D428 (PopBcdSetupResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406D5770 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406F82BC (SepSecureBootUpdateBcdDataForRule.c)
 *     BcdSetElementData @ 0x1407350DC (BcdSetElementData.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140735EE8 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x140736118 (BiBindEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _ultow_s @ 0x14016EFA0 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140265E54 (BiSetFirmwareModifiedFromObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiDeleteElement @ 0x14058A31C (BiDeleteElement.c)
 *     BiCreateKey @ 0x14058AF50 (BiCreateKey.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14058BE10 (BiIsLinkedToFirmwareVariable.c)
 *     BiSetRegistryValue @ 0x14058BEBC (BiSetRegistryValue.c)
 *     BiConvertElementFormatToValueType @ 0x14058BFA0 (BiConvertElementFormatToValueType.c)
 *     BiConvertElementToRegistryData @ 0x14058BFCC (BiConvertElementToRegistryData.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 */

__int64 __fastcall BcdSetElementDataWithFlags(void *a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  HANDLE v8; // rdi
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
  HANDLE v21; // [rsp+38h] [rbp-49h] BYREF
  int v22; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-31h] BYREF
  PVOID P; // [rsp+58h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+60h] [rbp-21h] BYREF

  v23 = a2;
  if ( !a4 && a5 )
    return 3221225485LL;
  v21 = 0LL;
  v8 = 0LL;
  v19 = 0;
  Handle = 0LL;
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
      v14 = BiCreateKey((__int64)v21, DstBuf, 0x10002u, 1u, &Handle, &v19);
      v12 = v14;
      if ( v14 < 0 )
      {
        BiLogMessage(4LL, L"Failed to open key for element %s. Status: %x", DstBuf, (unsigned int)v14);
        v8 = Handle;
      }
      else
      {
        v18 = &v22;
        v15 = BiConvertElementToRegistryData(a2, a4, a5);
        v8 = Handle;
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
      BiDeleteKey((__int64)v8);
      v8 = 0LL;
    }
    if ( v8 )
      BiCloseKey(v8);
    goto LABEL_15;
  }
  return result;
}
