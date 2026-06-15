/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180093820
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FAB4 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18001FBF4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180021DD0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021F50 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memset @ 0x180049B8A (memset.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x180083DB0 (WPP_SF_qS.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x180093D34 (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180093D64 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     WPP_SF_Ddq @ 0x180094CC4 (WPP_SF_Ddq.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        const unsigned __int16 **this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  __int64 v6; // rax
  char *v8; // r14
  _BYTE *v9; // r15
  signed int v10; // r13d
  int v11; // r12d
  int v12; // ebx
  int v13; // ebx
  char *v14; // rsi
  int v15; // r15d
  __int64 v16; // rdi
  int v17; // eax
  char *v18; // rax
  unsigned int *v19; // rdx
  void ***v20; // rax
  unsigned __int16 ***v21; // rcx
  _BYTE *v23; // rax
  __int64 v24; // rsi
  struct CAudioSession *v25; // rdi
  CVolumeStrip *v26; // rcx
  int v27; // eax
  unsigned int v28; // eax
  CAudioSessionManager *v29; // rcx
  struct CServerAudioSessionControl *v30; // rcx
  void **v31; // rdi
  __int64 v32; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+50h] [rbp-B0h]
  __int64 StartPosition; // [rsp+58h] [rbp-A8h] BYREF
  struct CServerAudioSessionControl *v37; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v38; // [rsp+68h] [rbp-98h]
  void ***v39; // [rsp+70h] [rbp-90h]
  unsigned __int16 ***v40; // [rsp+78h] [rbp-88h]
  struct CAudioSession *v41; // [rsp+80h] [rbp-80h] BYREF
  char *v42; // [rsp+88h] [rbp-78h]
  struct IAudioProcess *v43; // [rsp+90h] [rbp-70h]
  _BYTE v44[80]; // [rsp+A0h] [rbp-60h] BYREF

  v40 = a5;
  v6 = *(_QWORD *)a2;
  v39 = a4;
  v8 = 0LL;
  v38 = a3;
  v9 = 0LL;
  v43 = a2;
  v10 = 0;
  v35 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v6 + 48))(a2);
  v41 = 0LL;
  v11 = 0;
  v12 = v35;
  *v39 = 0LL;
  *v40 = 0LL;
  *v38 = 0;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v44);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Du,
      (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      this,
      v12);
  }
  v13 = CAudioSessionInstanceId::Initialize(
          (CAudioSessionInstanceId *)v44,
          a2,
          this[30],
          &GUID_SystemSounds_AudioSessionId,
          1);
  if ( v13 < 0
    || (v13 = CAudioSessionManager::CreateAudioSession(
                (CAudioSessionManager *)this,
                a2,
                (struct CAudioSessionInstanceId *)v44,
                0xEu,
                0,
                0,
                &v41),
        v13 < 0) )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v44);
    goto LABEL_66;
  }
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v44);
  v34 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 3);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v14 = (char *)(this + 8);
  v42 = (char *)(this + 8);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(this + 8);
  if ( StartPosition )
  {
    v15 = v35;
    do
    {
      v16 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                         v14,
                         &StartPosition);
      if ( v16 )
      {
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Eu,
            (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
            0LL);
        }
        v17 = *(_DWORD *)(v16 + 852);
        if ( (!v17 || v17 == v15) && *(_DWORD *)(v16 + 480) != 2 )
          ++v10;
      }
    }
    while ( StartPosition );
    v9 = 0LL;
    v11 = 0;
  }
  v18 = (char *)MIDL_user_allocate(8LL * v10);
  v8 = v18;
  if ( !v18 || (memset(v18, 0, 8LL * v10), v23 = MIDL_user_allocate(8LL * v10), (v9 = v23) == 0LL) )
  {
    v13 = -2147024882;
    goto LABEL_23;
  }
  memset(v23, 0, 8LL * v10);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v14);
  if ( !StartPosition )
  {
LABEL_23:
    if ( v34 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_25;
  }
  v24 = 0LL;
  while ( 1 )
  {
    v25 = *(struct CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                      v42,
                                      &StartPosition);
    if ( !v25 )
      goto LABEL_57;
    v37 = 0LL;
    v26 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
        0LL);
      v26 = WPP_GLOBAL_Control;
    }
    v27 = *((_DWORD *)v25 + 213);
    if ( v27 )
    {
      if ( v27 != v35 )
        goto LABEL_57;
    }
    if ( *((_DWORD *)v25 + 120) == 2 )
      goto LABEL_57;
    if ( v26 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v26 + 28) & 0x40) != 0 && *((_BYTE *)v26 + 25) >= 4u )
      WPP_SF_qS(*((_QWORD *)v26 + 2), 0x30u, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v25, 0LL);
    v28 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 40LL))(v43);
    v13 = CAudioSessionManager::CreateAudioSessionControl(v29, v25, v28, 0, &v37);
    if ( v13 < 0 )
      break;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x32u,
        (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
        0LL);
    }
    if ( v24 >= v10 )
      goto LABEL_23;
    v30 = v37;
    *(_QWORD *)&v8[8 * v24] = v37;
    v13 = (*(__int64 (__fastcall **)(struct CServerAudioSessionControl *, _BYTE *))(*(_QWORD *)v30 + 120LL))(
            v30,
            &v9[8 * v11]);
    if ( v13 < 0 )
      goto LABEL_63;
    ++v11;
    ++v24;
LABEL_57:
    if ( !StartPosition )
      goto LABEL_23;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x31u, (__int64)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v13);
  }
LABEL_63:
  if ( v34 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v11 >= 0 )
  {
LABEL_66:
    v31 = (void **)&v9[8 * v11];
    do
    {
      if ( v8 )
      {
        v32 = *(__int64 *)((char *)v31 + v8 - v9);
        if ( v32 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      if ( v9 && *v31 )
        operator delete(*v31);
      --v31;
      --v11;
    }
    while ( v11 >= 0 );
  }
  if ( v8 )
    operator delete(v8);
  v8 = 0LL;
  if ( v9 )
    operator delete(v9);
  v9 = 0LL;
  v10 = 0;
LABEL_25:
  v19 = v38;
  v20 = v39;
  v21 = v40;
  *v38 = v10;
  *v20 = (void **)v8;
  *v21 = (unsigned __int16 **)v9;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Ddq(*((_QWORD *)WPP_GLOBAL_Control + 2), v19, &WPP_GLOBAL_Control, (unsigned int)v13, *v19, *v20);
  }
  if ( v13 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessions", 1370, v13);
  if ( v41 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v41 + 16LL))(v41);
  return (unsigned int)v13;
}
