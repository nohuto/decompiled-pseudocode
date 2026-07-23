/*
 * XREFs of sub_1800FC800 @ 0x1800FC800
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006D210 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18006D300 (RtlpMuiRegFreeRegistryInfo.c)
 *     sub_18006E1E4 @ 0x18006E1E4 (sub_18006E1E4.c)
 *     sub_18008F0E0 @ 0x18008F0E0 (sub_18008F0E0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1800A5940 (ZwEnumerateKey.c)
 *     ZwIsUILanguageComitted @ 0x1800A7230 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x1800A7B50 (ZwQueryInstallUILanguage.c)
 *     sub_1800FA748 @ 0x1800FA748 (sub_1800FA748.c)
 *     sub_1800FA968 @ 0x1800FA968 (sub_1800FA968.c)
 *     sub_1800FAA04 @ 0x1800FAA04 (sub_1800FAA04.c)
 *     sub_1800FBF24 @ 0x1800FBF24 (sub_1800FBF24.c)
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 */

__int64 __fastcall sub_1800FC800(__int64 a1)
{
  unsigned __int64 v1; // rbp
  NTSTATUS InstallUILanguage; // edi
  __int64 result; // rax
  unsigned int v5; // ecx
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  ULONG v8; // esi
  unsigned __int64 v9; // rcx
  void *v10; // rcx
  __int16 v11; // cx
  unsigned int v12; // ecx
  void *v13; // rcx
  void *v14; // rcx
  int Length; // [rsp+20h] [rbp-30h]
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
  if ( ZwIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = ZwQueryInstallUILanguage((LANGID *)(a1 + 4));
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_33;
    sub_18008F0E0(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  v6 = sub_1800FA968(v5);
  *(_QWORD *)(a1 + 24) = v6;
  if ( !v6 )
  {
    InstallUILanguage = -1073741801;
LABEL_33:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  v7 = sub_1800FAA04(-1, -1);
  *(_QWORD *)(a1 + 32) = v7;
  if ( !v7 )
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
  if ( ZwOpenKey((PHANDLE)(v1 + 16), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 56)) >= 0 )
  {
    v8 = 0;
    do
    {
      InstallUILanguage = ZwEnumerateKey(
                            *(HANDLE *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                            v8,
                            KeyBasicInformation,
                            (PVOID)(v1 + 128),
                            0x200u,
                            (PULONG)(v1 + 24));
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
          if ( ZwOpenKey((PHANDLE)(v1 + 8), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 56)) >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v1 + 40), L"Type");
            v10 = *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
            *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 4;
            *(_DWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C) = 4;
            if ( (int)sub_18006E1E4(
                        v10,
                        (PUNICODE_STRING)(v1 + 40),
                        (_DWORD *)(v1 + 32),
                        (void *)((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL),
                        (ULONG *)(v1 + 28)) >= 0
              && (int)sub_1800FBF24(*(_DWORD *)v1) >= 0 )
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
                  sub_1800FA748(
                    (_QWORD *)a1,
                    *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
                    (wchar_t *)(v1 + 144),
                    v12,
                    Length,
                    v1 + 4);
              }
            }
          }
        }
      }
      v13 = *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( v13 )
      {
        ZwClose(v13);
        *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
      }
      ++v8;
    }
    while ( InstallUILanguage != -2147483622 );
    v14 = *(void **)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v14 )
    {
      ZwClose(v14);
      *(_QWORD *)(((unsigned __int64)&v16 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
    }
  }
  result = sub_1800FD028(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_33;
  return result;
}
