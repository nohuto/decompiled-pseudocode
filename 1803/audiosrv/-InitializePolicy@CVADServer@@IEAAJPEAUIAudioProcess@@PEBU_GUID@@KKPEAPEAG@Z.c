/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180025900
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180024820 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180009E80 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180016560 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018A60 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002FDF0 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180030E30 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180031BD0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061040 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006339C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x18009ECC8 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800BB5A0 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800BB67C (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v11; // rax
  __int64 *v12; // rdi
  struct _GUID v13; // xmm0
  int OwningThread; // ebx
  __int64 v15; // rax
  int v16; // ebx
  unsigned int v17; // r12d
  int AudioSession; // esi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  struct IAudioProcess *v26; // rcx
  __int64 v27; // rbx
  unsigned __int16 *v29; // rdx
  void **v30; // r14
  __int64 v31; // r8
  signed __int64 v32; // rcx
  unsigned __int16 v33; // ax
  unsigned __int16 *v34; // rax
  volatile int *v35; // rdx
  CAudioSessionManagerProvider *v36; // rbx
  unsigned int (__fastcall *v37)(__int64, volatile int *); // rax
  const unsigned __int16 *v38; // rdx
  __int64 (__fastcall *v39)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManager; // eax
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // rdx
  int v45; // eax
  unsigned int v46; // eax
  int v47; // [rsp+40h] [rbp-79h]
  __int64 v48; // [rsp+48h] [rbp-71h] BYREF
  BOOL v49; // [rsp+50h] [rbp-69h]
  int v50; // [rsp+54h] [rbp-65h] BYREF
  unsigned int v51; // [rsp+58h] [rbp-61h]
  __int64 *v52; // [rsp+60h] [rbp-59h] BYREF
  __int64 v53; // [rsp+68h] [rbp-51h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-49h] BYREF
  char v55; // [rsp+78h] [rbp-41h]
  unsigned __int16 **v56; // [rsp+80h] [rbp-39h]
  struct CAudioSessionManager *v57; // [rsp+88h] [rbp-31h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-29h]
  CAudioSessionManagerProvider *v59; // [rsp+98h] [rbp-21h]
  const struct _GUID *v60; // [rsp+A0h] [rbp-19h]
  __int64 v61; // [rsp+A8h] [rbp-11h]
  struct _GUID v62; // [rsp+B0h] [rbp-9h]

  v61 = -2LL;
  v60 = a3;
  v56 = a6;
  v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v10 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_18018AA50);
    v11 = &qword_18018AA40;
  }
  else
  {
    v11 = (__int64 *)v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v12 = v11 + 3;
  v52 = v11 + 3;
  v13 = *a3;
  v62 = *a3;
  v53 = 0LL;
  v48 = 0LL;
  if ( g_ADGProcess )
  {
    OwningThread = (int)g_ADGProcess[2].OwningThread;
    *(_QWORD *)&v13.Data1 = *(_QWORD *)&v62.Data1;
    if ( OwningThread == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
      a4 |= 0x20000000u;
  }
  v58 = *(_QWORD *)&v13.Data1;
  v15 = *(_QWORD *)&v13.Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( *(_QWORD *)&v13.Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v15 = *(_QWORD *)v62.Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v15 )
    a4 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
  v16 = a4 & 0x10000;
  v47 = a4 & 0x10000;
  v51 = a4 & 0x60000000;
  v17 = (a4 >> 28) & 1 | 2;
  if ( (a4 & 0xA0000) != 0 )
    v17 = (a4 >> 28) & 1;
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)this + 26),
                   &v53);
  if ( AudioSession < 0 )
    goto LABEL_55;
  v19 = v48;
  if ( v48 != v53 )
  {
    v19 = 0LL;
    v48 = 0LL;
    if ( v53 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v53)(v53, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v48);
      v19 = v48;
    }
    v16 = a4 & 0x10000;
  }
  if ( !v19 )
  {
    AudioSession = -2147467262;
LABEL_55:
    AudSrvTraceLoggingErrorHelper("CVADServer::InitializePolicy", 0x4DBu, AudioSession);
    goto LABEL_56;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(v19, &v50);
  if ( AudioSession < 0 )
    goto LABEL_55;
  if ( v50 )
  {
    if ( v50 == 1 )
      v17 &= ~2u;
  }
  else
  {
    v17 |= 8u;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (a4 & 0x2000000) != 0 )
    v17 |= 0x20u;
  *((_DWORD *)this + 67) = a4;
  v49 = v16 != 0;
  AudioSession = CAudioEndpointId::Initialize(
                   (CVADServer *)((char *)this + 72),
                   *((const unsigned __int16 **)this + 26),
                   v20,
                   v21);
  if ( AudioSession < 0 )
    goto LABEL_49;
  if ( v47 && __PAIR128__(*(unsigned __int64 *)v62.Data4, v58) == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
  {
    AudioSession = -2147024809;
LABEL_43:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, AudioSession);
    goto LABEL_44;
  }
  *((struct _GUID *)this + 6) = v62;
  if ( !v47 )
  {
    v22 = (*(__int64 (__fastcall **)(struct IAudioProcess *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 2147942487LL);
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( *(_WORD *)(v22 + 2 * v23) );
    }
    else
    {
      LODWORD(v23) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 88, v22, (unsigned int)v23);
    v24 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v24 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *(_WORD *)(v24 + 2 * v25) );
    }
    else
    {
      LODWORD(v25) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 80, v24, (unsigned int)v25);
  }
  *((_DWORD *)this + 30) = v49;
  AudioSession = CAppAudioSessionId::CalculateStaticId((const void **)this + 10);
  if ( AudioSession < 0 )
    goto LABEL_43;
LABEL_44:
  if ( AudioSession < 0
    || ((*((_DWORD *)this + 34) = v49, v26 = a2, !v47)
      ? (*((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2),
         v26 = a2)
      : (struct IAudioProcess *)(*((_DWORD *)this + 32) = 0),
        *((_DWORD *)this + 33) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(v26),
        AudioSession = CAudioSessionInstanceId::CalculateStaticId((CVADServer *)((char *)this + 72)),
        AudioSession < 0) )
  {
LABEL_49:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x386u, AudioSession);
  }
  if ( AudioSession < 0 )
    goto LABEL_55;
  AudioSession = CAudioSessionInstanceId::ToString((char *)this + 72, &v52);
  v12 = v52;
  if ( AudioSession < 0 )
    goto LABEL_55;
  v27 = (unsigned int)(*((_DWORD *)v52 - 4) + 1);
  if ( (unsigned __int64)(2 * v27) > 0x40000 )
  {
    *v56 = 0LL;
LABEL_54:
    AudioSession = -2147024882;
    goto LABEL_55;
  }
  v29 = (unsigned __int16 *)operator new[](2 * v27, (const struct std::nothrow_t *)&std::nothrow);
  v30 = (void **)v56;
  *v56 = v29;
  if ( !v29 )
    goto LABEL_54;
  AudioSession = 0;
  if ( (unsigned __int64)(v27 - 1) > 0x7FFFFFFE )
    AudioSession = -2147024809;
  if ( AudioSession < 0 )
  {
    if ( v27 )
      *v29 = 0;
  }
  else
  {
    if ( v27 )
    {
      v31 = 2147483646 - v27;
      v32 = (char *)v12 - (char *)v29;
      do
      {
        if ( !(v31 + v27) )
          break;
        v33 = *(unsigned __int16 *)((char *)v29 + v32);
        if ( !v33 )
          break;
        *v29++ = v33;
        --v27;
      }
      while ( v27 );
    }
    v34 = v29 - 1;
    if ( v27 )
      v34 = v29;
    *v34 = 0;
    AudioSession = -2147024774;
    if ( v27 )
      AudioSession = 0;
  }
  if ( AudioSession < 0 )
  {
    operator delete(*v30);
    *v30 = 0LL;
    goto LABEL_55;
  }
  v59 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
  v55 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v36 = g_SingletonAudioSessionManagerProvider;
  if ( !g_SingletonAudioSessionManagerProvider )
  {
    if ( v55 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v55 = 0;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids);
    }
    AudioSession = -2004287487;
    goto LABEL_55;
  }
  v59 = g_SingletonAudioSessionManagerProvider;
  v37 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
  if ( v37 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (CAudioSessionManagerProvider *)((char *)g_SingletonAudioSessionManagerProvider + 8),
      v35);
  else
    ((void (__fastcall *)(CAudioSessionManagerProvider *))v37)(g_SingletonAudioSessionManagerProvider);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids,
      *((_QWORD *)this + 26));
  }
  v38 = (const unsigned __int16 *)*((_QWORD *)this + 26);
  v39 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v36 + 40LL);
  if ( v39 == CAudioSessionManagerProvider::GetAudioSessionManager )
    AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v36, v38, &v57);
  else
    AudioSessionManager = v39(v36, v38, &v57);
  AudioSession = AudioSessionManager;
  if ( AudioSessionManager < 0 )
  {
    (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v36 + 16LL))(v36);
    goto LABEL_55;
  }
  v41 = *((_QWORD *)this + 19);
  if ( v41 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    *((_QWORD *)this + 19) = 0LL;
  }
  *((_QWORD *)this + 19) = v57;
  (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v36 + 16LL))(v36);
  if ( g_DuckingManager )
  {
    v42 = *(_QWORD *)g_DuckingManager;
    v43 = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    v44 = 1LL;
    if ( a5 <= 3 )
      v44 = a5;
    (*(void (__fastcall **)(struct IAudioDuckingManager *, __int64, __int64))(v42 + 48))(g_DuckingManager, v44, v43);
  }
  if ( v47
    && *(_QWORD *)&v60->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1
    && *(_QWORD *)v60->Data4 == *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4 )
  {
    v17 |= 4u;
  }
  v45 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 272LL))(g_PolicyManager);
  if ( v45 == 1 )
  {
    v46 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v46);
  }
  else if ( v45 == 2 )
  {
    CPolicyConfig::DisconnectAllRenderEndpoints();
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_88b76fc63f1b3689695f31bb524eee45_Traceguids, this);
  }
  AudioSession = CAudioSessionManager::CreateAudioSession(
                   *((CAudioSessionManager **)this + 19),
                   a2,
                   (CVADServer *)((char *)this + 72),
                   v17,
                   v51,
                   *((_DWORD *)this + 16),
                   (struct CAudioSession **)this + 21);
  if ( AudioSession < 0 )
    goto LABEL_55;
LABEL_56:
  if ( v48 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v12 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*(v12 - 3) + 8LL))(*(v12 - 3));
  return (unsigned int)AudioSession;
}
