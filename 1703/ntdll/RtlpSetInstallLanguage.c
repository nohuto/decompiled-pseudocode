/*
 * XREFs of RtlpSetInstallLanguage @ 0x1800ED870
 * Callers:
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800563A0 @ 0x1800563A0 (sub_1800563A0.c)
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     sub_18008EC68 @ 0x18008EC68 (sub_18008EC68.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwDeleteKey @ 0x1800A6C50 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1800A6CB0 (ZwDeleteValueKey.c)
 *     ZwFlushInstallUILanguage @ 0x1800A6EB0 (ZwFlushInstallUILanguage.c)
 *     ZwIsUILanguageComitted @ 0x1800A7230 (ZwIsUILanguageComitted.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800EC1D8 @ 0x1800EC1D8 (sub_1800EC1D8.c)
 *     sub_1800ED010 @ 0x1800ED010 (sub_1800ED010.c)
 *     sub_1800ED164 @ 0x1800ED164 (sub_1800ED164.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  WCHAR *v2; // rdi
  char v3; // r15
  char v4; // r12
  int ProcessRegistryInfo; // ebx
  __int16 *v6; // rsi
  __int16 *v7; // r14
  __int16 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h]
  __int16 *v16; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  UNICODE_STRING *v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  __int128 v21; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  int v23[4]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR SourceString[88]; // [rsp+C8h] [rbp-40h] BYREF
  _WORD v25[88]; // [rsp+178h] [rbp+70h] BYREF
  _WORD v26[176]; // [rsp+228h] [rbp+120h] BYREF
  _WORD v27[264]; // [rsp+388h] [rbp+280h] BYREF

  v2 = (WCHAR *)a2;
  v12 = 0LL;
  v3 = 0;
  v15 = 0LL;
  v4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ProcessRegistryInfo = sub_1800EC1D8(&DestinationString.Length, (int *)&v13);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    DestinationString.Buffer = SourceString;
    DestinationString.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(v13, (__int64)&DestinationString) )
      return (unsigned int)-1073741811;
    v2 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, &v13) )
      return (unsigned int)-1073741811;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v16);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v6 = v16;
  if ( !v16 )
    return (unsigned int)-1073741823;
  ProcessRegistryInfo = sub_18008EC68((__int64)v16, v2, v23, &v16);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( v23[0] == 1 )
    goto LABEL_23;
  if ( v23[0] == 2 )
  {
    v8 = v16;
LABEL_22:
    v3 = 1;
    ProcessRegistryInfo = sub_1800ED010((__int64)v6, v8, 0LL, v27, 0x102u);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    goto LABEL_23;
  }
  if ( v23[0] != 4 )
    return (unsigned int)-1073741811;
  v4 = 1;
  memset(v25, 0, 0xACuLL);
  sub_1800563A0(v25, 85LL, (__int64)v2);
  v2 = SourceString;
  memset(SourceString, 0, 0xACuLL);
  ProcessRegistryInfo = sub_1800ED164((__int64)v6, (__int64)v16, v23, (__int64)SourceString, 0x55u, 0LL, 0LL);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v7 = *(__int16 **)v23;
  if ( !*(_QWORD *)v23 )
    return (unsigned int)-1073741637;
  ProcessRegistryInfo = sub_1800ED010((__int64)v6, v16, v25, v26, 0xACu);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v8 = v7;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&DestinationString, v2);
  if ( !RtlCultureNameToLCID(&DestinationString.Length, &v13) )
    return (unsigned int)-1073741811;
  ProcessRegistryInfo = ZwFlushInstallUILanguage();
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( v3 )
    {
      RtlpSetUserPreferredUILanguages(1032LL, v27, &v13);
    }
    else
    {
      RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v12 = 0LL;
      v19 = &v14;
      LODWORD(v17) = 48;
      v18 = 0LL;
      v20 = 64;
      v21 = 0LL;
      if ( (int)ZwOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v14, L"InstallLanguageFallback");
        ZwDeleteValueKey();
        ZwClose();
      }
    }
    if ( v4 )
    {
      RtlpSetUserPreferredUILanguages(32776LL, v25, &v13);
      RtlpSetUserPreferredUILanguages(36872LL, v26, &v13);
    }
    else
    {
      RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v12 = 0LL;
      v19 = &v14;
      LODWORD(v17) = 48;
      v18 = 0LL;
      v20 = 64;
      v21 = 0LL;
      if ( (int)ZwOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v14, L"PreferredUILanguages");
        ZwDeleteValueKey();
        ZwClose();
        RtlInitUnicodeString(
          &v14,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        v12 = 0LL;
        v19 = &v14;
        LODWORD(v17) = 48;
        v18 = 0LL;
        v20 = 64;
        v21 = 0LL;
        if ( (int)ZwOpenKey() >= 0 )
        {
          ZwDeleteKey();
          ZwClose();
        }
        if ( (int)sub_18006E330(0x2000000u, 0, v9, v10, (__int64)&v12) >= 0 )
        {
          RtlInitUnicodeString(&v14, L"Control Panel\\Desktop\\MuiCached");
          v18 = v12;
          v15 = 0LL;
          v19 = &v14;
          LODWORD(v17) = 48;
          v20 = 64;
          v21 = 0LL;
          if ( (int)ZwOpenKey() >= 0 )
          {
            RtlInitUnicodeString(&v14, L"MachinePreferredUILanguages");
            ZwDeleteValueKey();
            RtlInitUnicodeString(&v14, L"MachineLanguageConfiguration");
            ZwDeleteValueKey();
            ZwClose();
          }
          sub_18006E310(v12);
        }
      }
    }
    RtlInitUnicodeString(&v14, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CMF\\SQMData\\BootLanguages");
    v12 = 0LL;
    v19 = &v14;
    LODWORD(v17) = 48;
    v18 = 0LL;
    v20 = 64;
    v21 = 0LL;
    if ( (int)ZwOpenKey() >= 0 )
    {
      ZwDeleteKey();
      ZwClose();
    }
  }
  else if ( (unsigned int)ZwIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)ProcessRegistryInfo;
}
