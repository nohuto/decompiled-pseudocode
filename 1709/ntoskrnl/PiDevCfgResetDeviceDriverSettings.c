/*
 * XREFs of PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8
 * Callers:
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     PiDevCfgResetDeviceKeys @ 0x14044F390 (PiDevCfgResetDeviceKeys.c)
 *     RtlStringFromGUIDEx @ 0x1404DF798 (RtlStringFromGUIDEx.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PnpIsNullGuid @ 0x14054CECC (PnpIsNullGuid.c)
 *     _RegRtlDeleteTreeInternal @ 0x14057E5D0 (_RegRtlDeleteTreeInternal.c)
 *     PiDevCfgSetObjectProperty @ 0x14058A470 (PiDevCfgSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, PGUID Guid)
{
  __int64 *v5; // rbx
  __int64 v8; // rdi
  GUID **v9; // rdi
  __int64 v10; // r12
  NTSTATUS v11; // r15d
  _QWORD *v12; // rdx
  __int64 v13; // rax
  bool v14; // zf
  const WCHAR *v15; // rdx
  NTSTATUS v16; // ebx
  const WCHAR *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  HANDLE v23; // rbx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  int v29; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v31; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  __int64 Source2; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v39; // [rsp+100h] [rbp+0h]

  v5 = (__int64 *)off_1407F39B0;
  v34 = a4;
  v28 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  v8 = 10LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v31 = 0LL;
  do
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(a2 + 8), 1, *(_QWORD *)(a2 + 16), v26, *v5++, 0, 0LL, 0);
    --v8;
  }
  while ( v8 );
  if ( (int)PnpGetObjectProperty(
              PiPnpRtlCtx,
              *(_QWORD *)(a2 + 8),
              1,
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
  v9 = &off_14078ED48;
  v10 = 2LL;
  v11 = 0;
  do
  {
    v12 = *(v9 - 1);
    if ( !v12 )
    {
      if ( !*v9 || (unsigned __int8)PnpIsNullGuid(&Source2) )
        goto LABEL_24;
      v13 = *(_QWORD *)&(*v9)->Data1 - Source2;
      if ( !v13 )
        v13 = *(_QWORD *)(*v9)->Data4 - v39;
      v14 = v13 == 0;
      goto LABEL_12;
    }
    if ( !a3 )
      goto LABEL_38;
    v21 = *v12 - *a3;
    if ( *v12 == *a3 )
      v21 = v12[1] - a3[1];
    if ( v21 )
    {
LABEL_38:
      if ( !Guid )
        goto LABEL_24;
      v22 = *v12 - *(_QWORD *)&Guid->Data1;
      if ( *v12 == *(_QWORD *)&Guid->Data1 )
        v22 = v12[1] - *(_QWORD *)Guid->Data4;
      v14 = v22 == 0;
LABEL_12:
      if ( !v14 )
        goto LABEL_24;
    }
    if ( (int)CmOpenDeviceRegKey(
                PiPnpRtlCtx,
                *(_QWORD *)(a2 + 8),
                *((_DWORD *)v9 + 2),
                0,
                983103,
                1,
                (__int64)&Handle,
                0LL) < 0 )
      goto LABEL_24;
    v15 = (const WCHAR *)v9[2];
    if ( v15 )
    {
      RtlInitUnicodeString(&DestinationString, v15);
      ObjectAttributes.RootDirectory = Handle;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      ZwClose(Handle);
      if ( v16 < 0 )
        goto LABEL_24;
      Handle = KeyHandle;
    }
    v17 = (const WCHAR *)v9[3];
    if ( v17 )
    {
      v23 = Handle;
      if ( RtlInitUnicodeStringEx(&ValueName, v17) >= 0 )
        ZwDeleteValueKey(v23, &ValueName);
    }
    else if ( v9[2] )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
        v18 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
      else
        v18 = 0LL;
      RegRtlDeleteTreeInternal(Handle, 0LL, v18, 0LL);
    }
    ZwClose(Handle);
LABEL_24:
    v9 += 5;
    --v10;
  }
  while ( v10 );
  if ( !Guid )
    goto LABEL_26;
  if ( !a3 )
    goto LABEL_49;
  v24 = *(_QWORD *)&Guid->Data1 - *a3;
  if ( *(_QWORD *)&Guid->Data1 == *a3 )
    v24 = *(_QWORD *)Guid->Data4 - a3[1];
  if ( v24 )
  {
LABEL_49:
    v11 = RtlStringFromGUIDEx(Guid, &UnicodeString, 1u);
    if ( v11 >= 0 )
    {
      v25 = PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 2, 131097, 0, (__int64)&v31, 0LL, 0);
      v19 = v28;
      if ( v25 < 0 )
        goto LABEL_27;
      v11 = PiDevCfgResetDeviceKeys(v28, a2, v31);
      if ( v11 >= 0 )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_26:
    v19 = v28;
LABEL_27:
    if ( a3 && v34 )
      v11 = PiDevCfgResetDeviceKeys(v19, a2, v34);
  }
  RtlFreeUnicodeString(&UnicodeString);
  if ( v31 )
    ZwClose(v31);
  return (unsigned int)v11;
}
