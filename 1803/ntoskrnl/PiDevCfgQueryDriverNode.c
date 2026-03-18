/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x1405D8B48
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x1405D749C (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x140147994 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x14014D674 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 *     _PnpOpenObjectRegKey @ 0x1405038FC (_PnpOpenObjectRegKey.c)
 *     RtlCreateUnicodeString @ 0x140518CB0 (RtlCreateUnicodeString.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405D7FF4 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x1405D9DD8 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgFreeDriverNode @ 0x1405D9EBC (PiDevCfgFreeDriverNode.c)
 *     PipCheckComputerSupported @ 0x140722898 (PipCheckComputerSupported.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, _QWORD *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v10; // ecx
  char *PoolWithTag; // rax
  char *v12; // rdi
  int v13; // edx
  int v14; // ecx
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  int v20; // ecx
  char v21; // al
  __int64 v22; // rax
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v26; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v27; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  UNICODE_STRING v32; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v33; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v34; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v36[28]; // [rsp+E0h] [rbp-20h] BYREF

  v34 = a6;
  v30 = a4;
  v24 = -16777216;
  v31 = a3;
  *(_DWORD *)&UnicodeString.Length = 0;
  i = 0LL;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  *(_DWORD *)&v33.Length = 0;
  v33.Buffer = 0LL;
  v23 = 0;
  KeyHandle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId((__int64)SourceString, (__int64)&UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
  DriverPackageId = PnpOpenObjectRegKey(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)UnicodeString.Buffer,
                      8u,
                      131097,
                      0,
                      (__int64)&Handle,
                      0LL,
                      0);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
  v36[0] = &DEVPKEY_DriverPackage_TargetComputerIds;
  v36[2] = &v33;
  LODWORD(v36[1]) = 8210;
  HIDWORD(v36[3]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v10, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v36, 1);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
  if ( SLODWORD(v36[4]) >= 0 && v33.Buffer && v33.Length > 2u )
  {
    for ( i = v33.Buffer; *i; i += v22 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v22 = -1LL;
      do
        ++v22;
      while ( i[v22] );
    }
    if ( !*i )
      goto LABEL_63;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_63:
    DriverPackageId = -1073740764;
    goto LABEL_40;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_40;
  }
  memset(PoolWithTag, 0, 0x190uLL);
  *((_QWORD *)v12 + 27) = v12 + 208;
  *((_QWORD *)v12 + 26) = v12 + 208;
  *((_QWORD *)v12 + 25) = v12 + 192;
  *((_QWORD *)v12 + 24) = v12 + 192;
  *((_QWORD *)v12 + 45) = v12 + 352;
  *((_QWORD *)v12 + 44) = v12 + 352;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 40), SourceString)
    || !PnpDuplicateUnicodeString((__int64)(v12 + 56), (__int64)&UnicodeString)
    || !RtlCreateUnicodeString((PUNICODE_STRING)(v12 + 72), a2)
    || i && !RtlCreateUnicodeString((PUNICODE_STRING)v12 + 8, i) )
  {
    DriverPackageId = -1073741670;
    goto LABEL_38;
  }
  memset(v36, 0, 0xA0uLL);
  v36[0] = &DEVPKEY_DriverPackage_DriverDate;
  LODWORD(v36[3]) = 8;
  LODWORD(v36[1]) = 16;
  v36[5] = &DEVPKEY_DriverPackage_DriverVersion;
  v36[2] = v12 + 112;
  v36[10] = &DEVPKEY_DriverPackage_SignerScore;
  LODWORD(v36[13]) = 4;
  v36[12] = &v24;
  LODWORD(v36[8]) = 8;
  v36[15] = &DEVPKEY_DriverPackage_ExtensionId;
  LODWORD(v36[6]) = 9;
  v36[7] = v12 + 120;
  LODWORD(v36[11]) = 7;
  LODWORD(v36[16]) = 13;
  v36[17] = v12 + 172;
  LODWORD(v36[18]) = 16;
  DriverPackageId = PiDevCfgQueryObjectProperties(16, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v36, 4);
  if ( DriverPackageId < 0 )
    goto LABEL_38;
  if ( SLODWORD(v36[4]) < 0 )
    *((_QWORD *)v12 + 14) = 0LL;
  if ( SLODWORD(v36[9]) < 0 )
    *((_QWORD *)v12 + 15) = 0LL;
  v13 = v24;
  if ( SLODWORD(v36[14]) < 0 )
    v13 = -16777216;
  v24 = v13;
  if ( SLODWORD(v36[19]) < 0 )
  {
    *(_QWORD *)(v12 + 172) = 0LL;
    *(_QWORD *)(v12 + 180) = 0LL;
    v13 = v24;
  }
  if ( (a5 & 4) != 0 )
    v14 = -1;
  else
    v14 = (unsigned __int16)v31 | v30 & 0xFF0000 | v13 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  *((_DWORD *)v12 + 27) = v14;
  if ( (a5 & 2) != 0 )
  {
    memset(v36, 0, 0xA0uLL);
    v36[0] = &DEVPKEY_DriverPackage_F6;
    v36[2] = &v23;
    LODWORD(v36[1]) = 17;
    LODWORD(v36[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v20, UnicodeString.Buffer, 8, (_DWORD)Handle, (__int64)v36, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_38;
    v21 = v23;
    if ( SLODWORD(v36[4]) < 0 )
      v21 = 0;
    v23 = v21;
    if ( v21 == -1 )
      *((_DWORD *)v12 + 42) |= 2u;
  }
  *(_DWORD *)&v32.Length = 1572886;
  v32.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v32;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v15;
  if ( v15 == -1073741772 )
    goto LABEL_54;
  if ( v15 < 0 )
    goto LABEL_38;
  ObjectAttributes.RootDirectory = KeyHandle;
  v26 = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 72);
  v16 = ZwOpenKey(&v26, 0x20019u, &ObjectAttributes);
  DriverPackageId = v16;
  if ( v16 == -1073741772 )
  {
LABEL_54:
    DriverPackageId = 0;
  }
  else
  {
    if ( v16 < 0 )
      goto LABEL_38;
    memset(v36, 0, sizeof(v36));
    v36[2] = L"Configuration";
    LODWORD(v36[4]) = 0x1000000;
    v36[3] = v12 + 88;
    LODWORD(v36[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v26, (__int64)v36, 0LL);
    if ( DriverPackageId < 0 )
      goto LABEL_38;
    if ( !*((_WORD *)v12 + 44) && *((_QWORD *)v12 + 12) )
      RtlFreeAnsiString((PUNICODE_STRING)(v12 + 88));
  }
  v17 = *((_QWORD *)v12 + 12);
  if ( !v17 )
  {
LABEL_36:
    if ( PnpBootMode )
    {
      *(_DWORD *)&v32.Length = 1572886;
      v32.Buffer = L"ConfigFlags";
      if ( !v27 || !PnpRegistryValueExists(v27, &v32) )
        *((_DWORD *)v12 + 42) |= 4u;
    }
    *((_QWORD *)v12 + 2) = Handle;
    *((_QWORD *)v12 + 3) = v26;
    *((_QWORD *)v12 + 4) = v27;
    Handle = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    *v34 = v12;
    v12 = 0LL;
    goto LABEL_38;
  }
  v18 = PiDevCfgOpenDriverConfiguration(Handle, v17, &v27);
  DriverPackageId = v18;
  if ( v18 == -1073741772 )
  {
    DriverPackageId = 0;
    goto LABEL_36;
  }
  if ( v18 >= 0 )
  {
    memset(v36, 0, sizeof(v36));
    v36[0] = PiDevCfgQueryDriverVersionValueCallback;
    v36[2] = L"DriverDate";
    v36[7] = PiDevCfgQueryDriverVersionValueCallback;
    v36[9] = L"DriverVersion";
    v36[3] = v12 + 112;
    v36[16] = L"ExcludeIds";
    v36[10] = v12 + 120;
    LODWORD(v36[18]) = 117440512;
    v36[17] = v12 + 144;
    LODWORD(v36[15]) = 304;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v27, (__int64)v36, 0LL);
    if ( DriverPackageId >= 0 )
    {
      if ( *((_WORD *)v12 + 72) <= 2u && *((_QWORD *)v12 + 19) )
        RtlFreeAnsiString((PUNICODE_STRING)v12 + 9);
      goto LABEL_36;
    }
  }
LABEL_38:
  if ( v12 )
    PiDevCfgFreeDriverNode(v12);
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    ZwClose(v26);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v27 )
    ZwClose(v27);
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v33);
  return (unsigned int)DriverPackageId;
}
