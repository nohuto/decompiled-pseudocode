/*
 * XREFs of ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801A46F8
 * Callers:
 *     ?ProcessSetCameraId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETCAMERAID@@@Z @ 0x18012FBD8 (-ProcessSetCameraId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_.c)
 *     ?ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN@@@Z @ 0x18012FC50 (-ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY.c)
 *     ?ProcessSetVidPnId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETVIDPNID@@@Z @ 0x18012FCD0 (-ProcessSetVidPnId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_S.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18012FD34 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SET.c)
 *     ?ProcessSetTargetFrameRate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETTARGETFRAMERATE@@@Z @ 0x18012FD8C (-ProcessSetTargetFrameRate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICD.c)
 *     ?ProcessSetAdapterLuid@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETADAPTERLUID@@@Z @ 0x18012FDEC (-ProcessSetAdapterLuid@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPL.c)
 * Callees:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801A5C20 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801A643C (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicDisplay::OnChanged(struct IUnknown *this)
{
  CHolographicManager *lpVtbl; // rcx
  CHolographicInteropTaskQueue *Release; // rcx

  lpVtbl = (CHolographicManager *)this[8].lpVtbl;
  if ( lpVtbl )
  {
    if ( (BYTE4(this[9].lpVtbl) & 0xA) != 0 && (BYTE4(this[9].lpVtbl) & 1) != 0 )
    {
      if ( !LOBYTE(this[19].lpVtbl) )
      {
        CHolographicManager::AddHolographicDisplay(lpVtbl, (struct CHolographicDisplay *)this);
        LOBYTE(this[19].lpVtbl) = 1;
      }
      Release = (CHolographicInteropTaskQueue *)this[8].lpVtbl[1].Release;
      if ( Release )
        CHolographicInteropTaskQueue::PostMessageW(Release, 8u, this + 7, 0LL, 0LL, 0LL, 0LL);
    }
    else if ( LOBYTE(this[19].lpVtbl) )
    {
      CHolographicManager::RemoveHolographicDisplay(lpVtbl, (struct CHolographicDisplay *)this);
      LOBYTE(this[19].lpVtbl) = 0;
    }
  }
}
