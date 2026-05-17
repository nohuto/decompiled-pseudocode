/*
 * XREFs of RtlpSetUserPreferredUILanguages @ 0x1800E9D60
 * Callers:
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     sub_180031068 @ 0x180031068 (sub_180031068.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180034D10 (RtlpCreateProcessRegistryInfo.c)
 *     sub_1800352EC @ 0x1800352EC (sub_1800352EC.c)
 *     RtlLCIDToCultureName @ 0x1800361F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006E740 @ 0x18006E740 (sub_18006E740.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006E8F0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006E920 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18006F918 @ 0x18006F918 (sub_18006F918.c)
 *     sub_18006F938 @ 0x18006F938 (sub_18006F938.c)
 *     RtlUnicodeStringToInteger @ 0x180074BF0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009AD00 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009B6B0 (ZwSetValueKey.c)
 *     ZwGetMUIRegistryInfo @ 0x18009C890 (ZwGetMUIRegistryInfo.c)
 *     ZwQueryInstallUILanguage @ 0x18009D3B0 (ZwQueryInstallUILanguage.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E80F8 @ 0x1800E80F8 (sub_1800E80F8.c)
 *     sub_1800E85D8 @ 0x1800E85D8 (sub_1800E85D8.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800E8E80 (RtlpConvertLCIDsToCultureNames.c)
 *     sub_1800E9468 @ 0x1800E9468 (sub_1800E9468.c)
 *     RtlpSetInstallLanguage @ 0x1800E9630 (RtlpSetInstallLanguage.c)
 *     sub_1800E9B84 @ 0x1800E9B84 (sub_1800E9B84.c)
 *     sub_1800F8D2C @ 0x1800F8D2C (sub_1800F8D2C.c)
 */

__int64 __fastcall RtlpSetUserPreferredUILanguages(int a1, __int16 *a2, _DWORD *a3)
{
  __int16 v3; // di
  __int16 *v4; // r12
  unsigned int v5; // r15d
  int v6; // r14d
  unsigned int v7; // r13d
  int InstallUILanguage; // ebx
  int v9; // eax
  __int16 v10; // dx
  __int16 v11; // cx
  __int16 v12; // si
  int ProcessRegistryInfo; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  wchar_t *Heap; // rax
  const WCHAR *v18; // r13
  unsigned __int64 v19; // r15
  const WCHAR *v20; // r14
  int v21; // esi
  unsigned __int16 v22; // si
  wchar_t *Buffer; // rdx
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  _QWORD *v27; // rax
  _WORD *v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // rax
  unsigned int v32; // esi
  __int64 v33; // rax
  int v34; // r13d
  __int16 v35; // r15
  __int16 *v36; // r14
  _WORD *v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int16 v41; // si
  __int64 v42; // rcx
  __int64 v43; // rax
  __int16 *v44; // rcx
  __int64 v45; // rax
  bool v46; // sf
  __int64 v47; // rax
  unsigned int v48; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v49[2]; // [rsp+44h] [rbp-BCh] BYREF
  int v50; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v51; // [rsp+4Ch] [rbp-B4h]
  UNICODE_STRING v52; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v54; // [rsp+70h] [rbp-90h]
  unsigned int v55; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v56; // [rsp+78h] [rbp-88h]
  __int64 v57; // [rsp+80h] [rbp-80h]
  unsigned int v58; // [rsp+88h] [rbp-78h]
  unsigned __int64 v59; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v60[4]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v61; // [rsp+9Ch] [rbp-64h]
  _BYTE *v62; // [rsp+A0h] [rbp-60h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h]
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int16 *v66; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *v67; // [rsp+D0h] [rbp-30h]
  __int64 v68; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-20h]
  wchar_t *v70; // [rsp+E8h] [rbp-18h]
  __int128 v71; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v72; // [rsp+100h] [rbp+0h]
  _DWORD *v73; // [rsp+108h] [rbp+8h]
  int v74; // [rsp+110h] [rbp+10h]
  __int64 v75; // [rsp+118h] [rbp+18h]
  UNICODE_STRING *v76; // [rsp+120h] [rbp+20h]
  int v77; // [rsp+128h] [rbp+28h]
  __int128 v78; // [rsp+130h] [rbp+30h]
  int v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  UNICODE_STRING *v81; // [rsp+150h] [rbp+50h]
  int v82; // [rsp+158h] [rbp+58h]
  __int128 v83; // [rsp+160h] [rbp+60h]
  int v84; // [rsp+170h] [rbp+70h]
  __int64 v85; // [rsp+178h] [rbp+78h]
  UNICODE_STRING *v86; // [rsp+180h] [rbp+80h]
  int v87; // [rsp+188h] [rbp+88h]
  __int128 v88; // [rsp+190h] [rbp+90h]
  int v89; // [rsp+1A0h] [rbp+A0h]
  __int64 v90; // [rsp+1A8h] [rbp+A8h]
  UNICODE_STRING *v91; // [rsp+1B0h] [rbp+B0h]
  int v92; // [rsp+1B8h] [rbp+B8h]
  __int128 v93; // [rsp+1C0h] [rbp+C0h]
  int v94; // [rsp+1D0h] [rbp+D0h]
  __int64 v95; // [rsp+1D8h] [rbp+D8h]
  UNICODE_STRING *v96; // [rsp+1E0h] [rbp+E0h]
  int v97; // [rsp+1E8h] [rbp+E8h]
  __int128 v98; // [rsp+1F0h] [rbp+F0h]
  _QWORD v99[3]; // [rsp+200h] [rbp+100h] BYREF
  int v100; // [rsp+218h] [rbp+118h]

  v73 = a3;
  LOBYTE(v3) = a1;
  v68 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  v4 = a2;
  v57 = 0LL;
  v5 = 0;
  v58 = 0;
  v6 = 0;
  v56 = 0;
  v7 = 0;
  v61 = 0;
  v48 = 0;
  v49[0] = 0;
  v62 = 0LL;
  memset(v99, 0, sizeof(v99));
  v100 = 0;
  v72 = 0LL;
  v51 = 0;
  v59 = 0LL;
  v67 = 0LL;
  v66 = 0LL;
  v54 = 0;
  v70 = 0LL;
  v69 = 0LL;
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
LABEL_103:
    if ( (v3 & 0x80u) != 0 && v59 )
      RtlpMuiFreeLangRegistryInfo(v59);
    *v73 = v5 + v6 + v61;
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
    ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v59);
  else
    ProcessRegistryInfo = RtlpInitializeLangRegistryInfo(&v59);
  InstallUILanguage = ProcessRegistryInfo;
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( !v4 )
    {
      v35 = 2;
      LODWORD(v53) = 262146;
      v36 = (__int16 *)&unk_180129E5C;
      v3 = v12;
      *((_QWORD *)&v53 + 1) = &unk_180129E5C;
      v41 = 4;
      goto LABEL_133;
    }
    v16 = 4LL;
    if ( (v12 & 4) == 0 )
      v16 = 85LL;
    if ( (int)sub_180031068(v4, v16) < 0 )
      DbgPrint(
        "*** ASSERT FAILED: Input parameter LanguagesBuffer for function RtlpSetPreferredUILanguages is not a valid multi-string!\n");
    v3 = v12;
    if ( (v12 & 0x400) != 0 )
    {
      InstallUILanguage = ZwQueryInstallUILanguage();
      if ( InstallUILanguage < 0 )
      {
LABEL_92:
        if ( v57 )
        {
          ZwClose();
          v57 = 0LL;
        }
        if ( v64 )
        {
          ZwClose();
          v64 = 0LL;
        }
        if ( v65 )
        {
          ZwClose();
          v65 = 0LL;
        }
        if ( v68 )
        {
          sub_18006F918(v68);
          v68 = 0LL;
        }
        if ( v72 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v72);
        v5 = v58;
        v6 = v56;
        goto LABEL_103;
      }
      Heap = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 522LL);
      v70 = Heap;
      v18 = Heap;
      if ( !Heap )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_92;
      }
      v52.Buffer = Heap;
      *(_DWORD *)&v52.Length = 11141120;
      if ( !RtlLCIDToCultureName(v54, (__int64)&v52) )
      {
        InstallUILanguage = -1073741811;
LABEL_88:
        if ( v18 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v18);
        if ( v67 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v67);
        goto LABEL_92;
      }
      v19 = (unsigned __int64)v52.Length >> 1;
      if ( (v12 & 4) != 0 )
      {
        InstallUILanguage = RtlpConvertLCIDsToCultureNames(v4, (unsigned __int64 *)&v66);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v4 = v66;
        v3 = v12 & 0xFFF3 | 8;
      }
      InstallUILanguage = sub_1800E9468(v4, &v50, 0LL);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      memmove((void *)&v18[v19 + 1], v4, 2LL * ((unsigned int)(unsigned __int16)v50 + 1));
      InstallUILanguage = sub_1800E85D8(v59, v18);
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      v4 = (__int16 *)v18;
    }
    v48 = 0;
    InstallUILanguage = sub_1800E9468(v4, &v53, &v48);
    if ( InstallUILanguage >= 0 )
    {
      *((_QWORD *)&v53 + 1) = v4;
      LOWORD(v53) = 2 * v53;
      WORD1(v53) = v53 + 2;
      if ( v48 - 1 > 2 )
      {
        InstallUILanguage = -1073741811;
        goto LABEL_85;
      }
      v20 = (const WCHAR *)v4;
      v67 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
      if ( !v67 )
      {
        InstallUILanguage = -1073741801;
        goto LABEL_85;
      }
      v7 = v48;
      v50 = 0;
      if ( v48 )
      {
        v21 = v3 & 4;
        LODWORD(v71) = v21;
        while ( 1 )
        {
          RtlInitUnicodeString(&DestinationString, v20);
          if ( v21 )
          {
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v55) < 0 )
              goto LABEL_84;
            v22 = v55;
            if ( ((v55 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            DestinationString.Buffer = v67;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v55, (__int64)&DestinationString) )
              goto LABEL_84;
            Buffer = DestinationString.Buffer;
            v24 = -1LL;
            do
              ++v24;
            while ( DestinationString.Buffer[v24] );
            v51 += v24 + 1;
          }
          else
          {
            if ( !RtlCultureNameToLCID(&DestinationString.Length, &v55) )
              goto LABEL_84;
            v22 = v55;
            if ( ((v55 - 4096) & 0xFFFFFBFF) == 0 )
              goto LABEL_84;
            Buffer = DestinationString.Buffer;
          }
          v25 = v50;
          if ( v50 )
          {
            if ( v50 == 1 )
            {
              if ( (v3 & 0x800) != 0 || (v3 & 0x10) != 0 || (*v62 & 1) != 0 )
                goto LABEL_84;
              if ( (*v62 & 2) != 0 )
              {
                v28 = v60;
              }
              else
              {
                if ( (*v62 & 4) == 0 || v7 > 2 )
                  goto LABEL_84;
                v28 = v49;
              }
              v26 = sub_1800F8D2C(v59, (_DWORD)v62, v22, (unsigned int)v99, (__int64)v28);
            }
            else
            {
              if ( v50 != 2 )
                goto LABEL_77;
              v26 = sub_1800F8D2C(v59, (_DWORD)v62, v22, (unsigned int)v99, (__int64)v60);
            }
            if ( v26 < 0 )
              goto LABEL_84;
            v27 = v99;
          }
          else
          {
            v29 = v59;
            if ( (int)sub_1800352EC(v59, Buffer, 1, v49) < 0 )
              goto LABEL_84;
            v27 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 24) + 16LL) + 28LL * v49[0]);
          }
          v25 = v50;
          v62 = v27;
LABEL_77:
          if ( v20 )
          {
            v30 = -1LL;
            do
              ++v30;
            while ( v20[v30] );
            v20 += v30 + 1;
          }
          else
          {
            v20 = 0LL;
          }
          v50 = v25 + 1;
          if ( v25 + 1 >= v7 )
            break;
          v21 = v71;
        }
      }
      if ( (v3 & 0x14) == 4 )
      {
        v32 = v51 + 1;
        v51 = v32;
        if ( v32 > 0xFFFF )
          goto LABEL_84;
        v33 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2LL * v32);
        v34 = 0;
        v72 = v33;
        if ( !v33 )
        {
          InstallUILanguage = -1073741670;
          goto LABEL_85;
        }
        *((_QWORD *)&v53 + 1) = v33;
        v35 = 2 * v32;
        v36 = (__int16 *)v33;
        LOWORD(v53) = 2 * v32;
        *(_QWORD *)&v71 = (unsigned __int16)(2 * v32);
        v37 = (_WORD *)v33;
        WORD1(v53) = v71;
        if ( v48 )
        {
          do
          {
            RtlInitUnicodeString(&DestinationString, (PCWSTR)v4);
            if ( (int)RtlUnicodeStringToInteger(&DestinationString.Length, 0x10u, (int *)&v55) < 0 )
              goto LABEL_84;
            DestinationString.Buffer = v67;
            *(_DWORD *)&DestinationString.Length = 11141120;
            if ( !RtlLCIDToCultureName(v55, (__int64)&DestinationString) )
              goto LABEL_84;
            if ( (int)sub_1800E80F8(v37, v51, (__int64)DestinationString.Buffer) < 0 )
            {
              InstallUILanguage = -1073741670;
              goto LABEL_85;
            }
            v38 = -1LL;
            do
              ++v38;
            while ( v37[v38] );
            v51 += -1 - v38;
            if ( v37 )
            {
              v39 = -1LL;
              do
                ++v39;
              while ( v37[v39] );
              v37 += v39 + 1;
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
          }
          while ( ++v34 < v48 );
        }
        v7 = v48;
        *v37 = 0;
        v4 = v36;
        v41 = v71;
      }
      else
      {
        v36 = (__int16 *)*((_QWORD *)&v53 + 1);
        v41 = WORD1(v53);
        v35 = v53;
      }
LABEL_133:
      if ( (v3 & 0x400) != 0 )
      {
        RtlInitUnicodeString(&v52, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
        v74 = 48;
        v75 = 0LL;
        v69 = 0LL;
        v77 = 64;
        v76 = &v52;
        v78 = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&v52, L"InstallLanguageFallback");
        v42 = -1LL;
        do
          ++v42;
        while ( v36[v42] );
        WORD1(v53) = -2 - 2 * v42 + v41;
        if ( v36 )
        {
          v43 = -1LL;
          do
            ++v43;
          while ( v36[v43] );
          v44 = &v36[v43 + 1];
        }
        else
        {
          v44 = 0LL;
        }
        *((_QWORD *)&v53 + 1) = v44;
        InstallUILanguage = sub_1800E9468(v44, &v53, &v48);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v35 = v53;
        InstallUILanguage = ZwSetValueKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v7 = v48;
        v41 = WORD1(v53);
        v61 = v48;
      }
      if ( (v3 & 0x10) != 0 )
      {
        InstallUILanguage = RtlpSetInstallLanguage(v3, (const WCHAR *)v4);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v61 = v7;
      }
      if ( (v3 & 0x4000) != 0 )
      {
        InstallUILanguage = sub_18006F938(0x2000000u, 0, v14, v15, (__int64)&v68);
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&v52, L"Control Panel\\Desktop");
        v79 = 48;
        v64 = 0LL;
        v80 = v68;
        v82 = 64;
        v81 = &v52;
        v83 = 0LL;
        InstallUILanguage = ZwOpenKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        if ( (v3 & 0x800) != 0 )
        {
          RtlInitUnicodeString(&v52, L"PreferredUILanguagesPending");
        }
        else
        {
          if ( v7 < 2 )
            goto LABEL_84;
          RtlInitUnicodeString(&v52, L"LanguageConfigurationPending");
          v85 = v64;
          v84 = 48;
          v86 = &v52;
          v87 = 64;
          v88 = 0LL;
          v57 = 0LL;
          InstallUILanguage = ZwCreateKey();
          if ( InstallUILanguage < 0 )
            goto LABEL_85;
          RtlInitUnicodeString(&v52, (PCWSTR)v4);
          if ( v4 )
          {
            v45 = -1LL;
            do
              ++v45;
            while ( v4[v45] );
            *((_QWORD *)&v53 + 1) = &v4[v45 + 1];
          }
          else
          {
            *((_QWORD *)&v53 + 1) = 0LL;
          }
          WORD1(v53) = v41 - v52.MaximumLength;
          LOWORD(v53) = v35 - v52.MaximumLength;
        }
        InstallUILanguage = ZwSetValueKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        v58 = v7;
      }
      if ( v57 )
      {
        ZwClose();
        v57 = 0LL;
      }
      if ( (v3 & 0x8800) == 0x8800 )
      {
        v71 = v53;
        InstallUILanguage = sub_1800E9B84();
        v56 = v7;
      }
      if ( (v3 & 0x2000) == 0 && (v3 & 0x9000) != 0x9000 )
        goto LABEL_180;
      RtlInitUnicodeString(&v52, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      v89 = 48;
      v90 = 0LL;
      v65 = 0LL;
      v92 = 64;
      v91 = &v52;
      v93 = 0LL;
      InstallUILanguage = ZwCreateKey();
      if ( InstallUILanguage < 0 )
        goto LABEL_85;
      if ( (v3 & 0x800) != 0 )
      {
        RtlInitUnicodeString(&v52, L"PreferredUILanguages");
        InstallUILanguage = ZwSetValueKey();
        v46 = InstallUILanguage < 0;
LABEL_178:
        if ( v46 )
          goto LABEL_85;
        v56 = v7;
LABEL_180:
        if ( InstallUILanguage >= 0 && (v3 & 0xE410) != 0 )
        {
          ZwGetMUIRegistryInfo();
          if ( (v3 & 0x8410) != 0 )
            sub_18006E740();
        }
        goto LABEL_85;
      }
      if ( v7 >= 2 )
      {
        RtlInitUnicodeString(&v52, L"LanguageConfiguration");
        v95 = v65;
        v94 = 48;
        v96 = &v52;
        v97 = 64;
        v98 = 0LL;
        v57 = 0LL;
        InstallUILanguage = ZwCreateKey();
        if ( InstallUILanguage < 0 )
          goto LABEL_85;
        RtlInitUnicodeString(&v52, (PCWSTR)v4);
        if ( v4 )
        {
          v47 = -1LL;
          do
            ++v47;
          while ( v4[v47] );
        }
        InstallUILanguage = ZwSetValueKey();
        v46 = InstallUILanguage < 0;
        goto LABEL_178;
      }
LABEL_84:
      InstallUILanguage = -1073741811;
    }
LABEL_85:
    if ( v66 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v66);
    v18 = v70;
    goto LABEL_88;
  }
  return (unsigned int)InstallUILanguage;
}
