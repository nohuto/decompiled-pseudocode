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

__int64 __fastcall BcdGetElementDataWithFlags(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v6; // rcx
  char v7; // r12
  int v8; // eax
  unsigned int v9; // ebx
  HANDLE v10; // rsi
  const wchar_t *v11; // rdi
  void *v12; // r14
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int RegistryValue; // eax
  PVOID v19; // r12
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-91h]
  char v23; // [rsp+40h] [rbp-71h]
  HANDLE v25; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-61h]
  unsigned int v27; // [rsp+54h] [rbp-5Dh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-59h] BYREF
  PVOID P; // [rsp+60h] [rbp-51h] BYREF
  _DWORD *v30; // [rsp+68h] [rbp-49h]
  __int64 v31; // [rsp+70h] [rbp-41h]
  _BYTE v32[8]; // [rsp+78h] [rbp-39h] BYREF
  void *v33; // [rsp+80h] [rbp-31h]
  unsigned int v34[4]; // [rsp+88h] [rbp-29h] BYREF
  wchar_t DstBuf[24]; // [rsp+98h] [rbp-19h] BYREF

  v31 = a4;
  v30 = a5;
  if ( !a5 || !a4 && *a5 )
    return 3221225485LL;
  LOBYTE(v6) = BiIsOfflineHandle(a1);
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
    v25 = 0LL;
    v10 = 0LL;
    v11 = L"N/A";
    P = 0LL;
    v12 = 0LL;
    Handle = 0LL;
    v33 = 0LL;
    if ( (int)BiGetObjectIdentifier(a1, v34) >= 0 )
    {
      v13 = RtlStringFromGUIDEx(v34, (__int64)v32, 1);
      v12 = v33;
      if ( v13 >= 0 )
        v11 = (const wchar_t *)v33;
    }
    v14 = BiOpenKey(a1, L"Elements", 131097LL, &v25);
    v9 = v14;
    if ( v14 < 0 )
    {
      BiLogMessage(
        4LL,
        L"BcdGetElementDataWithFlags: Failed to open elements key.Object: %ws Status: %x",
        v11,
        (unsigned int)v14);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v9 = -1073741823;
    }
    else
    {
      v16 = BiOpenKey(v25, DstBuf, 131097LL, &Handle);
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
        v10 = Handle;
        v9 = -1073741275;
      }
      else
      {
        v17 = BiConvertElementFormatToValueType(HIBYTE(a2) & 0xF);
        v10 = Handle;
        v26 = v17;
        RegistryValue = BiGetRegistryValue((__int64)Handle, L"Element", 0LL, v17, &P, &v27);
        v19 = P;
        v9 = RegistryValue;
        if ( RegistryValue < 0 )
        {
          LODWORD(v22) = RegistryValue;
          BiLogMessage(
            4LL,
            L"BcdGetElementDataWithFlags: Failed to get registry value.Object: %ws Reg type: %lu Status: %x",
            v11,
            v26,
            v22);
        }
        else
        {
          v9 = BiConvertRegistryDataToElement(a1, P, v27, a2, 0, v31, v30);
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
    if ( v25 )
      BiCloseKey(v25);
    LOBYTE(v15) = v7;
    BiReleaseBcdSyncMutant(v15);
  }
  return v9;
}
