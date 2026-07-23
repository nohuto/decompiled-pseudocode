/*
 * XREFs of RtlpSetInstallLanguage @ 0x1800E9630
 * Callers:
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180001E28 @ 0x180001E28 (sub_180001E28.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x18009C450 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x18009C4B0 (ZwDeleteValueKey.c)
 *     ZwFlushInstallUILanguage @ 0x18009C6B0 (ZwFlushInstallUILanguage.c)
 *     ZwIsUILanguageComitted @ 0x18009CA30 (ZwIsUILanguageComitted.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800E81C8 @ 0x1800E81C8 (sub_1800E81C8.c)
 *     sub_1800E9094 @ 0x1800E9094 (sub_1800E9094.c)
 *     sub_1800E91E0 @ 0x1800E91E0 (sub_1800E91E0.c)
 *     sub_1800E93D0 @ 0x1800E93D0 (sub_1800E93D0.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  WCHAR *v2; // rdi
  char v3; // r15
  char v4; // r12
  int v5; // ebx
  __int16 *v6; // rsi
  __int16 *v7; // r14
  __int16 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  LCID Lcid; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  __int16 *v16; // [rsp+70h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  int v19[4]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR SourceString[88]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v21[88]; // [rsp+178h] [rbp+70h] BYREF
  _WORD v22[176]; // [rsp+228h] [rbp+120h] BYREF
  _WORD v23[264]; // [rsp+388h] [rbp+280h] BYREF

  v2 = (WCHAR *)a2;
  KeyHandle = 0LL;
  v3 = 0;
  Handle = 0LL;
  v4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    v5 = sub_1800E81C8(&DestinationString, &Lcid);
    if ( v5 < 0 )
      return (unsigned int)v5;
    DestinationString.Buffer = SourceString;
    DestinationString.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(Lcid, &DestinationString) )
      return (unsigned int)-1073741811;
    v2 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return (unsigned int)-1073741811;
  }
  v5 = RtlpCreateProcessRegistryInfo(&v16);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v6 = v16;
  if ( !v16 )
    return (unsigned int)-1073741823;
  v5 = sub_1800E93D0((__int64)v16, v2, v19, &v16);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( v19[0] == 1 )
    goto LABEL_23;
  if ( v19[0] == 2 )
  {
    v8 = v16;
LABEL_22:
    v3 = 1;
    v5 = sub_1800E9094((__int64)v6, v8, 0LL, v23, 0x102u);
    if ( v5 < 0 )
      return (unsigned int)v5;
    goto LABEL_23;
  }
  if ( v19[0] != 4 )
    return (unsigned int)-1073741811;
  v4 = 1;
  memset(v21, 0, 0xACuLL);
  sub_180001E28(v21, 85LL, (__int64)v2);
  v2 = SourceString;
  memset(SourceString, 0, 0xACuLL);
  v5 = sub_1800E91E0((__int64)v6, (__int64)v16, v19, SourceString, 0x55u, 0LL, 0LL);
  if ( v5 < 0 )
    return (unsigned int)v5;
  v7 = *(__int16 **)v19;
  if ( !*(_QWORD *)v19 )
    return (unsigned int)-1073741637;
  v5 = sub_1800E9094((__int64)v6, v16, v21, v22, 0xACu);
  if ( v5 < 0 )
    return (unsigned int)v5;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v8 = v7;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&DestinationString, v2);
  if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
    return (unsigned int)-1073741811;
  v5 = ZwFlushInstallUILanguage(Lcid, 0);
  if ( v5 >= 0 )
  {
    if ( v3 )
    {
      RtlpSetUserPreferredUILanguages(1032LL, v23, &Lcid);
    }
    else
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"InstallLanguageFallback");
        ZwDeleteValueKey(KeyHandle, &ValueName);
        ZwClose(KeyHandle);
      }
    }
    if ( v4 )
    {
      RtlpSetUserPreferredUILanguages(32776LL, v21, &Lcid);
      RtlpSetUserPreferredUILanguages(36872LL, v22, &Lcid);
    }
    else
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
        ZwDeleteValueKey(KeyHandle, &ValueName);
        ZwClose(KeyHandle);
        RtlInitUnicodeString(
          &ValueName,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        KeyHandle = 0LL;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
        if ( sub_18006F938(0x2000000u, 0LL, v9, v10, &KeyHandle) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Control Panel\\Desktop\\MuiCached");
          ObjectAttributes.RootDirectory = KeyHandle;
          Handle = 0LL;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
          {
            RtlInitUnicodeString(&ValueName, L"MachinePreferredUILanguages");
            ZwDeleteValueKey(Handle, &ValueName);
            RtlInitUnicodeString(&ValueName, L"MachineLanguageConfiguration");
            ZwDeleteValueKey(Handle, &ValueName);
            ZwClose(Handle);
          }
          sub_18006F918((char *)KeyHandle);
        }
      }
    }
    RtlInitUnicodeString(
      &ValueName,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &ValueName;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      ZwDeleteKey(KeyHandle);
      ZwClose(KeyHandle);
    }
  }
  else if ( ZwIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v5;
}
