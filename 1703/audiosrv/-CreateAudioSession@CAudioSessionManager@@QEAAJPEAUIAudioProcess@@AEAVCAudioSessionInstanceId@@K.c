/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021F50
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18001CA60 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180021180 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180093820 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x180094AD0 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180004334 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013EE0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z @ 0x180015990 (-FinishConstruction@CAudioSession@@UEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKK@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800164B0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CPerStreamVolumeAudioSession@@QEAA@XZ @ 0x18001D53C (--0CPerStreamVolumeAudioSession@@QEAA@XZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001F9E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x1800215C0 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x1800226B8 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180022BF0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180022C20 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180023520 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800252C8 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x1800253FC (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180025440 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18002854C (_TlgCreateWsz.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18007F6A4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180082650 (WPP_SF_.c)
 *     WPP_SF_SS @ 0x18009273C (WPP_SF_SS.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800929CC (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  __int64 *v7; // r12
  struct CAudioSession *v9; // r15
  char *v10; // rbx
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // edi
  unsigned __int16 *v18; // rcx
  unsigned __int16 i; // ax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  struct ATL::CStringData *(__fastcall *v26)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  volatile signed __int32 *v30; // rbx
  __int64 v31; // rdi
  unsigned int v32; // edi
  unsigned __int16 *v33; // rcx
  unsigned __int16 j; // ax
  char *v35; // r14
  unsigned int v36; // esi
  __int64 Node; // rbx
  int v38; // eax
  int v39; // eax
  __int64 v40; // rax
  int AudioSession; // ebx
  ATL::CAtlStringMgr **v43; // rdx
  void (*v44)(void); // rax
  ATL::CAtlStringMgr **v45; // rdx
  void (*v46)(void); // rax
  CPerStreamVolumeAudioSession *v47; // rax
  __int64 (__fastcall *v48)(CAudioSession *, struct IAudioProcess *, struct CAudioSessionInstanceId *, unsigned int, unsigned int, unsigned int); // rax
  int v49; // eax
  CAudioSessionManager *v50; // rdi
  char v51; // r14
  __int64 (__fastcall *v52)(CAudioSession *, struct ISessionInternalEvents *); // rax
  int v53; // eax
  __int64 (__fastcall *v54)(CAudioSession *, struct ISessionInternalEvents *); // rax
  int v55; // eax
  __int64 (__fastcall *v56)(CAudioSession *, unsigned int *); // rax
  int ProcessId; // eax
  __int64 v58; // rcx
  LPCGUID v59; // r8
  LPCGUID v60; // r9
  TraceLoggingHProvider v61; // r10
  ATL::CAtlException *v62; // rbx
  CPerEndpointVolumeAudioSession *v63; // rax
  char v64; // [rsp+40h] [rbp-128h]
  signed int v66; // [rsp+44h] [rbp-124h]
  struct CAudioSession *v67; // [rsp+48h] [rbp-120h] BYREF
  unsigned int v68; // [rsp+50h] [rbp-118h] BYREF
  volatile signed __int32 *v69; // [rsp+58h] [rbp-110h] BYREF
  volatile signed __int32 *v70; // [rsp+60h] [rbp-108h] BYREF
  char *v71; // [rsp+68h] [rbp-100h]
  CAudioSessionManager *v72; // [rsp+70h] [rbp-F8h]
  LPCRITICAL_SECTION v73; // [rsp+78h] [rbp-F0h] BYREF
  char v74; // [rsp+80h] [rbp-E8h]
  struct IAudioProcess *v75; // [rsp+88h] [rbp-E0h]
  CAudioSessionManager *v76; // [rsp+90h] [rbp-D8h]
  struct CAudioSessionInstanceId *v77; // [rsp+98h] [rbp-D0h]
  struct CAudioSession *v78; // [rsp+A0h] [rbp-C8h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+A8h] [rbp-C0h] BYREF
  char v80; // [rsp+B0h] [rbp-B8h]
  struct CAudioSession **v81; // [rsp+B8h] [rbp-B0h]
  __int64 v82; // [rsp+C0h] [rbp-A8h]
  ATL::CAtlException *v83; // [rsp+C8h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-78h] BYREF
  unsigned int *v86; // [rsp+100h] [rbp-68h]
  __int64 v87; // [rsp+108h] [rbp-60h]

  v82 = -2LL;
  v7 = (__int64 *)a3;
  v75 = a2;
  v72 = this;
  v76 = this;
  v77 = a3;
  v81 = a7;
  v64 = 0;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids);
  }
  v73 = (LPCRITICAL_SECTION)((char *)this + 24);
  v74 = 0;
  ATL::CCritSecLock::Lock(&v73);
  v9 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v80 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = (char *)this + 64;
  v71 = (char *)this + 64;
  v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v11 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v69 = (volatile signed __int32 *)((char *)NilString + 24);
  if ( (int)CAudioSessionInstanceId::ToString((__int64)v7, &v69, v13, v14) < 0 )
  {
    v43 = (ATL::CAtlStringMgr **)(v69 - 6);
    if ( _InterlockedExchangeAdd(v69 - 2, 0xFFFFFFFF) <= 1 )
    {
      v44 = *(void (**)(void))(*(_QWORD *)*v43 + 8LL);
      if ( (char *)v44 == (char *)ATL::CAtlStringMgr::Free )
        ATL::CAtlStringMgr::Free(*v43, (struct ATL::CStringData *)v43);
      else
        v44();
    }
    v17 = 0;
  }
  else
  {
    v15 = v69;
    v16 = *((int *)v69 - 4);
    if ( ((1 - *((_DWORD *)v69 - 2)) | (*((_DWORD *)v69 - 3) - (int)v16)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v69, (unsigned int)v16);
      v15 = v69;
    }
    _o__wcsupr_s(v15, (int)v16 + 1);
    if ( (int)v16 < 0 || (int)v16 > *((_DWORD *)v15 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v15 - 4) = v16;
    *((_WORD *)v15 + v16) = 0;
    v17 = 0;
    v18 = (unsigned __int16 *)v15;
    for ( i = *(_WORD *)v15; *v18; i = *v18 )
    {
      v17 = i + 33 * v17;
      ++v18;
    }
    ATL::CStringData::Release((ATL::CStringData *)(v15 - 6));
    v10 = v71;
  }
  if ( *((_DWORD *)v10 + 4) == 17 )
    v20 = v17 % 0x11;
  else
    v20 = v17 % *((_DWORD *)v10 + 4);
  v21 = *(_QWORD *)v10;
  if ( v21 && (v22 = *(_QWORD *)(v21 + 8 * v20)) != 0 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v22 + 96) == v17 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v22, *v7) )
      {
        v23 = *(_DWORD *)(v22 + 64);
        if ( v23 == *((_DWORD *)v7 + 16) && (v23 || *(_DWORD *)(v22 + 56) == *((_DWORD *)v7 + 14)) )
        {
          v24 = *(_DWORD *)(v22 + 48);
          if ( v24 == *((_DWORD *)v7 + 12) && (v24 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(v22 + 8), v7[1])) )
          {
            v25 = *(_QWORD *)(v22 + 24) - v7[3];
            if ( !v25 )
              v25 = *(_QWORD *)(v22 + 32) - v7[4];
            if ( !v25 )
              break;
          }
        }
      }
      v22 = *(_QWORD *)(v22 + 88);
      if ( !v22 )
        goto LABEL_78;
    }
    v26 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
    if ( v26 == ATL::CAtlStringMgr::GetNilString )
      v27 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    else
      v27 = v26((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    v70 = (volatile signed __int32 *)((char *)v27 + 24);
    if ( (int)CAudioSessionInstanceId::ToString((__int64)v7, &v70, v28, v29) < 0 )
    {
      v45 = (ATL::CAtlStringMgr **)(v70 - 6);
      if ( _InterlockedExchangeAdd(v70 - 2, 0xFFFFFFFF) <= 1 )
      {
        v46 = *(void (**)(void))(*(_QWORD *)*v45 + 8LL);
        if ( (char *)v46 == (char *)ATL::CAtlStringMgr::Free )
          ATL::CAtlStringMgr::Free(*v45, (struct ATL::CStringData *)v45);
        else
          v46();
      }
      v32 = 0;
    }
    else
    {
      v30 = v70;
      v31 = *((int *)v70 - 4);
      if ( ((1 - *((_DWORD *)v70 - 2)) | (*((_DWORD *)v70 - 3) - (int)v31)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v70, (unsigned int)v31);
        v30 = v70;
      }
      _o__wcsupr_s(v30, (int)v31 + 1);
      if ( (int)v31 < 0 || (int)v31 > *((_DWORD *)v30 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *((_DWORD *)v30 - 4) = v31;
      *((_WORD *)v30 + v31) = 0;
      v32 = 0;
      v33 = (unsigned __int16 *)v30;
      for ( j = *(_WORD *)v30; *v33; j = *v33 )
      {
        v32 = j + 33 * v32;
        ++v33;
      }
      ATL::CStringData::Release((ATL::CStringData *)(v30 - 6));
    }
    v35 = v71;
    if ( *((_DWORD *)v71 + 4) == 17 )
      v36 = v32 % 0x11;
    else
      v36 = v32 % *((_DWORD *)v71 + 4);
    if ( *(_QWORD *)v71 && (Node = *(_QWORD *)(*(_QWORD *)v71 + 8LL * v36)) != 0 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(Node + 96) == v32 && !(unsigned int)_o__wcsicmp(*(_QWORD *)Node, *v7) )
        {
          v38 = *(_DWORD *)(Node + 64);
          if ( v38 == *((_DWORD *)v7 + 16) && (v38 || *(_DWORD *)(Node + 56) == *((_DWORD *)v7 + 14)) )
          {
            v39 = *(_DWORD *)(Node + 48);
            if ( v39 == *((_DWORD *)v7 + 12) && (v39 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(Node + 8), v7[1])) )
            {
              v40 = *(_QWORD *)(Node + 24) - v7[3];
              if ( !v40 )
                v40 = *(_QWORD *)(Node + 32) - v7[4];
              if ( !v40 )
                break;
            }
          }
        }
        Node = *(_QWORD *)(Node + 88);
        if ( !Node )
          goto LABEL_119;
      }
    }
    else
    {
LABEL_119:
      Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
               v35,
               v7,
               v36,
               v32);
    }
    v9 = *(struct CAudioSession **)(Node + 80);
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10,
        (unsigned int)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
        0,
        v7[9]);
    }
    if ( v9 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
LABEL_78:
    v35 = v71;
  }
  v78 = v9;
  AudioSession = 0;
  if ( !v9 )
    AudioSession = -2147024894;
  if ( v80 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v9 )
  {
    if ( (a4 & 0x20) != 0 )
      *((_DWORD *)v9 + 154) = 1;
    goto LABEL_64;
  }
  LeaveCriticalSection(v73);
  v74 = 0;
  if ( (a4 & 8) != 0 )
  {
    v47 = (CPerStreamVolumeAudioSession *)operator new(0x490uLL, (const struct std::nothrow_t *)&std::nothrow);
    v67 = v47;
    if ( v47 )
      v9 = CPerStreamVolumeAudioSession::CPerStreamVolumeAudioSession(v47);
    else
      v9 = 0LL;
  }
  else
  {
    v63 = (CPerEndpointVolumeAudioSession *)operator new(0x458uLL, (const struct std::nothrow_t *)&std::nothrow);
    v67 = v63;
    if ( v63 )
      v9 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v63);
    else
      v9 = 0LL;
  }
  v67 = v9;
  if ( !v9 )
  {
    AudioSession = -2147024882;
LABEL_133:
    v51 = 0;
    v50 = v72;
LABEL_134:
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
        (unsigned int)AudioSession);
    }
    if ( v51
      && (unsigned __int8)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
                            (char *)v50 + 64,
                            v7) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids);
      }
      if ( v64 )
        (*(void (__fastcall **)(struct CAudioSession *, CAudioSessionManager *))(*(_QWORD *)v9 + 192LL))(v9, v50);
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v9 )
      (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 16LL))(v9);
    v9 = 0LL;
    goto LABEL_65;
  }
  v48 = *(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess *, struct CAudioSessionInstanceId *, unsigned int, unsigned int, unsigned int))(*(_QWORD *)v9 + 200LL);
  if ( v48 == CAudioSession::FinishConstruction )
    v49 = CAudioSession::FinishConstruction(v9, v75, (struct CAudioSessionInstanceId *)v7, a4, a5, a6);
  else
    v49 = v48(v9, v75, (struct CAudioSessionInstanceId *)v7, a4, a5, a6);
  AudioSession = v49;
  if ( v49 < 0 )
    goto LABEL_133;
  ATL::CCritSecLock::Lock(&v73);
  v50 = v72;
  AudioSession = CAudioSessionManager::FindAudioSession(v72, (struct CAudioSessionInstanceId *)v7, &v78);
  if ( AudioSession >= 0 )
  {
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 16LL))(v9);
    v9 = v78;
LABEL_64:
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 216LL))(v9);
    goto LABEL_65;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12,
      (unsigned int)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      0,
      v7[9]);
  }
  try
  {
    ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
      v35,
      v7,
      &v67);
  }
  catch ( ATL::CAtlException *v83 )
  {
    v62 = v83;
    if ( *(_DWORD *)v83 == -1073741571 )
      _o__resetstkoflw();
    v66 = *(_DWORD *)v62;
    AudioSession = *(_DWORD *)v62;
    v9 = v67;
    v50 = v76;
    v7 = (__int64 *)v77;
    v64 = 0;
    if ( v66 < 0 )
    {
      v51 = 0;
      goto LABEL_134;
    }
  }
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v9 + 8LL))(v9);
  v51 = 1;
  v52 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v9 + 184LL);
  if ( v52 == CAudioSession::AddSessionNotification )
    v53 = CAudioSession::AddSessionNotification(v9, v50);
  else
    v53 = v52(v9, v50);
  AudioSession = v53;
  if ( v53 < 0 )
    goto LABEL_134;
  v64 = 1;
  v54 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v9 + 184LL);
  v55 = v54 == CAudioSession::AddSessionNotification
      ? CAudioSession::AddSessionNotification(v9, g_PolicyEventsHandler)
      : v54(v9, g_PolicyEventsHandler);
  AudioSession = v55;
  if ( v55 < 0 )
    goto LABEL_134;
  CAudioSessionManager::NotifyActiveSession(v50, v9);
  v56 = *(__int64 (__fastcall **)(CAudioSession *, unsigned int *))(*(_QWORD *)v9 + 128LL);
  if ( v56 == CAudioSession::GetProcessId )
    ProcessId = CAudioSession::GetProcessId(v9, &v68);
  else
    ProcessId = v56(v9, &v68);
  if ( ProcessId >= 0
    && **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       v58,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, *((LPCWSTR *)v9 + 108));
    v86 = &v68;
    v87 = 4LL;
    TlgWrite(v61, &unk_1800F8F0A, v59, v60, 4u, &pData);
  }
LABEL_65:
  *v81 = v9;
  if ( AudioSession < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSession", 0x187u, AudioSession);
  if ( v74 )
    LeaveCriticalSection(v73);
  return (unsigned int)AudioSession;
}
