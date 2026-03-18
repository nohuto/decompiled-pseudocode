/*
 * XREFs of ExpSetCurrentUserUILanguage @ 0x1405DD320
 * Callers:
 *     NtSetDefaultUILanguage @ 0x1405DD2FC (NtSetDefaultUILanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     DownLevelLangIDToLanguageName @ 0x1401326FC (DownLevelLangIDToLanguageName.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     CloseGlobalizationUserSettingsKey @ 0x140153840 (CloseGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x140153864 (OpenGlobalizationUserSettingsKey.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017DB00 (ZwOpenKey.c)
 *     ZwEnumerateValueKey @ 0x14017DB20 (ZwEnumerateValueKey.c)
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14017DC60 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14017E4C0 (ZwSetValueKey.c)
 *     ZwDeleteKey @ 0x14017F240 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x14017F2A0 (ZwDeleteValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     RtlUnicodeStringToInteger @ 0x140566A60 (RtlUnicodeStringToInteger.c)
 *     NtQueryInstallUILanguage @ 0x14058AA14 (NtQueryInstallUILanguage.c)
 *     ExpValidateLocale @ 0x140755B08 (ExpValidateLocale.c)
 */

NTSTATUS __fastcall ExpSetCurrentUserUILanguage(PCWSTR SourceString, unsigned __int16 a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v3; // ebx
  unsigned int v5; // edi
  char v6; // r12
  char v7; // r14
  char v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  NTSTATUS result; // eax
  NTSTATUS Key; // ebx
  NTSTATUS InstallUILanguage; // ebx
  int v15; // eax
  ULONG v16; // r14d
  ULONG v17; // r13d
  ULONG v18; // r12d
  ULONG v19; // edi
  ULONG v20; // edx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  void *v24; // rcx
  __int64 v25; // rax
  ULONG v26; // ebx
  unsigned int v27; // ecx
  void *v28; // rbx
  void *v29; // rcx
  ULONG v30; // ebx
  NTSTATUS v31; // edi
  size_t v32; // r15
  ULONG v33; // edx
  __int64 v34; // rdi
  __int64 v35; // rsi
  void *v36; // rcx
  _WORD *v37; // rcx
  unsigned int v38; // eax
  __int16 v39; // ax
  _DWORD *Teb; // rcx
  char v41; // [rsp+60h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = a2;
  memset((void *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 448), 0, 0xAAuLL);
  v5 = v3;
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  v6 = 1;
  *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 1;
  v7 = 0;
  v8 = 0;
  *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
  result = OpenGlobalizationUserSettingsKey(
             v9,
             3u,
             v10,
             v11,
             (PHANDLE)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 152));
  if ( result >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), SourceString);
    RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop");
    *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
    *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 0x98);
    *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
    *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 120;
    *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
    if ( !(_WORD)v3 )
    {
      Key = ZwOpenKey((PHANDLE)(v2 + 48), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
      if ( Key < 0 )
        goto LABEL_25;
      *(_BYTE *)v2 = 1;
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MultiUILanguageId");
      if ( ZwQueryValueKey(
             *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
             (PUNICODE_STRING)(v2 + 16),
             KeyValuePartialInformation,
             (PVOID)(v2 + 192),
             0x100u,
             (PULONG)(v2 + 8)) >= 0
        && *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) > 4u
        && *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 1 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 204));
        if ( RtlUnicodeStringToInteger((PCUNICODE_STRING)(v2 + 16), 0x10u, (PULONG)(v2 + 136)) >= 0
          && (int)DownLevelLangIDToLanguageName(
                    *(_WORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88),
                    (unsigned __int16 *)(v2 + 448),
                    85,
                    0) > 1 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
          v25 = -1LL;
          do
            ++v25;
          while ( *(_WORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1C0 + 2 * v25) );
          ZwSetValueKey(
            *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
            (PUNICODE_STRING)(v2 + 16),
            0,
            7u,
            (PVOID)(v2 + 448),
            2 * v25 + 2);
        }
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MultiUILanguageId");
        ZwDeleteValueKey(
          *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
          (PUNICODE_STRING)(v2 + 16));
        v8 = 1;
        *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
      }
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguagesPending");
      if ( ZwQueryValueKey(
             *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
             (PUNICODE_STRING)(v2 + 16),
             KeyValuePartialInformation,
             (PVOID)(v2 + 192),
             0x100u,
             (PULONG)(v2 + 8)) >= 0 )
      {
        v26 = *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
        if ( v26 >= 4 && *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 7 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
          if ( ZwSetValueKey(
                 *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
                 (PUNICODE_STRING)(v2 + 16),
                 0,
                 7u,
                 (PVOID)(v2 + 204),
                 v26) >= 0 )
          {
            v8 = 1;
            *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 1;
            v27 = *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8);
            if ( v27 + 12 < 0x100 )
            {
              *(_WORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xCA + 2 * ((unsigned __int64)v27 >> 1)) = 0;
              RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguagesPending");
              ZwDeleteValueKey(
                *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
                (PUNICODE_STRING)(v2 + 16));
              RtlInitUnicodeString((PUNICODE_STRING)(v2 + 160), (PCWSTR)(v2 + 204));
              RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\LanguageConfigurationPending");
              *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
              *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                               + 0x98);
              *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
              *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                   + 120;
              *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
              if ( ZwOpenKey((PHANDLE)(v2 + 144), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72)) >= 0
                && ZwQueryValueKey(
                     *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90),
                     (PUNICODE_STRING)(v2 + 160),
                     KeyValuePartialInformation,
                     (PVOID)(v2 + 640),
                     0x210u,
                     (PULONG)(v2 + 8)) >= 0
                && *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) == 7 )
              {
                RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\LanguageConfiguration");
                *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
                *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                 + 0x98);
                *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
                *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                     + 120;
                *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
                if ( ZwCreateKey((PHANDLE)(v2 + 56), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 0, 0LL) >= 0 )
                {
                  if ( ZwSetValueKey(
                         *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                         (PUNICODE_STRING)(v2 + 160),
                         0,
                         7u,
                         (PVOID)(v2 + 652),
                         *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288)) >= 0 )
                    ZwDeleteValueKey(
                      *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90),
                      (PUNICODE_STRING)(v2 + 160));
                  ZwClose(*(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
                }
              }
            }
          }
        }
      }
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\MuiCached");
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                       + 0x98);
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 120;
      *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
      ZwOpenKey((PHANDLE)(v2 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
      RtlInitUnicodeString(
        (PUNICODE_STRING)(v2 + 120),
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 120;
      *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
      if ( ZwOpenKey((PHANDLE)(v2 + 56), 0x80000000, (POBJECT_ATTRIBUTES)(v2 + 72)) < 0 )
      {
        v28 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
        if ( v28 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MachinePreferredUILanguages");
          ZwDeleteValueKey(v28, (PUNICODE_STRING)(v2 + 16));
        }
        goto LABEL_17;
      }
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"PreferredUILanguages");
      if ( ZwQueryValueKey(
             *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
             (PUNICODE_STRING)(v2 + 16),
             KeyValuePartialInformation,
             (PVOID)(v2 + 192),
             0x100u,
             (PULONG)(v2 + 8)) >= 0
        && *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) >= 4u
        && *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC4) == 7 )
      {
        goto LABEL_12;
      }
      *(_WORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0;
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 0;
      InstallUILanguage = NtQueryInstallUILanguage((LANGID *)(v2 + 40));
      if ( InstallUILanguage >= 0 )
      {
        v15 = DownLevelLangIDToLanguageName(
                *(_WORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28),
                (unsigned __int16 *)(v2 + 204),
                128,
                0);
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = v15;
        if ( !v15 )
        {
          InstallUILanguage = -1073741823;
          goto LABEL_65;
        }
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = 2 * v15;
      }
      if ( InstallUILanguage >= 0 )
      {
LABEL_12:
        if ( !*(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"Control Panel\\Desktop\\MuiCached");
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
          *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                           + 0x98);
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
          *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 120;
          *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
          Key = ZwCreateKey((PHANDLE)(v2 + 32), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 1u, 0LL);
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
          if ( Key < 0 )
            goto LABEL_24;
        }
        RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), L"MachinePreferredUILanguages");
        if ( ZwSetValueKey(
               *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
               (PUNICODE_STRING)(v2 + 16),
               0,
               7u,
               (PVOID)(v2 + 204),
               *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8)) < 0 )
          DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages\n");
        goto LABEL_16;
      }
LABEL_65:
      DbgPrintEx(0xFFFFFFFF, 0, "sysinfo: Can't set MachinePreferredUILanguages due to error %d\n", InstallUILanguage);
      v29 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      if ( v29 )
        ZwDeleteValueKey(v29, (PUNICODE_STRING)(v2 + 16));
LABEL_16:
      ZwClose(*(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
LABEL_17:
      RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"MachineLanguageConfiguration");
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                       + 0x20);
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 120;
      *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
      if ( ZwOpenKey((PHANDLE)(v2 + 64), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72)) >= 0 )
      {
        v30 = 0;
        do
        {
          memset((void *)(v2 + 192), 0, 0x100uLL);
          v31 = ZwEnumerateValueKey(
                  *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40),
                  v30,
                  KeyValueBasicInformation,
                  (PVOID)(v2 + 192),
                  0xFEu,
                  (PULONG)(v2 + 8));
          if ( v31 >= 0 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 204));
            if ( ZwDeleteValueKey(
                   *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40),
                   (PUNICODE_STRING)(v2 + 16)) < 0 )
            {
              DbgPrint(
                "*** MUI: Failed to delete value %S from MachineLanguageConfiguration!\n",
                (const wchar_t *)(v2 + 204));
              ++v30;
            }
          }
        }
        while ( v31 >= 0 );
      }
      RtlInitUnicodeString(
        (PUNICODE_STRING)(v2 + 120),
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
      *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                           + 120;
      *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
      if ( ZwOpenKey((PHANDLE)(v2 + 56), 0x80000000, (POBJECT_ATTRIBUTES)(v2 + 72)) < 0 )
      {
        Key = 0;
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
        goto LABEL_24;
      }
      v16 = 0;
      while ( 1 )
      {
        v17 = v16;
        v18 = v16;
        v19 = v16;
        memset((void *)(v2 + 640), 0, 0x210uLL);
        v20 = v16++;
        Key = ZwEnumerateValueKey(
                *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                v20,
                KeyValueFullInformation,
                (PVOID)(v2 + 640),
                0x20Eu,
                (PULONG)(v2 + 8));
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
        if ( Key >= 0 )
          break;
LABEL_21:
        if ( Key < 0 )
        {
          ZwClose(*(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
LABEL_23:
          v6 = *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 2);
          v8 = *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
LABEL_24:
          v7 = *(_BYTE *)v2;
          goto LABEL_25;
        }
      }
      v32 = *(unsigned int *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290);
      if ( v32 + 24 > 0x210 )
      {
        v33 = v19;
LABEL_77:
        DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %u\n", v33);
        goto LABEL_21;
      }
      v34 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C);
      v35 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288);
      if ( (unsigned int)(v34 + v35) <= 0x210 )
      {
        if ( *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x284) != 7 )
        {
          v33 = v17;
          goto LABEL_77;
        }
        if ( *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290) < 0xAAu )
        {
          memset((void *)(v2 + 448), 0, 0xAAuLL);
          memmove((void *)(v2 + 448), (const void *)(v2 + 660), v32);
          RtlInitUnicodeString((PUNICODE_STRING)(v2 + 16), (PCWSTR)(v2 + 448));
          v36 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
          if ( !v36 )
          {
            RtlInitUnicodeString((PUNICODE_STRING)(v2 + 120), L"MachineLanguageConfiguration");
            *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = 48;
            *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                             + 0x20);
            *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1600;
            *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = ((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                 + 120;
            *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
            Key = ZwCreateKey((PHANDLE)(v2 + 64), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72), 0, 0LL, 1u, 0LL);
            *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
            if ( Key < 0 )
              goto LABEL_23;
            *(_BYTE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 0;
            v36 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
            v34 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28C);
            v35 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288);
          }
          Key = ZwSetValueKey(v36, (PUNICODE_STRING)(v2 + 16), 0, 7u, (PVOID)((unsigned int)v35 + v2 + 640), v34);
          *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
          if ( Key < 0 )
          {
            DbgPrint("*** MUI: Can't copy language name for LanguageConfig item %S\n", (const wchar_t *)(v2 + 448));
            Key = 0;
            *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
          }
          goto LABEL_21;
        }
      }
      v33 = v18;
      goto LABEL_77;
    }
    Key = ExpValidateLocale(v3);
    *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
    if ( Key >= 0 )
    {
      Key = ZwOpenKey((PHANDLE)(v2 + 48), 0x40000000u, (POBJECT_ATTRIBUTES)(v2 + 72));
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
      if ( Key >= 0 )
      {
        *(_BYTE *)v2 = 1;
        *(_WORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = 0;
        v37 = (_WORD *)(v2 + 206);
        do
        {
          v38 = v5 & 0xF;
          if ( v38 > 9 )
            v39 = v38 + 55;
          else
            v39 = v38 + 48;
          *v37-- = v39;
          v5 >>= 4;
        }
        while ( (unsigned __int64)v37 >= v2 + 192 );
        Key = ZwSetValueKey(
                *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
                (PUNICODE_STRING)(v2 + 16),
                0,
                1u,
                (PVOID)(v2 + 192),
                0x12u);
        *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = Key;
        goto LABEL_24;
      }
    }
LABEL_25:
    if ( v7 )
      ZwClose(*(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30));
    v21 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90);
    if ( v21 )
    {
      if ( ZwEnumerateValueKey(v21, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v2 + 8)) == -2147483622 )
        ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90));
      ZwClose(*(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90));
    }
    if ( *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
    {
      v22 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
      if ( !v22 || v6 && ZwEnumerateValueKey(v22, 0, KeyValueBasicInformation, 0LL, 0, (PULONG)(v2 + 8)) == -2147483622 )
      {
        v23 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
        if ( v23 )
          ZwDeleteKey(v23);
        if ( ZwEnumerateValueKey(
               *(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20),
               0,
               KeyValueBasicInformation,
               0LL,
               0,
               (PULONG)(v2 + 8)) == -2147483622 )
          ZwDeleteKey(*(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
      }
      ZwClose(*(HANDLE *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
    }
    v24 = *(void **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    if ( v24 )
      ZwClose(v24);
    CloseGlobalizationUserSettingsKey(*(char **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98));
    if ( v8 == 1 )
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
        Teb = 0LL;
      else
        Teb = KeGetCurrentThread()->Teb;
      if ( Teb )
        Teb[1530] = 0;
    }
    return Key;
  }
  return result;
}
