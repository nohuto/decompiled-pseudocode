/*
 * XREFs of ACPIInitDosDeviceName @ 0x1C0007478
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C008C510 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  NTSTATUS v2; // r11d
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *v5; // rax
  __int64 *v6; // rdi
  __int64 v8; // r9
  void *v9; // rcx
  int v10; // edx
  void *v11; // r10
  int v12; // r9d
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // r8
  void *v16; // rcx
  int v17; // edx
  void *v18; // r10
  __int64 v19; // r8
  void *v20; // rcx
  int v21; // edx
  void *v22; // r10
  NTSTATUS v23; // edi
  __int64 v24; // r8
  void *v25; // rcx
  int v26; // edx
  void *v27; // r10
  NTSTATUS v28; // eax
  int v29; // edi
  __int64 v30; // r9
  void *v31; // rcx
  void *v32; // r8
  char DataSize; // [rsp+28h] [rbp-41h]
  char v34; // [rsp+30h] [rbp-39h]
  __int64 v35; // [rsp+38h] [rbp-31h]
  __int64 v36; // [rsp+40h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  struct _STRING v39; // [rsp+70h] [rbp+7h] BYREF
  _BYTE v40[2]; // [rsp+80h] [rbp+17h] BYREF
  __int16 v41; // [rsp+82h] [rbp+19h]
  PCSZ SourceString; // [rsp+A0h] [rbp+37h]
  int Data; // [rsp+D0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+D8h] [rbp+6Fh] BYREF

  Data = 1;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 736), 1u, 0x20000u, &DeviceRegKey);
  if ( v2 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = &unk_1C0066CD0;
    v10 = 0;
    v11 = &unk_1C0066CD0;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = *(void **)(a1 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v11 = *(void **)(a1 + 568);
    }
    v36 = (__int64)v11;
    v12 = 11;
    v35 = (__int64)v9;
    v34 = a1;
    DataSize = v2;
    goto LABEL_30;
  }
  ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
  v5 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 712), 1313096799LL, v3, v4);
  v6 = v5;
  if ( !v5 )
  {
LABEL_3:
    ZwClose(DeviceRegKey);
    return 0LL;
  }
  v13 = AMLIEvalNameSpaceObject(v5, v40, 0, 0LL);
  AMLIDereferenceHandleEx(v6, v14);
  if ( v13 < 0 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v16 = &unk_1C0066CD0;
    v17 = 0;
    v18 = &unk_1C0066CD0;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v16 = *(void **)(a1 + 560);
      if ( (v15 & 0x400000000000LL) != 0 )
        v18 = *(void **)(a1 + 568);
    }
    LOBYTE(v17) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      1,
      12,
      (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
      v13,
      a1,
      (__int64)v16,
      (__int64)v18);
    goto LABEL_3;
  }
  if ( v41 == 2 )
  {
    RtlInitAnsiString(&v39, SourceString);
    v23 = RtlAnsiStringToUnicodeString(&UnicodeString, &v39, 1u);
    if ( v23 < 0 )
    {
      v24 = *(_QWORD *)(a1 + 8);
      v25 = &unk_1C0066CD0;
      v26 = 0;
      v27 = &unk_1C0066CD0;
      if ( (v24 & 0x200000000000LL) != 0 )
      {
        v25 = *(void **)(a1 + 560);
        if ( (v24 & 0x400000000000LL) != 0 )
          v27 = *(void **)(a1 + 568);
      }
      LOBYTE(v26) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v26,
        1,
        14,
        (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
        v23,
        a1,
        (__int64)v25,
        (__int64)v27);
      goto LABEL_24;
    }
    v28 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
    dword_1C00776F8 = 0;
    pszDest = 0;
    v29 = v28;
    FreeDataBuffs(v40, 1LL);
    ZwClose(DeviceRegKey);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v29 >= 0 )
      return 0LL;
    v30 = *(_QWORD *)(a1 + 8);
    v31 = &unk_1C0066CD0;
    v10 = 0;
    v32 = &unk_1C0066CD0;
    if ( (v30 & 0x200000000000LL) != 0 )
    {
      v31 = *(void **)(a1 + 560);
      if ( (v30 & 0x400000000000LL) != 0 )
        v32 = *(void **)(a1 + 568);
    }
    v36 = (__int64)v32;
    v12 = 15;
    v35 = (__int64)v31;
    v34 = a1;
    DataSize = v29;
LABEL_30:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1,
      v12,
      (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
      DataSize,
      v34,
      v35,
      v36);
    return 0LL;
  }
  v19 = *(_QWORD *)(a1 + 8);
  v20 = &unk_1C0066CD0;
  v21 = 0;
  v22 = &unk_1C0066CD0;
  if ( (v19 & 0x200000000000LL) != 0 )
  {
    v20 = *(void **)(a1 + 560);
    if ( (v19 & 0x400000000000LL) != 0 )
      v22 = *(void **)(a1 + 568);
  }
  LOBYTE(v21) = 4;
  WPP_RECORDER_SF_Dqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v21,
    1,
    13,
    (__int64)&WPP_f8c8b4024737395f9b3da795c8d439c6_Traceguids,
    v41,
    a1,
    (__int64)v20,
    (__int64)v22);
  v23 = 0;
LABEL_24:
  dword_1C00776F8 = 0;
  pszDest = 0;
  FreeDataBuffs(v40, 1LL);
  ZwClose(DeviceRegKey);
  return (unsigned int)v23;
}
