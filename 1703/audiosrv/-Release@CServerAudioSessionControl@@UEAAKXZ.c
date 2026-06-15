/*
 * XREFs of ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80
 * Callers:
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180002200 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18001D0E0 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800205A4 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?RemoveInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180020690 (-RemoveInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComP.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180021DD0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180022E30 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     AudioSessionDestroy @ 0x180032940 (AudioSessionDestroy.c)
 *     ?Release@CServerAudioSessionControl@@W7EAAKXZ @ 0x180058260 (-Release@CServerAudioSessionControl@@W7EAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180020E50 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::Release(CServerAudioSessionControl *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  void (__fastcall *v4)(CServerAudioSessionControl *__hidden); // rax
  CServerAudioSessionControl *v5; // rcx

  v1 = (char *)this + 8;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v2 )
  {
    v4 = *(void (__fastcall **)(CServerAudioSessionControl *__hidden))(*(_QWORD *)v1 + 32LL);
    v5 = (CServerAudioSessionControl *)((char *)this + 8);
    if ( v4 == CServerAudioSessionControl::FinalRelease )
      CServerAudioSessionControl::FinalRelease(v5);
    else
      v4(v5);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
