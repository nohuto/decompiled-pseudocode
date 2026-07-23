/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_18006C280 @ 0x18006C280 (sub_18006C280.c)
 *     RtlAdjustPrivilege @ 0x18007E2D0 (RtlAdjustPrivilege.c)
 *     sub_18008EC68 @ 0x18008EC68 (sub_18008EC68.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1800A55E0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1800A56A0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 *     ZwFlushInstallUILanguage @ 0x1800A6EB0 (ZwFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A7090 (ZwGetMUIRegistryInfo.c)
 *     ZwQueryInstallUILanguage @ 0x1800A7B50 (ZwQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x1800A87D0 (ZwShutdownSystem.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  NTSTATUS v2; // ebx
  bool v3; // sf
  BOOLEAN WasEnabled[4]; // [rsp+48h] [rbp-C0h] BYREF
  LANGID InstallUILanguageId; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 Data; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING String; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v13[688]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+368h] [rbp+260h] BYREF
  int v15; // [rsp+374h] [rbp+26Ch]

  InstallUILanguageId = 0;
  memset(v13, 0, sizeof(v13));
  v2 = ZwQueryInstallUILanguage(&InstallUILanguageId);
  if ( v2 >= 0 )
  {
    String.Buffer = (PWCH)v13;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId, &String)
      && (int)RtlpCreateProcessRegistryInfo(&KeyHandle) >= 0
      && KeyHandle
      && (int)sub_18008EC68(KeyHandle, String.Buffer, &Data, 0LL) >= 0
      && (_DWORD)Data != 4 )
    {
      v2 = ZwFlushInstallUILanguage(InstallUILanguageId, 1u);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
        sub_18006C280();
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( !a1 )
    goto LABEL_10;
  v3 = v2 < 0;
  if ( !v2 )
  {
LABEL_11:
    if ( v3 )
      return (unsigned int)v2;
    goto LABEL_12;
  }
  if ( RtlAdjustPrivilege(0x13u, 1u, 1u, WasEnabled) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1u, 0, WasEnabled);
  v2 = ZwShutdownSystem(ShutdownPowerOff);
  if ( v2 < 0 )
  {
    v2 = -1073741616;
LABEL_10:
    v3 = v2 < 0;
    goto LABEL_11;
  }
LABEL_12:
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
    LODWORD(Data) = 1;
    if ( ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength) >= 0 )
      LODWORD(Data) = v15 + 1;
    ZwSetValueKey(KeyHandle, &String, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v2;
}
