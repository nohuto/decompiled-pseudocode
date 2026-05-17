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
  _WORD *v7; // r14
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int ProcessRegistryInfo; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // r13
  __int64 v17; // rdx
  wchar_t *Heap; // rax
  unsigned __int64 v19; // r14
  const WCHAR *v20; // rsi
  const WCHAR *v21; // r14
  unsigned int v22; // r15d
  int v23; // eax
  unsigned __int16 v24; // si
  wchar_t *Buffer; // rdx
  __int64 v26; // rax
  int v27; // ecx
  int v28; // eax
  _QWORD *v29; // rax
  _WORD *v30; // rcx
  unsigned __int64 v31; // rsi
  __int64 v32; // rax
  unsigned int v34; // esi
  unsigned __int16 v35; // r15
  _WORD *v36; // rsi
  int v37; // r13d
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  _WORD *v43; // rcx
  unsigned int v44; // esi
  WCHAR *v45; // r14
  __int64 v46; // rax
  __int64 v47; // rax
  _WORD *v48; // [rsp+40h] [rbp-C0h]
  unsigned int v49; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v50[2]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v51; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v52; // [rsp+54h] [rbp-ACh]
  UNICODE_STRING v53; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v54; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v55; // [rsp+80h] [rbp-80h]
  unsigned int v56; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h]
  unsigned int v59; // [rsp+98h] [rbp-68h]
  unsigned __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v62[4]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v63; // [rsp+BCh] [rbp-44h]
  _BYTE *v64; // [rsp+C0h] [rbp-40h]
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int64 v66; // [rsp+D0h] [rbp-30h]
  WCHAR *v67; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t *v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-10h]
  wchar_t *v71; // [rsp+F8h] [rbp-8h]
  __int128 v72; // [rsp+100h] [rbp+0h]
  _DWORD *v73; // [rsp+110h] [rbp+10h]
  int v74; // [rsp+118h] [rbp+18h]
  __int64 v75; // [rsp+120h] [rbp+20h]
  UNICODE_STRING *v76; // [rsp+128h] [rbp+28h]
  int v77; // [rsp+130h] [rbp+30h]
  __int128 v78; // [rsp+138h] [rbp+38h]
  int v79; // [rsp+148h] [rbp+48h]
  __int64 v80; // [rsp+150h] [rbp+50h]
  UNICODE_STRING *v81; // [rsp+158h] [rbp+58h]
  int v82; // [rsp+160h] [rbp+60h]
  __int128 v83; // [rsp+168h] [rbp+68h]
  int v84; // [rsp+178h] [rbp+78h]
  __int64 v85; // [rsp+180h] [rbp+80h]
  UNICODE_STRING *v86; // [rsp+188h] [rbp+88h]
  int v87; // [rsp+190h] [rbp+90h]
  __int128 v88; // [rsp+198h] [rbp+98h]
  int v89; // [rsp+1A8h] [rbp+A8h]
  __int64 v90; // [rsp+1B0h] [rbp+B0h]
  UNICODE_STRING *v91; // [rsp+1B8h] [rbp+B8h]
  int v92; // [rsp+1C0h] [rbp+C0h]
  __int128 v93; // [rsp+1C8h] [rbp+C8h]
  int v94; // [rsp+1D8h] [rbp+D8h]
  __int64 v95; // [rsp+1E0h] [rbp+E0h]
  UNICODE_STRING *v96; // [rsp+1E8h] [rbp+E8h]
  int v97; // [rsp+1F0h] [rbp+F0h]
  __int128 v98; // [rsp+1F8h] [rbp+F8h]
  _QWORD v99[3]; // [rsp+208h] [rbp+108h] BYREF
  int v100; // [rsp+220h] [rbp+120h]

  v73 = a3;
  LOBYTE(v3) = a1;
  v69 = 0LL;
  v66 = 0LL;
  v65 = 0LL;
  v4 = a2;
  v58 = 0LL;
  v5 = 0;
  v59 = 0;
  v6 = 0;
  v57 = 0;
  v7 = 0LL;
  v63 = 0;
  v49 = 0;
  v50[0] = 0;
  v64 = 0LL;
  memset(v99, 0, sizeof(v99));
  v100 = 0;
  v48 = 0LL;
  v52 = 0;
  v60 = 0LL;
  v68 = 0LL;
  v67 = 0LL;
  v55 = 0;
  v71 = 0LL;
  v70 = 0LL;
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
    if ( (v3 & 0x80u) != 0 && v60 )
      RtlpMuiFreeLangRegistryInfo(v60);
    *v73 = v5 + v6 + v63;
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
    ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v60);
  else
    ProcessRegistryInfo = RtlpInitializeLangRegistryInfo(&v60);
  InstallUILanguage = ProcessRegistryInfo;
  if ( ProcessRegistryInfo >= 0 )
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
        InstallUILanguage = ZwQueryInstallUILanguage();
        if ( InstallUILanguage < 0 )
        {
LABEL_97:
          if ( v58 )
          {
            ZwClose();
            v58 = 0LL;
          }
          if ( v65 )
          {
            ZwClose();
            v65 = 0LL;
          }
          if ( v66 )
          {
            ZwClose();
            v66 = 0LL;
          }
          if ( v69 )
          {
            sub_18006E310(v69);
            v69 = 0LL;
          }
          if ( v7 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v7);
          v5 = v59;
          v6 = v57;
          goto LABEL_108;
        }
        Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
        v71 = Heap;
        if ( !Heap )
        {
          InstallUILanguage = -1073741801;
          goto LABEL_97;
        }
        v53.Buffer = Heap;
        *(_DWORD *)&v53.Length = 11141120;
        if ( !RtlLCIDToCultureName(v55, (__int64)&v53) )
        {
          InstallUILanguage = -1073741811;
LABEL_93:
          if ( v71 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v71);
          if ( v68 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v68);
          goto LABEL_97;
        }
        v19 = (unsigned __int64)v53.Length >> 1;
        if ( (v12 & 4) != 0 )
        {
          InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, (unsigned __int64 *)&v67);
          if ( InstallUILanguage < 0 )
          {
            v7 = 0LL;
            goto LABEL_91;
          }
          v4 = v67;
          v3 = v12 & 0xFFF3 | 8;
        }
        InstallUILanguage = sub_1800ED364(v4, &v51, 0LL);
        if ( InstallUILanguage < 0 )
          goto LABEL_47;
        v20 = v71;
        memmove(&v71[v19 + 1], v4, 2LL * (unsigned __int16)v51 + 2);
        v7 = 0LL;
        InstallUILanguage = sub_1800EC5DC(v60, v20);
        if ( InstallUILanguage < 0 )
        {
LABEL_91:
          if ( v67 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v67);
          goto LABEL_93;
        }
        v4 = (WCHAR *)v20;
      }
      v49 = 0;
      InstallUILanguage = sub_1800ED364(v4, &v54, &v49);
      if ( InstallUILanguage < 0 )
        goto LABEL_91;
      *((_QWORD *)&v54 + 1) = v4;
      LOWORD(v54) = 2 * v54;
      WORD1(v54) = v54 + 2;
      if ( v49 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_91;
      }
      v21 = v4;
      v68 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      if ( !v68 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_47;
      }
      v22 = v49;
      v51 = 0;
      if ( v49 )
      {
        v23 = v3 & 4;
        LODWORD(v72) = v23;
        while ( 1 )
        {
          if ( v23 )
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v56) < 0 )
              goto LABEL_113;
            v24 = v56;
            if ( v56 == 4096 || v56 == 5120 )
              goto LABEL_89;
            DestinationString.Buffer = v68;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v56, (__int64)&DestinationString) )
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
            v52 += v26 + 1;
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, v21);
            if ( !RtlCultureNameToLCID(&DestinationString.Length, &v56) )
              goto LABEL_113;
            v24 = v56;
            if ( v56 == 4096 || v56 == 5120 )
              goto LABEL_89;
            Buffer = DestinationString.Buffer;
          }
          v27 = v51;
          if ( v51 )
          {
            if ( v51 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*v64 & 1) != 0 )
                goto LABEL_89;
              if ( (*v64 & 2) != 0 )
              {
                v30 = v62;
              }
              else
              {
                if ( (*v64 & 4) == 0 || v22 > 2 )
                  goto LABEL_89;
                v30 = v50;
              }
              v28 = sub_1800FAAA0(v60, (_DWORD)v64, v24, (unsigned int)v99, (__int64)v30);
            }
            else
            {
              if ( v51 != 2 )
                goto LABEL_81;
              v28 = sub_1800FAAA0(v60, (_DWORD)v64, v24, (unsigned int)v99, (__int64)v62);
            }
            if ( v28 < 0 )
            {
LABEL_113:
              InstallUILanguage = -1073741811;
LABEL_47:
              v7 = 0LL;
              goto LABEL_91;
            }
            v29 = v99;
          }
          else
          {
            v31 = v60;
            if ( (int)sub_180044C70(v60, Buffer, 1, v50) < 0 )
              goto LABEL_89;
            v29 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 24) + 16LL) + 28LL * v50[0]);
          }
          v27 = v51;
          v64 = v29;
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
          v51 = v27 + 1;
          if ( v27 + 1 >= v22 )
            break;
          v23 = v72;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v34 = v52 + 1;
        v52 = v34;
        if ( v34 > 0xFFFF )
          goto LABEL_89;
        v7 = (_WORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v34);
        v48 = v7;
        if ( !v7 )
        {
LABEL_117:
          InstallUILanguage = -1073741670;
          goto LABEL_91;
        }
        *((_QWORD *)&v54 + 1) = v7;
        v35 = 2 * v34;
        v36 = v7;
        LOWORD(v54) = v35;
        *(_QWORD *)&v72 = v35;
        v37 = 0;
        WORD1(v54) = v35;
        if ( v49 )
        {
          while ( 1 )
          {
            RtlInitUnicodeString(&DestinationString, v4);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v56) < 0 )
              break;
            DestinationString.Buffer = v68;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v56, (__int64)&DestinationString) )
              break;
            if ( (int)sub_1800EC108(v36, v52, (__int64)DestinationString.Buffer) < 0 )
              goto LABEL_117;
            v38 = -1LL;
            do
              ++v38;
            while ( v36[v38] );
            v52 += -1 - v38;
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
            if ( ++v37 >= v49 )
              goto LABEL_134;
          }
          InstallUILanguage = -1073741811;
          goto LABEL_91;
        }
LABEL_134:
        v16 = v72;
        *v36 = 0;
        v4 = v7;
      }
      else
      {
        v7 = (_WORD *)*((_QWORD *)&v54 + 1);
        v16 = WORD1(v54);
        v35 = v54;
      }
    }
    else
    {
      v7 = &unk_180129EFC;
      LODWORD(v54) = 262146;
      *((_QWORD *)&v54 + 1) = &unk_180129EFC;
      v35 = 2;
      v3 = v12;
    }
    if ( (v3 & 0x400) != 0 )
    {
      RtlInitUnicodeString(&v53, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v74 = 48;
      v75 = 0LL;
      v70 = 0LL;
      v77 = 64;
      v76 = &v53;
      v78 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_190;
      RtlInitUnicodeString(&v53, L"InstallLanguageFallback");
      v41 = -1LL;
      do
        ++v41;
      while ( v7[v41] );
      WORD1(v54) = -2 - 2 * v41 + v16;
      if ( v7 )
      {
        v42 = -1LL;
        do
          ++v42;
        while ( v7[v42] );
        v43 = &v7[v42 + 1];
      }
      else
      {
        v43 = 0LL;
      }
      *((_QWORD *)&v54 + 1) = v43;
      InstallUILanguage = sub_1800ED364(v43, &v54, &v49);
      if ( InstallUILanguage < 0 )
        goto LABEL_190;
      v35 = v54;
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_190;
      v44 = v49;
      v16 = WORD1(v54);
      v63 = v49;
    }
    else
    {
      v44 = v49;
    }
    if ( (v3 & 0x10) != 0 )
    {
      InstallUILanguage = RtlpSetInstallLanguage(v3, v4);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      v63 = v44;
    }
    if ( (v3 & 0x4000) != 0 )
    {
      InstallUILanguage = sub_18006E330(0x2000000u, 0, v14, v15, (__int64)&v69);
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      RtlInitUnicodeString(&v53, L"Control Panel\\Desktop");
      v79 = 48;
      v65 = 0LL;
      v80 = v69;
      v82 = 64;
      v81 = &v53;
      v83 = 0LL;
      InstallUILanguage = ZwOpenKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&v53, L"PreferredUILanguagesPending");
      }
      else
      {
        if ( v44 < 2 )
          goto LABEL_89;
        RtlInitUnicodeString(&v53, L"LanguageConfigurationPending");
        v45 = 0LL;
        v85 = v65;
        v86 = &v53;
        v84 = 48;
        v87 = 64;
        v88 = 0LL;
        v58 = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_90;
        RtlInitUnicodeString(&v53, v4);
        if ( v4 )
        {
          v46 = -1LL;
          do
            ++v46;
          while ( v4[v46] );
          v45 = &v4[v46 + 1];
        }
        WORD1(v54) = v16 - v53.MaximumLength;
        *((_QWORD *)&v54 + 1) = v45;
        LOWORD(v54) = v35 - v53.MaximumLength;
      }
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      v59 = v44;
    }
    if ( v58 )
    {
      ZwClose();
      v58 = 0LL;
    }
    if ( (v3 & 0x8800) == 0x8800 )
    {
      v72 = v54;
      InstallUILanguage = sub_1800EDDC4();
      v57 = v44;
    }
    if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
      goto LABEL_186;
    RtlInitUnicodeString(&v53, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    v89 = 48;
    v90 = 0LL;
    v66 = 0LL;
    v92 = 64;
    v91 = &v53;
    v93 = 0LL;
    InstallUILanguage = ZwCreateKey();
    if ( InstallUILanguage < 0 )
      goto LABEL_90;
    if ( (v3 & 0x800) != 0 )
    {
      RtlInitUnicodeString(&v53, L"PreferredUILanguages");
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage >= 0 )
      {
LABEL_185:
        v57 = v44;
LABEL_186:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo();
          if ( (v3 & 0x8410) != 0 )
            sub_18006C280();
        }
      }
LABEL_90:
      v7 = v48;
      goto LABEL_91;
    }
    if ( v44 >= 2 )
    {
      RtlInitUnicodeString(&v53, L"LanguageConfiguration");
      v95 = v66;
      v96 = &v53;
      v94 = 48;
      v97 = 64;
      v98 = 0LL;
      v58 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_90;
      RtlInitUnicodeString(&v53, v4);
      if ( v4 )
      {
        v47 = -1LL;
        do
          ++v47;
        while ( v4[v47] );
      }
      InstallUILanguage = ZwSetValueKey();
      if ( InstallUILanguage >= 0 )
        goto LABEL_185;
LABEL_190:
      v7 = v48;
      goto LABEL_91;
    }
LABEL_89:
    InstallUILanguage = -1073741811;
    goto LABEL_90;
  }
  return (unsigned int)InstallUILanguage;
}
