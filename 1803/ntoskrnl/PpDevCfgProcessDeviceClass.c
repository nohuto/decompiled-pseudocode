/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x140730D6C
 * Callers:
 *     PiConfigureDevice @ 0x140739518 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     _PnpOpenObjectRegKey @ 0x1405038FC (_PnpOpenObjectRegKey.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     PiDevCfgFreeDeviceContext @ 0x1405D7334 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x1405D7378 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405D91A0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1405DA00C (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1405DA7CC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x1405E7E04 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x1405E8480 (PiDevCfgConfigureDeviceLocation.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  wchar_t *Buffer; // r15
  int v3; // edi
  unsigned __int8 v4; // r14
  int inited; // ebx
  __int64 v6; // r12
  __int64 v7; // rdx
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  int P; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+4Ch] [rbp-BCh] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  int v22; // [rsp+A8h] [rbp-60h] BYREF
  const wchar_t *v23; // [rsp+B0h] [rbp-58h]
  int v24[20]; // [rsp+B8h] [rbp-50h] BYREF
  GUID Guid; // [rsp+108h] [rbp+0h] BYREF

  memset(v24, 0, 0x48uLL);
  v17 = 1;
  Buffer = 0LL;
  Handle = 0LL;
  v3 = 0;
  KeyHandle = 0LL;
  v4 = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  P = 0;
  v16 = 0LL;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_29;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_29;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v24);
  if ( inited < 0 )
    goto LABEL_29;
  v6 = *(_QWORD *)&v24[4];
  memset(&ObjectAttributes, 0, 0x28uLL);
  v7 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)&ObjectAttributes.Length = &DEVPKEY_Device_ClassGuid;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&Guid;
  LODWORD(ObjectAttributes.RootDirectory) = 13;
  ObjectAttributes.Attributes = 16;
  inited = PiDevCfgQueryObjectProperties(1LL, v7, 1u, *(void **)&v24[4], (__int64)&ObjectAttributes, 1u);
  if ( inited < 0 )
    goto LABEL_29;
  if ( SLODWORD(ObjectAttributes.SecurityDescriptor) < 0 )
    goto LABEL_12;
  inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
  if ( inited < 0 )
    goto LABEL_29;
  Buffer = GuidString.Buffer;
  v8 = PnpOpenObjectRegKey(
         *(__int64 *)&PiPnpRtlCtx,
         (__int64)GuidString.Buffer,
         2u,
         131097,
         0,
         (__int64)&Handle,
         0LL,
         0);
  inited = v8;
  if ( v8 != -1073741772 )
  {
    if ( v8 < 0 )
      goto LABEL_29;
LABEL_12:
    if ( Handle )
    {
      ObjectAttributes.RootDirectory = Handle;
      v23 = L"Configuration";
      v22 = 1835034;
      KeyHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      inited = v9;
      if ( v9 != -1073741772 )
      {
        if ( v9 < 0 )
          goto LABEL_29;
        inited = PiDevCfgConfigureDeviceKeys(a1, (__int64)v24, KeyHandle, -1, &P, &v16);
        if ( inited < 0 )
          goto LABEL_29;
        v3 = P;
        v4 = v16;
      }
    }
    goto LABEL_17;
  }
  Handle = 0LL;
LABEL_17:
  inited = PiDevCfgConfigureDeviceLocation(a1, (__int64)v24, &P, &v16);
  if ( inited < 0 )
    goto LABEL_29;
  v10 = P | v3;
  if ( (((unsigned __int8)v16 | v4) & 4) == 0 && Buffer && Handle )
  {
    inited = PiDevCfgGetDeviceClassConfigFlags((__int64)Buffer, (__int64)Handle, &P);
    if ( inited < 0 )
      goto LABEL_29;
    v10 |= P;
  }
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    HIDWORD(v16) = 4;
    if ( (int)CmGetDeviceRegProp(
                *(__int64 *)&PiPnpRtlCtx,
                v11,
                v6,
                11,
                (__int64)&v17,
                (__int64)&P,
                (__int64)&v16 + 4,
                0) < 0
      || v17 != 4
      || (v13 = P, HIDWORD(v16) != 4) )
    {
      v13 = 0;
    }
    P = v10 | v13;
    PiDevCfgSetDeviceRegProp(v12, (__int64)v24, 0xBu, 4, (__int64)&P, 4);
  }
LABEL_29:
  RtlFreeAnsiString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext((__int64)v24);
  return (unsigned int)inited;
}
