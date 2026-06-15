/*
 * XREFs of ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800214A0
 * Callers:
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013E60 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180013EE0 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800205A4 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?AddRef@CAudioSessionManager@@W7EAAKXZ @ 0x180058280 (-AddRef@CAudioSessionManager@@W7EAAKXZ.c)
 * Callees:
 *     WPP_SF_qd @ 0x18004B79C (WPP_SF_qd.c)
 */

__int64 __fastcall CAudioSessionManager::AddRef(CAudioSessionManager *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 4);
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_011fda66b4cb384044e4321f2ccefedb_Traceguids, this, v1);
  }
  return v1;
}
