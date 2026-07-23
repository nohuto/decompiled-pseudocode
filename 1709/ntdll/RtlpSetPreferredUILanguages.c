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
  PVOID v7; // r15
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // r13
  __int64 v17; // rdx
  PVOID Heap; // rax
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
  _QWORD *v31; // rsi
  __int64 v32; // rax
  unsigned int v34; // esi
  WCHAR *v35; // r14
  __int16 v36; // r15
  WCHAR *v37; // rsi
  unsigned __int16 v38; // r15
  int v39; // r13d
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  WCHAR *v45; // rcx
  unsigned int v46; // esi
  HANDLE v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  WCHAR *v50; // rcx
  PVOID v51; // [rsp+40h] [rbp-C0h]
  unsigned int v52; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v53[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+54h] [rbp-ACh]
  _UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Data[2]; // [rsp+70h] [rbp-90h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG Value; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v60; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v62; // [rsp+98h] [rbp-68h]
  PVOID v63; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v65[4]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v66; // [rsp+BCh] [rbp-44h]
  _BYTE *v67; // [rsp+C0h] [rbp-40h]
  HANDLE v68; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v69; // [rsp+D0h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v71; // [rsp+E0h] [rbp-20h]
  HANDLE CurrentUserKey; // [rsp+E8h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v74; // [rsp+F8h] [rbp-8h]
  __int128 v75; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v76; // [rsp+110h] [rbp+10h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _OBJECT_ATTRIBUTES v78; // [rsp+148h] [rbp+48h] BYREF
  _OBJECT_ATTRIBUTES v79; // [rsp+178h] [rbp+78h] BYREF
  _OBJECT_ATTRIBUTES v80; // [rsp+1A8h] [rbp+A8h] BYREF
  _OBJECT_ATTRIBUTES v81; // [rsp+1D8h] [rbp+D8h] BYREF
  _QWORD v82[3]; // [rsp+208h] [rbp+108h] BYREF
  int v83; // [rsp+220h] [rbp+120h]

  v76 = a3;
  LOBYTE(v3) = a1;
  CurrentUserKey = 0LL;
  v69 = 0LL;
  v68 = 0LL;
  v4 = a2;
  Handle = 0LL;
  v5 = 0;
  v62 = 0;
  v6 = 0;
  v60 = 0;
  v7 = 0LL;
  v66 = 0;
  v52 = 0;
  v53[0] = 0;
  v67 = 0LL;
  memset(v82, 0, sizeof(v82));
  v83 = 0;
  v51 = 0LL;
  v55 = 0;
  v63 = 0LL;
  v71 = 0LL;
  BaseAddress = 0LL;
  InstallUILanguageId[0] = 0;
  v74 = 0LL;
  KeyHandle = 0LL;
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
    if ( (v3 & 0x80u) != 0 && v63 )
      RtlpMuiFreeLangRegistryInfo(v63);
    *v76 = v5 + v6 + v66;
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
    v13 = RtlpCreateProcessRegistryInfo(&v63);
  else
    v13 = RtlpInitializeLangRegistryInfo(&v63);
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
        InstallUILanguage = NtQueryInstallUILanguage(InstallUILanguageId);
        if ( InstallUILanguage < 0 )
        {
LABEL_96:
          if ( Handle )
          {
            NtClose(Handle);
            Handle = 0LL;
          }
          if ( v68 )
          {
            NtClose(v68);
            v68 = 0LL;
          }
          if ( v69 )
          {
            NtClose(v69);
            v69 = 0LL;
          }
          if ( CurrentUserKey )
          {
            CloseGlobalizationUserSettingsKey((char *)CurrentUserKey);
            CurrentUserKey = 0LL;
          }
          if ( v7 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
          v5 = v62;
          v6 = v60;
          goto LABEL_107;
        }
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
        v74 = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_96;
        }
        String.Buffer = (wchar_t *)Heap;
        *(_DWORD *)&String.Length = 11141120;
        if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
        {
          InstallUILanguage = -1073741811;
LABEL_92:
          if ( v74 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v74);
          if ( v71 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v71);
          goto LABEL_96;
        }
        v19 = (unsigned __int64)String.Length >> 1;
        if ( (v12 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, &BaseAddress);
          if ( InstallUILanguage < 0 )
          {
            v7 = 0LL;
            goto LABEL_90;
          }
          v4 = (WCHAR *)BaseAddress;
          v3 = v12 & 0xFFF3 | 8;
        }
        InstallUILanguage = RtlpGetMultiStringLength(v4, &v54, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_113;
        v20 = (const WCHAR *)v74;
        memmove((char *)v74 + 2 * v19 + 2, v4, 2LL * ((unsigned int)(unsigned __int16)v54 + 1));
        v7 = 0LL;
        InstallUILanguage = RtlpAutoCompleteLanguageFallback((__int64)v63, v20);
        if ( InstallUILanguage < 0 )
        {
LABEL_90:
          if ( BaseAddress )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          goto LABEL_92;
        }
        v4 = (WCHAR *)v20;
      }
      v52 = 0;
      InstallUILanguage = RtlpGetMultiStringLength(v4, Data, &v52);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      Data[1] = v4;
      LOWORD(Data[0]) *= 2;
      WORD1(Data[0]) = LOWORD(Data[0]) + 2;
      if ( v52 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_90;
      }
      v21 = v4;
      v71 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !v71 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_90;
      }
      v22 = v52;
      v54 = 0;
      if ( v52 )
      {
        v23 = v3 & 4;
        LODWORD(v75) = v23;
        while ( 1 )
        {
          if ( v23 )
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_112;
            v24 = Value;
            if ( Value == 4096 || Value == 5120 )
              goto LABEL_88;
            DestinationString.Buffer = (wchar_t *)v71;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
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
            v55 += v26 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_112;
            v24 = Value;
            if ( Value == 4096 || Value == 5120 )
              goto LABEL_88;
            Buffer = DestinationString.Buffer;
          }
          v27 = v54;
          if ( v54 )
          {
            if ( v54 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*v67 & 1) != 0 )
                goto LABEL_88;
              if ( (*v67 & 2) != 0 )
              {
                v30 = v65;
              }
              else
              {
                if ( (*v67 & 4) == 0 || v22 > 2 )
                  goto LABEL_88;
                v30 = v53;
              }
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v63,
                                                        (_DWORD)v67,
                                                        v24,
                                                        (unsigned int)v82,
                                                        (__int64)v30);
            }
            else
            {
              if ( v54 != 2 )
                goto LABEL_80;
              FallbackInstalledLanguageInfoByLangId = RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
                                                        (_DWORD)v63,
                                                        (_DWORD)v67,
                                                        v24,
                                                        (unsigned int)v82,
                                                        (__int64)v65);
            }
            if ( FallbackInstalledLanguageInfoByLangId < 0 )
            {
LABEL_112:
              InstallUILanguage = -1073741811;
LABEL_113:
              v7 = 0LL;
              goto LABEL_90;
            }
            v29 = v82;
          }
          else
          {
            v31 = v63;
            if ( (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v63, Buffer, 1, v53) < 0 )
              goto LABEL_88;
            v29 = (_QWORD *)(*(_QWORD *)(v31[3] + 16LL) + 28LL * v53[0]);
          }
          v27 = v54;
          v67 = v29;
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
          v54 = v27 + 1;
          if ( v27 + 1 >= v22 )
            break;
          v23 = v75;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v34 = v55 + 1;
        v55 = v34;
        if ( v34 > 0xFFFF )
          goto LABEL_88;
        v7 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v34);
        v51 = v7;
        if ( !v7 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_90;
        }
        v35 = (WCHAR *)v7;
        Data[1] = v7;
        v36 = v34;
        v37 = v35;
        v38 = 2 * v36;
        LOWORD(Data[0]) = v38;
        *(_QWORD *)&v75 = v38;
        v39 = 0;
        WORD1(Data[0]) = v38;
        if ( v52 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              break;
            DestinationString.Buffer = (wchar_t *)v71;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              break;
            if ( (int)RtlStringCchCatW(v37, v55, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_136;
            }
            v40 = -1LL;
            do
              ++v40;
            while ( v37[v40] );
            v55 += -1 - v40;
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
            if ( ++v39 >= v52 )
              goto LABEL_134;
          }
          InstallUILanguage = -1073741811;
LABEL_136:
          v7 = v35;
          goto LABEL_90;
        }
LABEL_134:
        v16 = v75;
        *v37 = 0;
        v4 = v35;
      }
      else
      {
        v35 = (WCHAR *)Data[1];
        v16 = WORD1(Data[0]);
        v38 = (unsigned __int16)Data[0];
      }
    }
    else
    {
      v35 = (WCHAR *)&unk_18012C95C;
      LODWORD(Data[0]) = 262146;
      Data[1] = &unk_18012C95C;
      v38 = 2;
      v3 = v12;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = &String;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      KeyHandle = 0LL;
      InstallUILanguage = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&String, L"InstallLanguageFallback");
      v43 = -1LL;
      do
        ++v43;
      while ( v35[v43] );
      WORD1(Data[0]) = -2 - 2 * v43 + v16;
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
      Data[1] = v45;
      InstallUILanguage = RtlpGetMultiStringLength(v45, Data, &v52);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v38 = (unsigned __int16)Data[0];
      v35 = (WCHAR *)Data[1];
      InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
      if ( InstallUILanguage < 0 )
        goto LABEL_195;
      v46 = v52;
      v16 = WORD1(Data[0]);
      v66 = v52;
    }
    else
    {
      v46 = v52;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v66 = v46;
    }
    if ( (v3 & 0x4000) != 0 )
    {
      InstallUILanguage = OpenGlobalizationUserSettingsKey(0x2000000u, 0LL, v14, v15, &CurrentUserKey);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
      v78.Length = 48;
      v68 = 0LL;
      v78.RootDirectory = CurrentUserKey;
      v78.Attributes = 64;
      v78.ObjectName = &String;
      *(_OWORD *)&v78.SecurityDescriptor = 0LL;
      InstallUILanguage = NtOpenKey(&v68, 0xF003Fu, &v78);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
        v47 = v68;
      }
      else
      {
        if ( v46 < 2 )
          goto LABEL_88;
        RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
        v79.RootDirectory = v68;
        v79.Length = 48;
        v79.ObjectName = &String;
        v79.Attributes = 64;
        *(_OWORD *)&v79.SecurityDescriptor = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v79, 0, 0LL, 0, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_89;
        RtlInitUnicodeString(&String, v4);
        if ( v4 )
        {
          v48 = -1LL;
          do
            ++v48;
          while ( v4[v48] );
          v35 = &v4[v48 + 1];
          Data[1] = v35;
        }
        else
        {
          v35 = 0LL;
          Data[1] = 0LL;
        }
        v16 -= String.MaximumLength;
        v47 = Handle;
        WORD1(Data[0]) = v16;
        LOWORD(Data[0]) = v38 - String.MaximumLength;
      }
      InstallUILanguage = ZwSetValueKey(v47, &String, 0, 7u, v35, v16);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      v62 = v46;
    }
    if ( Handle )
    {
      NtClose(Handle);
      Handle = 0LL;
    }
    if ( (v3 & 0x8800) == 0x8800 )
    {
      v75 = *(_OWORD *)Data;
      InstallUILanguage = RtlpSetMachineUILanguagesImmediate((__int64)&v75);
      v60 = v46;
    }
    if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
      goto LABEL_191;
    RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v80.ObjectName = &String;
    v80.Length = 48;
    v80.RootDirectory = 0LL;
    v80.Attributes = 64;
    *(_OWORD *)&v80.SecurityDescriptor = 0LL;
    v69 = 0LL;
    InstallUILanguage = ZwCreateKey(&v69, 0xF003Fu, &v80, 0, 0LL, 0, 0LL);
    if ( InstallUILanguage < 0 )
      goto LABEL_89;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&String, L"PreferredUILanguages");
      InstallUILanguage = ZwSetValueKey(v69, &String, 0, 7u, v35, v16);
      if ( InstallUILanguage >= 0 )
      {
LABEL_190:
        v60 = v46;
LABEL_191:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo(8u, 0LL, 0LL);
          if ( (v3 & 0x8410) != 0 )
            RtlUpdateProcessRegistryInfo();
        }
      }
LABEL_89:
      v7 = v51;
      goto LABEL_90;
    }
    if ( v46 >= 2 )
    {
      RtlInitUnicodeString(&String, L"LanguageConfiguration");
      v81.RootDirectory = v69;
      v81.ObjectName = &String;
      v81.Length = 48;
      v81.Attributes = 64;
      *(_OWORD *)&v81.SecurityDescriptor = 0LL;
      Handle = 0LL;
      InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v81, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_89;
      RtlInitUnicodeString(&String, v4);
      if ( v4 )
      {
        v49 = -1LL;
        do
          ++v49;
        while ( v4[v49] );
        v50 = &v4[v49 + 1];
      }
      else
      {
        v50 = 0LL;
      }
      InstallUILanguage = ZwSetValueKey(Handle, &String, 0, 7u, v50, (unsigned __int16)(v16 - String.MaximumLength));
      if ( InstallUILanguage >= 0 )
        goto LABEL_190;
LABEL_195:
      v7 = v51;
      goto LABEL_90;
    }
LABEL_88:
    InstallUILanguage = -1073741811;
    goto LABEL_89;
  }
  return (unsigned int)InstallUILanguage;
}
