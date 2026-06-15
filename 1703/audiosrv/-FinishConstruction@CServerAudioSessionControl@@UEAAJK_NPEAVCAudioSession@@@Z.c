/*
 * XREFs of ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180020FE0
 * Callers:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180021DD0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 * Callees:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013EE0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddClientReference@CAudioSession@@UEAAJ_N@Z @ 0x1800146F0 (-AddClientReference@CAudioSession@@UEAAJ_N@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x180090D74 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x18009273C (WPP_SF_SS.c)
 *     WPP_SF_qqS @ 0x180092934 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::FinishConstruction(
        CServerAudioSessionControl *this,
        int a2,
        char a3,
        struct CAudioSession *a4)
{
  CAudioSession *v8; // rcx
  __int64 (__fastcall *v9)(CAudioSession *, struct ISessionInternalEvents *); // rax
  int v10; // eax
  int v11; // edi
  CAudioSession *v12; // rcx
  __int64 (__fastcall *v13)(CAudioSession *, char); // rax
  __int64 (__fastcall *v14)(CAudioSession *, char); // rdx
  __int64 v16; // rcx

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids,
      0,
      0LL);
  }
  *((_DWORD *)this + 20) = a2;
  *((_QWORD *)this + 9) = a4;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 12, a3, (_DWORD)this, (char)a4, 0LL);
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 8LL))(*((_QWORD *)this + 9));
  v8 = (CAudioSession *)*((_QWORD *)this + 9);
  v9 = *(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v8 + 184LL);
  if ( v9 == CAudioSession::AddSessionNotification )
    v10 = CAudioSession::AddSessionNotification(v8, this);
  else
    v10 = v9(v8, this);
  v11 = v10;
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, this, a4);
    }
    v16 = *((_QWORD *)this + 9);
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  else
  {
    v12 = (CAudioSession *)*((_QWORD *)this + 9);
    v14 = CAudioSession::AddClientReference;
    *((_BYTE *)this + 84) = a3;
    v13 = *(__int64 (__fastcall **)(CAudioSession *, char))(*(_QWORD *)v12 + 280LL);
    LOBYTE(v14) = a3;
    if ( v13 == CAudioSession::AddClientReference )
    {
      CAudioSession::AddClientReference(v12, a3);
      return (unsigned int)v11;
    }
    v13(v12, (char)v14);
  }
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::FinishConstruction", 0x82u, v11);
  return (unsigned int)v11;
}
