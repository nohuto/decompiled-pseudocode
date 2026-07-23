/*
 * XREFs of sub_18006CFF8 @ 0x18006CFF8
 * Callers:
 *     sub_18006CA0C @ 0x18006CA0C (sub_18006CA0C.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006D210 (RtlpMuiRegLoadRegistryInfo.c)
 *     sub_18006D864 @ 0x18006D864 (sub_18006D864.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     sub_18006E4FC @ 0x18006E4FC (sub_18006E4FC.c)
 *     sub_18006E60C @ 0x18006E60C (sub_18006E60C.c)
 *     sub_18006EBF4 @ 0x18006EBF4 (sub_18006EBF4.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     sub_1800FA340 @ 0x1800FA340 (sub_1800FA340.c)
 *     sub_1800FA3D4 @ 0x1800FA3D4 (sub_1800FA3D4.c)
 */

__int64 __fastcall sub_18006CFF8(int a1, __int64 *a2, __int64 a3)
{
  void *v5; // r12
  HANDLE v6; // rdi
  int v7; // eax
  NTSTATUS v8; // eax
  int v9; // ebx
  __int64 v11; // rax
  NTSTATUS v12; // eax
  void *v13; // rcx
  HANDLE KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  HANDLE CurrentUserKey; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-9h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  CurrentUserKey = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( a2 && a3 )
  {
    v5 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v9 = sub_1800FA3D4(KeyHandle);
      if ( v9 >= 0 )
        goto LABEL_11;
      if ( a1 == 8 )
        sub_1800FA340(KeyHandle);
      ZwClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v7 = sub_18006E330(0x2000000u, &CurrentUserKey);
    v6 = CurrentUserKey;
    if ( v7 < 0 )
      v6 = 0LL;
    CurrentUserKey = v6;
    if ( a1 != 8 )
    {
      if ( a1 != 4 )
        goto LABEL_10;
      if ( v6 )
      {
        RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = v6;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v12 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      }
      else
      {
        v12 = -1073741772;
      }
      if ( v12 >= 0 )
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
      v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      v9 = v8;
      if ( v8 >= 0 )
      {
LABEL_10:
        v9 = sub_18006E4FC(KeyHandle);
LABEL_11:
        v6 = CurrentUserKey;
        goto LABEL_12;
      }
LABEL_21:
      if ( v8 == -1073741772 )
        v9 = 0;
      goto LABEL_11;
    }
    if ( v6 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      Handle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        v9 = sub_1800FA3D4(Handle);
        if ( v9 >= 0 )
          goto LABEL_11;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = CurrentUserKey;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      v9 = v8;
      if ( v8 >= 0 )
        goto LABEL_10;
      goto LABEL_21;
    }
    v9 = 0;
  }
  else
  {
    v9 = -1073741811;
  }
LABEL_12:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    v6 = CurrentUserKey;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    v6 = CurrentUserKey;
  }
  if ( v6 )
    sub_18006E310(v6);
  if ( v9 < 0 )
  {
    if ( a2 )
    {
      v13 = (void *)*a2;
      if ( (void *)*a2 != v5 )
      {
        if ( v13 )
          sub_18006EBF4(v13);
        goto LABEL_44;
      }
    }
  }
  else if ( !*a2 )
  {
    v11 = sub_18006E60C(1LL);
    *a2 = v11;
    if ( !v11 )
    {
      v9 = -1073741801;
LABEL_44:
      *a2 = (__int64)v5;
    }
  }
  return (unsigned int)v9;
}
