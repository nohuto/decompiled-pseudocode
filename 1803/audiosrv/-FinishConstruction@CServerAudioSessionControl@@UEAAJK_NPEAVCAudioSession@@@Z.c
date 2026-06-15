/*
 * XREFs of ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180004D50
 * Callers:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800048E0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 * Callees:
 *     ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x1800050C0 (-AddClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180034230 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x1800B0B54 (WPP_SF_SS.c)
 *     WPP_SF_qqS @ 0x1800B0D4C (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::FinishConstruction(
        CServerAudioSessionControl *this,
        int a2,
        bool a3,
        struct CAudioSession *a4)
{
  struct CAudioSession *v8; // rdx
  CAudioSession *v9; // rcx
  __int64 (__fastcall *v10)(CAudioSession *__hidden, struct ISessionInternalEvents *); // rax
  int v11; // eax
  int v12; // edi
  CAudioSession *v13; // rcx
  __int64 (__fastcall *v14)(CAudioSession *__hidden, bool); // rax
  __int64 (__fastcall *v15)(CAudioSession *__hidden, bool); // rdx
  __int64 v17; // rcx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids,
      0,
      0LL);
  }
  *((_DWORD *)this + 20) = a2;
  *((_QWORD *)this + 9) = a4;
  v8 = a4;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 12, a3, (_DWORD)this, (char)a4, 0LL);
    v8 = (struct CAudioSession *)*((_QWORD *)this + 9);
  }
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = (CAudioSession *)*((_QWORD *)this + 9);
  v10 = *(__int64 (__fastcall **)(CAudioSession *__hidden, struct ISessionInternalEvents *))(*(_QWORD *)v9 + 184LL);
  if ( v10 == CAudioSession::AddSessionNotification )
    v11 = CAudioSession::AddSessionNotification(v9, this);
  else
    v11 = v10(v9, this);
  v12 = v11;
  if ( v11 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_9ac030c1199035ec56efc488713d7b4d_Traceguids, this, a4);
    }
    v17 = *((_QWORD *)this + 9);
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  else
  {
    v13 = (CAudioSession *)*((_QWORD *)this + 9);
    v15 = CAudioSession::AddClientReference;
    *((_BYTE *)this + 84) = a3;
    v14 = *(__int64 (__fastcall **)(CAudioSession *__hidden, bool))(*(_QWORD *)v13 + 280LL);
    LOBYTE(v15) = a3;
    if ( v14 == CAudioSession::AddClientReference )
    {
      CAudioSession::AddClientReference(v13, a3);
      return (unsigned int)v12;
    }
    v14(v13, (bool)v15);
  }
  if ( v12 < 0 )
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::FinishConstruction", 0x7Du, v12);
  return (unsigned int)v12;
}
