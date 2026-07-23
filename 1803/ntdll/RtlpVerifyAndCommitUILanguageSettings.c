/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006E740 @ 0x18006E740 (sub_18006E740.c)
 *     RtlAdjustPrivilege @ 0x18007B4A0 (RtlAdjustPrivilege.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x18009ADA0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009B6B0 (ZwSetValueKey.c)
 *     ZwFlushInstallUILanguage @ 0x18009C6B0 (ZwFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x18009C890 (ZwGetMUIRegistryInfo.c)
 *     ZwQueryInstallUILanguage @ 0x18009D3B0 (ZwQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x18009E030 (ZwShutdownSystem.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  NTSTATUS InstallUILanguage; // ebx
  _QWORD *v3; // rbx
  __int16 v4; // ax
  bool v5; // sf
  LANGID InstallUILanguageId[4]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  _UNICODE_STRING String; // [rsp+58h] [rbp-B0h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v13[688]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+368h] [rbp+260h] BYREF
  int v15; // [rsp+374h] [rbp+26Ch]

  InstallUILanguageId[2] = 0;
  memset(v13, 0, sizeof(v13));
  InstallUILanguage = ZwQueryInstallUILanguage(&InstallUILanguageId[2]);
  if ( InstallUILanguage >= 0 )
  {
    String.Buffer = (PWCH)v13;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[2], &String)
      && (int)RtlpCreateProcessRegistryInfo(&KeyHandle) >= 0
      && (v3 = KeyHandle) != 0LL
      && (InstallUILanguageId[0] = -1, String.Buffer)
      && (int)sub_1800352EC((__int64)KeyHandle, String.Buffer, 0, InstallUILanguageId) >= 0
      && (v4 = *(_WORD *)(28LL * (__int16)InstallUILanguageId[0] + *(_QWORD *)(v3[3] + 16LL)), v4 >= 0)
      && (v4 & 7) != 4 )
    {
      InstallUILanguage = ZwFlushInstallUILanguage(InstallUILanguageId[2], 1u);
      if ( InstallUILanguage >= 0 )
      {
        ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
        sub_18006E740();
      }
    }
    else
    {
      InstallUILanguage = -1073741811;
    }
  }
  if ( !a1 )
    goto LABEL_12;
  v5 = InstallUILanguage < 0;
  if ( !InstallUILanguage )
  {
LABEL_13:
    if ( v5 )
      return (unsigned int)InstallUILanguage;
    goto LABEL_14;
  }
  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, (PBOOLEAN)InstallUILanguageId) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, (PBOOLEAN)InstallUILanguageId);
  InstallUILanguage = ZwShutdownSystem(ShutdownPowerOff);
  if ( InstallUILanguage < 0 )
  {
    InstallUILanguage = -1073741616;
LABEL_12:
    v5 = InstallUILanguage < 0;
    goto LABEL_13;
  }
LABEL_14:
  KeyHandle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, 0LL) >= 0 )
  {
    *(_DWORD *)InstallUILanguageId = 1;
    if ( ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      *(_DWORD *)InstallUILanguageId = v15 + 1;
    ZwSetValueKey(KeyHandle, &String, 0, 4u, InstallUILanguageId, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)InstallUILanguage;
}
