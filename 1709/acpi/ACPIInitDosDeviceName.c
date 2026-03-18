/*
 * XREFs of ACPIInitDosDeviceName @ 0x1C00271F8
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C0094290 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0003B6C (WPP_RECORDER_SF_Dqss.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  NTSTATUS v2; // r11d
  __int64 *v3; // rax
  __int64 v4; // rdi
  __int64 v6; // r9
  const char *v7; // rcx
  const char *v8; // r10
  int v9; // esi
  __int64 v10; // r8
  const char *v11; // rcx
  const char *v12; // r10
  __int64 v13; // r8
  const char *v14; // rcx
  const char *v15; // r10
  NTSTATUS v16; // edi
  __int64 v17; // r8
  const char *v18; // rcx
  const char *v19; // r10
  NTSTATUS v20; // eax
  int v21; // edi
  __int64 v22; // r9
  const char *v23; // rcx
  const char *v24; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  struct _STRING v27; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v28[2]; // [rsp+80h] [rbp+17h] BYREF
  __int16 v29; // [rsp+82h] [rbp+19h]
  PCSZ SourceString; // [rsp+A0h] [rbp+37h]
  int Data; // [rsp+D0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+D8h] [rbp+6Fh] BYREF

  Data = 1;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 736), 1u, 0x20000u, &DeviceRegKey);
  if ( v2 < 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = (const char *)&unk_1C0067B08;
    v8 = (const char *)&unk_1C0067B08;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(a1 + 560);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xBu,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v2,
      a1,
      v7,
      v8);
    return 0LL;
  }
  ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
  v3 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1313096799);
  v4 = (__int64)v3;
  if ( !v3 )
    goto LABEL_3;
  v9 = AMLIEvalNameSpaceObject(v3, v28, 0, 0LL);
  AMLIDereferenceHandleEx(v4);
  if ( v9 < 0 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v11 = (const char *)&unk_1C0067B08;
    v12 = (const char *)&unk_1C0067B08;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(a1 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0xCu,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v9,
      a1,
      v11,
      v12);
LABEL_3:
    ZwClose(DeviceRegKey);
    return 0LL;
  }
  if ( v29 == 2 )
  {
    RtlInitAnsiString(&v27, SourceString);
    v16 = RtlAnsiStringToUnicodeString(&UnicodeString, &v27, 1u);
    if ( v16 >= 0 )
    {
      v20 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
      dword_1C00797B8 = 0;
      pszDest = 0;
      v21 = v20;
      FreeDataBuffs((__int64)v28, 1u);
      ZwClose(DeviceRegKey);
      RtlFreeUnicodeString(&UnicodeString);
      if ( v21 < 0 )
      {
        v22 = *(_QWORD *)(a1 + 8);
        v23 = (const char *)&unk_1C0067B08;
        v24 = (const char *)&unk_1C0067B08;
        if ( (v22 & 0x200000000000LL) != 0 )
        {
          v23 = *(const char **)(a1 + 560);
          if ( (v22 & 0x400000000000LL) != 0 )
            v24 = *(const char **)(a1 + 568);
        }
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          1u,
          0xFu,
          (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
          v21,
          a1,
          v23,
          v24);
      }
      return 0LL;
    }
    v17 = *(_QWORD *)(a1 + 8);
    v18 = (const char *)&unk_1C0067B08;
    v19 = (const char *)&unk_1C0067B08;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v18 = *(const char **)(a1 + 560);
      if ( (v17 & 0x400000000000LL) != 0 )
        v19 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xEu,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v16,
      a1,
      v18,
      v19);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 8);
    v14 = (const char *)&unk_1C0067B08;
    v15 = (const char *)&unk_1C0067B08;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v14 = *(const char **)(a1 + 560);
      if ( (v13 & 0x400000000000LL) != 0 )
        v15 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      1u,
      0xDu,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v29,
      a1,
      v14,
      v15);
    v16 = 0;
  }
  dword_1C00797B8 = 0;
  pszDest = 0;
  FreeDataBuffs((__int64)v28, 1u);
  ZwClose(DeviceRegKey);
  return (unsigned int)v16;
}
