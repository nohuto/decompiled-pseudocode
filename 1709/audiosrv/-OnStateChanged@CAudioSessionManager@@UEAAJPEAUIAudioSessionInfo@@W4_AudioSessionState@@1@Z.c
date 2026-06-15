/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015CC0
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180016CC0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x180014DDC (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180014E20 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x180015B30 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180016C70 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x1800184F0 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z @ 0x18001AE50 (-GetImplementation@CAudioSession@@UEAAJPEAPEAV1@@Z.c)
 *     ?QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001AF30 (-QueryInterface@CAudioSession@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x180067B48 (WPP_SF_Sd.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x180078E1C (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        CAudioSessionManager *this,
        __int64 (__fastcall ***a2)(CAudioSession *__hidden this, const struct _GUID *, void **),
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  enum _AudioSessionState v4; // esi
  CAudioSessionManager *v6; // r15
  __int64 (__fastcall *v7)(CAudioSession *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v9)(CAudioSession *__hidden, struct CAudioSession **); // rax
  int Implementation; // eax
  struct CAudioSession *v11; // rbx
  int (*v12)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int (*v13)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int (*v14)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  __int64 v15; // r10
  void (*v16)(void); // rax
  void (*v17)(void); // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx
  _QWORD *v21; // rdx
  _QWORD *v22; // rdx
  CAudioSession *v23; // rcx
  WINBOOL *v25; // rbx
  struct CAudioSession *v26; // [rsp+30h] [rbp-128h] BYREF
  WINBOOL fPending[2]; // [rsp+38h] [rbp-120h] BYREF
  enum _AudioSessionState v28; // [rsp+40h] [rbp-118h]
  CAudioSession *v29; // [rsp+48h] [rbp-110h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-108h] BYREF
  LPCRITICAL_SECTION v31; // [rsp+58h] [rbp-100h] BYREF
  char v32; // [rsp+60h] [rbp-F8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-F0h] BYREF
  char v34; // [rsp+70h] [rbp-E8h]
  _DWORD v35[2]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+80h] [rbp-D8h]
  __int64 v37; // [rsp+88h] [rbp-D0h]
  WINBOOL *v38; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-A8h]
  __int128 v42; // [rsp+B8h] [rbp-A0h]
  __int64 v43; // [rsp+C8h] [rbp-90h]
  int v44; // [rsp+D0h] [rbp-88h]
  __int64 v45; // [rsp+D8h] [rbp-80h]
  int v46; // [rsp+E0h] [rbp-78h]
  __int64 v47; // [rsp+E8h] [rbp-70h]
  unsigned __int16 *v48; // [rsp+F0h] [rbp-68h] BYREF
  int v49; // [rsp+F8h] [rbp-60h]
  int v50; // [rsp+FCh] [rbp-5Ch]
  void *v51; // [rsp+100h] [rbp-58h]
  int v52; // [rsp+108h] [rbp-50h]
  int v53; // [rsp+10Ch] [rbp-4Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp-48h] BYREF

  v37 = -2LL;
  v4 = a4;
  v6 = this;
  Context = this;
  v28 = a4;
  v29 = 0LL;
  v26 = 0LL;
  v7 = **a2;
  if ( v7 == CAudioSession::QueryInterface )
    Interface = CAudioSession::QueryInterface(
                  (CAudioSession *)a2,
                  &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
                  (void **)&v29);
  else
    Interface = v7((CAudioSession *)a2, &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a, (void **)&v29);
  if ( Interface < 0
    || ((v9 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct CAudioSession **))(*(_QWORD *)v29 + 24LL),
         v9 != CAudioSession::GetImplementation)
      ? (Implementation = v9(v29, &v26))
      : (Implementation = CAudioSession::GetImplementation(v29, &v26)),
        Implementation < 0) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids);
    }
    v23 = v29;
    if ( v29 )
      goto LABEL_49;
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27,
      (unsigned int)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
      0,
      v4);
  }
  v11 = v26;
  v39 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v26 + 90) - 24LL) + 24;
  *(_QWORD *)fPending = &v40;
  v40 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v11 + 91) - 24LL) + 24;
  v41 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v11 + 92) - 24LL) + 24;
  v42 = *(_OWORD *)((char *)v11 + 744);
  v43 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v11 + 95) - 24LL) + 24;
  v44 = *((_DWORD *)v11 + 192);
  v45 = *((_QWORD *)v11 + 97);
  v46 = *((_DWORD *)v11 + 196);
  v47 = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)v11 + 99) - 24LL) + 24;
  if ( a3 == AudioSessionStateExpired )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        28LL,
        &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
        (unsigned int)v4);
    }
    v31 = (LPCRITICAL_SECTION)((char *)v6 + 24);
    v32 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v31);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29,
        (unsigned int)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
        0,
        v47);
    }
    try
    {
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        (__int64)v6 + 64,
        (const struct CAudioSessionInstanceId *)&v39,
        &v26);
    }
    catch ( ATL::CAtlException *v38 )
    {
      v25 = v38;
      if ( *v38 == -1073741571 )
        _o__resetstkoflw();
      fPending[0] = *v25;
      v6 = (CAudioSessionManager *)Context;
      v4 = v28;
      if ( fPending[0] < 0 )
        goto LABEL_69;
    }
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, v6, v26);
    }
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v26 + 8LL))(v26);
LABEL_69:
    if ( v32 )
      LeaveCriticalSection(v31);
  }
  if ( v4 == AudioSessionStateActive )
  {
    CAudioSessionManager::NotifyActiveSession(v6, v26);
  }
  else if ( v4 == AudioSessionStateExpired )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, 0LL);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 24);
    v34 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35,
        (unsigned int)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
        0,
        v47);
    }
    if ( ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
           (__int64)v6 + 64,
           (__int64)&v39) )
    {
      if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids);
      }
      v12 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v26 + 184LL);
      if ( v12 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v26, v6);
      else
        ((void (__fastcall *)(struct CAudioSession *, CAudioSessionManager *))v12)(v26, v6);
      v13 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v26 + 184LL);
      if ( v13 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v26, g_PolicyEventsHandler);
      else
        ((void (__fastcall *)(struct CAudioSession *, struct ISessionInternalEvents *))v13)(v26, g_PolicyEventsHandler);
      v14 = *(int (**)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v26 + 184LL);
      if ( v14 == CAudioSession::DeleteSessionNotification )
        CAudioSession::DeleteSessionNotification(v26, g_TelephonyControlEventsHandler);
      else
        ((void (__fastcall *)(struct CAudioSession *, struct ISessionInternalEvents *))v14)(
          v26,
          g_TelephonyControlEventsHandler);
      InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context);
      if ( fPending[0] )
      {
        Context = qword_18014C2B8;
        qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
      }
      if ( **((_DWORD **)Context + 1) > 4u )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)v26 + 99));
        v35[0] = ((unsigned int)&unk_18010EF12 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v35[1] = 4;
        v36 = 0LL;
        v48 = *(unsigned __int16 **)(v15 + 8);
        v49 = *v48;
        v50 = 2;
        v51 = &unk_18010EF1D;
        v52 = 42;
        v53 = 1;
        EtwEventWriteTransfer(*(_QWORD *)(v15 + 32), v35, 0LL, 0LL, 3, &v48);
      }
      v16 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
      if ( (char *)v16 == (char *)CAudioSession::Release )
        CAudioSession::Release(v26);
      else
        v16();
    }
    else if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, v47);
    }
    if ( v34 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v26 )
  {
    v17 = *(void (**)(void))(*(_QWORD *)v26 + 16LL);
    if ( (char *)v17 == (char *)CAudioSession::Release )
      CAudioSession::Release(v26);
    else
      v17();
    v26 = 0LL;
  }
  v18 = (_QWORD *)(v47 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 8LL))(*v18);
  v19 = (_QWORD *)(v43 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 8LL))(*v19);
  v20 = (_QWORD *)(v41 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v41 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 8LL))(*v20);
  v21 = (_QWORD *)(v40 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 8LL))(*v21);
  v22 = (_QWORD *)(v39 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 8LL))(*v22);
  v23 = v29;
  if ( v29 )
LABEL_49:
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v23 + 16LL))(v23);
  return 0LL;
}
