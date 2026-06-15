/*
 * XREFs of ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180021D00
 * Callers:
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180021180 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180021DD0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x180083DB0 (WPP_SF_qS.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessionControl(
        CAudioSessionManager *this,
        unsigned int a2,
        bool a3,
        struct CAudioSession *a4,
        struct CServerAudioSessionControl **a5)
{
  CVolumeStrip *v8; // rcx
  unsigned int v9; // eax
  int v10; // edi
  struct CServerAudioSessionControl *v11; // rsi
  struct CServerAudioSessionControl *v12; // rbx
  struct CServerAudioSessionControl *v14; // [rsp+30h] [rbp-18h] BYREF

  v14 = 0LL;
  v8 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, a2);
      v8 = WPP_GLOBAL_Control;
    }
    if ( v8 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v8 + 28) & 0x40) != 0 && *((_BYTE *)v8 + 25) >= 4u )
      WPP_SF_S(*((_QWORD *)v8 + 2), 18LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, 0LL);
  }
  v9 = CAudioSessionManager::CreateAudioSessionControl(v8, a4, a2, a3, &v14);
  v10 = v9;
  if ( v9 )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, v9);
    }
    v12 = v14;
    *a5 = 0LL;
  }
  else
  {
    v11 = v14;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
        (_DWORD)v14,
        0LL);
    }
    v12 = 0LL;
    *a5 = v11;
  }
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 0x20Au, v10);
  if ( v12 )
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)v10;
}
