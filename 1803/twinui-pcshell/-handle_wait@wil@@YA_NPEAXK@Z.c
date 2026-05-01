/*
 * XREFs of ?handle_wait@wil@@YA_NPEAXK@Z @ 0x1801983B8
 * Callers:
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x180192E10 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ @ 0x1801E14B4 (-WaitForViewManagerConnection@ViewManagerBridge@@QEAAJXZ.c)
 *     ?WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ @ 0x1801EDD20 (-WaitForWindowManagerConnection@WindowManagerBridge@@UEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801002A0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall wil::handle_wait(wil *this, void *a2)
{
  DWORD v2; // ecx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = WaitForSingleObjectEx(this, (DWORD)a2, 0);
  if ( v2 == 258 )
    return 0;
  if ( v2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(retaddr, 2407LL, (__int64)"internal\\sdk\\inc\\wil\\Resource.h", v3);
    __debugbreak();
  }
  return 1;
}
