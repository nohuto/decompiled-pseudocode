/*
 * XREFs of ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180016260
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800161A0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180079C80 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180016D70 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x1800171B0 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800172E0 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180064B48 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x180066790 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::CreateAudioSessionControl(
        CAudioSessionManager *this,
        struct CAudioSession *a2,
        unsigned int a3,
        bool a4,
        struct CServerAudioSessionControl **a5)
{
  CServerAudioSessionControl *v8; // rax
  __int64 v9; // r8
  volatile signed __int32 *v10; // rbx
  int (*v11)(CServerAudioSessionControl *__hidden, unsigned int, bool, struct CAudioSession *); // rax
  int v12; // eax
  unsigned int v13; // edi
  unsigned int (__fastcall *v14)(CServerAudioSessionControl *__hidden); // rax

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, 0LL);
  }
  v8 = (CServerAudioSessionControl *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v10 = (volatile signed __int32 *)CServerAudioSessionControl::CServerAudioSessionControl(v8);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v13 = -2147024882;
LABEL_24:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1B7u, v13);
    goto LABEL_12;
  }
  v11 = *(int (**)(CServerAudioSessionControl *__hidden, unsigned int, bool, struct CAudioSession *))(*(_QWORD *)v10 + 256LL);
  LOBYTE(v9) = a4;
  if ( v11 == CServerAudioSessionControl::FinishConstruction )
    v12 = CServerAudioSessionControl::FinishConstruction((CServerAudioSessionControl *)v10, a3, a4, a2);
  else
    v12 = ((__int64 (__fastcall *)(volatile signed __int32 *, _QWORD, __int64, struct CAudioSession *))v11)(
            v10,
            a3,
            v9,
            a2);
  v13 = v12;
  if ( v12 < 0 )
    goto LABEL_24;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13,
      (unsigned int)&WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids,
      (_DWORD)v10,
      0LL);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  _InterlockedIncrement(v10 + 6);
  *a5 = (struct CServerAudioSessionControl *)v10;
LABEL_12:
  if ( v10 )
  {
    v14 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v10 + 16LL);
    if ( v14 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release((CServerAudioSessionControl *)v10);
    else
      v14((CServerAudioSessionControl *)v10);
  }
  return v13;
}
