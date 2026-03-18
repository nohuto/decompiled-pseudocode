/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x140163168 (PnpMultiSzContainsString.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     ZwEnumerateValueKey @ 0x1401A7720 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x14023BD6C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeString @ 0x1405080C0 (RtlCompareUnicodeString.c)
 *     RtlGUIDFromString @ 0x140508E70 (RtlGUIDFromString.c)
 *     _CmIsRootEnumeratedDevice @ 0x14050CE64 (_CmIsRootEnumeratedDevice.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405D7FF4 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x14072B498 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14072C8F4 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14072D4C4 (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 *a1, __int64 a2, void *a3, int a4, PVOID **a5)
{
  ULONG v5; // r13d
  int v7; // r14d
  PVOID *v8; // rsi
  NTSTATUS v9; // ebx
  ULONG v10; // r12d
  WCHAR *v11; // r15
  const UNICODE_STRING *v12; // rcx
  ULONG i; // edx
  int v14; // eax
  wchar_t **v15; // rdi
  PVOID *v16; // rax
  __int64 v17; // r13
  const wchar_t *v18; // rdx
  int v19; // r14d
  wchar_t **v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rdi
  __int64 *v23; // r15
  int *v24; // r12
  __int16 MigrationDeviceIdScore; // ax
  __int64 v26; // rdi
  bool v27; // cl
  bool v28; // al
  const WCHAR *v29; // rbx
  __int64 v30; // r15
  __int64 v31; // rax
  int v32; // r12d
  void *v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  void *v36; // r9
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  UNICODE_STRING *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  bool v46; // zf
  PVOID *v47; // rax
  PVOID v48; // rcx
  PVOID v49; // rdx
  PVOID *v50; // rdi
  PVOID v51; // rcx
  PVOID *v52; // rax
  PVOID **v53; // rcx
  PVOID v54; // rcx
  __int64 v55; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+34h] [rbp-CCh]
  PVOID v60; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v61; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+58h] [rbp-A8h] BYREF
  int v64; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v65; // [rsp+60h] [rbp-A0h]
  ULONG v66; // [rsp+64h] [rbp-9Ch]
  ULONG ResultLength; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v68; // [rsp+70h] [rbp-90h]
  __int64 v69; // [rsp+78h] [rbp-88h] BYREF
  int Data; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h]
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v74; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING v76; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v78[10]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID **v79; // [rsp+140h] [rbp+40h]
  UNICODE_STRING ValueName; // [rsp+148h] [rbp+48h] BYREF
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  char KeyInformation[20]; // [rsp+168h] [rbp+68h] BYREF
  int v83; // [rsp+17Ch] [rbp+7Ch]
  int v84; // [rsp+180h] [rbp+80h]
  int v85; // [rsp+184h] [rbp+84h]

  v5 = 0;
  v68 = a1;
  v79 = a5;
  v71 = a2;
  v64 = 0;
  KeyHandle = a3;
  v61 = &v60;
  v7 = a4;
  v69 = 0LL;
  v60 = &v60;
  v58 = 0;
  v8 = 0LL;
  v63 = 0;
  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v76.Length = 0;
  v76.Buffer = 0LL;
  *(_DWORD *)&v74.Length = 0;
  v74.Buffer = 0LL;
  v9 = NtQueryKey(a3, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( v9 < 0 )
    goto LABEL_152;
  if ( !v83 )
    goto LABEL_151;
  v10 = v85 + 2 * (v84 + 13);
  v65 = v10;
  P = ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
  v11 = (WCHAR *)P;
  if ( !P )
  {
LABEL_4:
    v9 = -1073741670;
    goto LABEL_152;
  }
  v12 = (const UNICODE_STRING *)a1[5];
  if ( v12 )
  {
    v9 = RtlGUIDFromString(v12, &Guid);
    if ( v9 < 0 )
      goto LABEL_152;
  }
  else
  {
    *(_QWORD *)&Guid.Data1 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
  }
  for ( i = 0; ; i = v5 )
  {
    v66 = v5;
    ObjectProperties = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v11, v10, &ResultLength);
    v9 = ObjectProperties;
    if ( ObjectProperties == -2147483622 )
    {
      v9 = 0;
      ObjectProperties = 0;
      goto LABEL_121;
    }
    if ( ObjectProperties != -2147483643 )
      break;
    ExFreePoolWithTag(v11, 0);
    v10 = ResultLength + 2;
    v65 = ResultLength + 2;
    P = ExAllocatePoolWithTag(PagedPool, ResultLength + 2, 0x63647050u);
    v11 = (WCHAR *)P;
    if ( !P )
      goto LABEL_4;
    --v5;
LABEL_21:
    ++v5;
  }
  if ( ObjectProperties < 0 )
    goto LABEL_121;
  if ( *((_DWORD *)v11 + 1) == 4 && *((_DWORD *)v11 + 3) == 4 )
    v7 = *(_DWORD *)((char *)v11 + *((unsigned int *)v11 + 2));
  v11[((unsigned __int64)*((unsigned int *)v11 + 4) >> 1) + 10] = 0;
  if ( CmIsRootEnumeratedDevice(v11 + 10) )
    goto LABEL_20;
  v14 = PiDevCfgQueryDeviceMigrationNode(v68, v11 + 10, &v69);
  ObjectProperties = v14;
  v9 = v14;
  if ( v14 == -1073741772 )
  {
    v69 = 0LL;
    PiDevCfgClearDeviceMigrationNode(v68, v11 + 10);
LABEL_20:
    v7 = a4;
    goto LABEL_21;
  }
  if ( v14 < 0 )
    goto LABEL_121;
  v15 = (wchar_t **)v69;
  *(_DWORD *)(v69 + 180) = v7;
  v16 = v61;
  if ( *v61 != &v60 )
    __fastfail(3u);
  v17 = v71;
  *v15 = (wchar_t *)&v60;
  v15[1] = (wchar_t *)v16;
  *v16 = v15;
  v18 = *(const wchar_t **)(v17 + 8);
  v61 = (PVOID *)v15;
  v19 = 0;
  if ( !wcsicmp(v15[4], v18) )
    v19 = 0x10000000;
  if ( (*((_DWORD *)v15 + 45) & 0x10000000) != 0 && (v19 & 0x10000000) == 0 )
    *((_DWORD *)v15 + 4) |= 1u;
  v20 = v15 + 7;
  v21 = v17 - (_QWORD)v15;
  v22 = 2LL;
  v23 = &qword_1407F90B0;
  v24 = &v64;
  do
  {
    MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v20, *(wchar_t **)((char *)v20 + v21 - 24));
    *(_WORD *)v24 = MigrationDeviceIdScore;
    if ( MigrationDeviceIdScore != -1 )
      v19 |= *(_DWORD *)v23;
    v20 += 2;
    v24 = (int *)((char *)v24 + 2);
    v23 = (__int64 *)((char *)v23 + 4);
    --v22;
  }
  while ( v22 );
  v26 = v69;
  if ( (*(_DWORD *)(v69 + 180) & 0x10000) != 0 )
  {
    if ( (v19 & 0x10000) == 0 )
    {
LABEL_39:
      *(_DWORD *)(v69 + 16) |= 1u;
      goto LABEL_40;
    }
    v27 = (v19 & 0x11000) == 0;
    v28 = (*(_DWORD *)(v69 + 180) & 0x1000) != 0;
  }
  else
  {
    v27 = (*(_DWORD *)(v69 + 180) & 0x1000) != 0;
    v28 = (v19 & 0x1000) == 0;
  }
  if ( v27 && v28 )
    goto LABEL_39;
LABEL_40:
  v29 = *(const WCHAR **)(v26 + 144);
  v30 = v71;
  if ( v29 && *(_QWORD *)(v71 + 64) )
  {
    while ( *v29 )
    {
      if ( PnpMultiSzContainsString(*(PCWSTR *)(v30 + 64), v29) )
      {
        v19 |= 0x200u;
        *(_QWORD *)(v26 + 152) = v29;
        break;
      }
      v31 = -1LL;
      do
        ++v31;
      while ( v29[v31] );
      v29 += v31 + 1;
    }
  }
  if ( (*(_DWORD *)(v26 + 180) & 0x200) != 0 && (v19 & 0x200) == 0 )
    *(_DWORD *)(v26 + 16) |= 1u;
  v32 = v58;
  if ( *(_QWORD *)(v26 + 128) )
  {
    if ( (v58 & 0x100) == 0 )
    {
      memset(v78, 0, sizeof(v78));
      v33 = *(void **)(v30 + 16);
      v34 = *(_QWORD *)(v30 + 8);
      v78[0] = &DEVPKEY_Device_LocationInfo;
      v78[2] = &DestinationString;
      LODWORD(v78[1]) = 18;
      HIDWORD(v78[3]) = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(v35, v34, 1u, v33, (__int64)v78, 1u);
      v9 = ObjectProperties;
      if ( ObjectProperties < 0 )
        goto LABEL_120;
      if ( SLODWORD(v78[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v32 = v58 | 0x100;
      v58 |= 0x100u;
    }
    if ( DestinationString.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v26 + 120), &DestinationString, 1u) )
      v19 |= 0x100u;
  }
  if ( (v19 & 0x300) == 0 && (*(_DWORD *)(v26 + 180) & 0x100) != 0 )
    *(_DWORD *)(v26 + 16) |= 1u;
  if ( (v32 & 0x30) == 0 )
  {
    memset(v78, 0, sizeof(v78));
    v36 = *(void **)(v30 + 16);
    v37 = *(_QWORD *)(v30 + 8);
    v78[0] = &DEVPKEY_Device_Capabilities;
    v78[2] = &v63;
    v78[5] = &DEVPKEY_Device_BusReportedDeviceDesc;
    v78[7] = &String2;
    LODWORD(v78[1]) = 7;
    LODWORD(v78[3]) = 4;
    LODWORD(v78[6]) = 18;
    HIDWORD(v78[8]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(v38, v37, 1u, v36, (__int64)v78, 2u);
    v9 = ObjectProperties;
    if ( ObjectProperties < 0 )
      goto LABEL_120;
    if ( SLODWORD(v78[9]) < 0 )
      RtlInitUnicodeString(&String2, 0LL);
    v32 |= 0x30u;
    v58 = v32;
  }
  if ( (((unsigned __int8)v63 ^ *(_BYTE *)(v26 + 96)) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(v26 + 180) & 0x10) != 0 || (v63 & 0x10) != 0 )
      *(_DWORD *)(v26 + 16) |= 1u;
  }
  else
  {
    v19 |= 0x10u;
  }
  if ( !*(_QWORD *)(v26 + 112) )
  {
    if ( String2.Buffer )
      goto LABEL_79;
    goto LABEL_78;
  }
  if ( String2.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v26 + 104), &String2, 1u) )
LABEL_78:
    v19 |= 0x20u;
LABEL_79:
  if ( (*(_BYTE *)(v26 + 180) & 0x20) != 0 && (v19 & 0x20) == 0 )
    *(_DWORD *)(v26 + 16) |= 1u;
  if ( !*(_QWORD *)(v26 + 168) )
    goto LABEL_97;
  if ( (v32 & 2) != 0 )
  {
LABEL_94:
    if ( v76.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v26 + 160), &v76, 1u) )
      v19 |= 2u;
LABEL_97:
    if ( (*(_BYTE *)(v26 + 180) & 2) != 0 && (v19 & 2) == 0 )
      *(_DWORD *)(v26 + 16) |= 1u;
    v44 = *(_QWORD *)(v26 + 80) - *(_QWORD *)&Guid.Data1;
    if ( !v44 )
      v44 = *(_QWORD *)(v26 + 88) - *(_QWORD *)Guid.Data4;
    if ( v44 )
    {
      if ( (*(_DWORD *)(v26 + 180) & 1) != 0 )
        *(_DWORD *)(v26 + 16) |= 1u;
    }
    else
    {
      v19 |= 1u;
    }
    v45 = (HIWORD(v64) | ((unsigned __int64)(unsigned __int16)v64 << 16)) << 16;
    *(_QWORD *)(v26 + 184) = v45;
    if ( (v19 & 0x10000000) == 0 )
    {
      v45 |= 0xF000000000000000uLL;
      *(_QWORD *)(v26 + 184) = v45;
    }
    if ( (v19 & 0x200) == 0 )
    {
      v45 |= 0xF000uLL;
      *(_QWORD *)(v26 + 184) = v45;
    }
    if ( (v19 & 0x100) == 0 )
    {
      v45 |= 0x100uLL;
      *(_QWORD *)(v26 + 184) = v45;
    }
    if ( (v19 & 0x20) == 0 )
    {
      v45 |= 0x20uLL;
      *(_QWORD *)(v26 + 184) = v45;
    }
    if ( (v19 & 0x10) == 0 )
    {
      v45 |= 0x10uLL;
      *(_QWORD *)(v26 + 184) = v45;
    }
    if ( (v19 & 2) == 0 )
    {
      v45 |= 2uLL;
      *(_QWORD *)(v26 + 184) = v45;
    }
    v11 = (WCHAR *)P;
    v46 = (v19 & 1) == 0;
    v7 = a4;
    v10 = v65;
    v5 = v66;
    if ( v46 )
      *(_QWORD *)(v26 + 184) = v45 | 1;
    goto LABEL_21;
  }
  v39 = v68;
  v40 = v68[6];
  if ( !v40 || (v41 = *(_QWORD *)(v40 + 8)) == 0 )
  {
LABEL_93:
    v58 = v32 | 2;
    goto LABEL_94;
  }
  if ( (int)PiDevCfgGetDriverPackageId(v41, (__int64)&UnicodeString) < 0 )
  {
LABEL_90:
    v43 = &v74;
    if ( !v74.Buffer )
      v43 = (UNICODE_STRING *)v39[6];
    v76 = *v43;
    goto LABEL_93;
  }
  memset(v78, 0, sizeof(v78));
  v78[0] = &DEVPKEY_DriverPackage_OriginalInfName;
  v78[2] = &v74;
  LODWORD(v78[1]) = 18;
  HIDWORD(v78[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v42, (__int64)UnicodeString.Buffer, 8u, 0LL, (__int64)v78, 1u);
  v9 = ObjectProperties;
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v78[4]) < 0 )
      RtlInitUnicodeString(&v74, 0LL);
    v39 = v68;
    goto LABEL_90;
  }
LABEL_120:
  v11 = (WCHAR *)P;
LABEL_121:
  ExFreePoolWithTag(v11, 0);
  if ( v9 < 0 )
    goto LABEL_152;
  v47 = (PVOID *)v60;
  if ( v60 == &v60 )
  {
LABEL_151:
    v9 = -1073741275;
    goto LABEL_152;
  }
  while ( 2 )
  {
    v48 = v47[23];
    if ( v48 == (PVOID)-1LL )
      goto LABEL_132;
    if ( !v8 )
      goto LABEL_131;
    v49 = v8[23];
    if ( v49 > v48 )
      goto LABEL_131;
    if ( v49 != v48 )
      goto LABEL_132;
    if ( PnpSetupInProgress && *((_DWORD *)v47 + 44) && !*((_DWORD *)v8 + 44) )
    {
LABEL_131:
      v8 = v47;
    }
    else
    {
      *((_DWORD *)v8 + 4) |= 2u;
      *((_DWORD *)v47 + 4) |= 2u;
    }
LABEL_132:
    v47 = (PVOID *)*v47;
    if ( v47 != &v60 )
      continue;
    break;
  }
  if ( !v8 )
    goto LABEL_151;
  if ( ((_DWORD)v8[2] & 2) != 0 )
  {
    v50 = (PVOID *)v60;
    Data = 1;
    if ( v60 != &v60 )
    {
      do
      {
        if ( ((_DWORD)v50[2] & 2) != 0 && v50[23] == v8[23] )
        {
          *(_DWORD *)&ValueName.Length = 1310738;
          ValueName.Buffer = L"Duplicate";
          ZwSetValueKey(v50[5], &ValueName, 0, 4u, &Data, 4u);
        }
        v50 = (PVOID *)*v50;
      }
      while ( v50 != &v60 );
      v9 = ObjectProperties;
    }
  }
  else if ( IopGetRegistryValue(v8[5], L"Duplicate", 0, &P) >= 0 )
  {
    v51 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
      *((_DWORD *)v8 + 4) |= 2u;
    ExFreePoolWithTag(v51, 0);
  }
  v52 = (PVOID *)*v8;
  if ( *((PVOID **)*v8 + 1) != v8 || (v53 = (PVOID **)v8[1], *v53 != v8) )
    __fastfail(3u);
  *v53 = v52;
  v52[1] = v53;
  *v79 = v8;
LABEL_152:
  while ( 1 )
  {
    v54 = v60;
    if ( v60 == &v60 )
      break;
    if ( *((PVOID **)v60 + 1) != &v60 || (v55 = *(_QWORD *)v60, *(PVOID *)(*(_QWORD *)v60 + 8LL) != v60) )
      __fastfail(3u);
    v60 = *(PVOID *)v60;
    *(_QWORD *)(v55 + 8) = &v60;
    PiDevCfgFreeDeviceMigrationNode(v54);
  }
  RtlFreeAnsiString(&String2);
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v74);
  return (unsigned int)v9;
}
