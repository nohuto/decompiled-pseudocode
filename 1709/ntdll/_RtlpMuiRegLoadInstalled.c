/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x1800FE3E0
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x180005830 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x180005920 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     LdrpQueryValueKey @ 0x1800537A0 (LdrpQueryValueKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008CB30 (RtlpLoadInstallLanguageFallback.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     NtEnumerateKey @ 0x1800A0700 (NtEnumerateKey.c)
 *     NtIsUILanguageComitted @ 0x1800A2010 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A2970 (NtQueryInstallUILanguage.c)
 *     RtlpMuiRegAddLanguageByName @ 0x1800FBC58 (RtlpMuiRegAddLanguageByName.c)
 *     RtlpMuiRegCreateLanguages @ 0x1800FC16C (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x1800FC204 (RtlpMuiRegCreateStringPool.c)
 *     ValidateRegistrLangType @ 0x1800FDB04 (ValidateRegistrLangType.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800FEC08 (_RtlpMuiRegValidateInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  unsigned __int64 v1; // rbp
  int InstallUILanguage; // edi
  __int64 result; // rax
  unsigned int v5; // ecx
  __int64 Languages; // rax
  __int64 StringPool; // rax
  int v8; // esi
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int16 v11; // cx
  unsigned int v12; // ecx
  void *v13; // rcx
  void *v14; // rcx
  int v15; // [rsp+20h] [rbp-30h]
  int v16; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  InstallUILanguage = 0;
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)v1 = 0;
  *(_WORD *)(v1 + 4) = -1;
  if ( !a1 )
    return 3221225485LL;
  if ( (int)NtIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = NtQueryInstallUILanguage();
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_33;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages(v5);
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_33:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(-1, -1);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_33;
  *(_DWORD *)a1 |= 2u;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v1 + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                       + 40;
  *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
  *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
  *(_OWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
  if ( (int)NtOpenKey() >= 0 )
  {
    v8 = 0;
    do
    {
      InstallUILanguage = NtEnumerateKey();
      if ( InstallUILanguage < 0 )
      {
        if ( InstallUILanguage != -2147483622 )
          goto LABEL_33;
      }
      else
      {
        v9 = *(unsigned int *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x8C);
        if ( v9 + 24 <= 0x200 )
        {
          *(_WORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90 + 2 * (v9 >> 1)) = 0;
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), (PCWSTR)(v1 + 144));
          *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 0x10);
          *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = ((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 40;
          *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 48;
          *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 64;
          *(_OWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), L"Type");
            v10 = *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 4;
            *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 4;
            if ( (int)LdrpQueryValueKey(
                        v10,
                        v1 + 40,
                        (_DWORD *)(v1 + 32),
                        (void *)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL),
                        (unsigned int *)(v1 + 28)) >= 0
              && (int)ValidateRegistrLangType(*(_DWORD *)v1) >= 0 )
            {
              v12 = v11 & 0x419F;
              *(_DWORD *)v1 = v12;
              if ( (v12 & 7) != 0 && (v12 & 7 & -(v12 & 7)) == (v12 & 7) )
              {
                if ( (v12 & 0x180) == 0 || (v12 & 0x180 & -(v12 & 0x180)) != (v12 & 0x180) )
                {
                  v12 = v12 & 0xFFFFFE7F | 0x80;
                  *(_DWORD *)v1 = v12;
                }
                if ( (v12 & 0x18) != 0 && (v12 & 0x18 & -(v12 & 0x18)) == (v12 & 0x18) && (v12 & 0xC) != 8 )
                  RtlpMuiRegAddLanguageByName(
                    (_QWORD *)a1,
                    *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                    (wchar_t *)(v1 + 144),
                    v12,
                    v15,
                    v1 + 4);
              }
            }
          }
        }
      }
      v13 = *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( v13 )
      {
        NtClose(v13);
        *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
      }
      ++v8;
    }
    while ( InstallUILanguage != -2147483622 );
    v14 = *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v14 )
    {
      NtClose(v14);
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
    }
  }
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_33;
  return result;
}
