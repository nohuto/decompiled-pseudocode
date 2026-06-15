/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026F70
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x180013260 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x1800147BC (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180020320 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHPEAPEAVCEndpointChar.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharacteristics@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800207D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointCharact.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180020DE0 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x180020E38 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180023870 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180023A10 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800276C4 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?GetConnectorTypeForStream@@YA?AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMDevice@@KW4_AUDCLNT_SHAREMODE@@HHPEBUtWAVEFORMATEX@@PEAUIProcessSubmixProxy@@@Z @ 0x180030D64 (-GetConnectorTypeForStream@@YA-AW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIMMD.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18003162C (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     WPP_SF_dd @ 0x180089EEC (WPP_SF_dd.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x18008BB7C (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     WPP_SF_DDd @ 0x18009083C (WPP_SF_DDd.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x1800F0000 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

// Hidden C++ exception states: #wind=5 #try_helpers=1
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        const struct tWAVEFORMATEX *Src,
        const struct _GUID *a7,
        unsigned int a8,
        struct VadServerSettings *a9,
        unsigned __int16 **a10,
        struct IProcessSubmixProxy *a11)
{
  struct IMMDevice *v15; // rbx
  __int64 nChannels; // rdx
  struct ATL::CAtlPlex *wFormatTag; // r8
  __int64 (__fastcall *v18)(RTL_SRWLOCK *, const unsigned __int16 *, int, struct CEndpointCharacteristics **); // rax
  int AliasedEndpointCharacteristics; // eax
  int v20; // edi
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // r12d
  CEndpointCharacteristics *v25; // rdi
  int IsOffloadCapable; // esi
  int v27; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 ConnectorTypeForStream; // eax
  __int64 cbSize; // rsi
  void *v30; // rax
  void *v31; // r12
  __int64 v32; // rsi
  CAudioDGProcess *v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  void (*v37)(void); // rax
  __int64 v39; // rdx
  __int64 v40; // r9
  void *v41; // rax
  void *v42; // rcx
  void *v43; // rcx
  unsigned __int64 v44; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v45; // [rsp+20h] [rbp-D8h]
  struct tWAVEFORMATEX *v46; // [rsp+28h] [rbp-D0h]
  struct tWAVEFORMATEX *v47; // [rsp+28h] [rbp-D0h]
  CEndpointCharacteristics *v48; // [rsp+70h] [rbp-88h] BYREF
  GUID pv; // [rsp+78h] [rbp-80h] BYREF
  struct IMMDevice *v50; // [rsp+88h] [rbp-70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+90h] [rbp-68h] BYREF
  char v52; // [rsp+98h] [rbp-60h]
  __int64 v53; // [rsp+A8h] [rbp-50h]
  GUID v54; // [rsp+B0h] [rbp-48h] BYREF

  v53 = -2LL;
  v48 = 0LL;
  v15 = 0LL;
  v50 = 0LL;
  AEWMILOG_PERFORMANCE((unsigned int)this, a2, (unsigned __int8)a3, 5u, v44, (unsigned __int64)v46);
  *a10 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v52 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_DWORD *)this + 46) )
  {
    v20 = -2004287486;
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_92;
    }
    v39 = 31LL;
LABEL_54:
    v40 = (unsigned int)v20;
LABEL_55:
    WPP_SF_d(*((_QWORD *)v33 + 2), v39, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, v40);
    goto LABEL_91;
  }
  if ( a4 > 1 )
  {
    v20 = -2147024809;
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_92;
    }
    LODWORD(v45) = -2147024809;
    WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 32LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
    goto LABEL_91;
  }
  v18 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, const unsigned __int16 *, int, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
  if ( v18 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       a3,
                                       0,
                                       &v48);
  else
    AliasedEndpointCharacteristics = v18((RTL_SRWLOCK *)g_pEndpointCharacteristicsCache, a3, 0, &v48);
  v20 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_91;
  *(_QWORD *)&pv.Data1 = 0LL;
  v20 = (*(__int64 (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)v48 + 2) + 40LL))(*((_QWORD *)v48 + 2), &pv);
  if ( v20 < 0 )
  {
    CoTaskMemFree(*(LPVOID *)&pv.Data1);
    v33 = WPP_GLOBAL_Control;
LABEL_92:
    if ( *a10 )
    {
      operator delete(*a10);
      *a10 = 0LL;
      v33 = WPP_GLOBAL_Control;
    }
    if ( v33 != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v33 + 7) & 0x100) != 0
      && *((_BYTE *)v33 + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)v33 + 2),
        38,
        (unsigned int)&WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
        *((_QWORD *)this + 26),
        v20);
    }
    goto LABEL_39;
  }
  v21 = -1LL;
  if ( *(_QWORD *)&pv.Data1 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)(*(_QWORD *)&pv.Data1 + 2 * v22) );
  }
  else
  {
    LODWORD(v22) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this + 26, *(char **)&pv.Data1, v22);
  if ( a3 )
  {
    do
      ++v21;
    while ( a3[v21] );
  }
  else
  {
    LODWORD(v21) = 0;
  }
  ATL::CSimpleStringT<unsigned short,0>::SetString((__int64 *)this + 25, (char *)a3, v21);
  CoTaskMemFree(*(LPVOID *)&pv.Data1);
  *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v20 = ValidateVadServerSettings(a9);
  if ( v20 < 0 )
    goto LABEL_91;
  *((_OWORD *)this + 17) = *(_OWORD *)a9;
  *((_OWORD *)this + 18) = *((_OWORD *)a9 + 1);
  *((_OWORD *)this + 19) = *((_OWORD *)a9 + 2);
  *((_OWORD *)this + 20) = *((_OWORD *)a9 + 3);
  *((_OWORD *)this + 21) = *((_OWORD *)a9 + 4);
  *((_OWORD *)this + 22) = *((_OWORD *)a9 + 5);
  *((_OWORD *)this + 23) = *((_OWORD *)a9 + 6);
  if ( *((_DWORD *)this + 90) )
  {
    v41 = operator new[](*((unsigned int *)this + 90), (const struct std::nothrow_t *)&std::nothrow);
    v42 = (void *)*((_QWORD *)this + 54);
    *((_QWORD *)this + 54) = v41;
    if ( v42 )
      operator delete(v42, (const struct std::nothrow_t *)1);
    v43 = (void *)*((_QWORD *)this + 54);
    if ( !v43 )
    {
      v20 = -2147024882;
      goto LABEL_91;
    }
    memcpy_0(v43, *((const void **)this + 46), *((unsigned int *)this + 90));
    *((_QWORD *)this + 46) = *((_QWORD *)this + 54);
  }
  v20 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioProcess *, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                                + 120LL))(
          g_PolicyManager,
          a2,
          *((_QWORD *)this + 26));
  if ( v20 < 0 )
    goto LABEL_91;
  v23 = ValidateWaveFormatEx(Src);
  v20 = v23;
  if ( v23 < 0 )
  {
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_92;
    }
    v39 = 34LL;
    v40 = (unsigned int)v23;
    goto LABEL_55;
  }
  nChannels = Src->nChannels;
  if ( (unsigned __int16)nChannels > 2u )
  {
    wFormatTag = (struct ATL::CAtlPlex *)Src->wFormatTag;
    if ( (((_WORD)wFormatTag - 1) & 0xFFFD) == 0 )
    {
      v20 = -2147024809;
      v33 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
      {
        goto LABEL_92;
      }
      LODWORD(v45) = (unsigned __int16)nChannels;
      WPP_SF_DDd(*((_QWORD *)WPP_GLOBAL_Control + 2), nChannels, wFormatTag, (unsigned __int16)wFormatTag);
      goto LABEL_91;
    }
  }
  v20 = CVADServer::InitializePolicy(this, a2, a7, a5, a8, a10);
  if ( v20 < 0 )
    goto LABEL_91;
  v24 = *((_DWORD *)v48 + 37) ? 1 : HIWORD(a5) & 2;
  v15 = (struct IMMDevice *)*((_QWORD *)v48 + 2);
  v50 = v15;
  ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->AddRef)(v15);
  v25 = v48;
  IsOffloadCapable = CEndpointCharacteristics::IsOffloadCapable(v48);
  v27 = CEndpointCharacteristics::HardwareLoopbackEnabled(v25);
  ConnectorTypeForStream = GetConnectorTypeForStream(
                             v15,
                             a5,
                             (enum _AUDCLNT_SHAREMODE)a4,
                             v27,
                             IsOffloadCapable,
                             Src,
                             a11);
  v20 = DeriveAudioProcessingModeConfiguration(
          *((_DWORD *)this + 72),
          *((_DWORD *)this + 74),
          *((_DWORD *)this + 94),
          v48,
          v24,
          a4,
          ConnectorTypeForStream,
          0,
          *((_DWORD *)this + 78),
          &v54,
          &pv,
          (GUID *)this + 24,
          0LL);
  if ( v20 < 0 )
  {
LABEL_91:
    v33 = WPP_GLOBAL_Control;
    goto LABEL_92;
  }
  if ( a4 == 1
    && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)this + 26))
     || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)a2 + 144LL))(
           a2,
           *((unsigned int *)a9 + 4),
           1LL)) )
  {
    v20 = -2004287474;
    goto LABEL_91;
  }
  cbSize = Src->cbSize;
  v30 = CoTaskMemAlloc(cbSize + 18);
  v31 = v30;
  if ( v30 )
  {
    memcpy_0(v30, Src, cbSize + 18);
    v20 = 0;
  }
  else
  {
    v20 = -2147024882;
  }
  *((_QWORD *)this + 22) = v31;
  if ( v20 < 0 )
  {
    v33 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 3u )
    {
      goto LABEL_92;
    }
    v39 = 36LL;
    goto LABEL_54;
  }
  *((_DWORD *)this + 64) = a4;
  v32 = *((_QWORD *)this + 53);
  *((_QWORD *)this + 53) = a11;
  if ( a11 )
    (*(void (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a11 + 8LL))(a11);
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  *((_DWORD *)this + 46) = 1;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
  }
  *(_QWORD *)&pv.Data1 = &g_csVadList;
  pv.Data4[0] = 0;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)&pv);
  v34 = g_VADServerList;
  nChannels = qword_18014B1E0;
  if ( !qword_18014B1E0 )
  {
    wFormatTag = ATL::CAtlPlex::Create(&qword_18014B1D8, (unsigned int)dword_18014B1E8, 0x18uLL);
    if ( !wFormatTag )
      ATL::AtlThrowImpl(-2147024882);
    v35 = (unsigned int)(dword_18014B1E8 - 1);
    v33 = (struct ATL::CAtlPlex *)((char *)wFormatTag + 16 * v35 + 8 * v35 + 8);
    for ( nChannels = qword_18014B1E0; (int)v35 >= 0; LODWORD(v35) = v35 - 1 )
    {
      *(_QWORD *)v33 = nChannels;
      nChannels = (__int64)v33;
      qword_18014B1E0 = (__int64)v33;
      v33 = (CAudioDGProcess *)((char *)v33 - 24);
    }
  }
  v36 = *(_QWORD *)nChannels;
  *(_QWORD *)(nChannels + 16) = this;
  qword_18014B1E0 = v36;
  *(_QWORD *)(nChannels + 8) = 0LL;
  *(_QWORD *)nChannels = v34;
  ++qword_18014B1D0;
  if ( g_VADServerList )
    *(_QWORD *)(g_VADServerList + 8) = nChannels;
  else
    qword_18014B1C8 = nChannels;
  g_VADServerList = nChannels;
  if ( pv.Data4[0] )
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&pv.Data1);
LABEL_39:
  AEWMILOG_PERFORMANCE(
    (unsigned int)v33,
    (void *)nChannels,
    (unsigned __int8)wFormatTag,
    6u,
    v45,
    (unsigned __int64)v47);
  if ( v20 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::Initialize", 0x5E3u, v20);
  if ( v52 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v15 )
    ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->Release)(v15);
  if ( v48 )
  {
    v37 = *(void (**)(void))(*(_QWORD *)v48 + 16LL);
    if ( (char *)v37 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointCharacteristics>::Release((volatile signed __int32 *)v48);
    else
      v37();
  }
  return (unsigned int)v20;
}
