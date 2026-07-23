/*
 * XREFs of BcdGetElementDataWithFlags @ 0x1405AF8C8
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1405AE3A8 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1405AEE54 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x1405AF0E0 (PopBcdReadElement.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14072FE94 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140779110 (BiGetDefaultBootEntryIdentifier.c)
 *     BcdGetElementData @ 0x14077935C (BcdGetElementData.c)
 *     BiGetElement @ 0x140779470 (BiGetElement.c)
 *     BiBuildIdentifierList @ 0x14077AA54 (BiBuildIdentifierList.c)
 *     BiUpdateBcdObject @ 0x14077CE20 (BiUpdateBcdObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     BiIsOfflineHandle @ 0x140134AD0 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401637A0 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     BiGetRegistryValue @ 0x1405AF51C (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x1405AFE70 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     BiConvertRegistryDataToElement @ 0x1405B0050 (BiConvertRegistryDataToElement.c)
 *     BiConvertElementFormatToValueType @ 0x1405B022C (BiConvertElementFormatToValueType.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 */

NTSTATUS __cdecl BcdGetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        PULONG BufferSize)
{
  __int64 v6; // rcx
  char v7; // r14
  int v8; // eax
  __int64 v9; // rsi
  wchar_t *v10; // rdi
  int v11; // eax
  NTSTATUS v12; // ebx
  int v13; // eax
  int v14; // eax
  int RegistryValue; // eax
  PVOID v16; // r14
  __int64 v17; // rcx
  __int64 v19; // rcx
  NTSTATUS v20; // r8d
  int v21[2]; // [rsp+20h] [rbp-91h]
  char v22; // [rsp+40h] [rbp-71h]
  __int64 v24; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v25; // [rsp+50h] [rbp-61h]
  _DWORD Size[3]; // [rsp+54h] [rbp-5Dh] BYREF
  PVOID P; // [rsp+60h] [rbp-51h] BYREF
  GUID *v28; // [rsp+68h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-41h] BYREF
  GUID Guid; // [rsp+80h] [rbp-31h] BYREF
  wchar_t DstBuf[24]; // [rsp+90h] [rbp-21h] BYREF

  v28 = (GUID *)Buffer;
  if ( !BufferSize || !Buffer && *BufferSize )
    return -1073741811;
  LOBYTE(v6) = BiIsOfflineHandle((char)BcdObjectHandle);
  v22 = v6;
  v7 = v6;
  v8 = BiAcquireBcdSyncMutant(v6);
  if ( v8 < 0 )
  {
    BiLogMessage(4LL, L"BcdGetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v8);
    return v20;
  }
  else
  {
    v24 = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    v9 = 0LL;
    P = 0LL;
    RtlInitUnicodeString(&DestinationString, 0LL);
    v10 = L"N/A";
    if ( (int)BiGetObjectIdentifier(BcdObjectHandle, &Guid) >= 0
      && RtlStringFromGUIDEx(&Guid, &DestinationString, 1u) >= 0 )
    {
      v10 = DestinationString.Buffer;
    }
    v11 = BiOpenKey(BcdObjectHandle, L"Elements", 131097LL, &v24);
    v12 = v11;
    if ( v11 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        v10,
        (unsigned int)v11);
    }
    else if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
    {
      v12 = -1073741823;
    }
    else
    {
      v13 = BiOpenKey(v24, DstBuf, 131097LL, &Size[1]);
      if ( v13 < 0 )
      {
        v19 = 4LL;
        if ( v13 == -1073741772 )
          v19 = 2LL;
        BiLogMessage(
          v19,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          v10,
          DstBuf,
          v13);
        v9 = *(_QWORD *)&Size[1];
        v12 = -1073741275;
      }
      else
      {
        v14 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
        v9 = *(_QWORD *)&Size[1];
        v25 = v14;
        RegistryValue = BiGetRegistryValue(*(__int64 *)&Size[1], L"Element", 0LL, v14, &P, Size);
        v16 = P;
        v12 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          v21[0] = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            v10,
            v25,
            *(_QWORD *)v21);
        }
        else
        {
          v12 = BiConvertRegistryDataToElement(BcdObjectHandle, (PCWSTR)P, Size[0], 0, v28, (__int64)BufferSize);
        }
        if ( v16 )
          ExFreePoolWithTag(v16, 0x4B444342u);
        v7 = v22;
      }
    }
    RtlFreeUnicodeString(&DestinationString);
    if ( v9 )
      BiCloseKey(v9);
    if ( v24 )
      BiCloseKey(v24);
    LOBYTE(v17) = v7;
    BiReleaseBcdSyncMutant(v17);
    return v12;
  }
}
