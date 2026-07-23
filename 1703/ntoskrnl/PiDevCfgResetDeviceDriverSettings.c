/*
 * XREFs of PiDevCfgResetDeviceDriverSettings @ 0x14069BB20
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     _CmOpenDeviceRegKey @ 0x14048307C (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     PnpIsNullGuid @ 0x1404B8E58 (PnpIsNullGuid.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     PiDevCfgSetObjectProperty @ 0x1405917F0 (PiDevCfgSetObjectProperty.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgResetDeviceKeys @ 0x14069BF48 (PiDevCfgResetDeviceKeys.c)
 */

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, PGUID Guid)
{
  __int64 *v5; // rbx
  __int64 v8; // rdi
  GUID **v9; // rdi
  __int64 v10; // r12
  NTSTATUS v11; // r15d
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  NTSTATUS v18; // ebx
  const WCHAR *v19; // rdx
  HANDLE v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rbx
  int v26; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v31; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING GuidString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  __int64 Source2; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v39; // [rsp+100h] [rbp+0h]

  v5 = (__int64 *)off_1407AC920;
  v34 = a4;
  v28 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  v8 = 9LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  v31 = 0LL;
  do
  {
    PiDevCfgSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      (_BYTE *)a2,
      *(const WCHAR **)(a2 + 8),
      1,
      *(_QWORD *)(a2 + 16),
      v26,
      *v5++,
      0,
      0LL,
      0);
    --v8;
  }
  while ( v8 );
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              *(_QWORD *)(a2 + 8),
              1u,
              *(_QWORD *)(a2 + 16),
              0LL,
              (__int64)&DEVPKEY_Device_BusTypeGuid,
              (__int64)&v29,
              (__int64)&Source2,
              16,
              (__int64)v33,
              0) < 0
    || v29 != 13 )
  {
    Source2 = 0LL;
    v39 = 0LL;
  }
  v9 = &off_14074C628;
  v10 = 2LL;
  v11 = 0;
  do
  {
    v12 = *(v9 - 1);
    if ( !v12 )
    {
      if ( !*v9 || PnpIsNullGuid(&Source2) )
        goto LABEL_36;
      v16 = *(_QWORD *)&(*v9)->Data1 - Source2;
      if ( !v16 )
        v16 = *(_QWORD *)(*v9)->Data4 - v39;
      v15 = v16 == 0;
      goto LABEL_21;
    }
    if ( !a3 )
      goto LABEL_12;
    v13 = *v12 - *a3;
    if ( *v12 == *a3 )
      v13 = v12[1] - a3[1];
    if ( v13 )
    {
LABEL_12:
      if ( !Guid )
        goto LABEL_36;
      v14 = *v12 - *(_QWORD *)&Guid->Data1;
      if ( *v12 == *(_QWORD *)&Guid->Data1 )
        v14 = v12[1] - *(_QWORD *)Guid->Data4;
      v15 = v14 == 0;
LABEL_21:
      if ( !v15 )
        goto LABEL_36;
    }
    if ( (int)CmOpenDeviceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a2 + 8),
                *((_DWORD *)v9 + 2),
                0,
                983103,
                1,
                (__int64)&Handle,
                0LL) < 0 )
      goto LABEL_36;
    v17 = (const WCHAR *)v9[2];
    if ( v17 )
    {
      RtlInitUnicodeString(&DestinationString, v17);
      ObjectAttributes.RootDirectory = Handle;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      ZwClose(Handle);
      if ( v18 < 0 )
        goto LABEL_36;
      Handle = KeyHandle;
    }
    v19 = (const WCHAR *)v9[3];
    if ( v19 )
    {
      v20 = Handle;
      if ( RtlInitUnicodeStringEx(&ValueName, v19) >= 0 )
        ZwDeleteValueKey(v20, &ValueName);
    }
    else if ( v9[2] )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
        v21 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
      else
        v21 = 0LL;
      RegRtlDeleteTreeInternal((char *)Handle, 0LL, v21, 0);
    }
    ZwClose(Handle);
LABEL_36:
    v9 += 5;
    --v10;
  }
  while ( v10 );
  if ( !Guid )
    goto LABEL_46;
  if ( !a3 )
    goto LABEL_42;
  v22 = *(_QWORD *)&Guid->Data1 - *a3;
  if ( *(_QWORD *)&Guid->Data1 == *a3 )
    v22 = *(_QWORD *)Guid->Data4 - a3[1];
  if ( v22 )
  {
LABEL_42:
    v11 = RtlStringFromGUIDEx(Guid, &GuidString, 1u);
    if ( v11 >= 0 )
    {
      v23 = PnpOpenObjectRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)GuidString.Buffer,
              2u,
              131097,
              0,
              (__int64)&v31,
              0LL,
              0);
      v24 = v28;
      if ( v23 < 0 )
        goto LABEL_47;
      v11 = PiDevCfgResetDeviceKeys(v28, a2, v31);
      if ( v11 >= 0 )
        goto LABEL_47;
    }
  }
  else
  {
LABEL_46:
    v24 = v28;
LABEL_47:
    if ( a3 && v34 )
      v11 = PiDevCfgResetDeviceKeys(v24, a2, v34);
  }
  RtlFreeUnicodeString(&GuidString);
  if ( v31 )
    ZwClose(v31);
  return (unsigned int)v11;
}
