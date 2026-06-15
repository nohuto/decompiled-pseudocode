/*
 * XREFs of ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013EE0
 * Callers:
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180020FE0 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021F50 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800205A4 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800214A0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     WPP_SF_q @ 0x18004B768 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::AddSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  unsigned int (__fastcall *v4)(CAudioSessionManager *__hidden); // rax

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 119LL, &WPP_0c5ff841e5503cc39024c97173620901_Traceguids, a2);
  }
  if ( a2 )
  {
    v4 = *(unsigned int (__fastcall **)(CAudioSessionManager *__hidden))(*(_QWORD *)a2 + 8LL);
    if ( v4 == CAudioSessionManager::AddRef )
      CAudioSessionManager::AddRef(a2);
    else
      v4(a2);
  }
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 632));
  return 0LL;
}
