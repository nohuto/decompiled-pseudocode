/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008C290
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpdateProcessRegistryInfo @ 0x1800035F8 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     RtlAdjustPrivilege @ 0x18007C820 (RtlAdjustPrivilege.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtQueryValueKey @ 0x1800A03A0 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x1800A0460 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A0CB0 (ZwSetValueKey.c)
 *     NtFlushInstallUILanguage @ 0x1800A1C90 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A1E70 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A2970 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x1800A35F0 (ZwShutdownSystem.c)
 *     memset @ 0x1800A6C80 (memset.c)
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
  InstallUILanguage = NtQueryInstallUILanguage(&InstallUILanguageId[2]);
  if ( InstallUILanguage >= 0 )
  {
    String.Buffer = (wchar_t *)v13;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId[2], &String)
      && (int)RtlpCreateProcessRegistryInfo(&KeyHandle) >= 0
      && (v3 = KeyHandle) != 0LL
      && (InstallUILanguageId[0] = -1, String.Buffer)
      && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)KeyHandle, String.Buffer, 0, InstallUILanguageId) >= 0
      && (v4 = *(_WORD *)(28LL * (__int16)InstallUILanguageId[0] + *(_QWORD *)(v3[3] + 16LL)), v4 >= 0)
      && (v4 & 7) != 4 )
    {
      InstallUILanguage = NtFlushInstallUILanguage(InstallUILanguageId[2], 1u);
      if ( InstallUILanguage >= 0 )
      {
        ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
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
    if ( NtQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      *(_DWORD *)InstallUILanguageId = v15 + 1;
    ZwSetValueKey(KeyHandle, &String, 0, 4u, InstallUILanguageId, 4u);
    NtClose(KeyHandle);
  }
  return (unsigned int)InstallUILanguage;
}
