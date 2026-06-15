/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180037650
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001FFE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHPEAVCEn.c)
 * Callees:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004A07C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800657A9 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x1800C2EB8 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DerivePeriodicityForStream(
        struct CEndpointCharacteristics *a1,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
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
        struct IProcessSubmixProxy *a15,
        __int64 *a16)
{
  __int64 v17; // rcx
  struct _GUID v18; // xmm0
  int v19; // r8d
  int v20; // eax
  LPVOID v21; // rdx
  __int64 v22; // rax
  unsigned __int64 wBitsPerSample; // r9
  _DWORD *v24; // rax
  char *i; // r8
  __int64 v26; // rbx
  __int64 v27; // rax
  signed int v28; // eax
  __int64 v29; // r14
  __int16 **v30; // rdi
  unsigned __int16 *v31; // rcx
  WORD wFormatTag; // dx
  WORD cbSize; // ax
  int v34; // r10d
  __int16 v35; // r11
  unsigned __int16 v36; // dx
  unsigned __int16 v37; // ax
  __int16 v38; // si
  __int16 v39; // dx
  int v40; // ecx
  __int16 v41; // ax
  __int64 v42; // rax
  unsigned int v43; // ebx
  unsigned int v44; // r14d
  unsigned int v45; // esi
  unsigned int v46; // edi
  _QWORD *v47; // r13
  __int64 v49; // rax
  _QWORD *v50; // r10
  __int64 v51; // r9
  int v52; // r8d
  _QWORD *v53; // r11
  __int64 v54; // r10
  __int64 v55; // rax
  __int64 v56; // rax
  WORD nChannels; // r8
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int16 v60; // r8
  __int64 v61; // r8
  double v62; // xmm8_8
  unsigned int v63; // r15d
  __int64 v64; // rdx
  unsigned int nSamplesPerSec; // r8d
  unsigned int v66; // edx
  unsigned int v67; // r8d
  unsigned int v68; // r15d
  unsigned int v69; // edx
  unsigned int v70; // r8d
  unsigned int v71; // edx
  unsigned int v72; // r8d
  unsigned int v73; // eax
  unsigned int v74; // r10d
  int v75; // r11d
  double v76; // xmm5_8
  unsigned int v77; // ecx
  struct CEndpointCharacteristics *v78; // rdi
  int MixFormat; // ebx
  struct tWAVEFORMATEX **v80; // rdi
  struct tWAVEFORMATEX *v81; // rcx
  struct tWAVEFORMATEX *v82; // rsi
  __int64 v83; // rdx
  struct _GUID *v84; // r15
  struct tWAVEFORMATEX **v85; // rdi
  struct tWAVEFORMATEX *v86; // rcx
  struct tWAVEFORMATEX *v87; // rsi
  _QWORD *v88; // rdi
  struct tWAVEFORMATEX *v89; // rcx
  struct tWAVEFORMATEX *v90; // rsi
  __int128 v91; // rdi
  void *v92; // rcx
  __int128 v93; // rdi
  void *v94; // rcx
  int SharedModeEnginePeriodicity; // eax
  unsigned __int64 v96; // r9
  __int64 v97; // rax
  int pdwType; // [rsp+28h] [rbp-E0h]
  int pdwTypea; // [rsp+28h] [rbp-E0h]
  int pdwTypeb; // [rsp+28h] [rbp-E0h]
  int pdwTypec; // [rsp+28h] [rbp-E0h]
  __int64 pvData; // [rsp+68h] [rbp-A0h] BYREF
  struct CEndpointCharacteristics *v103; // [rsp+70h] [rbp-98h] BYREF
  LPVOID v104; // [rsp+78h] [rbp-90h] BYREF
  DWORD pcbData[2]; // [rsp+80h] [rbp-88h] BYREF
  LPVOID v106; // [rsp+88h] [rbp-80h] BYREF
  LPVOID v107; // [rsp+90h] [rbp-78h] BYREF
  LPVOID pv; // [rsp+98h] [rbp-70h] BYREF
  struct tWAVEFORMATEX **v109; // [rsp+A0h] [rbp-68h]
  struct tWAVEFORMATEX *v110; // [rsp+A8h] [rbp-60h] BYREF
  char v111; // [rsp+B0h] [rbp-58h]
  LPVOID *v112; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v113; // [rsp+C0h] [rbp-48h] BYREF
  char v114; // [rsp+C8h] [rbp-40h]
  struct tWAVEFORMATEX *v115; // [rsp+D0h] [rbp-38h]
  struct IAudioStreamInfo *v116; // [rsp+D8h] [rbp-30h]
  struct _GUID v117; // [rsp+E8h] [rbp-20h] BYREF
  struct _GUID v118; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v119; // [rsp+108h] [rbp+0h]
  struct _GUID v120; // [rsp+118h] [rbp+10h] BYREF
  __int128 Buf1; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v122[24]; // [rsp+138h] [rbp+30h]
  __int128 Buf2; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v124[24]; // [rsp+160h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v119 = -2LL;
  v116 = a3;
  v115 = a2;
  v103 = a1;
  *(_QWORD *)&v117.Data1 = a8;
  *(_QWORD *)&v118.Data1 = a10;
  v104 = a16;
  *a16 = a14;
  if ( a5 )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    v103 = 0LL;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *, struct CEndpointCharacteristics **))(*(_QWORD *)a15 + 80LL))(
      a15,
      &v103);
    v49 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v103 + 96LL))(v103);
    *(_QWORD *)v104 = v49;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v103);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !a14 )
      *a16 = a13;
    return 0LL;
  }
  v17 = 184LL;
  if ( a6 == eKeywordDetectorConnector )
    v17 = 192LL;
  v18 = *a8;
  v120 = *a8;
  v19 = 0;
  v20 = *((_DWORD *)a1 + 6 * a6 + 354);
  if ( v20 > 0 )
  {
    while ( 1 )
    {
      v50 = (_QWORD *)(*((_QWORD *)a1 + 3 * a6 + 175) + 16LL * v19);
      v51 = *v50 - *(_QWORD *)&v120.Data1;
      if ( *v50 == *(_QWORD *)&v120.Data1 )
        v51 = v50[1] - *(_QWORD *)v120.Data4;
      if ( !v51 )
        break;
      if ( ++v19 >= v20 )
        goto LABEL_7;
    }
    if ( v19 != -1 )
    {
      v120 = v18;
      v52 = 0;
      while ( 1 )
      {
        v53 = (_QWORD *)(*((_QWORD *)a1 + 3 * a6 + 175) + 16LL * v52);
        v54 = *v53 - *(_QWORD *)&v120.Data1;
        if ( *v53 == *(_QWORD *)&v120.Data1 )
          v54 = v53[1] - *(_QWORD *)v120.Data4;
        if ( !v54 )
          break;
        ++v52;
        v20 = *((_DWORD *)a1 + 6 * a6 + 354);
        if ( v52 >= v20 )
          goto LABEL_72;
      }
      if ( v52 == -1 )
      {
LABEL_72:
        v18 = GUID_00000000_0000_0000_0000_000000000000;
        goto LABEL_7;
      }
      if ( v52 < 0 || v52 >= v20 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180092A2BLL);
      }
      v18 = *(struct _GUID *)(*((_QWORD *)a1 + 3 * a6 + 176) + 16LL * v52);
    }
  }
LABEL_7:
  v120 = v18;
  v21 = *(LPVOID *)&v18.Data1;
  v107 = *(LPVOID *)&v18.Data1;
  v22 = *(_QWORD *)&v18.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v18.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v22 = *(_QWORD *)v120.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v22 )
  {
    v120 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v21 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    v107 = *(LPVOID *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  }
  wBitsPerSample = 0LL;
  LODWORD(pvData) = 0;
  v24 = *(_DWORD **)((char *)a1 + v17);
  pv = v24;
  for ( i = 0LL; ; i += 8 )
  {
    v106 = i;
    if ( (int)wBitsPerSample >= v24[2] )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14BF,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x88890008LL,
        pdwType);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B3,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x88890008LL,
        pdwTypec);
      return 2290679816LL;
    }
    if ( (__int64)i < 0 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800932B3LL);
    }
    v26 = *(_QWORD *)&i[*(_QWORD *)v24];
    v27 = *(_QWORD *)v26 - (_QWORD)v21;
    if ( *(LPVOID *)v26 == v21 )
      v27 = *(_QWORD *)(v26 + 8) - *(_QWORD *)v120.Data4;
    if ( !v27 )
    {
      v28 = 0;
      pcbData[0] = 0;
      if ( *(int *)(v26 + 24) > 0 )
        break;
    }
LABEL_109:
    wBitsPerSample = (unsigned int)(wBitsPerSample + 1);
    LODWORD(pvData) = wBitsPerSample;
    v24 = pv;
  }
  v29 = 0LL;
  while ( 1 )
  {
    if ( v29 < 0 || v28 >= *(_DWORD *)(v26 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18009329DLL);
    }
    v30 = *(__int16 ***)(v29 + *(_QWORD *)(v26 + 16));
    v31 = (unsigned __int16 *)*v30;
    if ( !a7 )
    {
      if ( !v31 )
        goto LABEL_53;
      goto LABEL_107;
    }
    if ( !v31 )
      goto LABEL_107;
    wFormatTag = a7->wFormatTag;
    cbSize = a7->cbSize;
    if ( a7->wFormatTag == 0xFFFE )
    {
      if ( cbSize != 22 )
      {
        v55 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
            - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
        if ( !v55 )
          v55 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
        if ( v55 )
        {
          v56 = *(_QWORD *)((char *)&a7[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
          if ( !v56 )
            v56 = *(_QWORD *)&a7[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
          if ( v56 )
            goto LABEL_107;
        }
      }
      Buf1 = *(_OWORD *)&a7->wFormatTag;
      *(_OWORD *)v122 = *(_OWORD *)&a7->cbSize;
      *(_QWORD *)&v122[16] = *(_QWORD *)&a7[1].wBitsPerSample;
      *(_WORD *)v122 = 22;
      v34 = *(_DWORD *)&v122[4];
      v35 = Buf1;
    }
    else
    {
      if ( cbSize && ((wFormatTag - 1) & 0xFFFD) != 0 )
        goto LABEL_107;
      nChannels = a7->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u )
        goto LABEL_107;
      wBitsPerSample = a7->wBitsPerSample;
      if ( (((_WORD)wBitsPerSample - 8) & 0xFFE7) != 0 )
        goto LABEL_107;
      Buf1 = *(_OWORD *)&a7->wFormatTag;
      v35 = -2;
      LOWORD(Buf1) = -2;
      *(_WORD *)v122 = 22;
      *(_WORD *)&v122[2] = wBitsPerSample;
      *(GUID *)&v122[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&v122[8] = wFormatTag;
      v34 = (nChannels == 1) + 3;
      *(_DWORD *)&v122[4] = v34;
    }
    v36 = *v31;
    v37 = v31[8];
    if ( *v31 == 0xFFFE )
      break;
    if ( !v37 || ((v36 - 1) & 0xFFFD) == 0 )
    {
      v60 = v31[1];
      if ( (unsigned __int16)(v60 - 1) <= 1u )
      {
        wBitsPerSample = v31[7];
        v38 = -2;
        if ( (((_WORD)wBitsPerSample - 8) & 0xFFE7) == 0 )
        {
          Buf2 = *(_OWORD *)v31;
          LOWORD(Buf2) = -2;
          *(_WORD *)v124 = 22;
          *(_WORD *)&v124[2] = wBitsPerSample;
          *(GUID *)&v124[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v124[8] = v36;
          wBitsPerSample = (unsigned int)(v60 == 1) + 3;
          *(_DWORD *)&v124[4] = (v60 == 1) + 3;
          goto LABEL_29;
        }
      }
    }
LABEL_107:
    v28 = pcbData[0] + 1;
    pcbData[0] = v28;
    v29 += 8LL;
    if ( v28 >= *(_DWORD *)(v26 + 24) )
    {
      v21 = v107;
      i = (char *)v106;
      LODWORD(wBitsPerSample) = pvData;
      goto LABEL_109;
    }
  }
  if ( v37 != 22 )
  {
    v58 = *((_QWORD *)v31 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v58 )
      v58 = *((_QWORD *)v31 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v58 )
    {
      v59 = *((_QWORD *)v31 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v59 )
        v59 = *((_QWORD *)v31 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v59 )
        goto LABEL_107;
    }
  }
  Buf2 = *(_OWORD *)v31;
  *(_OWORD *)v124 = *((_OWORD *)v31 + 1);
  *(_QWORD *)&v124[16] = *((_QWORD *)v31 + 4);
  *(_WORD *)v124 = 22;
  wBitsPerSample = *(unsigned int *)&v124[4];
  v38 = Buf2;
LABEL_29:
  if ( WORD1(Buf1) )
  {
    v39 = WORD1(Buf2);
  }
  else
  {
    v39 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v40 = DWORD1(Buf2);
  }
  else
  {
    v40 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v41 = HIWORD(Buf2);
  }
  else
  {
    v41 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v34 )
  {
    wBitsPerSample = 0LL;
    *(_DWORD *)&v124[4] = 0;
  }
  if ( !v35 )
  {
    v38 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v39 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v40 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v41 )
    HIDWORD(Buf1) = 0;
  if ( !(_DWORD)wBitsPerSample )
    *(_DWORD *)&v122[4] = 0;
  if ( !v38 )
    LOWORD(Buf1) = 0;
  v42 = *(_QWORD *)&v122[8] - *(_QWORD *)&v124[8];
  if ( *(_QWORD *)&v122[8] == *(_QWORD *)&v124[8] )
    v42 = *(_QWORD *)&v122[16] - *(_QWORD *)&v124[16];
  if ( v42 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_107;
LABEL_53:
  v43 = *((_DWORD *)v30 + 3);
  v44 = *((_DWORD *)v30 + 2);
  v45 = *((_DWORD *)v30 + 4);
  if ( a11 )
    v46 = *((_DWORD *)v30 + 6);
  else
    v46 = *((_DWORD *)v30 + 5);
  if ( !a14 )
  {
    v47 = v104;
    *(_QWORD *)v104 = (unsigned int)(int)((double)(int)v43 * 10000000.0 / (double)(int)a7->nSamplesPerSec + 0.5);
    goto LABEL_57;
  }
  LODWORD(pvData) = 0;
  pcbData[0] = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    pcbData);
  wBitsPerSample = a7->nSamplesPerSec;
  v62 = (double)(int)wBitsPerSample;
  v63 = (int)((double)(int)wBitsPerSample * (double)(int)a14 / 10000000.0 + 0.5);
  if ( (_DWORD)pvData )
  {
    v47 = v104;
    goto LABEL_57;
  }
  if ( v63 >= v45 && v63 <= v46 )
  {
    v64 = v63 % v44;
    if ( !(v63 % v44) || v63 == v43 || v63 == v45 || v63 == v46 )
    {
      v47 = v104;
      goto LABEL_135;
    }
  }
  nSamplesPerSec = v115->nSamplesPerSec;
  if ( nSamplesPerSec == (_DWORD)wBitsPerSample )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D2,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
  TranslateFrameCountBetweenSamplingRates(v43, wBitsPerSample, nSamplesPerSec);
  v68 = TranslateFrameCountBetweenSamplingRates(v44, v66, v67);
  TranslateFrameCountBetweenSamplingRates(v45, v69, v70);
  v73 = TranslateFrameCountBetweenSamplingRates(v46, v71, v72);
  wBitsPerSample = v73;
  v77 = (int)((double)(int)v61 * (double)(int)a14 / v76 + 0.5);
  if ( v77 < v74 || v77 > v73 )
    goto LABEL_138;
  v64 = v77 % v68;
  if ( !(v77 % v68) )
    goto LABEL_126;
  if ( v77 == v75 )
    goto LABEL_129;
  if ( v77 != v74 && v77 != v73 )
  {
LABEL_138:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
LABEL_126:
  if ( v77 == v75 )
  {
LABEL_129:
    v63 = v43;
    goto LABEL_133;
  }
  if ( v77 == v74 )
  {
    v63 = v45;
  }
  else if ( v77 == v73 )
  {
    v63 = v46;
  }
  else
  {
    v63 = v44 * (v77 / v68);
  }
LABEL_133:
  v47 = v104;
  *(_QWORD *)v104 = (unsigned int)(int)((double)(int)v63 * v76 / v62 + 0.5);
LABEL_135:
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *, __int64, __int64, unsigned __int64))(*(_QWORD *)v116 + 152LL))(
         v116,
         v64,
         v61,
         wBitsPerSample)
    && v63 < v43 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F6,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x88890020LL,
      pdwTypea);
    return 2290679840LL;
  }
LABEL_57:
  if ( !a12 )
    return 0LL;
  *(_QWORD *)pcbData = 0LL;
  v104 = 0LL;
  v107 = 0LL;
  v106 = 0LL;
  pv = 0LL;
  v109 = (struct tWAVEFORMATEX **)pcbData;
  v110 = 0LL;
  v111 = 1;
  v120 = *a9;
  v78 = v103;
  MixFormat = CEndpointCharacteristics::GetMixFormat(
                v103,
                a6,
                &v120,
                (int (*)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))wBitsPerSample,
                &v110);
  if ( v111 )
  {
    v80 = v109;
    v81 = *v109;
    v82 = v110;
    if ( v110 != *v109 )
    {
      if ( v81 )
        CoTaskMemFree(v81);
      *v80 = v82;
    }
    v78 = v103;
  }
  if ( MixFormat < 0 )
  {
    v83 = 1280LL;
    goto LABEL_178;
  }
  *(_QWORD *)&Buf2 = &v104;
  *((_QWORD *)&Buf2 + 1) = 0LL;
  v124[0] = 1;
  *(_QWORD *)&Buf1 = &pv;
  *((_QWORD *)&Buf1 + 1) = 0LL;
  v122[0] = 1;
  v112 = &v106;
  v113 = 0LL;
  v114 = 1;
  v109 = (struct tWAVEFORMATEX **)&v107;
  v110 = 0LL;
  v111 = 1;
  v84 = *(struct _GUID **)&v117.Data1;
  v120 = *(struct _GUID *)*(_QWORD *)&v117.Data1;
  v118 = *(struct _GUID *)*(_QWORD *)&v118.Data1;
  v117 = *a9;
  MixFormat = DeriveDeviceGraphFormatsForStream(
                v78,
                0,
                (struct _GUID *)(unsigned int)a6,
                AUDCLNT_SHAREMODE_SHARED,
                &v117,
                &v118,
                &v120,
                *(struct tWAVEFORMATEX **)pcbData,
                &v110,
                &v113,
                (struct tWAVEFORMATEX **)&Buf1 + 1,
                (struct tWAVEFORMATEX **)&Buf2 + 1);
  if ( v111 )
  {
    v85 = v109;
    v86 = *v109;
    v87 = v110;
    if ( v110 != *v109 )
    {
      if ( v86 )
        CoTaskMemFree(v86);
      *v85 = v87;
    }
    v78 = v103;
  }
  if ( v114 )
  {
    v88 = v112;
    v89 = (struct tWAVEFORMATEX *)*v112;
    v90 = v113;
    if ( v113 != *v112 )
    {
      if ( v89 )
        CoTaskMemFree(v89);
      *v88 = v90;
    }
    v78 = v103;
  }
  if ( v122[0] )
  {
    v91 = Buf1;
    v92 = *(void **)Buf1;
    if ( *((_QWORD *)&Buf1 + 1) != *(_QWORD *)Buf1 )
    {
      if ( v92 )
        CoTaskMemFree(v92);
      *(_QWORD *)v91 = *((_QWORD *)&v91 + 1);
    }
    v78 = v103;
  }
  if ( v124[0] )
  {
    v93 = Buf2;
    v94 = *(void **)Buf2;
    if ( *((_QWORD *)&Buf2 + 1) != *(_QWORD *)Buf2 )
    {
      if ( v94 )
        CoTaskMemFree(v94);
      *(_QWORD *)v93 = *((_QWORD *)&v93 + 1);
    }
    v78 = v103;
  }
  if ( MixFormat < 0 )
  {
    v83 = 1281LL;
    goto LABEL_178;
  }
  LODWORD(pvData) = 0;
  v120 = *v84;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  v78,
                                  (unsigned int)a6,
                                  v104,
                                  &v120,
                                  0,
                                  &pvData,
                                  0LL,
                                  0LL,
                                  0LL);
  MixFormat = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v96 = (unsigned int)SharedModeEnginePeriodicity;
    v83 = 1284LL;
    goto LABEL_179;
  }
  v97 = (unsigned int)(int)((double)(int)pvData * 10000000.0 / (double)*((int *)v104 + 1) + 0.5);
  if ( *v47 - v97 <= 5 * v97 / 100 )
  {
    if ( pv )
      CoTaskMemFree(pv);
    if ( v106 )
      CoTaskMemFree(v106);
    if ( v107 )
      CoTaskMemFree(v107);
    if ( v104 )
      CoTaskMemFree(v104);
    if ( *(_QWORD *)pcbData )
      CoTaskMemFree(*(LPVOID *)pcbData);
    return 0LL;
  }
  MixFormat = -2004287448;
  v83 = 1287LL;
LABEL_178:
  v96 = (unsigned int)MixFormat;
LABEL_179:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v83,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)v96,
    pdwTypeb);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v106 )
    CoTaskMemFree(v106);
  if ( v107 )
    CoTaskMemFree(v107);
  if ( v104 )
    CoTaskMemFree(v104);
  if ( *(_QWORD *)pcbData )
    CoTaskMemFree(*(LPVOID *)pcbData);
  return (unsigned int)MixFormat;
}
