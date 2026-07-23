/*
 * XREFs of PpDevCfgProcessDeviceClass @ 0x14044EB08
 * Callers:
 *     PiConfigureDevice @ 0x14044EA84 (PiConfigureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140589470 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDeviceContext @ 0x14058B72C (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgSetDeviceRegProp @ 0x14059BF64 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgGetDeviceClassConfigFlags @ 0x14059CE14 (PiDevCfgGetDeviceClassConfigFlags.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14059D25C (PiDevCfgConfigureDeviceLocation.c)
 */

__int64 __fastcall PpDevCfgProcessDeviceClass(__int64 a1)
{
  wchar_t *Buffer; // r15
  int v3; // edi
  unsigned __int8 v4; // r14
  NTSTATUS inited; // ebx
  int v6; // r12d
  __int64 v7; // rdx
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // edi
  __int64 v11; // rdx
  int v12; // ecx
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

  v24[0] = 0;
  memset(&v24[2], 0, 0x40uLL);
  Buffer = 0LL;
  Handle = 0LL;
  v3 = 0;
  KeyHandle = 0LL;
  v4 = 0;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  P = 0;
  v16 = 0LL;
  v17 = 1;
  if ( !PiDevCfgMode )
  {
    inited = 0;
    goto LABEL_25;
  }
  if ( !*(_QWORD *)(a1 + 48) )
  {
    inited = -1073741808;
    goto LABEL_25;
  }
  inited = PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), 0LL, v24);
  if ( inited >= 0 )
  {
    v6 = v24[4];
    memset(&ObjectAttributes, 0, 0x28uLL);
    v7 = *(_QWORD *)(a1 + 48);
    *(_QWORD *)&ObjectAttributes.Length = &DEVPKEY_Device_ClassGuid;
    LODWORD(ObjectAttributes.RootDirectory) = 13;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&Guid;
    ObjectAttributes.Attributes = 16;
    inited = PiDevCfgQueryObjectProperties(1, v7, 1, v24[4], (__int64)&ObjectAttributes, 1);
    if ( inited >= 0 )
    {
      if ( SLODWORD(ObjectAttributes.SecurityDescriptor) >= 0 )
      {
        inited = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
        if ( inited < 0 )
          goto LABEL_25;
        Buffer = GuidString.Buffer;
        v8 = PnpOpenObjectRegKey(PiPnpRtlCtx, GuidString.Buffer, 2, 131097, 0, (__int64)&Handle, 0LL, 0);
        inited = v8;
        if ( v8 == -1073741772 )
        {
          Handle = 0LL;
LABEL_14:
          inited = PiDevCfgConfigureDeviceLocation(a1, v24, &P, &v16);
          if ( inited < 0 )
            goto LABEL_25;
          v10 = P | v3;
          if ( (((unsigned __int8)v16 | v4) & 4) == 0 && Buffer && Handle )
          {
            inited = PiDevCfgGetDeviceClassConfigFlags(Buffer, Handle, &P);
            if ( inited < 0 )
              goto LABEL_25;
            v10 |= P;
          }
          if ( v10 )
          {
            v11 = *(_QWORD *)(a1 + 48);
            HIDWORD(v16) = 4;
            if ( (int)CmGetDeviceRegProp(PiPnpRtlCtx, v11, v6, 11, (__int64)&v17, (__int64)&P, (__int64)&v16 + 4, 0) < 0
              || v17 != 4
              || (v13 = P, HIDWORD(v16) != 4) )
            {
              v13 = 0;
            }
            P = v10 | v13;
            PiDevCfgSetDeviceRegProp(v12, (unsigned int)v24, 11, 4, (__int64)&P, 4);
          }
          goto LABEL_25;
        }
        if ( v8 < 0 )
          goto LABEL_25;
      }
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
            goto LABEL_25;
          inited = PiDevCfgConfigureDeviceKeys(a1, (int)v24, (int)KeyHandle, -1, &P, (__int64)&v16);
          if ( inited < 0 )
            goto LABEL_25;
          v3 = P;
          v4 = v16;
        }
      }
      goto LABEL_14;
    }
  }
LABEL_25:
  RtlFreeUnicodeString(&GuidString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  PiDevCfgFreeDeviceContext(v24);
  return (unsigned int)inited;
}
