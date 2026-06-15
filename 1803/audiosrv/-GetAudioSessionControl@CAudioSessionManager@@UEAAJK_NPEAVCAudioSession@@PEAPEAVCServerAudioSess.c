/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180004800
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800045E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800048E0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180004AF0 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x18009ECE8 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800A0B54 (WPP_SF_qS.c)
 *     WPP_SF_d @ 0x1800C66D0 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        bool a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  CAudioSessionManager *v8; // rcx
  unsigned int v9; // eax
  int v10; // edi
  struct CServerAudioSessionControl *v11; // rsi
  CServerAudioSessionControl *v12; // rbx
  unsigned int (__fastcall *v13)(CServerAudioSessionControl *__hidden); // rax
  struct CServerAudioSessionControl *v15; // [rsp+30h] [rbp-18h] BYREF

  v15 = 0LL;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, a2);
      v8 = WPP_GLOBAL_Control;
    }
    if ( v8 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v8 + 28) & 0x40) != 0
      && *((_BYTE *)v8 + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)v8 + 2), 15LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, 0LL);
    }
  }
  v9 = CAudioSessionManager::CreateAudioSessionControl(v8, a4, a2, a3, &v15);
  v10 = v9;
  if ( v9 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids, v9);
    }
    v12 = v15;
    v11 = 0LL;
  }
  else
  {
    v11 = v15;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        17,
        (unsigned int)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
        (_DWORD)v15,
        0LL);
    }
    v12 = 0LL;
  }
  *a5 = v11;
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 0x26Fu, v10);
  if ( v12 )
  {
    v13 = *(unsigned int (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v12 + 16LL);
    if ( v13 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release(v12);
    else
      v13(v12);
  }
  return (unsigned int)v10;
}
