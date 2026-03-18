/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x1405A1890
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1405A13E0 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x140133158 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x14015BA08 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1404DF560 (RtlCreateUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1405A1298 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x1405A1EE4 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405A1FC8 (PiDevCfgGetDriverPackageId.c)
 *     PipCheckComputerSupported @ 0x1406BD8E8 (PipCheckComputerSupported.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, __int64 *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  __int64 v11; // rcx
  PVOID PoolWithTag; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // edx
  __int64 v17; // rcx
  char v18; // al
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  int v21; // eax
  __int64 v23; // rax
  char v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v27; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v28; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+78h] [rbp-88h]
  UNICODE_STRING v32; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v34; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v36[28]; // [rsp+E0h] [rbp-20h] BYREF

  v34 = a6;
  v31 = a3;
  v25 = -16777216;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  i = 0LL;
  *(_DWORD *)&v33.Length = 0;
  v33.Buffer = 0LL;
  v24 = 0;
  KeyHandle = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId(SourceString, &UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_45;
  DriverPackageId = PnpOpenObjectRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)UnicodeString.Buffer,
                      7u,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL,
                      0);
  if ( DriverPackageId < 0 )
    goto LABEL_45;
  v36[0] = &DEVPKEY_DriverPackage_TargetComputerIds;
  v36[2] = &v33;
  LODWORD(v36[1]) = 8210;
  HIDWORD(v36[3]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v11, (__int64)UnicodeString.Buffer, 7u, Handle, (__int64)v36, 1u);
  if ( DriverPackageId < 0 )
    goto LABEL_45;
  if ( SLODWORD(v36[4]) >= 0 && v33.Buffer && v33.Length > 2u )
  {
    for ( i = v33.Buffer; *i; i += v23 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v23 = -1LL;
      do
        ++v23;
      while ( i[v23] );
    }
    if ( !*i )
      goto LABEL_63;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_63:
    DriverPackageId = -1073740764;
    goto LABEL_45;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
  v13 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_45;
  }
  memset(PoolWithTag, 0, 0x190uLL);
  *(_QWORD *)(v13 + 216) = v13 + 208;
  *(_QWORD *)(v13 + 208) = v13 + 208;
  *(_QWORD *)(v13 + 200) = v13 + 192;
  *(_QWORD *)(v13 + 192) = v13 + 192;
  *(_QWORD *)(v13 + 360) = v13 + 352;
  *(_QWORD *)(v13 + 352) = v13 + 352;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 40), SourceString)
    || !PnpDuplicateUnicodeString(v13 + 56, (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)(v13 + 128), i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_43;
  }
  memset(v36, 0, 0xA0uLL);
  v36[0] = &DEVPKEY_DriverPackage_DriverDate;
  v36[2] = v13 + 112;
  LODWORD(v36[1]) = 16;
  v36[5] = &DEVPKEY_DriverPackage_DriverVersion;
  LODWORD(v36[6]) = 9;
  v36[7] = v13 + 120;
  LODWORD(v36[3]) = 8;
  LODWORD(v36[8]) = 8;
  v36[10] = &DEVPKEY_DriverPackage_SignerScore;
  v36[12] = &v25;
  v36[15] = &DEVPKEY_DriverPackage_ExtensionId;
  LODWORD(v36[13]) = 4;
  LODWORD(v36[11]) = 7;
  LODWORD(v36[16]) = 13;
  v36[17] = v13 + 172;
  LODWORD(v36[18]) = 16;
  DriverPackageId = PiDevCfgQueryObjectProperties(16LL, (__int64)UnicodeString.Buffer, 7u, Handle, (__int64)v36, 4u);
  if ( DriverPackageId < 0 )
    goto LABEL_43;
  if ( SLODWORD(v36[4]) < 0 )
    *(_QWORD *)(v13 + 112) = 0LL;
  if ( SLODWORD(v36[9]) < 0 )
    *(_QWORD *)(v13 + 120) = 0LL;
  v16 = v25;
  if ( SLODWORD(v36[14]) < 0 )
    v16 = -16777216;
  v25 = v16;
  if ( SLODWORD(v36[19]) < 0 )
  {
    *(_QWORD *)(v13 + 172) = 0LL;
    *(_QWORD *)(v13 + 180) = 0LL;
    v16 = v25;
  }
  if ( (a5 & 4) != 0 )
    *(_DWORD *)(v13 + 108) = -1;
  else
    *(_DWORD *)(v13 + 108) = (unsigned __int16)v31 | a4 & 0xFF0000 | v16 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  if ( (a5 & 2) != 0 )
  {
    memset(v36, 0, 0xA0uLL);
    v36[0] = &DEVPKEY_DriverPackage_F6;
    v36[2] = &v24;
    LODWORD(v36[1]) = 17;
    LODWORD(v36[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v17, (__int64)UnicodeString.Buffer, 7u, Handle, (__int64)v36, 1u);
    if ( DriverPackageId < 0 )
      goto LABEL_43;
    v18 = v24;
    if ( SLODWORD(v36[4]) < 0 )
      v18 = 0;
    v24 = v18;
    if ( v18 == -1 )
      *(_DWORD *)(v13 + 168) |= 2u;
  }
  *(_DWORD *)&v32.Length = 1572886;
  v32.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v32;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v19;
  if ( v19 == -1073741772 )
    goto LABEL_71;
  if ( v19 < 0 )
    goto LABEL_43;
  ObjectAttributes.RootDirectory = KeyHandle;
  v27 = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v13 + 72);
  v20 = ZwOpenKey(&v27, 0x20019u, &ObjectAttributes);
  DriverPackageId = v20;
  if ( v20 == -1073741772 )
  {
LABEL_71:
    DriverPackageId = 0;
  }
  else
  {
    if ( v20 < 0 )
      goto LABEL_43;
    memset(v36, 0, sizeof(v36));
    v36[2] = L"Configuration";
    LODWORD(v36[4]) = 0x1000000;
    v36[3] = v13 + 88;
    LODWORD(v36[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v27, (__int64)v36, 0LL);
    if ( DriverPackageId < 0 )
      goto LABEL_43;
    if ( !*(_WORD *)(v13 + 88) && *(_QWORD *)(v13 + 96) )
      RtlFreeUnicodeString((PUNICODE_STRING)(v13 + 88));
  }
  v14 = *(_QWORD *)(v13 + 96);
  if ( !v14 )
  {
LABEL_41:
    if ( PnpBootMode )
    {
      *(_DWORD *)&v32.Length = 1572886;
      v32.Buffer = L"ConfigFlags";
      if ( !v28 || !PnpRegistryValueExists(v28, &v32) )
        *(_DWORD *)(v13 + 168) |= 4u;
    }
    *(_QWORD *)(v13 + 16) = Handle;
    *(_QWORD *)(v13 + 24) = v27;
    *(_QWORD *)(v13 + 32) = v28;
    Handle = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    *v34 = v13;
    v13 = 0LL;
    goto LABEL_43;
  }
  v21 = PiDevCfgOpenDriverConfiguration(Handle, v14, &v28);
  DriverPackageId = v21;
  if ( v21 == -1073741772 )
  {
    DriverPackageId = 0;
    goto LABEL_41;
  }
  if ( v21 >= 0 )
  {
    memset(v36, 0, sizeof(v36));
    v36[3] = v13 + 112;
    v36[0] = PiDevCfgQueryDriverVersionValueCallback;
    v36[2] = L"DriverDate";
    v36[7] = PiDevCfgQueryDriverVersionValueCallback;
    v36[9] = L"DriverVersion";
    LODWORD(v36[18]) = 117440512;
    v36[10] = v13 + 120;
    v36[17] = v13 + 144;
    v36[16] = L"ExcludeIds";
    LODWORD(v36[15]) = 304;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v28, (__int64)v36, 0LL);
    if ( DriverPackageId >= 0 )
    {
      if ( *(_WORD *)(v13 + 144) <= 2u && *(_QWORD *)(v13 + 152) )
        RtlFreeUnicodeString((PUNICODE_STRING)(v13 + 144));
      goto LABEL_41;
    }
  }
LABEL_43:
  if ( v13 )
    PiDevCfgFreeDriverNode(v13, v14, v15);
LABEL_45:
  if ( Handle )
    ZwClose(Handle);
  if ( v27 )
    ZwClose(v27);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v28 )
    ZwClose(v28);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v33);
  return (unsigned int)DriverPackageId;
}
