/*
 * XREFs of ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180079370
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800373C0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180035F78 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180078990 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StartIconicAnimation(CTopLevelWindow *this)
{
  struct CVisual *v2; // rcx

  if ( *((char *)this + 240) >= 0 )
  {
    if ( !CTopLevelWindow::HasAnimation(this) )
      CDesktopManager::RegisterForGlobalTimeChangeNotification(v2);
    *((_BYTE *)this + 240) |= 0x80u;
  }
}
