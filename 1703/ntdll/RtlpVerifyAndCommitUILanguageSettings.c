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
  int v2; // ebx
  bool v3; // sf
  int v5; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v6; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v7; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v10; // [rsp+68h] [rbp-A0h]
  _BYTE v11[8]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-90h] BYREF
  int v13; // [rsp+88h] [rbp-80h] BYREF
  __int64 v14; // [rsp+90h] [rbp-78h]
  UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp-70h]
  int v16; // [rsp+A0h] [rbp-68h]
  __int128 v17; // [rsp+A8h] [rbp-60h]
  _BYTE v18[688]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v19[12]; // [rsp+368h] [rbp+260h] BYREF
  int v20; // [rsp+374h] [rbp+26Ch]

  v6 = 0;
  memset(v18, 0, sizeof(v18));
  v2 = ZwQueryInstallUILanguage(&v6);
  if ( v2 >= 0 )
  {
    v10 = v18;
    LODWORD(v9) = 11141120;
    if ( RtlLCIDToCultureName(v6, (__int64)&v9)
      && (int)RtlpCreateProcessRegistryInfo(&v8) >= 0
      && v8
      && (int)sub_18008EC68(v8, v10, &v7, 0LL) >= 0
      && (_DWORD)v7 != 4 )
    {
      v2 = ZwFlushInstallUILanguage(v6, 1LL);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
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
  if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v5) == -1073741700 )
    RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v5);
  v2 = ZwShutdownSystem(2LL);
  if ( v2 < 0 )
  {
    v2 = -1073741616;
LABEL_10:
    v3 = v2 < 0;
    goto LABEL_11;
  }
LABEL_12:
  v8 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
  p_DestinationString = &DestinationString;
  v13 = 48;
  v14 = 0LL;
  v16 = 64;
  v17 = 0LL;
  if ( (int)ZwCreateKey(&v8, 131103LL, &v13, 0LL, 0LL, 0, 0LL) >= 0 )
  {
    LODWORD(v7) = 1;
    if ( (int)ZwQueryValueKey(v8, &v9, 2LL, v19, 20, v11) >= 0 )
      LODWORD(v7) = v20 + 1;
    ZwSetValueKey(v8, &v9, 0LL, 4LL, &v7, 4);
    ZwClose(v8);
  }
  return (unsigned int)v2;
}
