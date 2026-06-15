/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800045E0
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x180003610 (AudioSessionManagerGetCurrentSession.c)
 * Callees:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180004800 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800052DC (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     MIDL_user_allocate @ 0x180017CA0 (MIDL_user_allocate.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180018A18 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180030CF0 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180030D50 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180031BD0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180031CA0 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x1800333A0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x1800341C0 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
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
  unsigned __int16 *v15; // rbx
  __int64 v16; // rdi
  unsigned __int16 *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  int (*v22)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **); // r10
  int AudioSessionControl; // eax
  unsigned int (__fastcall *v24)(CAudioSession *__hidden); // rax
  CAudioSession *v26; // [rsp+40h] [rbp-91h] BYREF
  struct CServerAudioSessionControl *v27; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int16 *v28; // [rsp+50h] [rbp-81h] BYREF
  const struct _GUID *v29; // [rsp+58h] [rbp-79h]
  void **v30; // [rsp+60h] [rbp-71h]
  _BYTE v31[80]; // [rsp+70h] [rbp-61h] BYREF

  v29 = a3;
  v30 = a7;
  ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(&v28, &ATL::g_strmgr);
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v31);
  v12 = 0LL;
  *a8 = 0LL;
  v13 = (const unsigned __int16 *)*((_QWORD *)this + 38);
  v27 = 0LL;
  v26 = 0LL;
  v14 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v31, a2, v13, a3, a6);
  if ( v14 < 0 || (v14 = CAudioSessionInstanceId::ToString(v31, &v28), v14 < 0) )
  {
    v15 = v28;
    goto LABEL_27;
  }
  v15 = v28;
  v16 = (unsigned int)(*((_DWORD *)v28 - 4) + 1);
  v17 = (unsigned __int16 *)MIDL_user_allocate(2 * v16);
  *a8 = v17;
  if ( !v17 )
  {
    v14 = -2147024882;
    goto LABEL_27;
  }
  v14 = StringCchCopyW(v17, (unsigned int)v16, v15);
  if ( v14 < 0 )
  {
    operator delete(*a8);
    *a8 = 0LL;
    goto LABEL_18;
  }
  if ( a6 )
  {
    v18 = *(_QWORD *)&v29->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&v29->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v18 = *(_QWORD *)v29->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    if ( !v18 )
      a4 |= 4u;
  }
  v19 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v14 = CAudioSessionManager::CreateAudioSession(this, a2, (struct CAudioSessionInstanceId *)v31, a4, a5, v19, &v26);
  if ( v14 < 0 )
  {
    v12 = v26;
    goto LABEL_27;
  }
  v20 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v12 = v26;
  LOBYTE(v21) = 1;
  v22 = *(int (**)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **))(*(_QWORD *)this + 104LL);
  if ( v22 == CAudioSessionManager::GetAudioSessionControl )
    AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(this, v20, 1, v26, &v27);
  else
    AudioSessionControl = ((__int64 (__fastcall *)(CAudioSessionManager *, _QWORD, __int64, CAudioSession *, struct CServerAudioSessionControl **))v22)(
                            this,
                            v20,
                            v21,
                            v26,
                            &v27);
  v14 = AudioSessionControl;
  if ( AudioSessionControl < 0 )
  {
LABEL_27:
    if ( *a8 )
    {
      operator delete(*a8);
      *a8 = 0LL;
    }
    goto LABEL_15;
  }
  *v30 = v27;
LABEL_15:
  if ( v12 )
  {
    v24 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v12 + 16LL);
    if ( v24 == CAudioSession::Release )
      CAudioSession::Release(v12);
    else
      v24(v12);
  }
LABEL_18:
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x831u, v14);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v31);
  ATL::CStringData::Release((ATL::CStringData *)(v15 - 12));
  return (unsigned int)v14;
}
