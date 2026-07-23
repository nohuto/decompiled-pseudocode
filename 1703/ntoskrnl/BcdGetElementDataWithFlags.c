/*
 * XREFs of BcdGetElementDataWithFlags @ 0x14058B67C
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1405899F4 (PopBcdEstablishResumeObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14058AC08 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14058AE94 (PopBcdReadElement.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406F82BC (SepSecureBootUpdateBcdDataForRule.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x140734E74 (BiGetDefaultBootEntryIdentifier.c)
 *     BcdGetElementData @ 0x1407350C0 (BcdGetElementData.c)
 *     BiGetElement @ 0x1407351D4 (BiGetElement.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _ultow_s @ 0x14016EFA0 (_ultow_s.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     BiGetRegistryValue @ 0x14058B2D0 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiGetObjectIdentifier @ 0x14058BC30 (BiGetObjectIdentifier.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiConvertElementFormatToValueType @ 0x14058BFA0 (BiConvertElementFormatToValueType.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 *     BiConvertRegistryDataToElement @ 0x14058C244 (BiConvertRegistryDataToElement.c)
 */

NTSTATUS __cdecl BcdGetElementDataWithFlags(
        HANDLE BcdObjectHandle,
        ULONG BcdElement,
        BCD_FLAGS BcdFlags,
        PVOID Buffer,
        PULONG BufferSize)
{
  __int64 v6; // rcx
  char v7; // r12
  int v8; // eax
  NTSTATUS v9; // ebx
  void *v10; // rsi
  wchar_t *v11; // rdi
  wchar_t *v12; // r14
  NTSTATUS v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int RegistryValue; // eax
  PVOID v19; // r12
  __int64 v21; // rcx
  int v22[2]; // [rsp+20h] [rbp-91h]
  char v23; // [rsp+40h] [rbp-71h]
  HANDLE Handle; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-61h]
  _DWORD Size[3]; // [rsp+54h] [rbp-5Dh] BYREF
  PVOID P; // [rsp+60h] [rbp-51h] BYREF
  __int64 v29; // [rsp+68h] [rbp-49h]
  GUID *v30; // [rsp+70h] [rbp-41h]
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-39h] BYREF
  GUID Guid; // [rsp+88h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+98h] [rbp-19h] BYREF

  v30 = (GUID *)Buffer;
  v29 = (__int64)BufferSize;
  if ( !BufferSize || !Buffer && *BufferSize )
    return -1073741811;
  LOBYTE(v6) = BiIsOfflineHandle((char)BcdObjectHandle);
  v23 = v6;
  v7 = v6;
  v8 = BiAcquireBcdSyncMutant(v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    BiLogMessage(4LL, L"BcdGetElementDataWithFlags: Failed to acquire BCD sync mutant. Status: %x", (unsigned int)v8);
  }
  else
  {
    Handle = 0LL;
    v10 = 0LL;
    v11 = L"N/A";
    P = 0LL;
    v12 = 0LL;
    *(_QWORD *)&Size[1] = 0LL;
    GuidString.Buffer = 0LL;
    if ( (int)BiGetObjectIdentifier(BcdObjectHandle, &Guid) >= 0 )
    {
      v13 = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
      v12 = GuidString.Buffer;
      if ( v13 >= 0 )
        v11 = GuidString.Buffer;
    }
    v14 = BiOpenKey(BcdObjectHandle, L"Elements", 131097LL, &Handle);
    v9 = v14;
    if ( v14 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        v11,
        (unsigned int)v14);
    }
    else if ( ultow_s(BcdElement, DstBuf, 0x16uLL, 16) )
    {
      v9 = -1073741823;
    }
    else
    {
      v16 = BiOpenKey(Handle, DstBuf, 131097LL, &Size[1]);
      if ( v16 < 0 )
      {
        v21 = 4LL;
        if ( v16 == -1073741772 )
          v21 = 2LL;
        BiLogMessage(
          v21,
          L"BcdGetElementDataWithFlags: Failed to open key.Object: %ws Type: %ws Status: %x",
          v11,
          DstBuf,
          v16);
        v10 = *(void **)&Size[1];
        v9 = -1073741275;
      }
      else
      {
        v17 = BiConvertElementFormatToValueType(HIBYTE(BcdElement) & 0xF);
        v10 = *(void **)&Size[1];
        v26 = v17;
        RegistryValue = BiGetRegistryValue(*(__int64 *)&Size[1], L"Element", 0LL, v17, &P, Size);
        v19 = P;
        v9 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          v22[0] = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            v11,
            v26,
            *(_QWORD *)v22);
        }
        else
        {
          v9 = BiConvertRegistryDataToElement(BcdObjectHandle, (PCWSTR)P, Size[0], 0, v30, v29);
        }
        if ( v19 )
          ExFreePoolWithTag(v19, 0x4B444342u);
        v7 = v23;
      }
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0x4B444342u);
    if ( v10 )
      BiCloseKey(v10);
    if ( Handle )
      BiCloseKey(Handle);
    LOBYTE(v15) = v7;
    BiReleaseBcdSyncMutant(v15);
  }
  return v9;
}
