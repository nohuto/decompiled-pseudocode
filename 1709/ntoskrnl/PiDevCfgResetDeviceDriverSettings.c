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

__int64 __fastcall PiDevCfgResetDeviceDriverSettings(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  __int64 *v5; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  GUID **v10; // rdi
  __int64 v11; // r12
  int v12; // r15d
  _QWORD *v13; // rdx
  __int64 v14; // rax
  bool v15; // zf
  const WCHAR *v16; // rdx
  NTSTATUS v17; // ebx
  const WCHAR *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  HANDLE v24; // rbx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v32; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v34[8]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING ValueName; // [rsp+B8h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-38h] BYREF
  __int64 Source2; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v40; // [rsp+100h] [rbp+0h]

  v5 = (__int64 *)off_1407F39B0;
  v35 = a4;
  v29 = a1;
  Handle = 0LL;
  KeyHandle = 0LL;
  v8 = 10LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  v32 = 0LL;
  do
  {
    PiDevCfgSetObjectProperty(PiPnpRtlCtx, a2, *(_QWORD *)(a2 + 8), 1, *(_QWORD *)(a2 + 16), v27, *v5++, 0, 0LL, 0);
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
              (__int64)&v30,
              (__int64)&Source2,
              16,
              (__int64)v34,
              0) < 0
    || v30 != 13 )
  {
    Source2 = 0LL;
    v40 = 0LL;
  }
  v10 = &off_14078ED48;
  v11 = 2LL;
  v12 = 0;
  do
  {
    v13 = *(v10 - 1);
    if ( !v13 )
    {
      if ( !*v10 || (unsigned __int8)PnpIsNullGuid(&Source2) )
        goto LABEL_24;
      v14 = *(_QWORD *)&(*v10)->Data1 - Source2;
      if ( !v14 )
        v14 = *(_QWORD *)(*v10)->Data4 - v40;
      v15 = v14 == 0;
      goto LABEL_12;
    }
    if ( !a3 )
      goto LABEL_38;
    v22 = *v13 - *a3;
    if ( *v13 == *a3 )
      v22 = v13[1] - a3[1];
    if ( v22 )
    {
LABEL_38:
      if ( !a5 )
        goto LABEL_24;
      v23 = *v13 - *a5;
      if ( *v13 == *a5 )
        v23 = v13[1] - a5[1];
      v15 = v23 == 0;
LABEL_12:
      if ( !v15 )
        goto LABEL_24;
    }
    if ( (int)CmOpenDeviceRegKey(
                PiPnpRtlCtx,
                *(_QWORD *)(a2 + 8),
                *((_DWORD *)v10 + 2),
                0,
                983103,
                1,
                (__int64)&Handle,
                0LL) < 0 )
      goto LABEL_24;
    v16 = (const WCHAR *)v10[2];
    if ( v16 )
    {
      RtlInitUnicodeString(&DestinationString, v16);
      ObjectAttributes.RootDirectory = Handle;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v17 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      ZwClose(Handle);
      if ( v17 < 0 )
        goto LABEL_24;
      Handle = KeyHandle;
    }
    v18 = (const WCHAR *)v10[3];
    if ( v18 )
    {
      v24 = Handle;
      if ( RtlInitUnicodeStringEx(&ValueName, v18) >= 0 )
        ZwDeleteValueKey(v24, &ValueName);
    }
    else if ( v10[2] )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && **(_QWORD **)&PiPnpRtlCtx )
        v19 = *(_QWORD *)(**(_QWORD **)&PiPnpRtlCtx + 8LL);
      else
        v19 = 0LL;
      RegRtlDeleteTreeInternal(Handle, 0LL, v19, 0LL);
    }
    ZwClose(Handle);
LABEL_24:
    v10 += 5;
    --v11;
  }
  while ( v11 );
  if ( !a5 )
    goto LABEL_26;
  if ( !a3 )
    goto LABEL_49;
  v25 = *a5 - *a3;
  if ( *a5 == *a3 )
    v25 = a5[1] - a3[1];
  if ( v25 )
  {
LABEL_49:
    LOBYTE(v9) = 1;
    v12 = RtlStringFromGUIDEx(a5, &UnicodeString, v9);
    if ( v12 >= 0 )
    {
      v26 = PnpOpenObjectRegKey(PiPnpRtlCtx, UnicodeString.Buffer, 2, 131097, 0, (__int64)&v32, 0LL, 0);
      v20 = v29;
      if ( v26 < 0 )
        goto LABEL_27;
      v12 = PiDevCfgResetDeviceKeys(v29, a2, v32);
      if ( v12 >= 0 )
        goto LABEL_27;
    }
  }
  else
  {
LABEL_26:
    v20 = v29;
LABEL_27:
    if ( a3 && v35 )
      v12 = PiDevCfgResetDeviceKeys(v20, a2, v35);
  }
  RtlFreeUnicodeString(&UnicodeString);
  if ( v32 )
    ZwClose(v32);
  return (unsigned int)v12;
}
