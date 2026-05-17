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
  int v2; // ebx
  __int64 v3; // rbx
  __int16 v4; // ax
  bool v5; // sf
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v8; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v9; // [rsp+50h] [rbp-B8h] BYREF
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
  v2 = ZwQueryInstallUILanguage(&v8);
  if ( v2 >= 0 )
  {
    v11 = (const WCHAR *)v19;
    LODWORD(v10) = 11141120;
    if ( RtlLCIDToCultureName(v8, (__int64)&v10)
      && (int)RtlpCreateProcessRegistryInfo(&v9) >= 0
      && (v3 = v9) != 0
      && (LOWORD(v7) = -1, v11)
      && (int)sub_1800352EC(v9, v11, 0, &v7) >= 0
      && (v4 = *(_WORD *)(28LL * (__int16)v7 + *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL)), v4 >= 0)
      && (v4 & 7) != 4 )
    {
      v2 = ZwFlushInstallUILanguage(v8, 1LL);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        sub_18006E740();
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
  v9 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
  p_DestinationString = &DestinationString;
  v14 = 48;
  v15 = 0LL;
  v17 = 64;
  v18 = 0LL;
  if ( (int)ZwCreateKey(&v9, 131103LL, &v14, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    v7 = 1;
    if ( (int)ZwQueryValueKey(v9, &v10, 2LL, v20, 20, v12) >= 0 )
      v7 = v21 + 1;
    ZwSetValueKey(v9, &v10, 0LL, 4LL, &v7, 4);
    ZwClose(v9);
  }
  return (unsigned int)v2;
}
