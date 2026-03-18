/*
 * XREFs of PiDevCfgFindDeviceMigrationNode @ 0x140699B70
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PnpMultiSzContainsString @ 0x14014FC94 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryDword @ 0x14014FD64 (PnpValidateRegistryDword.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwEnumerateValueKey @ 0x14017E1A0 (ZwEnumerateValueKey.c)
 *     ZwSetValueKey @ 0x14017EB40 (ZwSetValueKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PiDevCfgGetMigrationDeviceIdScore @ 0x1401F93DC (PiDevCfgGetMigrationDeviceIdScore.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 *     RtlGUIDFromString @ 0x140487DD0 (RtlGUIDFromString.c)
 *     _CmIsRootEnumeratedDevice @ 0x14048B1DC (_CmIsRootEnumeratedDevice.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgGetDriverPackageId @ 0x14058FA6C (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x1406991C4 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14069A4E4 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14069AE04 (PiDevCfgQueryDeviceMigrationNode.c)
 */

__int64 __fastcall PiDevCfgFindDeviceMigrationNode(__int64 *a1, __int64 a2, void *a3, int a4, __int64 **a5)
{
  ULONG v5; // r13d
  int v7; // r14d
  __int64 *v8; // rsi
  NTSTATUS v9; // ebx
  ULONG v10; // r12d
  WCHAR *v11; // r15
  const UNICODE_STRING *v12; // rcx
  ULONG i; // edx
  WCHAR v14; // dx
  int v15; // eax
  __int64 ***v16; // rdi
  _QWORD *v17; // rax
  wchar_t **v18; // rbx
  int v19; // r14d
  __int64 *v20; // r15
  int *v21; // r12
  __int64 v22; // r13
  __int64 v23; // rdi
  __int16 MigrationDeviceIdScore; // ax
  __int64 v25; // rdi
  bool v26; // cl
  bool v27; // al
  const WCHAR *v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rax
  int v31; // r12d
  void *v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  void *v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  UNICODE_STRING *v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  bool v45; // zf
  __int64 *v46; // rcx
  char v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 **v50; // rdi
  unsigned int *v51; // rcx
  __int64 *v52; // rcx
  __int64 **v53; // rax
  __int64 *v54; // rcx
  __int64 *v55; // rax
  int ObjectProperties; // [rsp+30h] [rbp-D0h]
  int v58; // [rsp+34h] [rbp-CCh]
  __int64 *v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 **v61; // [rsp+48h] [rbp-B8h]
  WCHAR *PoolWithTag; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v63; // [rsp+58h] [rbp-A8h]
  ULONG v64; // [rsp+5Ch] [rbp-A4h]
  ULONG ResultLength; // [rsp+60h] [rbp-A0h] BYREF
  int v66; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 *v67; // [rsp+68h] [rbp-98h]
  __int64 v68; // [rsp+70h] [rbp-90h] BYREF
  int Data; // [rsp+78h] [rbp-88h] BYREF
  __int64 v70; // [rsp+80h] [rbp-80h]
  int v71; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING String2; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v74; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+C0h] [rbp-40h]
  UNICODE_STRING v76; // [rsp+C8h] [rbp-38h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v78[10]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 **v79; // [rsp+140h] [rbp+40h]
  UNICODE_STRING ValueName; // [rsp+148h] [rbp+48h] BYREF
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  char KeyInformation[20]; // [rsp+168h] [rbp+68h] BYREF
  int v83; // [rsp+17Ch] [rbp+7Ch]
  int v84; // [rsp+180h] [rbp+80h]
  int v85; // [rsp+184h] [rbp+84h]

  v5 = 0;
  v67 = a1;
  v79 = a5;
  v70 = a2;
  v71 = 0;
  KeyHandle = a3;
  v61 = &v60;
  v7 = a4;
  v68 = 0LL;
  v60 = (__int64 *)&v60;
  v58 = 0;
  v8 = 0LL;
  v66 = 0;
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
    goto LABEL_144;
  if ( !v83 )
    goto LABEL_143;
  v10 = v85 + 2 * (v84 + 13);
  v63 = v10;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v10, 0x63647050u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_4:
    v9 = -1073741670;
    goto LABEL_144;
  }
  v12 = (const UNICODE_STRING *)a1[5];
  if ( v12 )
  {
    v9 = RtlGUIDFromString(v12, &Guid);
    if ( v9 < 0 )
      goto LABEL_144;
  }
  else
  {
    *(_QWORD *)&Guid.Data1 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
  }
  for ( i = 0; ; i = v5 )
  {
    v64 = v5;
    ObjectProperties = ZwEnumerateValueKey(KeyHandle, i, KeyValueFullInformation, v11, v10, &ResultLength);
    v9 = ObjectProperties;
    if ( ObjectProperties == -2147483622 )
    {
      v9 = 0;
      ObjectProperties = 0;
      goto LABEL_113;
    }
    if ( ObjectProperties != -2147483643 )
      break;
    ExFreePoolWithTag(v11, 0);
    v10 = ResultLength + 2;
    v63 = ResultLength + 2;
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, ResultLength + 2, 0x63647050u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_4;
    --v5;
LABEL_20:
    ++v5;
  }
  if ( ObjectProperties < 0 )
    goto LABEL_113;
  if ( PnpValidateRegistryDword((__int64)v11) )
    v7 = *(_DWORD *)((char *)v11 + *((unsigned int *)v11 + 2));
  v11[((unsigned __int64)*((unsigned int *)v11 + 4) >> 1) + 10] = v14;
  if ( CmIsRootEnumeratedDevice(v11 + 10) )
    goto LABEL_19;
  v15 = PiDevCfgQueryDeviceMigrationNode(v67, v11 + 10, &v68);
  ObjectProperties = v15;
  v9 = v15;
  if ( v15 == -1073741772 )
  {
    v68 = 0LL;
    PiDevCfgClearDeviceMigrationNode(v67, v11 + 10);
LABEL_19:
    v7 = a4;
    goto LABEL_20;
  }
  if ( v15 < 0 )
    goto LABEL_113;
  v16 = (__int64 ***)v68;
  *(_DWORD *)(v68 + 180) = v7;
  v17 = v61;
  if ( *v61 != (__int64 *)&v60 )
    __fastfail(3u);
  v16[1] = v61;
  *v16 = &v60;
  v18 = (wchar_t **)(v16 + 7);
  v19 = 0;
  *v17 = v16;
  v20 = &qword_14074A378;
  v61 = (__int64 **)v16;
  v21 = &v71;
  v22 = v70 - (_QWORD)v16;
  v23 = 2LL;
  do
  {
    MigrationDeviceIdScore = PiDevCfgGetMigrationDeviceIdScore(*v18, *(wchar_t **)((char *)v18 + v22 - 24));
    *(_WORD *)v21 = MigrationDeviceIdScore;
    if ( MigrationDeviceIdScore != -1 )
      v19 |= *(_DWORD *)v20;
    v18 += 2;
    v21 = (int *)((char *)v21 + 2);
    v20 = (__int64 *)((char *)v20 + 4);
    --v23;
  }
  while ( v23 );
  v25 = v68;
  if ( (*(_DWORD *)(v68 + 180) & 0x10000) != 0 )
  {
    if ( (v19 & 0x10000) == 0 )
    {
LABEL_34:
      *(_DWORD *)(v68 + 16) |= 1u;
      goto LABEL_35;
    }
    v26 = (v19 & 0x11000) == 0;
    v27 = (*(_DWORD *)(v68 + 180) & 0x1000) != 0;
  }
  else
  {
    v26 = (*(_DWORD *)(v68 + 180) & 0x1000) != 0;
    v27 = (v19 & 0x1000) == 0;
  }
  if ( v26 && v27 )
    goto LABEL_34;
LABEL_35:
  v28 = *(const WCHAR **)(v25 + 144);
  v29 = v70;
  if ( v28 && *(_QWORD *)(v70 + 64) )
  {
    while ( *v28 )
    {
      if ( PnpMultiSzContainsString(*(PCWSTR *)(v29 + 64), v28) )
      {
        LOWORD(v19) = v19 | 0x200;
        *(_QWORD *)(v25 + 152) = v28;
        break;
      }
      v30 = -1LL;
      do
        ++v30;
      while ( v28[v30] );
      v28 += v30 + 1;
    }
  }
  if ( (*(_DWORD *)(v25 + 180) & 0x200) != 0 && (v19 & 0x200) == 0 )
    *(_DWORD *)(v25 + 16) |= 1u;
  v31 = v58;
  if ( *(_QWORD *)(v25 + 128) )
  {
    if ( (v58 & 0x100) == 0 )
    {
      memset(v78, 0, sizeof(v78));
      v32 = *(void **)(v29 + 16);
      v33 = *(_QWORD *)(v29 + 8);
      v78[0] = &DEVPKEY_Device_LocationInfo;
      v78[2] = &DestinationString;
      LODWORD(v78[1]) = 18;
      HIDWORD(v78[3]) = 6;
      ObjectProperties = PiDevCfgQueryObjectProperties(v34, v33, 1u, v32, (__int64)v78, 1u);
      v9 = ObjectProperties;
      if ( ObjectProperties < 0 )
        goto LABEL_112;
      if ( SLODWORD(v78[4]) < 0 )
        RtlInitUnicodeString(&DestinationString, 0LL);
      v31 = v58 | 0x100;
      v58 |= 0x100u;
    }
    if ( DestinationString.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v25 + 120), &DestinationString, 1u) )
      LOWORD(v19) = v19 | 0x100;
  }
  if ( (v19 & 0x300) == 0 && (*(_DWORD *)(v25 + 180) & 0x100) != 0 )
    *(_DWORD *)(v25 + 16) |= 1u;
  if ( (v31 & 0x30) == 0 )
  {
    memset(v78, 0, sizeof(v78));
    v35 = *(void **)(v29 + 16);
    v36 = *(_QWORD *)(v29 + 8);
    v78[0] = &DEVPKEY_Device_Capabilities;
    v78[2] = &v66;
    v78[5] = &DEVPKEY_Device_BusReportedDeviceDesc;
    v78[7] = &String2;
    LODWORD(v78[1]) = 7;
    LODWORD(v78[3]) = 4;
    LODWORD(v78[6]) = 18;
    HIDWORD(v78[8]) = 6;
    ObjectProperties = PiDevCfgQueryObjectProperties(v37, v36, 1u, v35, (__int64)v78, 2u);
    v9 = ObjectProperties;
    if ( ObjectProperties < 0 )
      goto LABEL_112;
    if ( SLODWORD(v78[9]) < 0 )
      RtlInitUnicodeString(&String2, 0LL);
    v31 |= 0x30u;
    v58 = v31;
  }
  if ( (((unsigned __int8)v66 ^ *(_BYTE *)(v25 + 96)) & 0x10) != 0 )
  {
    if ( (*(_DWORD *)(v25 + 180) & 0x10) != 0 )
      *(_DWORD *)(v25 + 16) |= 1u;
  }
  else
  {
    LOWORD(v19) = v19 | 0x10;
  }
  if ( !*(_QWORD *)(v25 + 112) )
  {
    if ( String2.Buffer )
      goto LABEL_73;
    goto LABEL_72;
  }
  if ( String2.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v25 + 104), &String2, 1u) )
LABEL_72:
    LOWORD(v19) = v19 | 0x20;
LABEL_73:
  if ( (*(_BYTE *)(v25 + 180) & 0x20) != 0 && (v19 & 0x20) == 0 )
    *(_DWORD *)(v25 + 16) |= 1u;
  if ( !*(_QWORD *)(v25 + 168) )
    goto LABEL_91;
  if ( (v31 & 2) != 0 )
  {
LABEL_88:
    if ( v76.Buffer && !RtlCompareUnicodeString((PCUNICODE_STRING)(v25 + 160), &v76, 1u) )
      LOWORD(v19) = v19 | 2;
LABEL_91:
    if ( (*(_BYTE *)(v25 + 180) & 2) != 0 && (v19 & 2) == 0 )
      *(_DWORD *)(v25 + 16) |= 1u;
    v43 = *(_QWORD *)(v25 + 80) - *(_QWORD *)&Guid.Data1;
    if ( !v43 )
      v43 = *(_QWORD *)(v25 + 88) - *(_QWORD *)Guid.Data4;
    if ( v43 )
    {
      if ( (*(_DWORD *)(v25 + 180) & 1) != 0 )
        *(_DWORD *)(v25 + 16) |= 1u;
    }
    else
    {
      LOWORD(v19) = v19 | 1;
    }
    v44 = (HIWORD(v71) | ((v71 | 0xFFFFFFFFF0000000uLL) << 16)) << 16;
    *(_QWORD *)(v25 + 184) = v44;
    if ( (v19 & 0x200) == 0 )
      *(_QWORD *)(v25 + 184) = v44 | 0xF000;
    if ( (v19 & 0x100) == 0 )
      *(_QWORD *)(v25 + 184) |= 0x100uLL;
    if ( (v19 & 0x20) == 0 )
      *(_QWORD *)(v25 + 184) |= 0x20uLL;
    if ( (v19 & 0x10) == 0 )
      *(_QWORD *)(v25 + 184) |= 0x10uLL;
    if ( (v19 & 2) == 0 )
      *(_QWORD *)(v25 + 184) |= 2uLL;
    v11 = PoolWithTag;
    v45 = (v19 & 1) == 0;
    v7 = a4;
    v10 = v63;
    v5 = v64;
    if ( v45 )
      *(_QWORD *)(v25 + 184) |= 1uLL;
    goto LABEL_20;
  }
  v38 = v67;
  v39 = v67[6];
  if ( !v39 || (v40 = *(_QWORD *)(v39 + 8)) == 0 )
  {
LABEL_87:
    v58 = v31 | 2;
    goto LABEL_88;
  }
  if ( (int)PiDevCfgGetDriverPackageId(v40, (__int64)&UnicodeString) < 0 )
  {
LABEL_84:
    v42 = &v74;
    if ( !v74.Buffer )
      v42 = (UNICODE_STRING *)v38[6];
    v76 = *v42;
    goto LABEL_87;
  }
  memset(v78, 0, sizeof(v78));
  v78[0] = &DEVPKEY_DriverPackage_OriginalInfName;
  v78[2] = &v74;
  LODWORD(v78[1]) = 18;
  HIDWORD(v78[3]) = 6;
  ObjectProperties = PiDevCfgQueryObjectProperties(v41, (__int64)UnicodeString.Buffer, 7u, 0LL, (__int64)v78, 1u);
  v9 = ObjectProperties;
  if ( ObjectProperties >= 0 )
  {
    if ( SLODWORD(v78[4]) < 0 )
      RtlInitUnicodeString(&v74, 0LL);
    v38 = v67;
    goto LABEL_84;
  }
LABEL_112:
  v11 = PoolWithTag;
LABEL_113:
  ExFreePoolWithTag(v11, 0);
  if ( v9 < 0 )
    goto LABEL_144;
  v46 = v60;
  if ( v60 == (__int64 *)&v60 )
  {
LABEL_143:
    v9 = -1073741275;
    goto LABEL_144;
  }
  v47 = PnpSetupInProgress;
  do
  {
    v48 = v46[23];
    if ( v48 == -1LL )
      goto LABEL_125;
    if ( !v8 )
      goto LABEL_124;
    v49 = v8[23];
    if ( v49 > v48 )
      goto LABEL_124;
    if ( v49 != v48 )
      goto LABEL_125;
    if ( v47 && *((_DWORD *)v46 + 44) && !*((_DWORD *)v8 + 44) )
    {
LABEL_124:
      v8 = v46;
    }
    else
    {
      *((_DWORD *)v8 + 4) |= 2u;
      *((_DWORD *)v46 + 4) |= 2u;
    }
LABEL_125:
    v46 = (__int64 *)*v46;
  }
  while ( v46 != (__int64 *)&v60 );
  if ( !v8 )
    goto LABEL_143;
  if ( (v8[2] & 2) != 0 )
  {
    v50 = (__int64 **)v60;
    Data = 1;
    if ( v60 != (__int64 *)&v60 )
    {
      do
      {
        if ( ((_DWORD)v50[2] & 2) != 0 && v50[23] == (__int64 *)v8[23] )
        {
          *(_DWORD *)&ValueName.Length = 1310738;
          ValueName.Buffer = L"Duplicate";
          ZwSetValueKey(v50[5], &ValueName, 0, 4u, &Data, 4u);
        }
        v50 = (__int64 **)*v50;
      }
      while ( v50 != &v60 );
      v9 = ObjectProperties;
    }
  }
  else if ( IopGetRegistryValue((HANDLE)v8[5], L"Duplicate", 0, &PoolWithTag) >= 0 )
  {
    if ( PnpValidateRegistryDword((__int64)PoolWithTag) && *(unsigned int *)((char *)v51 + v51[2]) )
      *((_DWORD *)v8 + 4) |= 2u;
    ExFreePoolWithTag(v51, 0);
  }
  v52 = (__int64 *)*v8;
  v53 = (__int64 **)v8[1];
  if ( *(__int64 **)(*v8 + 8) != v8 || *v53 != v8 )
    __fastfail(3u);
  *v53 = v52;
  v52[1] = (__int64)v53;
  *v79 = v8;
LABEL_144:
  while ( 1 )
  {
    v54 = v60;
    if ( v60 == (__int64 *)&v60 )
      break;
    v55 = (__int64 *)*v60;
    if ( (__int64 **)v60[1] != &v60 || (__int64 *)v55[1] != v60 )
      __fastfail(3u);
    v60 = (__int64 *)*v60;
    v55[1] = (__int64)&v60;
    PiDevCfgFreeDeviceMigrationNode(v54);
  }
  RtlFreeUnicodeString(&String2);
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v74);
  return (unsigned int)v9;
}
