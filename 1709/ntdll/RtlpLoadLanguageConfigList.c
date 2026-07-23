/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x18005302C
 * Callers:
 *     RtlpInitializeUserList @ 0x18000505C (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x180005830 (RtlpMuiRegLoadRegistryInfo.c)
 *     InitializeTEBUserLangList @ 0x180005E78 (InitializeTEBUserLangList.c)
 * Callees:
 *     RtlpMuiRegFreeStringPool @ 0x18000442C (RtlpMuiRegFreeStringPool.c)
 *     CloseGlobalizationUserSettingsKey @ 0x18000623C (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004D3CC (OpenGlobalizationUserSettingsKey.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlpPopulateLanguageConfigList @ 0x18007ED48 (RtlpPopulateLanguageConfigList.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18007EE78 (RtlpMuiRegCreateLanguageConfigList.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x1800FB850 (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FB8E4 (RtlpLoadPolicyLanguageSpec.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, __int64 *a2, __int64 a3)
{
  void *v5; // r12
  HANDLE v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  int PolicyLanguageSpec; // ebx
  __int64 LanguageConfigList; // rax
  NTSTATUS v14; // eax
  void *v15; // rcx
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
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
      if ( PolicyLanguageSpec >= 0 )
        goto LABEL_11;
      if ( a1 == 8 )
        RtlpHasMachineUILock(KeyHandle);
      NtClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v9 = OpenGlobalizationUserSettingsKey(0x2000000u, 0LL, v7, v8, &CurrentUserKey);
    v6 = CurrentUserKey;
    if ( v9 < 0 )
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
        v14 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      }
      else
      {
        v14 = -1073741772;
      }
      if ( v14 >= 0 )
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
      v10 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      PolicyLanguageSpec = v10;
      if ( v10 >= 0 )
      {
LABEL_10:
        PolicyLanguageSpec = RtlpPopulateLanguageConfigList(KeyHandle);
LABEL_11:
        v6 = CurrentUserKey;
        goto LABEL_12;
      }
LABEL_21:
      if ( v10 == -1073741772 )
        PolicyLanguageSpec = 0;
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
      if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(Handle);
        if ( PolicyLanguageSpec >= 0 )
          goto LABEL_11;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = CurrentUserKey;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v10 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      PolicyLanguageSpec = v10;
      if ( v10 >= 0 )
        goto LABEL_10;
      goto LABEL_21;
    }
    PolicyLanguageSpec = 0;
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_12:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    v6 = CurrentUserKey;
  }
  if ( Handle )
  {
    NtClose(Handle);
    v6 = CurrentUserKey;
  }
  if ( v6 )
    CloseGlobalizationUserSettingsKey((char *)v6);
  if ( PolicyLanguageSpec < 0 )
  {
    if ( a2 )
    {
      v15 = (void *)*a2;
      if ( (void *)*a2 != v5 )
      {
        if ( v15 )
          RtlpMuiRegFreeStringPool(v15);
        goto LABEL_44;
      }
    }
  }
  else if ( !*a2 )
  {
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( !LanguageConfigList )
    {
      PolicyLanguageSpec = -1073741801;
LABEL_44:
      *a2 = (__int64)v5;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
