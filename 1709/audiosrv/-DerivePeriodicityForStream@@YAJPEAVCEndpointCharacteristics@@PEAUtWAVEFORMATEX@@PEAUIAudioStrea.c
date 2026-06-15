/*
 * XREFs of ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J@Z @ 0x180030A18
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000FEB0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHPEAVCEnd.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000A4B0 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TranslateFrameCountBetweenSamplingRates@@YAIIII@Z @ 0x18008CEB8 (-TranslateFrameCountBetweenSamplingRates@@YAIIII@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall DerivePeriodicityForStream(
        struct _RTL_CRITICAL_SECTION *this,
        struct tWAVEFORMATEX *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        enum _AUDCLNT_SHAREMODE pvData,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct tWAVEFORMATEX *a7,
        struct _GUID *a8,
        struct _GUID *a9,
        struct _GUID *a10,
        bool a11,
        bool a12,
        __int64 a13,
        struct tWAVEFORMATEX *a14,
        struct IProcessSubmixProxy *a15,
        struct tWAVEFORMATEX *pcbData)
{
  struct tWAVEFORMATEX *v18; // rbx
  struct tWAVEFORMATEX *v19; // rdi
  struct tWAVEFORMATEX *v20; // r14
  int SharedModeEnginePeriodicity; // eax
  int (*v22)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  unsigned int v23; // esi
  signed int nSamplesPerSec; // r14d
  unsigned int v26; // ebx
  unsigned int v27; // esi
  unsigned int v28; // r15d
  DWORD v29; // r11d
  __int64 v30; // rdx
  int MixFormat; // ebx
  unsigned int v32; // r13d
  unsigned int v33; // edx
  unsigned int v34; // r8d
  unsigned int v35; // edx
  unsigned int v36; // r8d
  unsigned int v37; // r10d
  unsigned int v38; // ebx
  unsigned int v39; // edx
  unsigned int v40; // r8d
  unsigned int v41; // r9d
  unsigned int v42; // eax
  unsigned int v43; // r9d
  unsigned int v44; // r10d
  double v45; // xmm4_8
  int v46; // r11d
  double v47; // xmm5_8
  unsigned int v48; // ecx
  struct _GUID *v49; // r15
  _QWORD *v50; // rsi
  void *v51; // rcx
  __int64 v52; // r14
  unsigned __int64 v53; // r9
  __int64 v54; // rdx
  struct _GUID *v55; // r13
  _QWORD *v56; // rsi
  struct tWAVEFORMATEX *v57; // rcx
  struct tWAVEFORMATEX *v58; // r14
  _QWORD *v59; // rsi
  struct tWAVEFORMATEX *v60; // rcx
  struct tWAVEFORMATEX *v61; // r14
  _QWORD *v62; // rsi
  struct tWAVEFORMATEX *v63; // rcx
  struct tWAVEFORMATEX *v64; // r14
  struct tWAVEFORMATEX **v65; // rsi
  struct tWAVEFORMATEX *v66; // rcx
  struct tWAVEFORMATEX *v67; // r14
  int v68; // eax
  __int64 v69; // rax
  int pdwType; // [rsp+28h] [rbp-E0h]
  int pdwTypea; // [rsp+28h] [rbp-E0h]
  int pdwTypeb; // [rsp+28h] [rbp-E0h]
  LPVOID v73; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID v74; // [rsp+70h] [rbp-98h] BYREF
  LPVOID pv[2]; // [rsp+78h] [rbp-90h] BYREF
  struct _GUID v76; // [rsp+88h] [rbp-80h] BYREF
  char v77; // [rsp+98h] [rbp-70h]
  struct _GUID v78; // [rsp+A8h] [rbp-60h] BYREF
  LPVOID *v79; // [rsp+B8h] [rbp-50h]
  struct tWAVEFORMATEX *v80; // [rsp+C0h] [rbp-48h] BYREF
  char v81; // [rsp+C8h] [rbp-40h]
  LPVOID *v82; // [rsp+D0h] [rbp-38h]
  struct tWAVEFORMATEX *v83; // [rsp+D8h] [rbp-30h] BYREF
  char v84; // [rsp+E0h] [rbp-28h]
  LPVOID *v85; // [rsp+E8h] [rbp-20h]
  struct tWAVEFORMATEX *v86; // [rsp+F0h] [rbp-18h] BYREF
  char v87; // [rsp+F8h] [rbp-10h]
  struct tWAVEFORMATEX **v88; // [rsp+100h] [rbp-8h]
  struct tWAVEFORMATEX *v89; // [rsp+108h] [rbp+0h] BYREF
  char v90; // [rsp+110h] [rbp+8h]
  __int64 v91; // [rsp+118h] [rbp+10h]
  struct _GUID v92; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v91 = -2LL;
  v18 = a14;
  v19 = pcbData;
  *(_QWORD *)&pcbData->wFormatTag = a14;
  if ( pvData )
    return 0LL;
  if ( (a4 & 0x20000) != 0 && a15 )
  {
    a14 = 0LL;
    (*(void (__fastcall **)(struct IProcessSubmixProxy *, struct tWAVEFORMATEX **))(*(_QWORD *)a15 + 80LL))(a15, &a14);
    *(_QWORD *)&v19->wFormatTag = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&a14->wFormatTag + 96LL))(a14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&a14);
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
    if ( !v18 )
      *(_QWORD *)&v19->wFormatTag = a13;
    return 0LL;
  }
  v78 = *a8;
  v20 = a7;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  (__int64)this,
                                  a6,
                                  a7,
                                  &v78,
                                  a11,
                                  &a14,
                                  &v74,
                                  pv,
                                  &v73);
  v23 = SharedModeEnginePeriodicity;
  if ( SharedModeEnginePeriodicity < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x495,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)SharedModeEnginePeriodicity,
      pdwType);
    return v23;
  }
  if ( !v18 )
  {
    *(_QWORD *)&v19->wFormatTag = (unsigned int)(int)((double)(int)a14 * 10000000.0 / (double)(int)v20->nSamplesPerSec
                                                    + 0.5);
    goto LABEL_7;
  }
  pvData = AUDCLNT_SHAREMODE_SHARED;
  LODWORD(pcbData) = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    (LPDWORD)&pcbData);
  nSamplesPerSec = v20->nSamplesPerSec;
  v26 = (int)((double)(int)v18 * (double)nSamplesPerSec / 10000000.0 + 0.5);
  if ( pvData )
    goto LABEL_7;
  v27 = (unsigned int)a14;
  v28 = (unsigned int)v74;
  if ( v26 >= LODWORD(pv[0])
    && v26 <= (unsigned int)v73
    && (!(v26 % (unsigned int)v74) || v26 == (_DWORD)a14 || v26 == LODWORD(pv[0]) || v26 == (_DWORD)v73) )
  {
LABEL_38:
    if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a3 + 152LL))(a3) && v26 < v27 )
    {
      v30 = 1240LL;
      goto LABEL_22;
    }
LABEL_7:
    if ( !a12 )
      return 0LL;
    pcbData = 0LL;
    a14 = 0LL;
    v73 = 0LL;
    v74 = 0LL;
    pv[0] = 0LL;
    *(_QWORD *)&v76.Data1 = &pcbData;
    *(_QWORD *)v76.Data4 = 0LL;
    v77 = 1;
    v49 = a9;
    v78 = *a9;
    MixFormat = CEndpointCharacteristics::GetMixFormat(this, a6, &v78, v22, (struct tWAVEFORMATEX **)v76.Data4);
    if ( v77 )
    {
      v50 = *(_QWORD **)&v76.Data1;
      v51 = **(void ***)&v76.Data1;
      v52 = *(_QWORD *)v76.Data4;
      if ( *(_QWORD *)v76.Data4 != **(_QWORD **)&v76.Data1 )
      {
        if ( v51 )
          CoTaskMemFree(v51);
        *v50 = v52;
      }
    }
    if ( MixFormat >= 0 )
    {
      v88 = &a14;
      v89 = 0LL;
      v90 = 1;
      v85 = pv;
      v86 = 0LL;
      v87 = 1;
      v82 = &v74;
      v83 = 0LL;
      v84 = 1;
      v79 = &v73;
      v80 = 0LL;
      v81 = 1;
      v55 = a8;
      v78 = *a8;
      v92 = *a10;
      v76 = *v49;
      MixFormat = DeriveDeviceGraphFormatsForStream(
                    (struct CEndpointCharacteristics *)this,
                    0,
                    (struct _GUID *)(unsigned int)a6,
                    AUDCLNT_SHAREMODE_SHARED,
                    &v76,
                    &v92,
                    &v78,
                    pcbData,
                    &v80,
                    &v83,
                    &v86,
                    &v89);
      if ( v81 )
      {
        v56 = v79;
        v57 = (struct tWAVEFORMATEX *)*v79;
        v58 = v80;
        if ( v80 != *v79 )
        {
          if ( v57 )
            CoTaskMemFree(v57);
          *v56 = v58;
        }
      }
      if ( v84 )
      {
        v59 = v82;
        v60 = (struct tWAVEFORMATEX *)*v82;
        v61 = v83;
        if ( v83 != *v82 )
        {
          if ( v60 )
            CoTaskMemFree(v60);
          *v59 = v61;
        }
      }
      if ( v87 )
      {
        v62 = v85;
        v63 = (struct tWAVEFORMATEX *)*v85;
        v64 = v86;
        if ( v86 != *v85 )
        {
          if ( v63 )
            CoTaskMemFree(v63);
          *v62 = v64;
        }
      }
      if ( v90 )
      {
        v65 = v88;
        v66 = *v88;
        v67 = v89;
        if ( v89 != *v88 )
        {
          if ( v66 )
            CoTaskMemFree(v66);
          *v65 = v67;
        }
      }
      if ( MixFormat >= 0 )
      {
        pvData = AUDCLNT_SHAREMODE_SHARED;
        v76 = *v55;
        v68 = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                (__int64)this,
                a6,
                a14,
                &v76,
                0,
                &pvData,
                0LL,
                0LL,
                0LL);
        MixFormat = v68;
        if ( v68 >= 0 )
        {
          v69 = (unsigned int)(int)((double)(int)pvData * 10000000.0 / (double)(int)a14->nSamplesPerSec + 0.5);
          if ( *(_QWORD *)&v19->wFormatTag - v69 <= 5 * v69 / 100 )
          {
            if ( pv[0] )
              CoTaskMemFree(pv[0]);
            if ( v74 )
              CoTaskMemFree(v74);
            if ( v73 )
              CoTaskMemFree(v73);
            if ( a14 )
              CoTaskMemFree(a14);
            if ( pcbData )
              CoTaskMemFree(pcbData);
            return 0LL;
          }
          MixFormat = -2004287448;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4E9,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)0x88890028LL,
            pdwTypeb);
          goto LABEL_75;
        }
        v53 = (unsigned int)v68;
        v54 = 1254LL;
      }
      else
      {
        v53 = (unsigned int)MixFormat;
        v54 = 1251LL;
      }
    }
    else
    {
      v53 = (unsigned int)MixFormat;
      v54 = 1250LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v54,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v53,
      pdwTypeb);
LABEL_75:
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( v74 )
      CoTaskMemFree(v74);
    if ( v73 )
      CoTaskMemFree(v73);
    if ( a14 )
      CoTaskMemFree(a14);
    if ( pcbData )
      CoTaskMemFree(pcbData);
    return (unsigned int)MixFormat;
  }
  v29 = a2->nSamplesPerSec;
  if ( v29 != nSamplesPerSec )
  {
    v32 = TranslateFrameCountBetweenSamplingRates((unsigned int)a14, nSamplesPerSec, v29);
    LODWORD(a14) = TranslateFrameCountBetweenSamplingRates(v28, v33, v34);
    v38 = TranslateFrameCountBetweenSamplingRates(v37, v35, v36);
    v42 = TranslateFrameCountBetweenSamplingRates(v41, v39, v40);
    v48 = (int)((double)v46 * v47 / 10000000.0 + v45);
    if ( v48 >= v38 && v48 <= v42 )
    {
      if ( !(v48 % (unsigned int)a14) )
        goto LABEL_30;
      if ( v48 == v32 )
        goto LABEL_33;
      if ( v48 == v38 || v48 == v42 )
      {
LABEL_30:
        if ( v48 != v32 )
        {
          if ( v48 == v38 )
          {
            v26 = v44;
          }
          else if ( v48 == v42 )
          {
            v26 = v43;
          }
          else
          {
            v26 = v28 * (v48 / (unsigned int)a14);
          }
          goto LABEL_37;
        }
LABEL_33:
        v26 = v27;
LABEL_37:
        *(_QWORD *)&v19->wFormatTag = (unsigned int)(int)((double)(int)v26 * 10000000.0 / (double)nSamplesPerSec + v45);
        goto LABEL_38;
      }
    }
    v30 = 1224LL;
    goto LABEL_22;
  }
  v30 = 1204LL;
LABEL_22:
  MixFormat = -2004287456;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v30,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x88890020LL,
    pdwTypea);
  return (unsigned int)MixFormat;
}
