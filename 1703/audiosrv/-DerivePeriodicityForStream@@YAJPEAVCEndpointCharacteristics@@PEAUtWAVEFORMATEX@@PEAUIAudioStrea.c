/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEA_J@Z @ 0x180003310
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180004D20 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndp.c)
 * Callees:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180003570 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??$out_param@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@wil@@YA?AU?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@0@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@Z @ 0x1800043C8 (--$out_param@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@wil@.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18000CBA0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18000CF40 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800A1B08 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall DerivePeriodicityForStream(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        char a4,
        enum _AUDCLNT_SHAREMODE a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        struct _GUID *a10,
        bool a11,
        bool a12,
        __int64 a13,
        __int64 a14,
        __int64 *a15)
{
  const struct tWAVEFORMATEX *v15; // r10
  int v16; // r15d
  __int64 v17; // r8
  struct _GUID v18; // xmm0
  int v19; // r9d
  int v20; // edx
  LPVOID v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rax
  int v24; // edi
  __int64 i; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // r13
  __int64 v31; // r14
  unsigned int v32; // ebx
  unsigned int v33; // r12d
  unsigned int v34; // esi
  unsigned int v35; // edi
  struct tWAVEFORMATEX *v36; // r13
  _QWORD *v38; // r11
  __int64 v39; // r10
  int v40; // edx
  int v41; // r11d
  __int64 v42; // rbx
  __int64 v43; // r9
  __int64 v44; // r8
  signed int v45; // r10d
  double v46; // xmm6_8
  unsigned int v47; // r14d
  __int64 v48; // rdx
  unsigned int nSamplesPerSec; // r9d
  unsigned int v50; // r14d
  unsigned int v51; // edx
  unsigned int v52; // r8d
  unsigned int v53; // r13d
  unsigned int v54; // edx
  unsigned int v55; // r8d
  unsigned int v56; // edx
  unsigned int v57; // r8d
  unsigned int v58; // eax
  unsigned int v59; // r11d
  double v60; // xmm4_8
  int v61; // r9d
  double v62; // xmm5_8
  unsigned int v63; // ecx
  __int64 v64; // rax
  struct CEndpointCharacteristics *v65; // rbx
  int (*v66)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int MixFormat; // edi
  __int64 v68; // rsi
  _QWORD *v69; // r14
  void *v70; // rcx
  __int64 v71; // rax
  struct _GUID *v72; // rsi
  __int64 v73; // r10
  __int64 v74; // r9
  __int64 v75; // r8
  void *v76; // rsi
  void **v77; // r14
  void *v78; // rcx
  void *v79; // rsi
  void **v80; // r14
  void *v81; // rcx
  void *v82; // rsi
  void **v83; // r14
  void *v84; // rcx
  void *v85; // rsi
  void **v86; // r14
  void *v87; // rcx
  int SharedModeEnginePeriodicity; // eax
  __int64 v89; // rax
  int pdwType; // [rsp+20h] [rbp-E0h]
  int pdwTypea; // [rsp+20h] [rbp-E0h]
  int pdwTypeb; // [rsp+20h] [rbp-E0h]
  int pdwTypec; // [rsp+20h] [rbp-E0h]
  int pdwTyped; // [rsp+20h] [rbp-E0h]
  char v95; // [rsp+60h] [rbp-A0h]
  int pvData; // [rsp+64h] [rbp-9Ch] BYREF
  struct tWAVEFORMATEX *v97; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v98; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID *v99; // [rsp+78h] [rbp-88h]
  DWORD pcbData[2]; // [rsp+80h] [rbp-80h] BYREF
  LPVOID pv; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v102; // [rsp+90h] [rbp-70h] BYREF
  struct CEndpointCharacteristics *v103; // [rsp+98h] [rbp-68h]
  struct _GUID v104; // [rsp+A0h] [rbp-60h] BYREF
  char v105; // [rsp+B0h] [rbp-50h]
  struct tWAVEFORMATEX *v106; // [rsp+C0h] [rbp-40h]
  struct _GUID v107; // [rsp+D0h] [rbp-30h] BYREF
  void **v108; // [rsp+E0h] [rbp-20h] BYREF
  void *v109; // [rsp+E8h] [rbp-18h]
  char v110; // [rsp+F0h] [rbp-10h]
  void **v111; // [rsp+F8h] [rbp-8h] BYREF
  void *v112; // [rsp+100h] [rbp+0h]
  char v113; // [rsp+108h] [rbp+8h]
  void **v114; // [rsp+110h] [rbp+10h] BYREF
  void *v115; // [rsp+118h] [rbp+18h]
  char v116; // [rsp+120h] [rbp+20h]
  void **v117; // [rsp+128h] [rbp+28h] BYREF
  void *v118; // [rsp+130h] [rbp+30h]
  char v119; // [rsp+138h] [rbp+38h]
  __int64 v120; // [rsp+140h] [rbp+40h]
  struct _GUID v121; // [rsp+150h] [rbp+50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  v120 = -2LL;
  *(_QWORD *)&v104.Data1 = a3;
  v106 = a2;
  v103 = a1;
  v15 = a7;
  v98 = a7;
  v99 = a8;
  *(_QWORD *)&v107.Data1 = a10;
  v97 = (struct tWAVEFORMATEX *)a15;
  *a15 = a14;
  if ( a5 )
    return 0LL;
  if ( (a4 & 1) != 0 )
  {
    if ( !a14 )
      *a15 = a13;
    return 0LL;
  }
  v16 = 0;
  pcbData[0] = a11;
  if ( a6 == eKeywordDetectorConnector )
    v17 = 192LL;
  else
    v17 = 184LL;
  pv = (LPVOID)v17;
  v95 = 0;
  v18 = *a8;
  v121 = *a8;
  v19 = 0;
  v20 = *((_DWORD *)a1 + 6 * a6 + 352);
  if ( v20 > 0 )
  {
    while ( 1 )
    {
      v38 = (_QWORD *)(*((_QWORD *)a1 + 3 * a6 + 174) + 16LL * v19);
      v39 = *v38 - *(_QWORD *)&v121.Data1;
      if ( *v38 == *(_QWORD *)&v121.Data1 )
        v39 = v38[1] - *(_QWORD *)v121.Data4;
      if ( !v39 )
        break;
      if ( ++v19 >= v20 )
        goto LABEL_49;
    }
    if ( v19 != -1 )
    {
      v121 = v18;
      v40 = 0;
      v41 = *((_DWORD *)a1 + 6 * a6 + 352);
      if ( v41 <= 0 )
        goto LABEL_48;
      v42 = *((_QWORD *)a1 + 3 * a6 + 174);
      while ( 1 )
      {
        v43 = *(_QWORD *)(v42 + 16LL * v40) - *(_QWORD *)&v121.Data1;
        if ( !v43 )
          v43 = *(_QWORD *)(v42 + 16LL * v40 + 8) - *(_QWORD *)v121.Data4;
        if ( !v43 )
          break;
        if ( ++v40 >= v41 )
          goto LABEL_48;
      }
      if ( v40 == -1 )
      {
LABEL_48:
        v18 = GUID_00000000_0000_0000_0000_000000000000;
      }
      else
      {
        if ( v40 < 0 || v40 >= v41 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18005DA95LL);
        }
        v18 = *(struct _GUID *)(*((_QWORD *)a1 + 3 * a6 + 175) + 16LL * v40);
      }
    }
LABEL_49:
    v15 = (const struct tWAVEFORMATEX *)v98;
  }
  v121 = v18;
  v22 = *(_QWORD *)v18.Data4;
  v21 = (LPVOID)*(_OWORD *)&v18;
  v102 = *(LPVOID *)&v18.Data1;
  v23 = *(_QWORD *)&v18.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v18.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v23 = *(_QWORD *)v18.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v23 )
  {
    v121 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v22 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    v21 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v102 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  v24 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v26 = *(_QWORD *)((char *)a1 + v17);
    if ( v24 >= *(_DWORD *)(v26 + 8) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        LOBYTE(v16) = v95 != 0;
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11LL,
          &WPP_901a5e9bcaaa38e898dae42cff5cb88c_Traceguids,
          (unsigned int)(v16 - 2005139366));
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x483,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x88890008LL,
        pdwType);
      return 2290679816LL;
    }
    if ( i < 0 || v24 >= *(_DWORD *)(v26 + 8) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18005E129LL);
    }
    v27 = *(_QWORD *)(i + *(_QWORD *)v26);
    v28 = *(_QWORD *)v27 - (_QWORD)v21;
    if ( *(LPVOID *)v27 == v21 )
      v28 = *(_QWORD *)(v27 + 8) - v22;
    if ( !v28 )
    {
      v95 = 1;
      v29 = 0;
      pvData = 0;
      if ( *(int *)(v27 + 24) > 0 )
        break;
    }
LABEL_28:
    ++v24;
  }
  v30 = 0LL;
  while ( 1 )
  {
    if ( v30 < 0 || v29 >= *(_DWORD *)(v27 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18005E113LL);
    }
    v31 = *(_QWORD *)(*(_QWORD *)(v27 + 16) + v30);
    if ( (unsigned int)CompareWaveFormat(v15, *(const struct tWAVEFORMATEX **)v31) )
      break;
    v29 = pvData + 1;
    pvData = v29;
    v30 += 8LL;
    v15 = (const struct tWAVEFORMATEX *)v98;
    if ( v29 >= *(_DWORD *)(v27 + 24) )
    {
      a1 = v103;
      v21 = v102;
      v17 = (__int64)pv;
      goto LABEL_28;
    }
  }
  v32 = *(_DWORD *)(v31 + 12);
  v33 = *(_DWORD *)(v31 + 8);
  v34 = *(_DWORD *)(v31 + 16);
  if ( pcbData[0] )
    v35 = *(_DWORD *)(v31 + 24);
  else
    v35 = *(_DWORD *)(v31 + 20);
  if ( !a14 )
  {
    v36 = v97;
    *(_QWORD *)&v97->wFormatTag = (unsigned int)(int)((double)(int)v32 * 10000000.0 / (double)*((int *)v98 + 1) + 0.5);
    goto LABEL_26;
  }
  pvData = 0;
  pcbData[0] = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    pcbData);
  v45 = *((_DWORD *)v98 + 1);
  v46 = (double)v45;
  v47 = (int)((double)(int)a14 * (double)v45 / 10000000.0 + 0.5);
  if ( pvData )
  {
    v36 = v97;
    goto LABEL_26;
  }
  if ( v47 >= v34 && v47 <= v35 )
  {
    v48 = v47 % v33;
    if ( !(v47 % v33) || v47 == v32 || v47 == v34 || v47 == v35 )
    {
      v36 = v97;
      goto LABEL_77;
    }
  }
  nSamplesPerSec = v106->nSamplesPerSec;
  if ( nSamplesPerSec == v45 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
  v50 = TranslateFrameCountBetweenSamplingRates(v32, v45, nSamplesPerSec);
  v53 = TranslateFrameCountBetweenSamplingRates(v33, v51, v52);
  TranslateFrameCountBetweenSamplingRates(v34, v54, v55);
  v58 = TranslateFrameCountBetweenSamplingRates(v35, v56, v57);
  v44 = v58;
  v63 = (int)((double)v61 * v62 / 10000000.0 + v60);
  if ( v63 < v59 || v63 > v58 )
    goto LABEL_80;
  v48 = v63 % v53;
  if ( !(v63 % v53) )
    goto LABEL_68;
  if ( v63 == v50 )
    goto LABEL_71;
  if ( v63 != v59 && v63 != v58 )
  {
LABEL_80:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
LABEL_68:
  if ( v63 == v50 )
  {
LABEL_71:
    v47 = v32;
    goto LABEL_75;
  }
  if ( v63 == v59 )
  {
    v47 = v34;
  }
  else if ( v63 == v58 )
  {
    v47 = v35;
  }
  else
  {
    v47 = v33 * (v63 / v53);
  }
LABEL_75:
  v36 = v97;
  *(_QWORD *)&v97->wFormatTag = (unsigned int)(int)((double)(int)v47 * 10000000.0 / v46 + v60);
LABEL_77:
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)&v104.Data1 + 144LL))(
         *(_QWORD *)&v104.Data1,
         v48,
         v44)
    && v47 < v32 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4C6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
LABEL_26:
  if ( !a12 )
    return 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v102 = 0LL;
  pv = 0LL;
  *(_QWORD *)pcbData = 0LL;
  v64 = wil::out_param<std::unique_ptr<SaDeviceParams>>(&v104, &v97);
  v121 = *a9;
  v65 = v103;
  MixFormat = CEndpointCharacteristics::GetMixFormat(v103, a6, &v121, v66, (struct tWAVEFORMATEX **)(v64 + 8));
  if ( v105 )
  {
    v68 = *(_QWORD *)v104.Data4;
    v69 = *(_QWORD **)&v104.Data1;
    v70 = **(void ***)&v104.Data1;
    if ( *(_QWORD *)v104.Data4 != **(_QWORD **)&v104.Data1 )
    {
      if ( v70 )
        CoTaskMemFree(v70);
      *v69 = v68;
    }
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D0,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)MixFormat,
      pdwTypeb);
    goto LABEL_119;
  }
  wil::out_param<std::unique_ptr<SaDeviceParams>>(&v117, &v98);
  wil::out_param<std::unique_ptr<SaDeviceParams>>(&v114, pcbData);
  wil::out_param<std::unique_ptr<SaDeviceParams>>(&v111, &pv);
  v71 = wil::out_param<std::unique_ptr<SaDeviceParams>>(&v108, &v102);
  v72 = v99;
  v121 = *v99;
  v107 = *(struct _GUID *)*(_QWORD *)&v107.Data1;
  v104 = *a9;
  MixFormat = DeriveDeviceGraphFormatsForStream(
                v65,
                0,
                a6,
                AUDCLNT_SHAREMODE_SHARED,
                &v104,
                &v107,
                &v121,
                v97,
                (struct tWAVEFORMATEX **)(v71 + 8),
                (struct tWAVEFORMATEX **)(v75 + 8),
                (struct tWAVEFORMATEX **)(v74 + 8),
                (struct tWAVEFORMATEX **)(v73 + 8));
  if ( v110 )
  {
    v76 = v109;
    v77 = v108;
    v78 = *v108;
    if ( v109 != *v108 )
    {
      if ( v78 )
        CoTaskMemFree(v78);
      *v77 = v76;
    }
    v72 = v99;
  }
  if ( v113 )
  {
    v79 = v112;
    v80 = v111;
    v81 = *v111;
    if ( v112 != *v111 )
    {
      if ( v81 )
        CoTaskMemFree(v81);
      *v80 = v79;
    }
    v72 = v99;
  }
  if ( v116 )
  {
    v82 = v115;
    v83 = v114;
    v84 = *v114;
    if ( v115 != *v114 )
    {
      if ( v84 )
        CoTaskMemFree(v84);
      *v83 = v82;
    }
    v72 = v99;
  }
  if ( v119 )
  {
    v85 = v118;
    v86 = v117;
    v87 = *v117;
    if ( v118 != *v117 )
    {
      if ( v87 )
        CoTaskMemFree(v87);
      *v86 = v85;
    }
    v72 = v99;
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D1,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)MixFormat,
      pdwTypec);
    goto LABEL_119;
  }
  pvData = 0;
  v121 = *v72;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  v65,
                                  (unsigned int)a6,
                                  v98,
                                  &v121,
                                  0,
                                  &pvData,
                                  0LL,
                                  0LL,
                                  0LL);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x4D4,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)SharedModeEnginePeriodicity,
      pdwTyped);
    goto LABEL_119;
  }
  v89 = (unsigned int)(int)((double)pvData * 10000000.0 / (double)*((int *)v98 + 1) + 0.5);
  if ( *(_QWORD *)&v36->wFormatTag - v89 <= 5 * v89 / 100 )
  {
    if ( *(_QWORD *)pcbData )
      CoTaskMemFree(*(LPVOID *)pcbData);
    if ( pv )
      CoTaskMemFree(pv);
    if ( v102 )
      CoTaskMemFree(v102);
    if ( v98 )
      CoTaskMemFree(v98);
    if ( v97 )
      CoTaskMemFree(v97);
    return 0LL;
  }
  MixFormat = -2004287448;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4D7,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x88890028LL,
    pdwTyped);
LABEL_119:
  if ( *(_QWORD *)pcbData )
    CoTaskMemFree(*(LPVOID *)pcbData);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v102 )
    CoTaskMemFree(v102);
  if ( v98 )
    CoTaskMemFree(v98);
  if ( v97 )
    CoTaskMemFree(v97);
  return (unsigned int)MixFormat;
}
