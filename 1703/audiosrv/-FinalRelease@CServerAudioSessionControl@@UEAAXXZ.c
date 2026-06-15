/*
 * XREFs of ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180020E50
 * Callers:
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x1800207F0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Release@CServerAudioSessionControl@@UEAAKXZ @ 0x180020B80 (-Release@CServerAudioSessionControl@@UEAAKXZ.c)
 *     ?Invoke@CAudioStreamDestroy@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180022740 (-Invoke@CAudioStreamDestroy@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamCreate@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180022820 (-Invoke@CAudioStreamCreate@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 *     ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180022D40 (-Invoke@CAudioStreamStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x18004B710 (WPP_SF_S.c)
 */

void __fastcall CServerAudioSessionControl::FinalRelease(CServerAudioSessionControl *this)
{
  void (*v2)(void); // rax

  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_f31bef8187753e0293a3e215cbf500b3_Traceguids, 0LL);
  }
  v2 = *(void (**)(void))(*((_QWORD *)this - 1) + 104LL);
  if ( (char *)v2 == (char *)CServerAudioSessionControl::Dispose )
    CServerAudioSessionControl::Dispose((CServerAudioSessionControl *)((char *)this - 8));
  else
    v2();
}
