/*
 * XREFs of ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180021DD0
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180021D00 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180093820 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18001D40C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180020FE0 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qS @ 0x180083DB0 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::CreateAudioSessionControl(
        CAudioSessionManager *this,
        struct CAudioSession *a2,
        unsigned int a3,
        char a4,
        struct CServerAudioSessionControl **a5)
{
  char *v8; // rax
  __int64 v9; // r8
  volatile signed __int32 *v10; // rbx
  __int64 (__fastcall *v11)(CServerAudioSessionControl *, int, char, struct CAudioSession *); // rax
  int v12; // eax
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(CServerAudioSessionControl *); // rax

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, 0LL);
  }
  v8 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = (volatile signed __int32 *)v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 4) = 1;
    *(_QWORD *)v8 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
    *((_QWORD *)v8 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
    *((_DWORD *)v8 + 6) = 0;
    ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v8 + 32));
    *((_QWORD *)v10 + 9) = 0LL;
    *((_BYTE *)v10 + 84) = 0;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
    }
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v13 = -2147024882;
LABEL_27:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1D6u, v13);
    goto LABEL_19;
  }
  v11 = *(__int64 (__fastcall **)(CServerAudioSessionControl *, int, char, struct CAudioSession *))(*(_QWORD *)v10
                                                                                                  + 256LL);
  LOBYTE(v9) = a4;
  if ( v11 == CServerAudioSessionControl::FinishConstruction )
    v12 = CServerAudioSessionControl::FinishConstruction((CServerAudioSessionControl *)v10, a3, a4, a2);
  else
    v12 = v11((CServerAudioSessionControl *)v10, a3, v9, a2);
  v13 = v12;
  if ( v12 < 0 )
    goto LABEL_27;
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      16,
      (unsigned int)&WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids,
      (_DWORD)v10,
      0LL);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  _InterlockedIncrement(v10 + 6);
  *a5 = (struct CServerAudioSessionControl *)v10;
LABEL_19:
  if ( v10 )
  {
    v14 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v10 + 16LL);
    if ( v14 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release((CServerAudioSessionControl *)v10);
    else
      v14((CServerAudioSessionControl *)v10);
  }
  return v13;
}
