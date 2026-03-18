/*
 * XREFs of ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1801FC168
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWER_INITIALIZE@@@Z @ 0x1801FC320 (-ProcessInitialize@CHolographicViewer@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWER_INI.c)
 * Callees:
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1801F7E44 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1801F93EC (-UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 */

void __fastcall CHolographicViewer::OnChanged(CHolographicViewer *this)
{
  CHolographicManager *v2; // rcx

  v2 = (CHolographicManager *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 144) )
    {
      CHolographicManager::UpdateHolographicViewer(v2, this);
    }
    else
    {
      CHolographicManager::AddHolographicViewer((RTL_SRWLOCK *)v2, this);
      *((_BYTE *)this + 144) = 1;
    }
  }
}
