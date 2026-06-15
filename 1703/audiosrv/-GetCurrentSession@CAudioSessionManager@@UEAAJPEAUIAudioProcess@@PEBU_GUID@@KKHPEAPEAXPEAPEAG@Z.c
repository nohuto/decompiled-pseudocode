/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180021180
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x18002D900 (AudioSessionManagerGetCurrentSession.c)
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180013D40 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001F9E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FAB4 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18001FBF4 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180021D00 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021F50 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180023588 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  CAudioSession *v12; // rsi
  const unsigned __int16 *v13; // r8
  int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int16 *v17; // rbx
  __int64 v18; // rdi
  unsigned __int16 *v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r8
  __int64 (__fastcall *v24)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **); // r10
  int AudioSessionControl; // eax
  __int64 (__fastcall *v26)(CAudioSession *); // rax
  CAudioSession *v28; // [rsp+40h] [rbp-91h] BYREF
  struct CServerAudioSessionControl *v29; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int16 *v30; // [rsp+50h] [rbp-81h] BYREF
  const struct _GUID *v31; // [rsp+58h] [rbp-79h]
  void **v32; // [rsp+60h] [rbp-71h]
  _BYTE v33[80]; // [rsp+70h] [rbp-61h] BYREF

  v31 = a3;
  v32 = a7;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v30, &ATL::g_strmgr);
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v33);
  v12 = 0LL;
  *a8 = 0LL;
  v13 = (const unsigned __int16 *)*((_QWORD *)this + 30);
  v29 = 0LL;
  v28 = 0LL;
  v14 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v33, a2, v13, a3, a6);
  if ( v14 < 0 || (v14 = CAudioSessionInstanceId::ToString((__int64)v33, &v30, v15, v16), v14 < 0) )
  {
    v17 = v30;
    goto LABEL_31;
  }
  v17 = v30;
  v18 = (unsigned int)(*((_DWORD *)v30 - 4) + 1);
  v19 = (unsigned __int16 *)MIDL_user_allocate(2 * v18);
  *a8 = v19;
  if ( !v19 )
  {
    v14 = -2147024882;
    goto LABEL_31;
  }
  v14 = StringCchCopyW(v19, (unsigned int)v18, v17);
  if ( v14 < 0 )
  {
    operator delete(*a8);
    *a8 = 0LL;
    goto LABEL_18;
  }
  if ( a6 )
  {
    v20 = *(_QWORD *)&v31->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&v31->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v20 = *(_QWORD *)v31->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    if ( !v20 )
      a4 |= 4u;
  }
  v21 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v14 = CAudioSessionManager::CreateAudioSession(this, a2, (struct CAudioSessionInstanceId *)v33, a4, a5, v21, &v28);
  if ( v14 < 0 )
  {
    v12 = v28;
    goto LABEL_31;
  }
  v22 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v12 = v28;
  LOBYTE(v23) = 1;
  v24 = *(__int64 (__fastcall **)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **))(*(_QWORD *)this + 104LL);
  if ( v24 == CAudioSessionManager::GetAudioSessionControl )
    AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(this, v22, 1, v28, &v29);
  else
    AudioSessionControl = ((__int64 (__fastcall *)(CAudioSessionManager *, _QWORD, __int64, CAudioSession *))v24)(
                            this,
                            v22,
                            v23,
                            v28);
  v14 = AudioSessionControl;
  if ( AudioSessionControl < 0 )
  {
LABEL_31:
    if ( *a8 )
    {
      operator delete(*a8);
      *a8 = 0LL;
    }
    goto LABEL_15;
  }
  *v32 = v29;
LABEL_15:
  if ( v12 )
  {
    v26 = *(__int64 (__fastcall **)(CAudioSession *))(*(_QWORD *)v12 + 16LL);
    if ( v26 == CAudioSession::Release )
      CAudioSession::Release(v12);
    else
      v26(v12);
  }
LABEL_18:
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      61LL,
      &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      (unsigned int)v14);
  }
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x774u, v14);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v33);
  ATL::CStringData::Release((ATL::CStringData *)(v17 - 12));
  return (unsigned int)v14;
}
