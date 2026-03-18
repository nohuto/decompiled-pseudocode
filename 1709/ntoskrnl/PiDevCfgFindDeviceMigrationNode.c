/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x1401330EC (PnpMultiSzContainsString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwEnumerateValueKey @ 0x14017DB20 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1401FF33C (PiDevCfgGetMigrationDeviceIdScore.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     NtQueryKey @ 0x1404A8630 (NtQueryKey.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 *     RtlGUIDFromString @ 0x140525090 (RtlGUIDFromString.c)
 *     _CmIsRootEnumeratedDevice @ 0x1405275DC (_CmIsRootEnumeratedDevice.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405A1FC8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406C4FEC (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x1406C60A8 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x1406C6A28 (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 *a1, __int64 a2, void *a3, int a4, PVOID **a5)
{
  ULONG v5; // edi
  __int64 *v6; // r13
  int v7; // r14d
  PVOID *v8; // rsi
  NTSTATUS v9; // ebx
  ULONG v10; // r12d
  WCHAR *v11; // r15
  const UNICODE_STRING *v12; // rcx
  ULONG i; // edx
  ULONG v14; // edi
  int v15; // eax
  wchar_t **v16; // rdi
  PVOID *v17; // rax
  __int64 v18; // r13
  const wchar_t *v19; // rdx
  int v20; // r14d
  wchar_t **v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 *v24; // r15
  int *v25; // r12
  __int16 MigrationDeviceIdScore; // ax
  __int64 v27; // rdi
  bool v28; // cl
  bool v29; // al
  const WCHAR *v30; // rbx
  __int64 v31; // r15
  __int64 v32; // rax
  int v33; // r12d
  void *v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  void *v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rcx
  UNICODE_STRING *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  bool v47; // zf
  PVOID *v48; // rcx
  PVOID v49; // rax
  PVOID v50; // rdx
  PVOID *v51; // rdi
  PVOID v52; // rcx
  PVOID *v53; // rax
  PVOID **v54; // rcx
  PVOID v55; // rcx
  __int64 v56; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+34h] [rbp-CCh]
  ULONG v60; // [rsp+38h] [rbp-C8h]
  PVOID v62; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v63; // [rsp+48h] [rbp-B8h]
  PVOID P; // [rsp+50h] [rbp-B0h] BYREF
  int v65; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v66; // [rsp+5Ch] [rbp-A4h]
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+68h] [rbp-98h] BYREF
  int Data; // [rsp+70h] [rbp-90h] BYREF
  __int64 v70; // [rsp+78h] [rbp-88h]
  int v71; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v72; // [rsp+88h] [rbp-78h]
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v75; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING v77; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v79[10]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID **v80; // [rsp+140h] [rbp+40h]
  UNICODE_STRING ValueName; // [rsp+148h] [rbp+48h] BYREF
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  char KeyInformation[20]; // [rsp+168h] [rbp+68h] BYREF
  int v84; // [rsp+17Ch] [rbp+7Ch]
  int v85; // [rsp+180h] [rbp+80h]
  int v86; // [rsp+184h] [rbp+84h]

  v5 = 0;
  v72 = a1;
  v6 = a1;
  v80 = a5;
  v70 = a2;
  v71 = 0;
  KeyHandle = a3;
  v63 = &v62;
  v7 = a4;
  v68 = 0LL;
  v62 = &v62;
  v59 = 0;
  v8 = 0LL;
  v65 = 0;
  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&v77.Length = 0;
  v77.Buffer = 0LL;
  *(_DWORD *)&v75.Length = 0;
  v75.Buffer = 0LL;
  v9 = NtQueryKey(a3, KeyCachedInformation, KeyInformation, 0x28u, &ResultLength);
  if ( v9 < 0 )
    goto LABEL_152;
  if ( !v84 )
    goto LABEL_151;
  v10 = v86 + 2 * (v85 + 13);
  v66 = v10;
  P = ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
  v11 = (WCHAR *)P;
  if ( !P )
  {
LABEL_4:
    v9 = -1073741670;
    goto LABEL_152;
  }
  v12 = (const UNICODE_STRING *)v6[5];
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
    v60 = v5;
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
    v66 = ResultLength + 2;
    P = ExAllocatePoolWithTag(PagedPool, ResultLength + 2, 0x63647050u);
    v11 = (WCHAR *)P;
    if ( !P )
      goto LABEL_4;
    v14 = v5 - 1;
LABEL_22:
    v5 = v14 + 1;
  }
  if ( ObjectProperties < 0 )
    goto LABEL_121;
  if ( *((_DWORD *)v11 + 1) == 4 && *((_DWORD *)v11 + 3) == 4 )
    v7 = *(_DWORD *)((char *)v11 + *((unsigned int *)v11 + 2));
  v11[((unsigned __int64)*((unsigned int *)v11 + 4) >> 1) + 10] = 0;
  if ( CmIsRootEnumeratedDevice(v11 + 10) )
    goto LABEL_20;
  v15 = PiDevCfgQueryDeviceMigrationNode(v6, v11 + 10, &v68);
  ObjectProperties = v15;
  v9 = v15;
  if ( v15 == -1073741772 )
  {
    v68 = 0LL;
    PiDevCfgClearDeviceMigrationNode(v6, v11 + 10);
LABEL_20:
    v7 = a4;
LABEL_21:
    v14 = v60;
    goto LABEL_22;
  }
  if ( v15 < 0 )
    goto LABEL_121;
  v16 = (wchar_t **)v68;
  *(_DWORD *)(v68 + 180) = v7;
  v17 = v63;
  if ( *v63 != &v62 )
    __fastfail(3u);
  v18 = v70;
  *v16 = (wchar_t *)&v62;
  v16[1] = (wchar_t *)v17;
  *v17 = v16;
  v19 = *(const wchar_t **)(v18 + 8);
  v63 = (PVOID *)v16;
  v20 = 0;
  if ( !wcsicmp(v16[4], v19) )
    v20 = 0x10000000;
  if ( (*((_DWORD *)v16 + 45) & 0x10000000) != 0 && (v20 & 0x10000000) == 0 )
    *((_DWORD *)v16 + 4) |= 1u;
  v21 = v16 + 7;
  v22 = v18 - (_QWORD)v16;
  v23 = 2LL;
  v24 = &qword_14078CB38;
  v25 = &v71;
  do
  {
    MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v21, *(wchar_t **)((char *)v21 + v22 - 24));
    *(_WORD *)v25 = MigrationDeviceIdScore;
    if ( MigrationDeviceIdScore != -1 )
      v20 |= *(_DWORD *)v24;
    v21 += 2;
    v25 = (int *)((char *)v25 + 2);
    v24 = (__int64 *)((char *)v24 + 4);
    --v23;
  }
  while ( v23 );
  v27 = v68;
  if ( (*(_DWORD *)(v68 + 180) & 0x10000) != 0 )
  {
    if ( (v20 & 0x10000) == 0 )
    {
LABEL_40:
      *(_DWORD *)(v68 + 16) |= 1u;
      goto LABEL_41;
    }
    v28 = (v20 & 0x11000) == 0;
    v29 = (*(_DWORD *)(v68 + 180) & 0x1000) != 0;
  }
  else
  {
    v28 = (*(_DWORD *)(v68 + 180) & 0x1000) != 0;
    v29 = (v20 & 0x1000) == 0;
  }
  if ( v28 && v29 )
    goto LABEL_40;
LABEL_41:
  v30 = *(const WCHAR **)(v27 + 144);
  v31 = v70;
  if ( v30 && *(_QWORD *)(v70 + 64) )
  {
    while ( *v30 )
    {
      if ( PnpMultiSzContainsString(*(PCWSTR *)(v31 + 64), v30) )
      {
        v20 |= 0x200u;
        *(_QWORD *)(v27 + 152) = v30;
        break;
      }
      v32 = -1LL;
      do
        ++v32;
      while ( v30[v32] );
      v30 += v32 + 1;
    }
  }
  if ( (*(_DWORD *)(v27 + 180) & 0x200) != 0 && (v20 & 0x200) == 0 )
    *(_DWORD *)(v27 + 16) |= 1u;
  v33 = v59;
  if ( *(_QWORD *)(v27 + 128) )
  {
    if ( (v59 & 0x100) == 0 )
    {
      memset(v79, 0, sizeof(v79));
      v34 = *(void **)(v31 + 16);
      v35 = *(_QWORD *)(v31 + 8);
      v79[0] = &DEVPKEY_Device_LocationInfo;
      v79[2] = &DestinationString;
      LODWORD(v79[1]) = 18;
      HIDWORD(v79[3]) = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(v36, v35, 1u, v34, (__int64)v79, 1u);
      v9 = ObjectProperties;
      if ( ObjectProperties < 0 )
        goto LABEL_120;
      if ( SLODWORD(v79[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v33 = v59 | 0x100;
      v59 |= 0x100u;
    }
    if ( DestinationString.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 120), &DestinationString, 1u) )
      v20 |= 0x100u;
  }
  if ( (v20 & 0x300) == 0 && (*(_DWORD *)(v27 + 180) & 0x100) != 0 )
    *(_DWORD *)(v27 + 16) |= 1u;
  if ( (v33 & 0x30) == 0 )
  {
    memset(v79, 0, sizeof(v79));
    v37 = *(void **)(v31 + 16);
    v38 = *(_QWORD *)(v31 + 8);
    v79[0] = &DEVPKEY_Device_Capabilities;
    v79[2] = &v65;
    v79[5] = &DEVPKEY_Device_BusReportedDeviceDesc;
    v79[7] = &String2;
    LODWORD(v79[1]) = 7;
    LODWORD(v79[3]) = 4;
    LODWORD(v79[6]) = 18;
    HIDWORD(v79[8]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(v39, v38, 1u, v37, (__int64)v79, 2u);
    v9 = ObjectProperties;
    if ( ObjectProperties < 0 )
      goto LABEL_120;
    if ( SLODWORD(v79[9]) < 0 )
      RtlInitUnicodeString(&String2, 0LL);
    v33 |= 0x30u;
    v59 = v33;
  }
  if ( (((unsigned __int8)v65 ^ *(_BYTE *)(v27 + 96)) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(v27 + 180) & 0x10) != 0 || (v65 & 0x10) != 0 )
      *(_DWORD *)(v27 + 16) |= 1u;
  }
  else
  {
    v20 |= 0x10u;
  }
  if ( !*(_QWORD *)(v27 + 112) )
  {
    if ( String2.Buffer )
      goto LABEL_80;
    goto LABEL_79;
  }
  if ( String2.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 104), &String2, 1u) )
LABEL_79:
    v20 |= 0x20u;
LABEL_80:
  if ( (*(_BYTE *)(v27 + 180) & 0x20) != 0 && (v20 & 0x20) == 0 )
    *(_DWORD *)(v27 + 16) |= 1u;
  if ( !*(_QWORD *)(v27 + 168) )
    goto LABEL_97;
  if ( (v33 & 2) != 0 )
  {
LABEL_94:
    if ( v77.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v27 + 160), &v77, 1u) )
      v20 |= 2u;
LABEL_97:
    if ( (*(_BYTE *)(v27 + 180) & 2) != 0 && (v20 & 2) == 0 )
      *(_DWORD *)(v27 + 16) |= 1u;
    v45 = *(_QWORD *)(v27 + 80) - *(_QWORD *)&Guid.Data1;
    if ( !v45 )
      v45 = *(_QWORD *)(v27 + 88) - *(_QWORD *)Guid.Data4;
    if ( v45 )
    {
      if ( (*(_DWORD *)(v27 + 180) & 1) != 0 )
        *(_DWORD *)(v27 + 16) |= 1u;
    }
    else
    {
      v20 |= 1u;
    }
    v46 = (HIWORD(v71) | ((unsigned __int64)(unsigned __int16)v71 << 16)) << 16;
    *(_QWORD *)(v27 + 184) = v46;
    if ( (v20 & 0x10000000) == 0 )
      *(_QWORD *)(v27 + 184) = v46 | 0xF000000000000000uLL;
    if ( (v20 & 0x200) == 0 )
      *(_QWORD *)(v27 + 184) |= 0xF000uLL;
    if ( (v20 & 0x100) == 0 )
      *(_QWORD *)(v27 + 184) |= 0x100uLL;
    if ( (v20 & 0x20) == 0 )
      *(_QWORD *)(v27 + 184) |= 0x20uLL;
    if ( (v20 & 0x10) == 0 )
      *(_QWORD *)(v27 + 184) |= 0x10uLL;
    if ( (v20 & 2) == 0 )
      *(_QWORD *)(v27 + 184) |= 2uLL;
    v11 = (WCHAR *)P;
    v47 = (v20 & 1) == 0;
    v7 = a4;
    v10 = v66;
    v6 = v72;
    if ( v47 )
      *(_QWORD *)(v27 + 184) |= 1uLL;
    goto LABEL_21;
  }
  v40 = v72;
  v41 = v72[6];
  if ( !v41 || (v42 = *(_QWORD *)(v41 + 8)) == 0 )
  {
LABEL_93:
    v59 = v33 | 2;
    goto LABEL_94;
  }
  if ( (int)PiDevCfgGetDriverPackageId(v42, (__int64)&UnicodeString) < 0 )
  {
LABEL_90:
    v44 = &v75;
    if ( !v75.Buffer )
      v44 = (UNICODE_STRING *)v40[6];
    v77 = *v44;
    goto LABEL_93;
  }
  memset(v79, 0, sizeof(v79));
  v79[0] = &DEVPKEY_DriverPackage_OriginalInfName;
  v79[2] = &v75;
  LODWORD(v79[1]) = 18;
  HIDWORD(v79[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v43, (__int64)UnicodeString.Buffer, 7u, 0LL, (__int64)v79, 1u);
  v9 = ObjectProperties;
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v79[4]) < 0 )
      RtlInitUnicodeString(&v75, 0LL);
    goto LABEL_90;
  }
LABEL_120:
  v11 = (WCHAR *)P;
LABEL_121:
  ExFreePoolWithTag(v11, 0);
  if ( v9 < 0 )
    goto LABEL_152;
  v48 = (PVOID *)v62;
  if ( v62 == &v62 )
  {
LABEL_151:
    v9 = -1073741275;
    goto LABEL_152;
  }
  while ( 2 )
  {
    v49 = v48[23];
    if ( v49 == (PVOID)-1LL )
      goto LABEL_132;
    if ( !v8 )
      goto LABEL_131;
    v50 = v8[23];
    if ( v50 > v49 )
      goto LABEL_131;
    if ( v50 != v49 )
      goto LABEL_132;
    if ( PnpSetupInProgress && *((_DWORD *)v48 + 44) && !*((_DWORD *)v8 + 44) )
    {
LABEL_131:
      v8 = v48;
    }
    else
    {
      *((_DWORD *)v8 + 4) |= 2u;
      *((_DWORD *)v48 + 4) |= 2u;
    }
LABEL_132:
    v48 = (PVOID *)*v48;
    if ( v48 != &v62 )
      continue;
    break;
  }
  if ( !v8 )
    goto LABEL_151;
  if ( ((_DWORD)v8[2] & 2) != 0 )
  {
    v51 = (PVOID *)v62;
    Data = 1;
    if ( v62 != &v62 )
    {
      do
      {
        if ( ((_DWORD)v51[2] & 2) != 0 && v51[23] == v8[23] )
        {
          *(_DWORD *)&ValueName.Length = 1310738;
          ValueName.Buffer = L"Duplicate";
          ZwSetValueKey(v51[5], &ValueName, 0, 4u, &Data, 4u);
        }
        v51 = (PVOID *)*v51;
      }
      while ( v51 != &v62 );
      v9 = ObjectProperties;
    }
  }
  else if ( IopGetRegistryValue(v8[5], L"Duplicate", 0, &P) >= 0 )
  {
    v52 = P;
    if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 && *(_DWORD *)((char *)P + *((unsigned int *)P + 2)) )
      *((_DWORD *)v8 + 4) |= 2u;
    ExFreePoolWithTag(v52, 0);
  }
  v53 = (PVOID *)*v8;
  if ( *((PVOID **)*v8 + 1) != v8 || (v54 = (PVOID **)v8[1], *v54 != v8) )
    __fastfail(3u);
  *v54 = v53;
  v53[1] = v54;
  *v80 = v8;
LABEL_152:
  while ( 1 )
  {
    v55 = v62;
    if ( v62 == &v62 )
      break;
    if ( *((PVOID **)v62 + 1) != &v62 || (v56 = *(_QWORD *)v62, *(PVOID *)(*(_QWORD *)v62 + 8LL) != v62) )
      __fastfail(3u);
    v62 = *(PVOID *)v62;
    *(_QWORD *)(v56 + 8) = &v62;
    PiDevCfgFreeDeviceMigrationNode(v55);
  }
  RtlFreeUnicodeString(&String2);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v75);
  return (unsigned int)v9;
}
