/*
 * XREFs of PiDevCfgQueryDriverNode @ 0x14058F3B8
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14058EEF8 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x14014FD00 (PnpDuplicateUnicodeString.c)
 *     PnpRegistryValueExists @ 0x140150618 (PnpRegistryValueExists.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 *     PiDevCfgFreeDriverNode @ 0x14058EDB0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgOpenDriverConfiguration @ 0x14058F988 (PiDevCfgOpenDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x14058FA6C (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405C7908 (PiDevCfgQueryObjectProperties.c)
 *     PipCheckComputerSupported @ 0x140691B98 (PipCheckComputerSupported.c)
 */

__int64 __fastcall PiDevCfgQueryDriverNode(PCWSTR SourceString, PCWSTR a2, int a3, int a4, char a5, __int64 *a6)
{
  wchar_t *i; // rsi
  int DriverPackageId; // ebx
  int v11; // ecx
  PVOID PoolWithTag; // rax
  __int64 v13; // rdi
  int v14; // edx
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v20; // rax
  int v21; // ecx
  char v22; // al
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v26; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v27; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+78h] [rbp-88h]
  UNICODE_STRING v31; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v32; // [rsp+90h] [rbp-70h] BYREF
  __int64 *v33; // [rsp+A0h] [rbp-60h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v35[28]; // [rsp+E0h] [rbp-20h] BYREF

  v33 = a6;
  v30 = a3;
  v24 = -16777216;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  Handle = 0LL;
  i = 0LL;
  *(_DWORD *)&v32.Length = 0;
  v32.Buffer = 0LL;
  v23 = 0;
  KeyHandle = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  DriverPackageId = PiDevCfgGetDriverPackageId(SourceString, &UnicodeString);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
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
    goto LABEL_40;
  v35[0] = &DEVPKEY_DriverPackage_TargetComputerIds;
  v35[2] = &v32;
  LODWORD(v35[1]) = 8210;
  HIDWORD(v35[3]) = 6;
  DriverPackageId = PiDevCfgQueryObjectProperties(v11, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v35, 1);
  if ( DriverPackageId < 0 )
    goto LABEL_40;
  if ( SLODWORD(v35[4]) >= 0 && v32.Buffer && v32.Length > 2u )
  {
    for ( i = v32.Buffer; *i; i += v20 + 1 )
    {
      if ( (unsigned __int8)PipCheckComputerSupported(i) )
        break;
      v20 = -1LL;
      do
        ++v20;
      while ( i[v20] );
    }
    if ( !*i )
      goto LABEL_57;
  }
  if ( (a5 & 8) != 0 && !i )
  {
LABEL_57:
    DriverPackageId = -1073740764;
    goto LABEL_40;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x63647050u);
  v13 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverPackageId = -1073741670;
    goto LABEL_40;
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
    goto LABEL_38;
  }
  memset(v35, 0, 0xA0uLL);
  v35[0] = &DEVPKEY_DriverPackage_DriverDate;
  v35[2] = v13 + 112;
  LODWORD(v35[1]) = 16;
  v35[5] = &DEVPKEY_DriverPackage_DriverVersion;
  LODWORD(v35[6]) = 9;
  v35[7] = v13 + 120;
  LODWORD(v35[3]) = 8;
  LODWORD(v35[8]) = 8;
  v35[10] = &DEVPKEY_DriverPackage_SignerScore;
  v35[12] = &v24;
  v35[15] = &DEVPKEY_DriverPackage_ExtensionId;
  LODWORD(v35[13]) = 4;
  LODWORD(v35[11]) = 7;
  LODWORD(v35[16]) = 13;
  v35[17] = v13 + 172;
  LODWORD(v35[18]) = 16;
  DriverPackageId = PiDevCfgQueryObjectProperties(16, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v35, 4);
  if ( DriverPackageId < 0 )
    goto LABEL_38;
  if ( SLODWORD(v35[4]) < 0 )
    *(_QWORD *)(v13 + 112) = 0LL;
  if ( SLODWORD(v35[9]) < 0 )
    *(_QWORD *)(v13 + 120) = 0LL;
  v14 = v24;
  if ( SLODWORD(v35[14]) < 0 )
    v14 = -16777216;
  v24 = v14;
  if ( SLODWORD(v35[19]) < 0 )
  {
    *(_QWORD *)(v13 + 172) = 0LL;
    *(_QWORD *)(v13 + 180) = 0LL;
    v14 = v24;
  }
  if ( (a5 & 4) != 0 )
    *(_DWORD *)(v13 + 108) = -1;
  else
    *(_DWORD *)(v13 + 108) = (unsigned __int16)v30 | a4 & 0xFF0000 | v14 & ((a5 & 1) != 0 ? -268435456 : -16777216);
  if ( (a5 & 2) != 0 )
  {
    memset(v35, 0, 0xA0uLL);
    v35[0] = &DEVPKEY_DriverPackage_F6;
    v35[2] = &v23;
    LODWORD(v35[1]) = 17;
    LODWORD(v35[3]) = 1;
    DriverPackageId = PiDevCfgQueryObjectProperties(v21, UnicodeString.Buffer, 7, (_DWORD)Handle, (__int64)v35, 1);
    if ( DriverPackageId < 0 )
      goto LABEL_38;
    v22 = v23;
    if ( SLODWORD(v35[4]) < 0 )
      v22 = 0;
    v23 = v22;
    if ( v22 == -1 )
      *(_DWORD *)(v13 + 168) |= 2u;
  }
  *(_DWORD *)&v31.Length = 1572886;
  v31.Buffer = L"Descriptors";
  ObjectAttributes.RootDirectory = Handle;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &v31;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  DriverPackageId = v15;
  if ( v15 == -1073741772 )
    goto LABEL_70;
  if ( v15 < 0 )
    goto LABEL_38;
  ObjectAttributes.RootDirectory = KeyHandle;
  v26 = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v13 + 72);
  v16 = ZwOpenKey(&v26, 0x20019u, &ObjectAttributes);
  DriverPackageId = v16;
  if ( v16 == -1073741772 )
  {
LABEL_70:
    DriverPackageId = 0;
  }
  else
  {
    if ( v16 < 0 )
      goto LABEL_38;
    memset(v35, 0, sizeof(v35));
    v35[2] = L"Configuration";
    LODWORD(v35[4]) = 0x1000000;
    v35[3] = v13 + 88;
    LODWORD(v35[1]) = 288;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v26, (__int64)v35, 0LL);
    if ( DriverPackageId < 0 )
      goto LABEL_38;
    if ( !*(_WORD *)(v13 + 88) && *(_QWORD *)(v13 + 96) )
      RtlFreeUnicodeString((PUNICODE_STRING)(v13 + 88));
  }
  v17 = *(_QWORD *)(v13 + 96);
  if ( !v17 )
  {
LABEL_36:
    if ( PnpBootMode )
    {
      *(_DWORD *)&v31.Length = 1572886;
      v31.Buffer = L"ConfigFlags";
      if ( !v27 || !PnpRegistryValueExists(v27, &v31) )
        *(_DWORD *)(v13 + 168) |= 4u;
    }
    *(_QWORD *)(v13 + 16) = Handle;
    *(_QWORD *)(v13 + 24) = v26;
    *(_QWORD *)(v13 + 32) = v27;
    Handle = 0LL;
    v26 = 0LL;
    v27 = 0LL;
    *v33 = v13;
    v13 = 0LL;
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
    memset(v35, 0, sizeof(v35));
    v35[3] = v13 + 112;
    v35[0] = PiDevCfgQueryDriverVersionValueCallback;
    v35[2] = L"DriverDate";
    v35[7] = PiDevCfgQueryDriverVersionValueCallback;
    v35[9] = L"DriverVersion";
    LODWORD(v35[18]) = 117440512;
    v35[10] = v13 + 120;
    v35[17] = v13 + 144;
    v35[16] = L"ExcludeIds";
    LODWORD(v35[15]) = 304;
    DriverPackageId = RtlpQueryRegistryValues(3221225472LL, (const WCHAR *)v27, (__int64)v35, 0LL);
    if ( DriverPackageId >= 0 )
    {
      if ( *(_WORD *)(v13 + 144) <= 2u && *(_QWORD *)(v13 + 152) )
        RtlFreeUnicodeString((PUNICODE_STRING)(v13 + 144));
      goto LABEL_36;
    }
  }
LABEL_38:
  if ( v13 )
    PiDevCfgFreeDriverNode(v13);
LABEL_40:
  if ( Handle )
    ZwClose(Handle);
  if ( v26 )
    ZwClose(v26);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v27 )
    ZwClose(v27);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v32);
  return (unsigned int)DriverPackageId;
}
