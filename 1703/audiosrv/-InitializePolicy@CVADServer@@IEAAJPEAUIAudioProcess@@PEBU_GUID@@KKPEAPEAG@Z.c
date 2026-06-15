/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18001BC20 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18001A338 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18001E3A0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18001F000 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001F9E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001FCA0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?AddRef@CMonitor@@UEAAKXZ @ 0x180020350 (-AddRef@CMonitor@@UEAAKXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021F50 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180022C20 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x1800237F0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x180025E10 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x18009BC68 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x18009BD44 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 *     WPP_SF_ql @ 0x1800A3CA8 (WPP_SF_ql.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4,
        unsigned int a5,
        unsigned __int16 **a6)
{
  struct ATL::CStringData *(__fastcall *v10)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  __int64 v12; // r8
  char *v13; // rdi
  struct _GUID v14; // xmm0
  CVolumeStrip *v15; // rcx
  __int64 v16; // r15
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // r12d
  int AudioSession; // r14d
  __int64 v22; // rcx
  char *v23; // r13
  __int64 v24; // rsi
  struct IAudioProcess *v25; // rsi
  struct IAudioProcess *v26; // rcx
  __int64 v27; // rbx
  char *v28; // rax
  void **v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  __int16 v32; // cx
  CAudioSessionManagerProvider *v33; // rbx
  unsigned int (__fastcall *v34)(CMonitor *__hidden); // rax
  CVADServer *v35; // rsi
  const unsigned __int16 *v36; // rdx
  __int64 (__fastcall *v37)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManager; // eax
  __int64 v39; // rcx
  struct CAudioSessionManager *v40; // r9
  unsigned int v41; // esi
  __int64 v42; // rbx
  struct IAudioProcess *v43; // r14
  unsigned int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rcx
  unsigned int v52; // eax
  bool v53; // [rsp+40h] [rbp-69h]
  __int64 v56; // [rsp+58h] [rbp-51h] BYREF
  struct CAudioSessionManager *v57; // [rsp+60h] [rbp-49h] BYREF
  int v58; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v59; // [rsp+6Ch] [rbp-3Dh]
  char *v60; // [rsp+70h] [rbp-39h] BYREF
  __int64 v61; // [rsp+78h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-29h] BYREF
  char v63; // [rsp+88h] [rbp-21h]
  CMonitor *v64; // [rsp+90h] [rbp-19h]
  const struct _GUID *v65; // [rsp+98h] [rbp-11h]
  __int64 v66; // [rsp+A0h] [rbp-9h]
  struct _GUID v67; // [rsp+A8h] [rbp-1h]

  v66 = -2LL;
  v65 = a3;
  v57 = (struct CAudioSessionManager *)a6;
  v10 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v10 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v10((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v13 = (char *)NilString + 24;
  v60 = (char *)NilString + 24;
  v14 = *a3;
  v67 = *a3;
  v61 = 0LL;
  v56 = 0LL;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids, this, a4);
    v15 = WPP_GLOBAL_Control;
    *(_QWORD *)&v14.Data1 = *(_QWORD *)&v67.Data1;
  }
  v16 = *(_QWORD *)v67.Data4;
  v17 = *(_QWORD *)&v14.Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( *(_QWORD *)&v14.Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v17 = *(_QWORD *)v67.Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v17 )
  {
    if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) )
      v18 = 0x20000000;
    else
      v18 = 0;
    a4 |= v18;
    v15 = WPP_GLOBAL_Control;
  }
  v53 = (a4 & 0x10000) != 0;
  v59 = a4 & 0x60000000;
  if ( (a4 & 0x10000000) != 0 )
  {
    v19 = 1;
    v20 = 3;
  }
  else
  {
    v19 = 0;
    v20 = 2;
  }
  if ( (a4 & 0xA0000) != 0 )
    v20 = v19;
  if ( v15 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_DWORD *)v15 + 7) & 0x100) != 0 && *((_BYTE *)v15 + 25) >= 4u )
    WPP_SF_ql(*((_QWORD *)v15 + 2), &WPP_GLOBAL_Control, v12, this, v20 & 2);
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)this + 25),
                   &v61);
  if ( AudioSession < 0 )
    goto LABEL_147;
  v22 = v56;
  if ( v56 != v61 )
  {
    v22 = 0LL;
    v56 = 0LL;
    if ( v61 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v61)(v61, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v56);
      v22 = v56;
    }
  }
  if ( !v22 )
  {
    AudioSession = -2147467262;
    goto LABEL_147;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 24LL))(v22, &v58);
  if ( AudioSession >= 0 )
  {
    if ( v58 )
    {
      if ( v58 == 1 )
        v20 &= ~2u;
    }
    else
    {
      v20 |= 8u;
    }
    if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (a4 & 0x2000000) != 0 )
      v20 |= 0x20u;
    *((_DWORD *)this + 65) = a4;
    v23 = (char *)this + 72;
    AudioSession = CAudioEndpointId::Initialize((CAudioEndpointId *)v23, *((const unsigned __int16 **)this + 25));
    if ( AudioSession < 0 )
      goto LABEL_125;
    if ( (a4 & 0x10000) == 0 )
      goto LABEL_37;
    v24 = *(_QWORD *)&v14.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v14.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v24 = v16 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v24 )
    {
      AudioSession = -2147024809;
      v25 = a2;
    }
    else
    {
LABEL_37:
      *(struct _GUID *)(v23 + 24) = v67;
      v25 = a2;
      if ( (a4 & 0x10000) == 0 )
      {
        v48 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
        if ( v48 )
        {
          v49 = -1LL;
          do
            ++v49;
          while ( *(_WORD *)(v48 + 2 * v49) );
        }
        else
        {
          LODWORD(v49) = 0;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetString(v23 + 16, v48, (unsigned int)v49);
        v50 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
        if ( v50 )
        {
          v51 = -1LL;
          do
            ++v51;
          while ( *(_WORD *)(v50 + 2 * v51) );
        }
        else
        {
          LODWORD(v51) = 0;
        }
        ATL::CSimpleStringT<unsigned short,0>::SetString(v23 + 8, v50, (unsigned int)v51);
      }
      *((_DWORD *)v23 + 12) = v53;
      AudioSession = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)(v23 + 8));
      if ( AudioSession >= 0 )
      {
LABEL_39:
        if ( AudioSession >= 0 )
        {
          *((_DWORD *)v23 + 16) = v53;
          v26 = v25;
          if ( (a4 & 0x10000) != 0 )
          {
            *((_DWORD *)v23 + 14) = 0;
          }
          else
          {
            *((_DWORD *)v23 + 14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v25 + 40LL))(v25);
            v26 = v25;
          }
          *((_DWORD *)v23 + 15) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v25 + 48LL))(v26);
          AudioSession = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)v23);
          if ( AudioSession >= 0 )
          {
LABEL_43:
            if ( AudioSession < 0 )
              goto LABEL_147;
            AudioSession = CAudioSessionInstanceId::ToString(v23, &v60);
            v13 = v60;
            if ( AudioSession < 0 )
              goto LABEL_147;
            v27 = (unsigned int)(*((_DWORD *)v60 - 4) + 1);
            if ( (unsigned __int64)(2 * v27) > 0x40000 )
            {
              *(_QWORD *)v57 = 0LL;
            }
            else
            {
              v28 = (char *)operator new[](2 * v27, (const struct std::nothrow_t *)&std::nothrow);
              v29 = (void **)v57;
              *(_QWORD *)v57 = v28;
              if ( v28 )
              {
                AudioSession = 0;
                if ( (unsigned __int64)(v27 - 1) > 0x7FFFFFFE )
                  AudioSession = -2147024809;
                if ( AudioSession < 0 )
                {
                  if ( !v27 )
                    goto LABEL_57;
                }
                else
                {
                  AudioSession = 0;
                  if ( v27 )
                  {
                    v30 = 2147483646 - v27;
                    v31 = v13 - v28;
                    while ( v30 + v27 )
                    {
                      v32 = *(_WORD *)&v28[v31];
                      if ( !v32 )
                        break;
                      *(_WORD *)v28 = v32;
                      v28 += 2;
                      if ( !--v27 )
                        goto LABEL_127;
                    }
                  }
                  else
                  {
LABEL_127:
                    v28 -= 2;
                    AudioSession = -2147024774;
                  }
                }
                *(_WORD *)v28 = 0;
LABEL_57:
                if ( AudioSession < 0 )
                {
                  operator delete(*v29);
                  *v29 = 0LL;
                  goto LABEL_97;
                }
                v64 = 0LL;
                lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
                v63 = 0;
                ATL::CCritSecLock::Lock(&lpCriticalSection);
                v33 = g_SingletonAudioSessionManagerProvider;
                if ( g_SingletonAudioSessionManagerProvider )
                {
                  v64 = g_SingletonAudioSessionManagerProvider;
                  v34 = *(unsigned int (__fastcall **)(CMonitor *__hidden))(*(_QWORD *)g_SingletonAudioSessionManagerProvider
                                                                          + 8LL);
                  if ( v34 == CMonitor::AddRef )
                    CMonitor::AddRef(g_SingletonAudioSessionManagerProvider);
                  else
                    v34(g_SingletonAudioSessionManagerProvider);
                  ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
                  if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control
                    || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0 )
                  {
                    v35 = this;
                  }
                  else
                  {
                    v35 = this;
                    if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      WPP_SF_S(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        23LL,
                        &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
                        *((_QWORD *)this + 25));
                  }
                  v36 = (const unsigned __int16 *)*((_QWORD *)v35 + 25);
                  v37 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v33 + 40LL);
                  if ( v37 == CAudioSessionManagerProvider::GetAudioSessionManager )
                    AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v33, v36, &v57);
                  else
                    AudioSessionManager = v37(v33, v36, &v57);
                  AudioSession = AudioSessionManager;
                  if ( AudioSessionManager < 0 )
                  {
                    if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
                      ATL::CComObject<CAudioSessionManagerProvider>::Release(v33);
                    else
                      (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v33 + 16LL))(v33);
                  }
                  else
                  {
                    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        24LL,
                        &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
                        *((_QWORD *)v35 + 19));
                    }
                    v39 = *((_QWORD *)v35 + 19);
                    if ( v39 )
                    {
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
                      *((_QWORD *)v35 + 19) = 0LL;
                    }
                    v40 = v57;
                    *((_QWORD *)v35 + 19) = v57;
                    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        25LL,
                        &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
                        v40);
                    }
                    if ( *(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 16LL) == ATL::CComObject<CAudioSessionManagerProvider>::Release )
                      ATL::CComObject<CAudioSessionManagerProvider>::Release(v33);
                    else
                      (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v33 + 16LL))(v33);
                    if ( g_DuckingManager )
                    {
                      v41 = a5;
                      if ( a5 > 3 )
                        v41 = 1;
                      v42 = *(_QWORD *)g_DuckingManager;
                      v43 = a2;
                      v44 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
                      (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(v42 + 48))(
                        g_DuckingManager,
                        v41,
                        v44);
                      v35 = this;
                    }
                    else
                    {
                      v43 = a2;
                    }
                    if ( v53 )
                    {
                      v45 = *(_QWORD *)&v65->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
                      if ( *(_QWORD *)&v65->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                        v45 = *(_QWORD *)v65->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
                      if ( !v45 )
                        v20 |= 4u;
                    }
                    v46 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 288LL))(g_PolicyManager);
                    if ( v46 == 1 )
                    {
                      v52 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 48LL))(v43);
                      CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v52);
                    }
                    else if ( v46 == 2 )
                    {
                      CPolicyConfig::DisconnectAllRenderEndpoints();
                    }
                    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_q(
                        *((_QWORD *)WPP_GLOBAL_Control + 2),
                        27LL,
                        &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids,
                        v35);
                    }
                    AudioSession = CAudioSessionManager::CreateAudioSession(
                                     *((CAudioSessionManager **)v35 + 19),
                                     v43,
                                     (struct CAudioSessionInstanceId *)v23,
                                     v20,
                                     v59,
                                     *((_DWORD *)v35 + 16),
                                     (struct CAudioSession **)v35 + 21);
                  }
LABEL_97:
                  if ( AudioSession >= 0 )
                    goto LABEL_98;
                  goto LABEL_147;
                }
                if ( v63 )
                  LeaveCriticalSection(lpCriticalSection);
                if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_6a2f5d392ebc3a7b5b56686ced9a2fbc_Traceguids);
                }
                AudioSession = -2004287487;
                goto LABEL_147;
              }
            }
            AudioSession = -2147024882;
            goto LABEL_147;
          }
        }
LABEL_125:
        AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x382u, AudioSession);
        goto LABEL_43;
      }
    }
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, AudioSession);
    goto LABEL_39;
  }
LABEL_147:
  AudSrvTraceLoggingErrorHelper("CVADServer::InitializePolicy", 0x44Fu, AudioSession);
LABEL_98:
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  if ( v61 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v13 - 3) + 8LL))(*((_QWORD *)v13 - 3));
  return (unsigned int)AudioSession;
}
