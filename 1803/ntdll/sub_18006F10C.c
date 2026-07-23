/*
 * XREFs of sub_18006F10C @ 0x18006F10C
 * Callers:
 *     sub_1800309A4 @ 0x1800309A4 (sub_1800309A4.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006EE10 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     sub_18006FF54 @ 0x18006FF54 (sub_18006FF54.c)
 *     sub_18007007C @ 0x18007007C (sub_18007007C.c)
 *     sub_1800700D8 @ 0x1800700D8 (sub_1800700D8.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     sub_1800F82F0 @ 0x1800F82F0 (sub_1800F82F0.c)
 *     sub_1800F8384 @ 0x1800F8384 (sub_1800F8384.c)
 */

__int64 __fastcall sub_18006F10C(int a1, __int64 *a2, __int64 a3)
{
  void *v6; // r12
  HANDLE v7; // rdi
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // ebx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  void *v14; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  HANDLE CurrentUserKey; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  CurrentUserKey = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v10 = sub_1800F8384(KeyHandle);
      if ( v10 >= 0 )
        goto LABEL_11;
      if ( a1 == 8 )
        sub_1800F82F0(KeyHandle);
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v8 = sub_18006F938(0x2000000u, &CurrentUserKey);
    v7 = CurrentUserKey;
    if ( v8 < 0 )
      v7 = 0LL;
    CurrentUserKey = v7;
    if ( a1 != 8 )
    {
      if ( a1 != 4 )
        goto LABEL_10;
      if ( v7 )
      {
        RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v7;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v13 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      }
      else
      {
        v13 = -1073741772;
      }
      if ( v13 >= 0 )
        goto LABEL_10;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      v10 = v9;
      if ( v9 >= 0 )
      {
LABEL_10:
        v10 = sub_18006FF54(KeyHandle, a2, a3);
LABEL_11:
        v7 = CurrentUserKey;
        goto LABEL_12;
      }
LABEL_21:
      if ( v9 == -1073741772 )
        v10 = 0;
      goto LABEL_11;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      Handle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v7;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        v10 = sub_1800F8384(Handle);
        if ( v10 >= 0 )
          goto LABEL_11;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = CurrentUserKey;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      v10 = v9;
      if ( v9 >= 0 )
        goto LABEL_10;
      goto LABEL_21;
    }
    v10 = 0;
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_12:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    v7 = CurrentUserKey;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    v7 = CurrentUserKey;
  }
  if ( v7 )
    sub_18006F918(v7);
  if ( v10 < 0 )
  {
    if ( a2 )
    {
      v14 = (void *)*a2;
      if ( (void *)*a2 != v6 )
      {
        if ( v14 )
          sub_1800700D8(v14);
        goto LABEL_44;
      }
    }
  }
  else if ( !*a2 )
  {
    v12 = sub_18007007C(1LL);
    *a2 = v12;
    if ( !v12 )
    {
      v10 = -1073741801;
LABEL_44:
      *a2 = (__int64)v6;
    }
  }
  return (unsigned int)v10;
}
