/*
 * XREFs of RtlpSetPreferredUILanguages @ 0x1800EDCC0
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800ED590 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlUpdateProcessRegistryInfo @ 0x1800035F8 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x1800043B0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x1800043E0 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x180004FEC (RtlpCheckMuiMultiStringSafe.c)
 *     CloseGlobalizationUserSettingsKey @ 0x18000623C (CloseGlobalizationUserSettingsKey.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18002CDB0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18004D3CC (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1800516DC (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180051CE0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800524A0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x180052680 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlUnicodeStringToInteger @ 0x180070ED0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A0460 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A0CB0 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A1E70 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A2970 (NtQueryInstallUILanguage.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlStringCchCatW @ 0x1800EBC88 (RtlStringCchCatW.c)
 *     RtlpAutoCompleteLanguageFallback @ 0x1800EC15C (RtlpAutoCompleteLanguageFallback.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECA20 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetMultiStringLength @ 0x1800ED02C (RtlpGetMultiStringLength.c)
 *     RtlpSetInstallLanguage @ 0x1800ED590 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800EDAE4 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId @ 0x1800FC29C (RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId.c)
 */

__int64 __fastcall RtlpSetPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  __int16 v3; // di
  WCHAR *v4; // r12
  unsigned int v5; // r13d
  int v6; // r14d
  unsigned __int64 v7; // r15
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // r13
  __int64 v17; // rdx
  wchar_t *Heap; // rax
  unsigned __int64 v19; // r15
  const WCHAR *v20; // rsi
  const WCHAR *v21; // r14
  unsigned int v22; // r15d
  int v23; // eax
  unsigned __int16 v24; // si
  wchar_t *Buffer; // rdx
  __int64 v26; // rax
  int v27; // ecx
  int FallbackInstalledLanguageInfoByLangId; // eax
  _QWORD *v29; // rax
  _WORD *v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rax
  unsigned int v34; // esi
  _WORD *v35; // r14
  __int16 v36; // r15
  _WORD *v37; // rsi
  unsigned __int16 v38; // r15
  int v39; // r13d
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  _WORD *v45; // rcx
  unsigned int v46; // esi
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // [rsp+40h] [rbp-C0h]
  unsigned int v50; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v51[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+54h] [rbp-ACh]
  UNICODE_STRING v54; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v56; // [rsp+80h] [rbp-80h]
  unsigned int v57; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v58; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h]
  unsigned int v60; // [rsp+98h] [rbp-68h]
  __int64 v61; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v63[4]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v64; // [rsp+BCh] [rbp-44h]
  _BYTE *v65; // [rsp+C0h] [rbp-40h]
  HANDLE v66; // [rsp+C8h] [rbp-38h]
  HANDLE v67; // [rsp+D0h] [rbp-30h]
  WCHAR *v68; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t *v69; // [rsp+E0h] [rbp-20h]
  char *v70; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v71; // [rsp+F0h] [rbp-10h]
  wchar_t *v72; // [rsp+F8h] [rbp-8h]
  __int128 v73; // [rsp+100h] [rbp+0h]
  _DWORD *v74; // [rsp+110h] [rbp+10h]
  int v75; // [rsp+118h] [rbp+18h]
  __int64 v76; // [rsp+120h] [rbp+20h]
  UNICODE_STRING *v77; // [rsp+128h] [rbp+28h]
  int v78; // [rsp+130h] [rbp+30h]
  __int128 v79; // [rsp+138h] [rbp+38h]
  int v80; // [rsp+148h] [rbp+48h]
  char *v81; // [rsp+150h] [rbp+50h]
  UNICODE_STRING *v82; // [rsp+158h] [rbp+58h]
  int v83; // [rsp+160h] [rbp+60h]
  __int128 v84; // [rsp+168h] [rbp+68h]
  int v85; // [rsp+178h] [rbp+78h]
  HANDLE v86; // [rsp+180h] [rbp+80h]
  UNICODE_STRING *v87; // [rsp+188h] [rbp+88h]
  int v88; // [rsp+190h] [rbp+90h]
  __int128 v89; // [rsp+198h] [rbp+98h]
  int v90; // [rsp+1A8h] [rbp+A8h]
  __int64 v91; // [rsp+1B0h] [rbp+B0h]
  UNICODE_STRING *v92; // [rsp+1B8h] [rbp+B8h]
  int v93; // [rsp+1C0h] [rbp+C0h]
  __int128 v94; // [rsp+1C8h] [rbp+C8h]
  int v95; // [rsp+1D8h] [rbp+D8h]
  HANDLE v96; // [rsp+1E0h] [rbp+E0h]
  UNICODE_STRING *v97; // [rsp+1E8h] [rbp+E8h]
  int v98; // [rsp+1F0h] [rbp+F0h]
  __int128 v99; // [rsp+1F8h] [rbp+F8h]
  _QWORD v100[3]; // [rsp+208h] [rbp+108h] BYREF
  int v101; // [rsp+220h] [rbp+120h]

  v74 = a3;
  LOBYTE(v3) = a1;
  v70 = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  v4 = a2;
  Handle = 0LL;
  v5 = 0;
  v60 = 0;
  v6 = 0;
  v58 = 0;
  v7 = 0LL;
  v64 = 0;
  v50 = 0;
  v51[0] = 0;
  v65 = 0LL;
  memset(v100, 0, sizeof(v100));
  v101 = 0;
  v49 = 0LL;
  v53 = 0;
  v61 = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v56 = 0;
  v72 = 0LL;
  v71 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  v9 = 18440;
  if ( a1 )
    v9 = a1;
  if ( (LOBYTE(v3) = v9, (v9 & 0xFFFF0363) != 0)
    || (v9 & 0x400) != 0 && (!a2 || (v9 & 0xFFFFFBF3) != 0)
    || (v9 & 0x8000) != 0 && (!a2 || (v9 & 0xFFFF6773) != 0)
    || (v9 & 0xC) == 0xC
    || (v9 & 0x1800) == 0x1800
    || (v9 & 0x10) != 0 && (v9 & 0x7080) != 0 )
  {
LABEL_2:
    InstallUILanguage = -1073741811;
LABEL_107:
    if ( (v3 & 0x80u) != 0 && v61 )
      RtlpMuiFreeLangRegistryInfo(v61);
    *v74 = v5 + v6 + v64;
    return (unsigned int)InstallUILanguage;
  }
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v11 = v10 | 0x4000;
  if ( (v10 & 0xE410) != 0 )
    v11 = v10;
  v12 = v11 | 0x800;
  if ( (v11 & 0x1C00) != 0 )
    v12 = v11;
  if ( (v12 & 0x80u) == 0 )
    v13 = RtlpCreateProcessRegistryInfo(&v61);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v61);
  InstallUILanguage = v13;
  if ( v13 >= 0 )
  {
    v16 = 4;
    if ( v4 )
    {
      v17 = 4LL;
      if ( (v12 & 4) == 0 )
        v17 = 85LL;
      if ( (int)RtlpCheckMuiMultiStringSafe(v4, v17) < 0 )
        DbgPrint(
          "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
      v3 = v12;
      if ( (v12 & 0x400) != 0 )
      {
        InstallUILanguage = NtQueryInstallUILanguage();
        if ( InstallUILanguage < 0 )
        {
LABEL_96:
          if ( Handle )
          {
            NtClose(Handle);
            Handle = 0LL;
          }
          if ( v66 )
          {
            NtClose(v66);
            v66 = 0LL;
          }
          if ( v67 )
          {
            NtClose(v67);
            v67 = 0LL;
          }
          if ( v70 )
          {
            CloseGlobalizationUserSettingsKey(v70);
            v70 = 0LL;
          }
          if ( v7 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
          v5 = v60;
          v6 = v58;
          goto LABEL_107;
        }
        Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
        v72 = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_96;
        }
        v54.Buffer = Heap;
        *(_DWORD *)&v54.Length = 11141120;
        if ( !RtlLCIDToCultureName(v56, (__int64)&v54) )
        {
          InstallUILanguage = -1073741811;
LABEL_92:
          if ( v72 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v72);
          if ( v69 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v69);
          goto LABEL_96;
        }
        v19 = (unsigned __int64)v54.Length >> 1;
        if ( (v12 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, (unsigned __int64 *)&v68);
          if ( InstallUILanguage < 0 )
          {
            v7 = 0LL;
            goto LABEL_90;
          }
          v4 = v68;
          v3 = v12 & 0xFFF3 | 8;
        }
        InstallUILanguage = RtlpGetMultiStringLength(v4, &v52, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_113;
        v20 = v72;
        memmove(&v72[v19 + 1], v4, 2LL * ((unsigned int)(unsigned __int16)v52 + 1));
        v7 = 0LL;
        InstallUILanguage = RtlpAutoCompleteLanguageFallback(v61, v20);
        if ( InstallUILanguage < 0 )
        {
LABEL_90:
          if ( v68 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v68);
          goto LABEL_92;
        }
        v4 = (WCHAR *)v20;
      }
      v50 = 0;
      InstallUILanguage = RtlpGetMultiStringLength(v4, &v55, &v50);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      *((_QWORD *)&v55 + 1) = v4;
      LOWORD(v55) = 2 * v55;
      WORD1(v55) = v55 + 2;
      if ( v50 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_90;
      }
      v21 = v4;
      v69 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      if ( !v69 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_90;
      }
      v22 = v50;
      v52 = 0;
      if ( v50 )
      {
        v23 = v3 & 4;
        LODWORD(v73) = v23;
        while ( 1 )
        {
          if ( v23 )
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v57) < 0 )
              goto LABEL_112;
            v24 = v57;
            if ( v57 == 4096 || v57 == 5120 )
              goto LABEL_88;
            DestinationString.Buffer = v69;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v57, (__int64)&DestinationString) )
            {
              InstallUILanguage = -1073741811;
              v7 = 0LL;
              goto LABEL_90;
            }
            Buffer = DestinationString.Buffer;
            v26 = -1LL;
            do
              ++v26;
            while ( DestinationString.Buffer[v26] );
            v53 += v26 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( !RtlCultureNameToLCID(&DestinationString.Length, &v57) )
              goto LABEL_112;
            v24 = v57;
            if ( v57 == 4096 || v57 == 5120 )
              goto LABEL_88;
            Buffer = DestinationString.Buffer;
          }
          v27 = v52;
          if ( v52 )
          {
            if ( v52 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*v65 & 1) != 0 )
                goto LABEL_88;
              if ( (*v65 & 2) != 0 )
              {
                v30 = v63;
              }
              else
              {
                if ( (*v65 & 4) == 0 || v22 > 2 )
                  goto LABEL_88;
                v30 = v51;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v61,
                                                        (_DWORD)v65,
                                                        v24,
                                                        (unsigned int)v100,
                                                        (__int64)v30);
            }
            else
            {
              if ( v52 != 2 )
                goto LABEL_80;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        v61,
                                                        (_DWORD)v65,
                                                        v24,
                                                        (unsigned int)v100,
                                                        (__int64)v63);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
            {
LABEL_112:
              InstallUILanguage = -1073741811;
LABEL_113:
              v7 = 0LL;
              goto LABEL_90;
            }
            v29 = v100;
          }
          else
          {
            v31 = v61;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName(v61, Buffer, 1, v51) < 0 )
              goto LABEL_88;
            v29 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 24) + 16LL) + 28LL * v51[0]);
          }
          v27 = v52;
          v65 = v29;
LABEL_80:
          if ( v21 )
          {
            v32 = -1LL;
            do
              ++v32;
            while ( v21[v32] );
            v21 += v32 + 1;
          }
          else
          {
            v21 = 0LL;
          }
          v52 = v27 + 1;
          if ( v27 + 1 >= v22 )
            break;
          v23 = v73;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v34 = v53 + 1;
        v53 = v34;
        if ( v34 > 0xFFFF )
          goto LABEL_88;
        v7 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v34);
        v49 = v7;
        if ( !v7 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_90;
        }
        v35 = (_WORD *)v7;
        *((_QWORD *)&v55 + 1) = v7;
        v36 = v34;
        v37 = v35;
        v38 = 2 * v36;
        LOWORD(v55) = v38;
        *(_QWORD *)&v73 = v38;
        v39 = 0;
        WORD1(v55) = v38;
        if ( v50 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v57) < 0 )
              break;
            DestinationString.Buffer = v69;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v57, (__int64)&DestinationString) )
              break;
            if ( (int)RtlStringCchCatW(v37, v53, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_136;
            }
            v40 = -1LL;
            do
              ++v40;
            while ( v37[v40] );
            v53 += -1 - v40;
            if ( v37 )
            {
              v41 = -1LL;
              do
                ++v41;
              while ( v37[v41] );
              v37 += v41 + 1;
            }
            if ( v4 )
            {
              v42 = -1LL;
              do
                ++v42;
              while ( v4[v42] );
              v4 += v42 + 1;
            }
            else
            {
              v4 = 0LL;
            }
            if ( ++v39 >= v50 )
              goto LABEL_134;
          }
          InstallUILanguage = -1073741811;
LABEL_136:
          v7 = (unsigned __int64)v35;
          goto LABEL_90;
        }
LABEL_134:
        v16 = v73;
        *v37 = 0;
        v4 = v35;
      }
      else
      {
        v35 = (_WORD *)*((_QWORD *)&v55 + 1);
        v16 = WORD1(v55);
        v38 = v55;
      }
    }
    else
    {
      v35 = &unk_18012C95C;
      LODWORD(v55) = 262146;
      *((_QWORD *)&v55 + 1) = &unk_18012C95C;
      v38 = 2;
      v3 = v12;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&v54, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v75 = 48;
      v76 = 0LL;
      v78 = 64;
      v77 = &v54;
      v79 = 0LL;
      v71 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&v54, L"InstallLanguageFallback");
      v43 = -1LL;
      do
        ++v43;
      while ( v35[v43] );
      WORD1(v55) = -2 - 2 * v43 + v16;
      if ( v35 )
      {
        v44 = -1LL;
        do
          ++v44;
        while ( v35[v44] );
        v45 = &v35[v44 + 1];
      }
      else
      {
        v45 = 0LL;
      }
      *((_QWORD *)&v55 + 1) = v45;
      InstallUILanguage = RtlpGetMultiStringLength(v45, &v55, &v50);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v38 = v55;
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_193;
      v46 = v50;
      v16 = WORD1(v55);
      v64 = v50;
    }
    else
    {
      v46 = v50;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v64 = v46;
    }
    if ( (v3 & 0x4000) != 0 )
    {
      InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, 0, v14, v15, (__int64)&v70);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&v54, L"Control Panel\\Desktop");
      v80 = 48;
      v66 = 0LL;
      v81 = v70;
      v83 = 64;
      v82 = &v54;
      v84 = 0LL;
      InstallUILanguage = NtOpenKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&v54, L"PreferredUILanguagesPending");
      }
      else
      {
        if ( v46 < 2 )
          goto LABEL_88;
        RtlInitUnicodeString(&v54, L"LanguageConfigurationPending");
        v86 = v66;
        v85 = 48;
        v87 = &v54;
        v88 = 64;
        v89 = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_89;
        RtlInitUnicodeString(&v54, v4);
        if ( v4 )
        {
          v47 = -1LL;
          do
            ++v47;
          while ( v4[v47] );
          *((_QWORD *)&v55 + 1) = &v4[v47 + 1];
        }
        else
        {
          *((_QWORD *)&v55 + 1) = 0LL;
        }
        WORD1(v55) = v16 - v54.MaximumLength;
        LOWORD(v55) = v38 - v54.MaximumLength;
      }
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v60 = v46;
    }
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    if ( (v3 & 0x8800) == 0x8800 )
    {
      v73 = v55;
      InstallUILanguage = RtlpSetMachineUILanguagesImmediate();
      v58 = v46;
    }
    if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
      goto LABEL_189;
    RtlInitUnicodeString(&v54, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v92 = &v54;
    v90 = 48;
    v91 = 0LL;
    v93 = 64;
    v94 = 0LL;
    v67 = 0LL;
    InstallUILanguage = ZwCreateKey();
    if ( InstallUILanguage < 0 )
      goto LABEL_89;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&v54, L"PreferredUILanguages");
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage >= 0 )
      {
LABEL_188:
        v58 = v46;
LABEL_189:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo();
          if ( (v3 & 0x8410) != 0 )
            RtlUpdateProcessRegistryInfo();
        }
      }
LABEL_89:
      v7 = v49;
      goto LABEL_90;
    }
    if ( v46 >= 2 )
    {
      RtlInitUnicodeString(&v54, L"LanguageConfiguration");
      v96 = v67;
      v97 = &v54;
      v95 = 48;
      v98 = 64;
      v99 = 0LL;
      Handle = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&v54, v4);
      if ( v4 )
      {
        v48 = -1LL;
        do
          ++v48;
        while ( v4[v48] );
      }
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage >= 0 )
        goto LABEL_188;
LABEL_193:
      v7 = v49;
      goto LABEL_90;
    }
LABEL_88:
    InstallUILanguage = -1073741811;
    goto LABEL_89;
  }
  return (unsigned int)InstallUILanguage;
}
