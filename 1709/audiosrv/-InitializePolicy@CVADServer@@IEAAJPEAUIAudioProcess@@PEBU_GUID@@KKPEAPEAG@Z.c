/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800276C4
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026F70 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180013188 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180013220 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180013A20 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180017590 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800176CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_ @ 0x180064AF4 (WPP_SF_.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x180083654 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x180083730 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 *     WPP_SF_ql @ 0x180090958 (WPP_SF_ql.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *); // rax
  struct ATL::CStringData *NilString; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int16 *v14; // rdi
  CAudioDGProcess *v15; // r10
  int OwningThread; // ebx
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // r14d
  int AudioSession; // esi
  struct IUnknown *v21; // rcx
  __int64 v22; // rbx
  unsigned __int16 *v23; // rax
  void **v24; // r12
  const unsigned __int16 *v25; // rdx
  volatile signed __int32 *v26; // rbx
  __int64 (__fastcall *v27)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManager; // eax
  __int64 v29; // rcx
  struct CAudioSessionManager *v30; // r9
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  __int64 (__fastcall *v37)(volatile signed __int32 *); // rdx
  volatile signed __int32 *v38; // rcx
  unsigned int v39; // eax
  int v40; // [rsp+40h] [rbp-59h]
  struct IUnknown *v41; // [rsp+48h] [rbp-51h] BYREF
  struct CAudioSessionManager *v42; // [rsp+50h] [rbp-49h] BYREF
  int v43; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v44; // [rsp+5Ch] [rbp-3Dh]
  unsigned __int16 *v45; // [rsp+60h] [rbp-39h] BYREF
  struct IUnknown *v46; // [rsp+68h] [rbp-31h] BYREF
  const struct _GUID *v47; // [rsp+70h] [rbp-29h]
  __int64 v48; // [rsp+78h] [rbp-21h]
  struct _GUID v49; // [rsp+80h] [rbp-19h] BYREF

  v48 = -2LL;
  v47 = a3;
  v42 = (struct CAudioSessionManager *)a6;
  v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v10 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v14 = (unsigned __int16 *)((char *)NilString + 24);
  v45 = (unsigned __int16 *)((char *)NilString + 24);
  v49 = *a3;
  v46 = 0LL;
  v41 = 0LL;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, this, a4);
    v15 = WPP_GLOBAL_Control;
  }
  if ( g_ADGProcess )
  {
    OwningThread = (int)g_ADGProcess[2].OwningThread;
    v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
    v15 = WPP_GLOBAL_Control;
    if ( OwningThread == v17 )
      a4 |= 0x20000000u;
  }
  v18 = *(_QWORD *)&v49.Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( *(_QWORD *)&v49.Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v18 = *(_QWORD *)v49.Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v18 )
  {
    a4 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
    v15 = WPP_GLOBAL_Control;
  }
  v40 = a4 & 0x10000;
  v44 = a4 & 0x60000000;
  v19 = (a4 >> 28) & 1 | 2;
  if ( (a4 & 0xA0000) != 0 )
    v19 = (a4 >> 28) & 1;
  if ( v15 != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v15 + 7) & 0x100) != 0
    && *((_BYTE *)v15 + 25) >= 4u )
  {
    WPP_SF_ql(*((_QWORD *)v15 + 2), v12, v13, this, v19 & 2);
  }
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)this + 25),
                   &v46);
  if ( AudioSession >= 0 )
  {
    v21 = v41;
    if ( v41 != v46 )
    {
      ATL::AtlComQIPtrAssign(&v41, v46, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v21 = v41;
    }
    if ( v21 )
    {
      AudioSession = ((__int64 (__fastcall *)(struct IUnknown *, int *))v21->lpVtbl[1].QueryInterface)(v21, &v43);
      if ( AudioSession >= 0 )
      {
        if ( !v43 )
          v19 |= 8u;
        if ( v43 == 1 )
          v19 &= ~2u;
        if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2)
          && (a4 & 0x2000000) != 0 )
        {
          v19 |= 0x20u;
        }
        *((_DWORD *)this + 65) = a4;
        AudioSession = CAudioSessionInstanceId::Initialize(
                         (CVADServer *)((char *)this + 72),
                         a2,
                         *((const unsigned __int16 **)this + 25),
                         &v49,
                         v40 != 0);
        if ( AudioSession >= 0 )
        {
          AudioSession = CAudioSessionInstanceId::ToString((__int64)this + 72, (__int64 *)&v45);
          v14 = v45;
          if ( AudioSession >= 0 )
          {
            v22 = (unsigned int)(*((_DWORD *)v45 - 4) + 1);
            v23 = (unsigned __int16 *)MIDL_user_allocate(2 * v22);
            v24 = (void **)v42;
            *(_QWORD *)v42 = v23;
            if ( v23 )
            {
              AudioSession = StringCchCopyW(v23, (unsigned int)v22, v14);
              if ( AudioSession < 0 )
              {
                operator delete(*v24);
                *v24 = 0LL;
                goto LABEL_59;
              }
              *(_QWORD *)&v49.Data1 = 0LL;
              if ( (int)GetAudioSessionManagerProvider((struct CAudioSessionManagerProvider **)&v49) >= 0 )
              {
                if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                  && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_S(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    23LL,
                    &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
                    *((_QWORD *)this + 25));
                }
                v25 = (const unsigned __int16 *)*((_QWORD *)this + 25);
                v26 = *(volatile signed __int32 **)&v49.Data1;
                v27 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(**(_QWORD **)&v49.Data1 + 40LL);
                if ( v27 == CAudioSessionManagerProvider::GetAudioSessionManager )
                  AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(
                                          *(CAudioSessionManagerProvider **)&v49.Data1,
                                          v25,
                                          &v42);
                else
                  AudioSessionManager = v27(*(CAudioSessionManagerProvider **)&v49.Data1, v25, &v42);
                AudioSession = AudioSessionManager;
                if ( AudioSessionManager >= 0 )
                {
                  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      24LL,
                      &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
                      *((_QWORD *)this + 19));
                  }
                  v29 = *((_QWORD *)this + 19);
                  if ( v29 )
                  {
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                    *((_QWORD *)this + 19) = 0LL;
                  }
                  v30 = v42;
                  *((_QWORD *)this + 19) = v42;
                  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      25LL,
                      &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
                      v30);
                  }
                  if ( *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
                    ATL::CComObject<CAudioSessionManagerProvider>::Release(v26);
                  else
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL))(v26);
                  if ( g_DuckingManager )
                  {
                    v31 = *(_QWORD *)g_DuckingManager;
                    v32 = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
                    v33 = 1LL;
                    if ( a5 <= 3 )
                      v33 = a5;
                    (*(void (__fastcall **)(struct IAudioDuckingManager *, __int64, __int64))(v31 + 48))(
                      g_DuckingManager,
                      v33,
                      v32);
                  }
                  if ( v40 )
                  {
                    v34 = *(_QWORD *)&v47->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
                    if ( *(_QWORD *)&v47->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                      v34 = *(_QWORD *)v47->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
                    if ( !v34 )
                      v19 |= 4u;
                  }
                  v35 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 288LL))(g_PolicyManager);
                  if ( v35 == 1 )
                  {
                    v39 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
                    CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v39);
                  }
                  else if ( v35 == 2 )
                  {
                    CPolicyConfig::DisconnectAllRenderEndpoints();
                  }
                  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      27LL,
                      &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids,
                      this);
                  }
                  AudioSession = CAudioSessionManager::CreateAudioSession(
                                   *((CAudioSessionManager **)this + 19),
                                   a2,
                                   (CVADServer *)((char *)this + 72),
                                   v19,
                                   v44,
                                   *((_DWORD *)this + 16),
                                   (struct CAudioSession **)this + 21);
LABEL_59:
                  if ( AudioSession >= 0 )
                    goto LABEL_60;
                  goto LABEL_96;
                }
                v37 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 16LL);
                v38 = v26;
                if ( v37 == ATL::CComObject<CAudioSessionManagerProvider>::Release )
                {
                  ATL::CComObject<CAudioSessionManagerProvider>::Release(v26);
                  goto LABEL_59;
                }
LABEL_94:
                v37(v38);
                goto LABEL_59;
              }
              if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids);
              }
              AudioSession = -2004287487;
              v38 = *(volatile signed __int32 **)&v49.Data1;
              if ( *(_QWORD *)&v49.Data1 )
              {
                v37 = *(__int64 (__fastcall **)(volatile signed __int32 *))(**(_QWORD **)&v49.Data1 + 16LL);
                if ( v37 != ATL::CComObject<CAudioSessionManagerProvider>::Release )
                  goto LABEL_94;
                ATL::CComObject<CAudioSessionManagerProvider>::Release(*(volatile signed __int32 **)&v49.Data1);
              }
            }
            else
            {
              AudioSession = -2147024882;
            }
          }
        }
      }
    }
    else
    {
      AudioSession = -2147467262;
    }
  }
LABEL_96:
  AudSrvTraceLoggingErrorHelper("CVADServer::InitializePolicy", 0x481u, AudioSession);
LABEL_60:
  if ( v41 )
    ((void (__fastcall *)(struct IUnknown *))v41->lpVtbl->Release)(v41);
  if ( v46 )
    ((void (__fastcall *)(struct IUnknown *))v46->lpVtbl->Release)(v46);
  ATL::CStringData::Release((ATL::CStringData *)(v14 - 12));
  return (unsigned int)AudioSession;
}
