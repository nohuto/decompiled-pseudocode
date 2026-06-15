/*
 * XREFs of ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800048E0
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180004800 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800B2300 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180004AF0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180004B1C (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180004D50 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180004E3C (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800A0B54 (WPP_SF_qS.c)
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
  _BOOL8 v9; // r8
  CServerAudioSessionControl *v10; // rbx
  __int64 (__fastcall *v11)(CServerAudioSessionControl *__hidden, unsigned int, bool, struct CAudioSession *); // rax
  int v12; // eax
  unsigned int v13; // edi
  unsigned int (__fastcall *v14)(CServerAudioSessionControl *__hidden); // rax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, 0LL);
  }
  v8 = (CServerAudioSessionControl *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
    v10 = CServerAudioSessionControl::CServerAudioSessionControl(v8);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v13 = -2147024882;
LABEL_22:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x23Bu, v13);
    goto LABEL_12;
  }
  v11 = *(__int64 (__fastcall **)(CServerAudioSessionControl *__hidden, unsigned int, bool, struct CAudioSession *))(*(_QWORD *)v10 + 256LL);
  LOBYTE(v9) = a4;
  if ( v11 == CServerAudioSessionControl::FinishConstruction )
    v12 = CServerAudioSessionControl::FinishConstruction(v10, a3, a4, a2);
  else
    v12 = v11(v10, a3, v9, a2);
  v13 = v12;
  if ( v12 < 0 )
    goto LABEL_22;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13,
      (unsigned int)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
      (_DWORD)v10,
      0LL);
  }
  CServerAudioSessionControl::AddClientReference(v10);
  *a5 = v10;
LABEL_12:
  if ( v10 )
  {
    v14 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v10 + 16LL);
    if ( v14 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release(v10);
    else
      v14(v10);
  }
  return v13;
}
