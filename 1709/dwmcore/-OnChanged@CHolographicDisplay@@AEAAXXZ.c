/*
 * XREFs of ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801BD1C8
 * Callers:
 *     ?ProcessSetAdapterLuid@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETADAPTERLUID@@@Z @ 0x1801BD240 (-ProcessSetAdapterLuid@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPL.c)
 *     ?ProcessSetCameraId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETCAMERAID@@@Z @ 0x1801BD2B0 (-ProcessSetCameraId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1801BD330 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SET.c)
 *     ?ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN@@@Z @ 0x1801BD388 (-ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY.c)
 *     ?ProcessSetTargetFrameRate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETTARGETFRAMERATE@@@Z @ 0x1801BD420 (-ProcessSetTargetFrameRate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICD.c)
 *     ?ProcessSetVidPnId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETVIDPNID@@@Z @ 0x1801BD480 (-ProcessSetVidPnId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_S.c)
 * Callees:
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1801BFC88 (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1801C0EE4 (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 */

void __fastcall CHolographicDisplay::OnChanged(CHolographicDisplay *this)
{
  CHolographicManager *v2; // rcx

  v2 = (CHolographicManager *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    if ( (*((_BYTE *)this + 76) & 1) == 0 || (*((_BYTE *)this + 76) & 0x22) != 34 && (*((_BYTE *)this + 76) & 8) == 0 )
    {
      if ( *((_BYTE *)this + 152) )
      {
        CHolographicManager::RemoveHolographicDisplay(v2, this);
        *((_BYTE *)this + 152) = 0;
      }
    }
    else
    {
      if ( !*((_BYTE *)this + 152) )
      {
        CHolographicManager::AddHolographicDisplay(v2, this);
        *((_BYTE *)this + 152) = 1;
      }
      CHolographicManager::UpdateHolographicDisplay(*((CHolographicManager **)this + 8), this);
    }
  }
}
