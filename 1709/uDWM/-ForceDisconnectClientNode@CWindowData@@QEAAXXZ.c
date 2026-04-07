/*
 * XREFs of ?ForceDisconnectClientNode@CWindowData@@QEAAXXZ @ 0x180011268
 * Callers:
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A5D0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x180009D50 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWindowData::ForceDisconnectClientNode(CWindowData *this)
{
  CBaseObject **v2; // rcx

  v2 = (CBaseObject **)*((_QWORD *)this + 50);
  if ( v2 )
    CTopLevelWindow::ForceDisconnectClientArea(v2);
  if ( *((_DWORD *)this + 32) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 128LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    *((_DWORD *)this + 32) = 0;
  }
}
