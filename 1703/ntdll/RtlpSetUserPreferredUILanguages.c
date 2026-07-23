/*
 * XREFs of RtlpSetUserPreferredUILanguages @ 0x1800EDFA0
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180040DB0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_18006C280 @ 0x18006C280 (sub_18006C280.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006C440 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18006C99C @ 0x18006C99C (sub_18006C99C.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006CE80 (RtlpInitializeLangRegistryInfo.c)
 *     sub_18006E310 @ 0x18006E310 (sub_18006E310.c)
 *     sub_18006E330 @ 0x18006E330 (sub_18006E330.c)
 *     RtlUnicodeStringToInteger @ 0x180072D30 (RtlUnicodeStringToInteger.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1800A56A0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1800A5EF0 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A7090 (ZwGetMUIRegistryInfo.c)
 *     ZwQueryInstallUILanguage @ 0x1800A7B50 (ZwQueryInstallUILanguage.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800EC108 @ 0x1800EC108 (sub_1800EC108.c)
 *     sub_1800EC5DC @ 0x1800EC5DC (sub_1800EC5DC.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECDF0 (RtlpConvertLCIDsToCultureNames.c)
 *     sub_1800ED364 @ 0x1800ED364 (sub_1800ED364.c)
 *     RtlpSetInstallLanguage @ 0x1800ED870 (RtlpSetInstallLanguage.c)
 *     sub_1800EDDC4 @ 0x1800EDDC4 (sub_1800EDDC4.c)
 *     sub_1800FAAA0 @ 0x1800FAAA0 (sub_1800FAAA0.c)
 */

__int64 __fastcall RtlpSetUserPreferredUILanguages(int a1, WCHAR *a2, _DWORD *a3)
{
  __int16 v3; // di
  WCHAR *v4; // r12
  unsigned int v5; // r13d
  int v6; // r15d
  WCHAR *v7; // r14
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
  unsigned __int64 v19; // r14
  const WCHAR *v20; // rsi
  const WCHAR *v21; // r14
  unsigned int v22; // r15d
  int v23; // eax
  unsigned __int16 v24; // si
  const WCHAR *Buffer; // rdx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // eax
  _QWORD *v29; // rax
  _WORD *v30; // rcx
  _QWORD *v31; // rsi
  __int64 v32; // rax
  unsigned int v34; // esi
  unsigned __int16 v35; // r15
  WCHAR *v36; // rsi
  int v37; // r13d
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  char *v43; // rcx
  unsigned int v44; // esi
  HANDLE v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  WCHAR *v48; // rcx
  WCHAR *v49; // [rsp+40h] [rbp-C0h]
  unsigned int v50; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v51[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v52; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v53; // [rsp+54h] [rbp-ACh]
  _UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Data[2]; // [rsp+70h] [rbp-90h] BYREF
  LANGID InstallUILanguageId[2]; // [rsp+80h] [rbp-80h] BYREF
  ULONG Value; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v58; // [rsp+88h] [rbp-78h]
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v60; // [rsp+98h] [rbp-68h]
  PVOID v61; // [rsp+A0h] [rbp-60h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v63[4]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v64; // [rsp+BCh] [rbp-44h]
  _BYTE *v65; // [rsp+C0h] [rbp-40h]
  HANDLE v66; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE v67; // [rsp+D0h] [rbp-30h] BYREF
  PVOID BaseAddress; // [rsp+D8h] [rbp-28h] BYREF
  PVOID v69; // [rsp+E0h] [rbp-20h]
  HANDLE CurrentUserKey; // [rsp+E8h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+F0h] [rbp-10h] BYREF
  PVOID v72; // [rsp+F8h] [rbp-8h]
  __int128 v73; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v74; // [rsp+110h] [rbp+10h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _OBJECT_ATTRIBUTES v76; // [rsp+148h] [rbp+48h] BYREF
  _OBJECT_ATTRIBUTES v77; // [rsp+178h] [rbp+78h] BYREF
  _OBJECT_ATTRIBUTES v78; // [rsp+1A8h] [rbp+A8h] BYREF
  _OBJECT_ATTRIBUTES v79; // [rsp+1D8h] [rbp+D8h] BYREF
  _QWORD v80[3]; // [rsp+208h] [rbp+108h] BYREF
  int v81; // [rsp+220h] [rbp+120h]

  v74 = a3;
  LOBYTE(v3) = a1;
  CurrentUserKey = 0LL;
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
  memset(v80, 0, sizeof(v80));
  v81 = 0;
  v49 = 0LL;
  v53 = 0;
  v61 = 0LL;
  v69 = 0LL;
  BaseAddress = 0LL;
  InstallUILanguageId[0] = 0;
  v72 = 0LL;
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
LABEL_108:
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
      if ( (int)sub_18006C99C(v4, v17) < 0 )
        DbgPrint(
          "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
      v3 = v12;
      if ( (v12 & 0x400) != 0 )
      {
        InstallUILanguage = ZwQueryInstallUILanguage(InstallUILanguageId);
        if ( InstallUILanguage < 0 )
        {
LABEL_97:
          if ( Handle )
          {
            ZwClose(Handle);
            Handle = 0LL;
          }
          if ( v66 )
          {
            ZwClose(v66);
            v66 = 0LL;
          }
          if ( v67 )
          {
            ZwClose(v67);
            v67 = 0LL;
          }
          if ( CurrentUserKey )
          {
            sub_18006E310((char *)CurrentUserKey);
            CurrentUserKey = 0LL;
          }
          if ( v7 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
          v5 = v60;
          v6 = v58;
          goto LABEL_108;
        }
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20AuLL);
        v72 = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_97;
        }
        String.Buffer = (PWCH)Heap;
        *(_DWORD *)&String.Length = 11141120;
        if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
        {
          InstallUILanguage = -1073741811;
LABEL_93:
          if ( v72 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v72);
          if ( v69 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v69);
          goto LABEL_97;
        }
        v19 = (unsigned __int64)String.Length >> 1;
        if ( (v12 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, &BaseAddress);
          if ( InstallUILanguage < 0 )
          {
            v7 = 0LL;
            goto LABEL_91;
          }
          v4 = (WCHAR *)BaseAddress;
          v3 = v12 & 0xFFF3 | 8;
        }
        InstallUILanguage = sub_1800ED364(v4, &v52, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_47;
        v20 = (const WCHAR *)v72;
        memmove((char *)v72 + 2 * v19 + 2, v4, 2LL * (unsigned __int16)v52 + 2);
        v7 = 0LL;
        InstallUILanguage = sub_1800EC5DC((__int64)v61, v20);
        if ( InstallUILanguage < 0 )
        {
LABEL_91:
          if ( BaseAddress )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          goto LABEL_93;
        }
        v4 = (WCHAR *)v20;
      }
      v50 = 0;
      InstallUILanguage = sub_1800ED364(v4, Data, &v50);
      if ( InstallUILanguage < 0 )
        goto LABEL_91;
      Data[1] = v4;
      LOWORD(Data[0]) *= 2;
      WORD1(Data[0]) = LOWORD(Data[0]) + 2;
      if ( v50 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_91;
      }
      v21 = v4;
      v69 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      if ( !v69 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_47;
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
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              goto LABEL_113;
            v24 = Value;
            if ( Value == 4096 || Value == 5120 )
              goto LABEL_89;
            DestinationString.Buffer = (PWCH)v69;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
            {
              InstallUILanguage = -1073741811;
              v7 = 0LL;
              goto LABEL_91;
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
            if ( !RtlCultureNameToLCID(&DestinationString, &Value) )
              goto LABEL_113;
            v24 = Value;
            if ( Value == 4096 || Value == 5120 )
              goto LABEL_89;
            Buffer = DestinationString.Buffer;
          }
          v27 = v52;
          if ( v52 )
          {
            if ( v52 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*v65 & 1) != 0 )
                goto LABEL_89;
              if ( (*v65 & 2) != 0 )
              {
                v30 = v63;
              }
              else
              {
                if ( (*v65 & 4) == 0 || v22 > 2 )
                  goto LABEL_89;
                v30 = v51;
              }
              v28 = sub_1800FAAA0((_DWORD)v61, (_DWORD)v65, v24, (unsigned int)v80, (__int64)v30);
            }
            else
            {
              if ( v52 != 2 )
                goto LABEL_81;
              v28 = sub_1800FAAA0((_DWORD)v61, (_DWORD)v65, v24, (unsigned int)v80, (__int64)v63);
            }
            if ( v28 < 0 )
            {
LABEL_113:
              InstallUILanguage = -1073741811;
LABEL_47:
              v7 = 0LL;
              goto LABEL_91;
            }
            v29 = v80;
          }
          else
          {
            v31 = v61;
            if ( (int)sub_180044C70((__int64)v61, Buffer, 1, v51) < 0 )
              goto LABEL_89;
            v29 = (_QWORD *)(*(_QWORD *)(v31[3] + 16LL) + 28LL * v51[0]);
          }
          v27 = v52;
          v65 = v29;
LABEL_81:
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
          goto LABEL_89;
        v7 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v34);
        v49 = v7;
        if ( !v7 )
        {
LABEL_117:
          InstallUILanguage = -1073741670;
          goto LABEL_91;
        }
        Data[1] = v7;
        v35 = 2 * v34;
        v36 = v7;
        LOWORD(Data[0]) = v35;
        *(_QWORD *)&v73 = v35;
        v37 = 0;
        WORD1(Data[0]) = v35;
        if ( v50 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value) < 0 )
              break;
            DestinationString.Buffer = (PWCH)v69;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(Value, &DestinationString) )
              break;
            if ( (int)sub_1800EC108(v36, v53, (__int64)DestinationString.Buffer) < 0 )
              goto LABEL_117;
            v38 = -1LL;
            do
              ++v38;
            while ( v36[v38] );
            v53 += -1 - v38;
            if ( v36 )
            {
              v39 = -1LL;
              do
                ++v39;
              while ( v36[v39] );
              v36 += v39 + 1;
            }
            if ( v4 )
            {
              v40 = -1LL;
              do
                ++v40;
              while ( v4[v40] );
              v4 += v40 + 1;
            }
            else
            {
              v4 = 0LL;
            }
            if ( ++v37 >= v50 )
              goto LABEL_134;
          }
          InstallUILanguage = -1073741811;
          goto LABEL_91;
        }
LABEL_134:
        v16 = v73;
        *v36 = 0;
        v4 = v7;
      }
      else
      {
        v7 = (WCHAR *)Data[1];
        v16 = WORD1(Data[0]);
        v35 = (unsigned __int16)Data[0];
      }
    }
    else
    {
      v7 = (WCHAR *)&unk_180129EFC;
      LODWORD(Data[0]) = 262146;
      Data[1] = &unk_180129EFC;
      v35 = 2;
      v3 = v12;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      KeyHandle = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = &String;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      InstallUILanguage = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_192;
      RtlInitUnicodeString(&String, L"InstallLanguageFallback");
      v41 = -1LL;
      do
        ++v41;
      while ( v7[v41] );
      WORD1(Data[0]) = -2 - 2 * v41 + v16;
      if ( v7 )
      {
        v42 = -1LL;
        do
          ++v42;
        while ( v7[v42] );
        v43 = (char *)&v7[v42 + 1];
      }
      else
      {
        v43 = 0LL;
      }
      Data[1] = v43;
      InstallUILanguage = sub_1800ED364(v43, Data, &v50);
      if ( InstallUILanguage < 0 )
        goto LABEL_192;
      v35 = (unsigned __int16)Data[0];
      v7 = (WCHAR *)Data[1];
      InstallUILanguage = ZwSetValueKey(KeyHandle, &String, 0, 7u, Data[1], 2 * LOWORD(Data[0]));
      if ( InstallUILanguage < 0 )
        goto LABEL_192;
      v44 = v50;
      v16 = WORD1(Data[0]);
      v64 = v50;
    }
    else
    {
      v44 = v50;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      v64 = v44;
    }
    if ( (v3 & 0x4000) != 0 )
    {
      InstallUILanguage = sub_18006E330(0x2000000u, 0LL, v14, v15, &CurrentUserKey);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      RtlInitUnicodeString(&String, L"Control Panel\\Desktop");
      v76.Length = 48;
      v66 = 0LL;
      v76.RootDirectory = CurrentUserKey;
      v76.Attributes = 64;
      v76.ObjectName = &String;
      *(_OWORD *)&v76.SecurityDescriptor = 0LL;
      InstallUILanguage = ZwOpenKey(&v66, 0xF003Fu, &v76);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&String, L"PreferredUILanguagesPending");
        v45 = v66;
      }
      else
      {
        if ( v44 < 2 )
          goto LABEL_89;
        RtlInitUnicodeString(&String, L"LanguageConfigurationPending");
        v7 = 0LL;
        v77.RootDirectory = v66;
        v77.ObjectName = &String;
        v77.Length = 48;
        v77.Attributes = 64;
        *(_OWORD *)&v77.SecurityDescriptor = 0LL;
        Handle = 0LL;
        InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v77, 0, 0LL, 0, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_90;
        RtlInitUnicodeString(&String, v4);
        if ( v4 )
        {
          v46 = -1LL;
          do
            ++v46;
          while ( v4[v46] );
          v7 = &v4[v46 + 1];
        }
        v16 -= String.MaximumLength;
        v45 = Handle;
        WORD1(Data[0]) = v16;
        Data[1] = v7;
        LOWORD(Data[0]) = v35 - String.MaximumLength;
      }
      InstallUILanguage = ZwSetValueKey(v45, &String, 0, 7u, v7, v16);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      v60 = v44;
    }
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( (v3 & 0x8800) == 0x8800 )
    {
      v73 = *(_OWORD *)Data;
      InstallUILanguage = sub_1800EDDC4((__int64)&v73);
      v58 = v44;
    }
    if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
      goto LABEL_188;
    RtlInitUnicodeString(&String, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v78.Length = 48;
    v78.RootDirectory = 0LL;
    v67 = 0LL;
    v78.Attributes = 64;
    v78.ObjectName = &String;
    *(_OWORD *)&v78.SecurityDescriptor = 0LL;
    InstallUILanguage = ZwCreateKey(&v67, 0xF003Fu, &v78, 0, 0LL, 0, 0LL);
    if ( InstallUILanguage < 0 )
      goto LABEL_90;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&String, L"PreferredUILanguages");
      InstallUILanguage = ZwSetValueKey(v67, &String, 0, 7u, v7, v16);
      if ( InstallUILanguage >= 0 )
      {
LABEL_187:
        v58 = v44;
LABEL_188:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo(8u, 0LL, 0LL);
          if ( (v3 & 0x8410) != 0 )
            sub_18006C280();
        }
      }
LABEL_90:
      v7 = v49;
      goto LABEL_91;
    }
    if ( v44 >= 2 )
    {
      RtlInitUnicodeString(&String, L"LanguageConfiguration");
      v79.RootDirectory = v67;
      v79.ObjectName = &String;
      v79.Length = 48;
      v79.Attributes = 64;
      *(_OWORD *)&v79.SecurityDescriptor = 0LL;
      Handle = 0LL;
      InstallUILanguage = ZwCreateKey(&Handle, 0xF003Fu, &v79, 0, 0LL, 0, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      RtlInitUnicodeString(&String, v4);
      if ( v4 )
      {
        v47 = -1LL;
        do
          ++v47;
        while ( v4[v47] );
        v48 = &v4[v47 + 1];
      }
      else
      {
        v48 = 0LL;
      }
      InstallUILanguage = ZwSetValueKey(Handle, &String, 0, 7u, v48, (unsigned __int16)(v16 - String.MaximumLength));
      if ( InstallUILanguage >= 0 )
        goto LABEL_187;
LABEL_192:
      v7 = v49;
      goto LABEL_91;
    }
LABEL_89:
    InstallUILanguage = -1073741811;
    goto LABEL_90;
  }
  return (unsigned int)InstallUILanguage;
}
