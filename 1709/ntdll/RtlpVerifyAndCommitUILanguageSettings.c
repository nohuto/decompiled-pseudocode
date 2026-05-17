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
  int v2; // ebx
  _QWORD *v3; // rbx
  __int16 v4; // ax
  bool v5; // sf
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v8; // [rsp+4Ch] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+58h] [rbp-B0h] BYREF
  const WCHAR *v11; // [rsp+60h] [rbp-A8h]
  _BYTE v12[8]; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  int v14; // [rsp+80h] [rbp-88h] BYREF
  __int64 v15; // [rsp+88h] [rbp-80h]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-78h]
  int v17; // [rsp+98h] [rbp-70h]
  __int128 v18; // [rsp+A0h] [rbp-68h]
  _BYTE v19[688]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v20[12]; // [rsp+368h] [rbp+260h] BYREF
  int v21; // [rsp+374h] [rbp+26Ch]

  v8 = 0;
  memset(v19, 0, sizeof(v19));
  v2 = NtQueryInstallUILanguage(&v8);
  if ( v2 >= 0 )
  {
    v11 = (const WCHAR *)v19;
    LODWORD(v10) = 11141120;
    if ( RtlLCIDToCultureName(v8, (__int64)&v10)
      && (int)RtlpCreateProcessRegistryInfo((__int64 *)&Handle) >= 0
      && (v3 = Handle) != 0LL
      && (LOWORD(v7) = -1, v11)
      && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)Handle, v11, 0, &v7) >= 0
      && (v4 = *(_WORD *)(28LL * (__int16)v7 + *(_QWORD *)(v3[3] + 16LL)), v4 >= 0)
      && (v4 & 7) != 4 )
    {
      v2 = NtFlushInstallUILanguage(v8, 1LL);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( !a1 )
    goto LABEL_12;
  v5 = v2 < 0;
  if ( !v2 )
  {
LABEL_13:
    if ( v5 )
      return (unsigned int)v2;
    goto LABEL_14;
  }
  if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v7) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v7);
  v2 = ZwShutdownSystem(2LL);
  if ( v2 < 0 )
  {
    v2 = -1073741616;
LABEL_12:
    v5 = v2 < 0;
    goto LABEL_13;
  }
LABEL_14:
  Handle = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
  p_DestinationString = &DestinationString;
  v14 = 48;
  v15 = 0LL;
  v17 = 64;
  v18 = 0LL;
  if ( (int)ZwCreateKey(&Handle, 131103LL, &v14, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    v7 = 1;
    if ( (int)NtQueryValueKey(Handle, &v10, 2LL, v20, 20, v12) >= 0 )
      v7 = v21 + 1;
    ZwSetValueKey(Handle, &v10, 0LL, 4LL, &v7, 4);
    NtClose(Handle);
  }
  return (unsigned int)v2;
}
