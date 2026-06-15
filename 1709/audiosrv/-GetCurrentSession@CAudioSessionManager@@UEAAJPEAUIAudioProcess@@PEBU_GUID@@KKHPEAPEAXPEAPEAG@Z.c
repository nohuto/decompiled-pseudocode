/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180015510
 * Callers:
 *     AudioSessionManagerGetCurrentSession @ 0x180012D30 (AudioSessionManagerGetCurrentSession.c)
 * Callees:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800161A0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180016390 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180017590 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800176CC (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001827C (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Release@CAudioSession@@UEAAKXZ @ 0x180018410 (-Release@CAudioSession@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180033220 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        const unsigned __int16 **this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  char *v13; // rbx
  struct ATL::CStringData *(__fastcall *v14)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v15; // rax
  struct ATL::CStringData *(__fastcall *v16)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v17; // rax
  struct ATL::CStringData *(__fastcall *v18)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v19; // rax
  struct ATL::CStringData *(__fastcall *v20)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v21; // rax
  struct ATL::CStringData *(__fastcall *v22)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *v23; // rax
  const unsigned __int16 *v24; // r8
  CAudioSession *v25; // rsi
  int v26; // r14d
  int v27; // eax
  __int64 v28; // rdi
  unsigned __int16 *v29; // rax
  void **v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int16 v33; // cx
  __int64 v34; // rax
  int v35; // edi
  unsigned int v36; // eax
  unsigned int v37; // r9d
  CAudioSessionManager *v38; // rdi
  unsigned int v39; // eax
  __int64 v40; // r8
  __int64 (__fastcall *v41)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **); // r10
  int AudioSessionControl; // eax
  unsigned int (__fastcall *v43)(CAudioSession *__hidden); // rax
  void **v45; // rdi
  CAudioSession *v47; // [rsp+50h] [rbp-91h] BYREF
  struct CServerAudioSessionControl *v48; // [rsp+58h] [rbp-89h] BYREF
  char *v49; // [rsp+60h] [rbp-81h] BYREF
  CAudioSessionManager *v50; // [rsp+68h] [rbp-79h]
  void **v51; // [rsp+70h] [rbp-71h]
  char *v52; // [rsp+80h] [rbp-61h] BYREF
  char *v53; // [rsp+88h] [rbp-59h]
  char *v54; // [rsp+90h] [rbp-51h]
  GUID v55; // [rsp+98h] [rbp-49h]
  char *v56; // [rsp+A8h] [rbp-39h]
  int v57; // [rsp+B0h] [rbp-31h]
  int v58; // [rsp+B8h] [rbp-29h]
  int v59; // [rsp+BCh] [rbp-25h]
  int v60; // [rsp+C0h] [rbp-21h]
  char *v61; // [rsp+C8h] [rbp-19h]

  v51 = a7;
  v50 = (CAudioSessionManager *)this;
  v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v11 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v13 = (char *)NilString + 24;
  v49 = (char *)NilString + 24;
  v14 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v14 == ATL::CAtlStringMgr::GetNilString )
    v15 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v15 = v14((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v52 = (char *)v15 + 24;
  v16 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v16 == ATL::CAtlStringMgr::GetNilString )
    v17 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v17 = v16((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v53 = (char *)v17 + 24;
  v18 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v18 == ATL::CAtlStringMgr::GetNilString )
    v19 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v19 = v18((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v54 = (char *)v19 + 24;
  v20 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v20 == ATL::CAtlStringMgr::GetNilString )
    v21 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v21 = v20((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v59 = -1;
  v56 = (char *)v21 + 24;
  v55 = GUID_00000000_0000_0000_0000_000000000000;
  v57 = 0;
  v58 = 0;
  v22 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  v60 = 0;
  if ( v22 == ATL::CAtlStringMgr::GetNilString )
    v23 = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    v23 = v22((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *a8 = 0LL;
  v24 = this[30];
  v48 = 0LL;
  v25 = 0LL;
  v47 = 0LL;
  v61 = (char *)v23 + 24;
  v26 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)&v52, a2, v24, a3, a6);
  if ( v26 < 0 )
    goto LABEL_61;
  v27 = CAudioSessionInstanceId::ToString(&v52, &v49);
  v13 = v49;
  v26 = v27;
  if ( v27 < 0 )
    goto LABEL_61;
  v28 = (unsigned int)(*((_DWORD *)v49 - 4) + 1);
  if ( (unsigned __int64)(2 * v28) > 0x40000 )
  {
    v45 = (void **)a8;
    *a8 = 0LL;
LABEL_65:
    v26 = -2147024882;
LABEL_62:
    if ( *v45 )
    {
      operator delete(*v45);
      *v45 = 0LL;
    }
    goto LABEL_39;
  }
  v29 = (unsigned __int16 *)operator new[](2 * v28, (const struct std::nothrow_t *)&std::nothrow);
  v30 = (void **)a8;
  *a8 = v29;
  if ( !v29 )
  {
    v45 = (void **)a8;
    goto LABEL_65;
  }
  v31 = 2147483646LL;
  v26 = 0;
  if ( (unsigned __int64)(v28 - 1) > 0x7FFFFFFE )
    v26 = -2147024809;
  if ( v26 >= 0 )
  {
    v26 = 0;
    if ( v28 )
    {
      v31 = 2147483646 - v28;
      v32 = v13 - (char *)v29;
      while ( v28 + v31 )
      {
        v33 = *(unsigned __int16 *)((char *)v29 + v32);
        if ( !v33 )
          break;
        *v29++ = v33;
        if ( !--v28 )
          goto LABEL_54;
      }
    }
    else
    {
LABEL_54:
      --v29;
      v26 = -2147024774;
    }
    v30 = (void **)a8;
    goto LABEL_27;
  }
  if ( v28 )
LABEL_27:
    *v29 = 0;
  if ( v26 < 0 )
  {
    operator delete(*v30);
    *a8 = 0LL;
    goto LABEL_42;
  }
  if ( a6 )
  {
    v34 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v34 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    v35 = a4;
    if ( !v34 )
      v35 = a4 | 4;
  }
  else
  {
    v35 = a4;
  }
  v36 = (*(__int64 (__fastcall **)(struct IAudioProcess *, __int64, void **))(*(_QWORD *)a2 + 40LL))(a2, v31, v30);
  v37 = v35;
  v38 = v50;
  v26 = CAudioSessionManager::CreateAudioSession(v50, a2, (struct CAudioSessionInstanceId *)&v52, v37, a5, v36, &v47);
  if ( v26 < 0 )
  {
    v25 = v47;
LABEL_61:
    v45 = (void **)a8;
    goto LABEL_62;
  }
  v39 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2);
  v25 = v47;
  LOBYTE(v40) = 1;
  v41 = *(__int64 (__fastcall **)(CAudioSessionManager *__hidden, unsigned int, bool, struct CAudioSession *, struct CServerAudioSessionControl **))(*(_QWORD *)v38 + 104LL);
  if ( v41 == CAudioSessionManager::GetAudioSessionControl )
    AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(v38, v39, 1, v47, &v48);
  else
    AudioSessionControl = ((__int64 (__fastcall *)(CAudioSessionManager *, _QWORD, __int64, CAudioSession *))v41)(
                            v38,
                            v39,
                            v40,
                            v47);
  v26 = AudioSessionControl;
  if ( AudioSessionControl < 0 )
    goto LABEL_61;
  *v51 = v48;
LABEL_39:
  if ( v25 )
  {
    v43 = *(unsigned int (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v25 + 16LL);
    if ( v43 == CAudioSession::Release )
      CAudioSession::Release(v25);
    else
      v43(v25);
  }
LABEL_42:
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      58LL,
      &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
      (unsigned int)v26);
  }
  if ( v26 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x758u, v26);
  ATL::CStringData::Release((ATL::CStringData *)(v61 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v56 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v54 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v53 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v52 - 24));
  ATL::CStringData::Release((ATL::CStringData *)(v13 - 24));
  return (unsigned int)v26;
}
