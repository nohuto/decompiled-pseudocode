/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001BC20
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x18000C130 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180023600 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x180049B5A (_invalid_parameter_noinfo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B8FC (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_Sd @ 0x180084A58 (WPP_SF_Sd.c)
 *     WPP_SF_dd @ 0x180090690 (WPP_SF_dd.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800A0D58 (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800A0E20 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     WPP_SF_DDd @ 0x1800A3B8C (WPP_SF_DDd.c)
 */

// Hidden C++ exception states: #wind=7 #try_helpers=1
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        const struct tWAVEFORMATEX *Src,
        const struct _GUID *a7,
        unsigned int a8,
        struct VadServerSettings *a9,
        unsigned __int16 **a10,
        struct IProcessSubmixProxy *a11)
{
  struct IMMDevice *v14; // rbx
  __int64 nChannels; // rdx
  __int64 wFormatTag; // r8
  int AliasedEndpointCharacteristics; // edi
  CVolumeStrip *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  char *v21; // rdx
  __int64 v22; // r9
  const void *v23; // rsi
  char **v24; // r8
  __int64 v25; // rdi
  unsigned __int64 v26; // r12
  char *v27; // rcx
  __int64 v28; // r12
  char **v29; // r12
  __int64 v30; // rdi
  unsigned __int64 v31; // rsi
  char *v32; // rcx
  __int64 v33; // rsi
  struct IAudioProcess *v34; // r13
  struct VadServerSettings *v35; // rsi
  unsigned int v36; // eax
  void *v37; // rax
  void *v38; // rcx
  void *v39; // rcx
  const struct tWAVEFORMATEX *v40; // r12
  int v41; // eax
  unsigned int v42; // esi
  unsigned int v43; // edi
  void (__fastcall ***v44)(_QWORD, GUID *, GUID *); // r9
  __int64 v45; // rcx
  int v46; // r13d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v47; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v48; // ecx
  int v49; // r13d
  void *v50; // rcx
  __int64 cbSize; // rdi
  void *v52; // rax
  void *v53; // rsi
  __int64 v54; // rsi
  struct IProcessSubmixProxy *v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rcx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 *v60; // rax
  unsigned __int16 *v61; // rax
  unsigned __int16 **v62; // r12
  unsigned int v64; // [rsp+60h] [rbp-F8h]
  unsigned int v65; // [rsp+60h] [rbp-F8h]
  int v66; // [rsp+60h] [rbp-F8h]
  struct CEndpointCharacteristics *v67; // [rsp+68h] [rbp-F0h] BYREF
  GUID pv; // [rsp+70h] [rbp-E8h] BYREF
  GUID lpCriticalSection; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v70; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v71; // [rsp+98h] [rbp-C0h]
  __int64 v72; // [rsp+A0h] [rbp-B8h]
  __int128 v73; // [rsp+A8h] [rbp-B0h]
  int v74; // [rsp+B8h] [rbp-A0h]
  int v75; // [rsp+BCh] [rbp-9Ch]
  __int64 v76; // [rsp+C0h] [rbp-98h]
  __int64 v77; // [rsp+C8h] [rbp-90h]
  __int64 v78; // [rsp+D0h] [rbp-88h]
  __int64 v79; // [rsp+D8h] [rbp-80h]
  struct IMMDevice *v80; // [rsp+E0h] [rbp-78h]
  LPCRITICAL_SECTION v81; // [rsp+E8h] [rbp-70h] BYREF
  char v82; // [rsp+F0h] [rbp-68h]
  PROPVARIANT pvar[11]; // [rsp+100h] [rbp-58h] BYREF
  CVADServer *v84; // [rsp+160h] [rbp+8h] BYREF
  struct IAudioProcess *v85; // [rsp+168h] [rbp+10h]
  unsigned int v86; // [rsp+178h] [rbp+20h]

  v86 = a4;
  v85 = a2;
  v84 = this;
  pvar[3] = (PROPVARIANT)-2LL;
  v67 = 0LL;
  v14 = 0LL;
  v80 = 0LL;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    v70 = 0x40500000050LL;
    v71 = 0LL;
    v72 = 0LL;
    v74 = 0;
    v77 = 0LL;
    v75 = 0x20000;
    v73 = AEWMIGUID_PERFORMANCE;
    v76 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v70);
  }
  *a10 = 0LL;
  v81 = (LPCRITICAL_SECTION)((char *)this + 216);
  v82 = 0;
  ATL::CCritSecLock::Lock(&v81);
  if ( *((_DWORD *)this + 46) )
  {
    AliasedEndpointCharacteristics = -2004287486;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_144;
    }
    v19 = 31LL;
    goto LABEL_8;
  }
  if ( a4 > 1 )
  {
    AliasedEndpointCharacteristics = -2147024809;
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_144;
    }
    WPP_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      32LL,
      &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
      a4,
      -2147024809);
    goto LABEL_143;
  }
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a3, 0, &v67);
  if ( AliasedEndpointCharacteristics < 0 )
  {
LABEL_143:
    v18 = WPP_GLOBAL_Control;
    goto LABEL_144;
  }
  *(_QWORD *)&pv.Data1 = 0LL;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)v67 + 2) + 40LL))(
                                     *((_QWORD *)v67 + 2),
                                     &pv);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    CoTaskMemFree(*(LPVOID *)&pv.Data1);
    v18 = WPP_GLOBAL_Control;
LABEL_144:
    v62 = a10;
    if ( *a10 )
    {
      operator delete(*a10);
      *v62 = 0LL;
      v18 = WPP_GLOBAL_Control;
    }
    if ( v18 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v18 + 7) & 0x100) != 0 && *((_BYTE *)v18 + 25) >= 4u )
      WPP_SF_Sd(
        *((_QWORD *)v18 + 2),
        38,
        (unsigned int)&WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
        *((_QWORD *)this + 26),
        AliasedEndpointCharacteristics);
    goto LABEL_150;
  }
  v23 = *(const void **)&pv.Data1;
  v24 = (char **)((char *)this + 208);
  if ( !*(_QWORD *)&pv.Data1 )
    goto LABEL_38;
  v25 = -1LL;
  do
    ++v25;
  while ( *(_WORD *)(*(_QWORD *)&pv.Data1 + 2 * v25) );
  if ( !(_DWORD)v25 )
  {
LABEL_38:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 208);
    goto LABEL_39;
  }
  v64 = *((_DWORD *)*v24 - 4);
  v26 = (__int64)(*(_QWORD *)&pv.Data1 - (_QWORD)*v24) >> 1;
  if ( ((1 - *((_DWORD *)*v24 - 2)) | (*((_DWORD *)*v24 - 3) - (int)v25)) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 208, (unsigned int)v25);
    v24 = (char **)((char *)this + 208);
  }
  v27 = *v24;
  if ( v26 > v64 )
  {
    v28 = 2LL * (int)v25;
    if ( !v28 )
      goto LABEL_34;
    if ( v27 )
    {
      memcpy_0(v27, v23, 2LL * (int)v25);
      goto LABEL_33;
    }
  }
  else
  {
    v21 = &v27[2 * v26];
    v28 = 2LL * (int)v25;
    if ( !v28 )
      goto LABEL_34;
    if ( v27 && v21 )
    {
      memmove(v27, v21, 2LL * (int)v25);
      goto LABEL_33;
    }
  }
  *(_DWORD *)_o__errno(v27, v21, v24, v22) = 22;
  invalid_parameter_noinfo();
LABEL_33:
  v24 = (char **)((char *)this + 208);
LABEL_34:
  if ( (int)v25 < 0 || (int)v25 > *((_DWORD *)*v24 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*v24 - 4) = v25;
  *(_WORD *)&(*v24)[v28] = 0;
LABEL_39:
  v29 = (char **)((char *)this + 200);
  if ( !a3 )
    goto LABEL_58;
  v30 = -1LL;
  do
    ++v30;
  while ( a3[v30] );
  if ( !(_DWORD)v30 )
  {
LABEL_58:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 200);
    goto LABEL_59;
  }
  v65 = *((_DWORD *)*v29 - 4);
  v31 = ((char *)a3 - *v29) >> 1;
  if ( ((1 - *((_DWORD *)*v29 - 2)) | (*((_DWORD *)*v29 - 3) - (int)v30)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 200, (unsigned int)v30);
  v32 = *v29;
  if ( v31 <= v65 )
  {
    v21 = &v32[2 * v31];
    v33 = 2LL * (int)v30;
    if ( !v33 )
      goto LABEL_54;
    if ( v32 && v21 )
    {
      memmove(v32, v21, 2LL * (int)v30);
      goto LABEL_54;
    }
LABEL_52:
    *(_DWORD *)_o__errno(v32, v21, v24, v22) = 22;
    invalid_parameter_noinfo();
    goto LABEL_54;
  }
  v33 = 2LL * (int)v30;
  if ( !v33 )
    goto LABEL_54;
  if ( !v32 )
    goto LABEL_52;
  memcpy_0(v32, a3, 2LL * (int)v30);
LABEL_54:
  if ( (int)v30 < 0 || (int)v30 > *((_DWORD *)*v29 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*v29 - 4) = v30;
  *(_WORD *)&(*v29)[v33] = 0;
LABEL_59:
  CoTaskMemFree(*(LPVOID *)&pv.Data1);
  v34 = v85;
  *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v85 + 40LL))(v85);
  AliasedEndpointCharacteristics = 0;
  v35 = a9;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
          g_PolicyManager,
          *((unsigned int *)a9 + 4))
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v35 + 5)) )
  {
    AliasedEndpointCharacteristics = -2147024809;
    AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x4AFu, -2147024809);
  }
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_143;
  *((_OWORD *)this + 17) = *(_OWORD *)v35;
  *((_OWORD *)this + 18) = *((_OWORD *)v35 + 1);
  *((_OWORD *)this + 19) = *((_OWORD *)v35 + 2);
  *((_OWORD *)this + 20) = *((_OWORD *)v35 + 3);
  *((_OWORD *)this + 21) = *((_OWORD *)v35 + 4);
  *((_OWORD *)this + 22) = *((_OWORD *)v35 + 5);
  *((_QWORD *)this + 46) = *((_QWORD *)v35 + 12);
  v36 = *((_DWORD *)this + 90);
  if ( v36 )
  {
    v37 = operator new[](v36, (const struct std::nothrow_t *)&std::nothrow);
    v38 = (void *)*((_QWORD *)this + 53);
    *((_QWORD *)this + 53) = v37;
    if ( v38 )
      operator delete(v38, (const struct std::nothrow_t *)1);
    v39 = (void *)*((_QWORD *)this + 53);
    if ( !v39 )
    {
      AliasedEndpointCharacteristics = -2147024882;
      goto LABEL_143;
    }
    memcpy_0(v39, *((const void **)this + 46), *((unsigned int *)this + 90));
    *((_QWORD *)this + 46) = *((_QWORD *)this + 53);
  }
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioProcess *, _QWORD))(*(_QWORD *)g_PolicyManager + 120LL))(
                                     g_PolicyManager,
                                     v34,
                                     *((_QWORD *)this + 26));
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_143;
  v40 = Src;
  v41 = ValidateWaveFormatEx(Src);
  AliasedEndpointCharacteristics = v41;
  if ( v41 < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_144;
    }
    v19 = 34LL;
    v20 = (unsigned int)v41;
    goto LABEL_9;
  }
  nChannels = v40->nChannels;
  if ( (unsigned __int16)nChannels > 2u )
  {
    wFormatTag = v40->wFormatTag;
    if ( (((_WORD)wFormatTag - 1) & 0xFFFD) == 0 )
    {
      AliasedEndpointCharacteristics = -2147024809;
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
      {
        goto LABEL_144;
      }
      WPP_SF_DDd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        nChannels,
        wFormatTag,
        (unsigned __int16)wFormatTag,
        (unsigned __int16)nChannels);
      goto LABEL_143;
    }
  }
  v42 = a5;
  AliasedEndpointCharacteristics = CVADServer::InitializePolicy(this, v34, a7, a5, a8, a10);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_143;
  if ( *((_DWORD *)v67 + 37) )
    v43 = 1;
  else
    v43 = HIWORD(v42) & 2;
  v14 = (struct IMMDevice *)*((_QWORD *)v67 + 2);
  v80 = v14;
  ((void (__fastcall *)(struct IMMDevice *))v14->lpVtbl->AddRef)(v14);
  LODWORD(v84) = 0;
  v44 = (void (__fastcall ***)(_QWORD, GUID *, GUID *))*((_QWORD *)v67 + 2);
  v45 = 0LL;
  *(_QWORD *)&pv.Data1 = 0LL;
  if ( v44 )
  {
    (**v44)(v44, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &pv);
    v45 = *(_QWORD *)&pv.Data1;
  }
  if ( v45 )
  {
    (*(void (__fastcall **)(__int64, CVADServer **))(*(_QWORD *)v45 + 88LL))(v45, &v84);
    v45 = *(_QWORD *)&pv.Data1;
  }
  v66 = (int)v84;
  if ( v45 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  v46 = 1;
  memset(pvar, 0, 24);
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v67 + 4) + 40LL))(
         *((_QWORD *)v67 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         pvar) < 0
    || LOWORD(pvar[0]) != 19 )
  {
    v46 = 0;
  }
  PropVariantClear(pvar);
  if ( (v42 & 0x400000) != 0 )
  {
    v48 = eKeywordDetectorConnector;
    v49 = v86;
    goto LABEL_106;
  }
  if ( v46 && (v42 & 0x20000) != 0 )
  {
    v48 = eLoopbackConnector;
    v49 = v86;
    goto LABEL_106;
  }
  v49 = v86;
  if ( v86 == 1 )
  {
    v50 = 0LL;
    *(_QWORD *)&lpCriticalSection.Data1 = 0LL;
    if ( v66 )
    {
      if ( !IsFormatSupportedByHwAudioEngine(v14, v47, v40, (struct tWAVEFORMATEX **)&lpCriticalSection) )
      {
        CoTaskMemFree(*(LPVOID *)&lpCriticalSection.Data1);
        v48 = v49;
        goto LABEL_106;
      }
      v50 = *(void **)&lpCriticalSection.Data1;
    }
    CoTaskMemFree(v50);
  }
  v48 = ((unsigned __int8)~(_BYTE)v42 >> 1) & 1;
LABEL_106:
  AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                     *((_DWORD *)this + 72),
                                     *((_DWORD *)this + 74),
                                     v67,
                                     v43,
                                     v49,
                                     v48,
                                     0,
                                     *((_DWORD *)this + 78),
                                     &pv,
                                     &lpCriticalSection,
                                     (GUID *)((char *)this + 376),
                                     0LL);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_143;
  if ( v49 == 1
    && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)this + 26))
     || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)v85 + 136LL))(
           v85,
           *((unsigned int *)a9 + 4),
           1LL)) )
  {
    AliasedEndpointCharacteristics = -2004287474;
    goto LABEL_143;
  }
  cbSize = v40->cbSize;
  v52 = CoTaskMemAlloc(cbSize + 18);
  v53 = v52;
  if ( v52 )
  {
    memcpy_0(v52, v40, cbSize + 18);
    AliasedEndpointCharacteristics = 0;
  }
  else
  {
    AliasedEndpointCharacteristics = -2147024882;
  }
  *((_QWORD *)this + 22) = v53;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_144;
    }
    v19 = 36LL;
LABEL_8:
    v20 = (unsigned int)AliasedEndpointCharacteristics;
LABEL_9:
    WPP_SF_d(*((_QWORD *)v18 + 2), v19, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, v20);
    goto LABEL_143;
  }
  *((_DWORD *)this + 64) = v49;
  v54 = *((_QWORD *)this + 52);
  v55 = a11;
  *((_QWORD *)this + 52) = a11;
  if ( v55 )
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v55 + 8LL))(v55);
  if ( v54 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
  *((_DWORD *)this + 46) = 1;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids);
  }
  *(_QWORD *)&lpCriticalSection.Data1 = &g_csVadList;
  lpCriticalSection.Data4[0] = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&lpCriticalSection);
  v56 = g_VADServerList;
  v57 = qword_18012AE80;
  if ( !qword_18012AE80 )
  {
    if ( dword_18012AE88 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)dword_18012AE88 < 0x18 )
        goto LABEL_137;
      v58 = 24LL * (unsigned int)dword_18012AE88;
    }
    else
    {
      v58 = 0LL;
    }
    if ( (unsigned __int64)~v58 >= 8 )
    {
      v59 = malloc(v58 + 8);
      if ( v59 )
      {
        *v59 = qword_18012AE78;
        qword_18012AE78 = (__int64)v59;
        v60 = &v59[3 * (unsigned int)(dword_18012AE88 - 1) + 1];
        wFormatTag = (unsigned int)(dword_18012AE88 - 1);
        v57 = qword_18012AE80;
        if ( dword_18012AE88 - 1 >= 0 )
        {
          do
          {
            *v60 = v57;
            v57 = (__int64)v60;
            qword_18012AE80 = (__int64)v60;
            v60 -= 3;
            wFormatTag = (unsigned int)(wFormatTag - 1);
          }
          while ( (int)wFormatTag >= 0 );
        }
        goto LABEL_138;
      }
    }
LABEL_137:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_138:
  a10 = (unsigned __int16 **)v57;
  v61 = *(unsigned __int16 **)v57;
  *(_QWORD *)(v57 + 16) = this;
  qword_18012AE80 = (__int64)v61;
  *(_QWORD *)(v57 + 8) = 0LL;
  *(_QWORD *)v57 = v56;
  ++qword_18012AE70;
  if ( g_VADServerList )
    *(_QWORD *)(g_VADServerList + 8) = v57;
  else
    qword_18012AE68 = v57;
  g_VADServerList = v57;
  if ( lpCriticalSection.Data4[0] )
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection.Data1);
LABEL_150:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    v70 = 0x40600000050LL;
    v71 = 0LL;
    v72 = 0LL;
    v74 = 0;
    v75 = 0x20000;
    v73 = AEWMIGUID_PERFORMANCE;
    v76 = 0LL;
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v70);
  }
  if ( AliasedEndpointCharacteristics < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::Initialize", 0x5AFu, AliasedEndpointCharacteristics);
  if ( v82 )
    LeaveCriticalSection(v81);
  if ( v14 )
    ((void (__fastcall *)(struct IMMDevice *, __int64, __int64))v14->lpVtbl->Release)(v14, nChannels, wFormatTag);
  if ( v67 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *, __int64, __int64))(*(_QWORD *)v67 + 16LL))(
      v67,
      nChannels,
      wFormatTag);
  return (unsigned int)AliasedEndpointCharacteristics;
}
