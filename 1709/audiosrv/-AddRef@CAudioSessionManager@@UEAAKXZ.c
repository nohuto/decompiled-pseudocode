/*
 * XREFs of ?AddRef@CAudioSessionManager@@UEAAKXZ @ 0x1800159F0
 * Callers:
 *     ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180014F10 (-AddInterface@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV-$CComPtr@.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180015220 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x1800184F0 (-DeleteSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180018570 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 *     ?Add@?$CAtlArray@V?$CComQIPtr@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCAudioSessionManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAA_KPEAVCAudioSessionManager@@@Z @ 0x180030938 (-Add@-$CAtlArray@V-$CComQIPtr@VCAudioSessionManager@@$1-IID_IUnknown@@3U_GUID@@B@ATL@@V-$CComQIP.c)
 *     ?AddRef@CAudioSessionManager@@W7EAAKXZ @ 0x180036DE0 (-AddRef@CAudioSessionManager@@W7EAAKXZ.c)
 * Callees:
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 */

__int64 __fastcall CAudioSessionManager::AddRef(CAudioSessionManager *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 4);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_8db53f7ca00634d48047c78d0b32a6d0_Traceguids, this, v1);
  }
  return v1;
}
