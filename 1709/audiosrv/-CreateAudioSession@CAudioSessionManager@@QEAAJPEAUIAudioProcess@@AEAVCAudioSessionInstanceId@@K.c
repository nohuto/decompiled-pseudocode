/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180015510 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800276C4 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180079C80 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x18007B170 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180007BA0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x180014DDC (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180014E20 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180015B30 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180016930 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180018570 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x18001A000 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18002D03C (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180059EF0 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800712B8 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x180074FC4 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     WPP_SF_SS @ 0x180078E1C (WPP_SF_SS.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800790AC (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  __int64 *v8; // rsi
  struct IAudioProcess *v9; // r15
  struct ISessionInternalEvents *v10; // rbx
  struct CAudioSession **v11; // r12
  char v12; // r13
  CPerStreamVolumeAudioSession *v13; // rax
  struct CAudioSession *v14; // rax
  __int64 (__usercall *v15)@<rax>(CAudioSession *__hidden@<rcx>, struct IAudioProcess *@<rdx>, struct CAudioSessionInstanceId *@<r8>, unsigned int@<r9d>, unsigned int, unsigned int); // r10
  int v16; // r14d
  struct CAudioSession *v17; // rcx
  int (*v18)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v19; // r14d
  int (*v20)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v21; // r14d
  int (*v22)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v23; // r14d
  struct CAudioSession *v24; // rsi
  CAudioSession *v25; // rbx
  __int64 v26; // rsi
  void (*v27)(void); // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // r14
  int v30; // eax
  const char *v31; // r9
  __int64 result; // rax
  WINBOOL *v33; // rbx
  CPerEndpointVolumeAudioSession *v34; // rax
  unsigned int v35; // ebx
  int v36; // eax
  unsigned int v37; // edi
  int v38; // [rsp+20h] [rbp-178h]
  struct CAudioSession *v39; // [rsp+40h] [rbp-158h] BYREF
  struct CAudioSession *v40; // [rsp+48h] [rbp-150h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-148h] BYREF
  char v42; // [rsp+58h] [rbp-140h]
  WINBOOL fPending; // [rsp+60h] [rbp-138h] BYREF
  struct IAudioProcess *v44; // [rsp+68h] [rbp-130h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-128h] BYREF
  struct CAudioSession *v46; // [rsp+78h] [rbp-120h] BYREF
  __int128 v47; // [rsp+80h] [rbp-118h] BYREF
  _QWORD v48[2]; // [rsp+90h] [rbp-108h] BYREF
  __int128 v49; // [rsp+A0h] [rbp-F8h]
  struct CAudioSession **v50; // [rsp+B0h] [rbp-E8h]
  struct CAudioSession **v51; // [rsp+B8h] [rbp-E0h]
  char v52; // [rsp+C0h] [rbp-D8h]
  __int64 v53; // [rsp+C8h] [rbp-D0h]
  WINBOOL *v54; // [rsp+D0h] [rbp-C8h] BYREF
  __int128 v55; // [rsp+D8h] [rbp-C0h]
  char v56; // [rsp+E8h] [rbp-B0h]
  __int128 v57; // [rsp+F0h] [rbp-A8h]
  struct CAudioSession **v58; // [rsp+100h] [rbp-98h]
  char v59; // [rsp+108h] [rbp-90h]
  unsigned __int16 *v60; // [rsp+110h] [rbp-88h] BYREF
  int v61; // [rsp+118h] [rbp-80h]
  int v62; // [rsp+11Ch] [rbp-7Ch]
  void *v63; // [rsp+120h] [rbp-78h]
  int v64; // [rsp+128h] [rbp-70h]
  int v65; // [rsp+12Ch] [rbp-6Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp-68h] BYREF
  struct IAudioProcess **v67; // [rsp+140h] [rbp-58h]
  __int64 v68; // [rsp+148h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+0h]

  v53 = -2LL;
  v8 = (__int64 *)a3;
  v9 = a2;
  v10 = this;
  Context = this;
  v44 = a2;
  v48[0] = a3;
  v11 = a7;
  *(_QWORD *)&v47 = a7;
  try
  {
    v12 = 1;
    *a7 = 0LL;
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
    v42 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v40 = 0LL;
    if ( (int)CAudioSessionManager::FindAudioSession(v10, (struct CAudioSessionInstanceId *)v8, &v40) >= 0 )
    {
      v25 = v40;
      if ( (a4 & 0x20) != 0 )
        *((_DWORD *)v40 + 136) = 1;
    }
    else
    {
      LeaveCriticalSection(lpCriticalSection);
      v42 = 0;
      v39 = 0LL;
      if ( (a4 & 8) != 0 )
      {
        v13 = (CPerStreamVolumeAudioSession *)operator new(0x480uLL, (const struct std::nothrow_t *)&std::nothrow);
        v46 = v13;
        if ( v13 )
          v14 = CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession(v13);
        else
          v14 = 0LL;
      }
      else
      {
        v34 = (CPerEndpointVolumeAudioSession *)operator new(0x448uLL, (const struct std::nothrow_t *)&std::nothrow);
        v46 = v34;
        if ( v34 )
          v14 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v34);
        else
          v14 = 0LL;
      }
      v39 = v14;
      if ( !v14 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x112,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL,
          v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        return 2147942414LL;
      }
      v15 = *(__int64 (__usercall **)@<rax>(CAudioSession *__hidden@<rcx>, struct IAudioProcess *@<rdx>, struct CAudioSessionInstanceId *@<r8>, unsigned int@<r9d>, unsigned int, unsigned int))(*(_QWORD *)v14 + 192LL);
      v38 = a5;
      if ( v15 == CAudioSession::FinishConstruction )
        v16 = CAudioSession::FinishConstruction(v14, v9, (struct CAudioSessionInstanceId *)v8, a4, a5, a6);
      else
        v16 = ((__int64 (__fastcall *)(struct CAudioSession *, struct IAudioProcess *, __int64 *, _QWORD))v15)(
                v14,
                v9,
                v8,
                a4);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x114,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v16,
          v38);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        return (unsigned int)v16;
      }
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      v17 = v40;
      v40 = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v17 + 16LL))(v17);
      if ( (int)CAudioSessionManager::FindAudioSession(v10, (struct CAudioSessionInstanceId *)v8, &v40) >= 0 )
      {
        CAudioSession::ForceExpire(v39);
        v25 = v40;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            11,
            (unsigned int)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
            0,
            v8[9]);
        }
        try
        {
          v46 = v39;
          ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
            (__int64)v10 + 64,
            (const struct CAudioSessionInstanceId *)v8,
            &v46);
        }
        catch ( ATL::CAtlException *v54 )
        {
          v33 = v54;
          if ( *v54 == -1073741571 )
            _o__resetstkoflw();
          fPending = *v33;
          v35 = fPending;
          if ( fPending < 0 )
          {
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x11F,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)fPending,
              v38);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
            if ( v42 )
              LeaveCriticalSection(lpCriticalSection);
            return v35;
          }
          v10 = (struct ISessionInternalEvents *)Context;
          v9 = v44;
          v8 = (__int64 *)v48[0];
          v11 = (struct CAudioSession **)v47;
        }
        (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v39 + 8LL))(v39);
        *(_QWORD *)&v49 = v10;
        *((_QWORD *)&v49 + 1) = v8;
        v50 = &v39;
        v57 = v49;
        v58 = &v39;
        v59 = 1;
        v18 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v39 + 176LL);
        if ( v18 == CAudioSession::AddSessionNotification )
          v19 = CAudioSession::AddSessionNotification(v39, v10);
        else
          v19 = ((__int64 (__fastcall *)(struct CAudioSession *, struct ISessionInternalEvents *))v18)(v39, v10);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x12C,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v19,
            v38);
          ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
            (__int64)v10 + 64,
            (__int64)v8);
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v39 + 16LL))(v39);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
          if ( v42 )
            LeaveCriticalSection(lpCriticalSection);
          return (unsigned int)v19;
        }
        *(_QWORD *)&v47 = &v39;
        *((_QWORD *)&v47 + 1) = v10;
        v55 = v47;
        v56 = 1;
        v20 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v39 + 176LL);
        if ( v20 == CAudioSession::AddSessionNotification )
          v21 = CAudioSession::AddSessionNotification(v39, g_PolicyEventsHandler);
        else
          v21 = ((__int64 (__fastcall *)(struct CAudioSession *, struct ISessionInternalEvents *))v20)(
                  v39,
                  g_PolicyEventsHandler);
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x133,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v21,
            v38);
          (*(void (__fastcall **)(struct CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v39 + 184LL))(
            v39,
            v10);
          ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
            (__int64)v10 + 64,
            (__int64)v8);
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v39 + 16LL))(v39);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
          if ( v42 )
            LeaveCriticalSection(lpCriticalSection);
          return (unsigned int)v21;
        }
        *(_QWORD *)&v49 = &v39;
        BYTE8(v49) = 1;
        v22 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v39 + 176LL);
        if ( v22 == CAudioSession::AddSessionNotification )
          v23 = CAudioSession::AddSessionNotification(v39, g_TelephonyControlEventsHandler);
        else
          v23 = ((__int64 (__fastcall *)(struct CAudioSession *, struct ISessionInternalEvents *))v22)(
                  v39,
                  g_TelephonyControlEventsHandler);
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x13A,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v23,
            v38);
          (*(void (__fastcall **)(struct CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v39 + 184LL))(
            v39,
            g_PolicyEventsHandler);
          (*(void (__fastcall **)(struct CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v39 + 184LL))(
            v39,
            v10);
          ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
            (__int64)v10 + 64,
            (__int64)v8);
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v39 + 16LL))(v39);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
          if ( v42 )
            LeaveCriticalSection(lpCriticalSection);
          return (unsigned int)v23;
        }
        v51 = &v39;
        v52 = 1;
        CAudioSessionManager::NotifyActiveSession(v10, v39);
        v24 = v40;
        v25 = v39;
        v40 = v39;
        if ( v39 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v39 + 8LL))(v39);
        if ( v24 )
          (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v24 + 16LL))(v24);
        v12 = 0;
        v52 = 0;
        BYTE8(v49) = 0;
        v56 = 0;
        v59 = 0;
        InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
        if ( fPending )
        {
          Context = qword_18014C2B8;
          qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
          qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
        }
        v26 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v26 > 4u )
        {
          TlgCreateWsz(&pDesc, *((LPCWSTR *)v25 + 99));
          LODWORD(v44) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
          v67 = &v44;
          v68 = 4LL;
          LODWORD(v48[0]) = ((unsigned int)&unk_18010EF48 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          HIDWORD(v48[0]) = 4;
          v48[1] = 0LL;
          v60 = *(unsigned __int16 **)(v26 + 8);
          v61 = *v60;
          v62 = 2;
          v63 = &unk_18010EF53;
          v64 = 53;
          v65 = 1;
          EtwEventWriteTransfer(*(_QWORD *)(v26 + 32), v48, 0LL, 0LL, 4, &v60);
          v25 = v40;
        }
      }
      if ( v39 )
      {
        v27 = *(void (**)(void))(*(_QWORD *)v39 + 16LL);
        if ( (char *)v27 == (char *)CAudioSession::Release )
          CAudioSession::Release(v39);
        else
          v27();
      }
    }
    LODWORD(v44) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
    EnterCriticalSection((LPCRITICAL_SECTION)v25 + 20);
    *(_QWORD *)&v47 = (char *)v25 + 800;
    v28 = (_QWORD *)*((_QWORD *)v25 + 105);
    v29 = (_QWORD *)*((_QWORD *)v25 + 106);
    while ( v28 != v29 )
    {
      v30 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v28 + 40LL))(*v28);
      if ( v30 == (_DWORD)v44 )
      {
        Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v47);
LABEL_40:
        if ( v12 )
          (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v25 + 208LL))(v25);
        *v11 = v25;
        if ( v42 )
          LeaveCriticalSection(lpCriticalSection);
        return 0LL;
      }
      ++v28;
    }
    if ( v25 != (CAudioSession *)-800LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)v25 + 20);
    v36 = CAudioSession::RegisterOwnerProcess(v25, v9);
    v37 = v36;
    if ( v36 >= 0 )
      goto LABEL_40;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x170,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v36,
      v38);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
    if ( v42 )
      LeaveCriticalSection(lpCriticalSection);
    result = v37;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x187,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v31);
  }
  return result;
}
