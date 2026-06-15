/*
 * XREFs of ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x1800184F0
 * Callers:
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180015CC0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180017090 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 * Callees:
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800150B0 (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 *     ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800159F0 (-AddRef@CAudioSessionManager@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall CAudioSession::DeleteSessionNotification(
        struct _RTL_CRITICAL_SECTION *this,
        struct ISessionInternalEvents *a2)
{
  __int64 (__fastcall *v4)(CAudioSessionManager *); // rax
  CServerAudioSessionControl *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 113LL, &WPP_9673f45371ad3f1ae3c411824cdd701d_Traceguids, a2);
  }
  v6 = a2;
  if ( a2 )
  {
    v4 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)a2 + 8LL);
    if ( v4 == CAudioSessionManager::AddRef )
      CAudioSessionManager::AddRef(a2);
    else
      v4(a2);
  }
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::RemoveInterface(this + 14, &v6);
  return 0LL;
}
