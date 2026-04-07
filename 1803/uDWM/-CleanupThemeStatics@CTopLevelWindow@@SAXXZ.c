/*
 * XREFs of ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18003FD54
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003EE58 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void CTopLevelWindow::CleanupThemeStatics(void)
{
  __int64 i; // rbx
  __int64 v1; // rax
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  if ( CTopLevelWindow::s_pbsNonClientAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsNonClientAtlas);
    CTopLevelWindow::s_pbsNonClientAtlas = 0LL;
  }
  if ( CTopLevelWindow::s_pbsTouchAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsTouchAtlas);
    CTopLevelWindow::s_pbsTouchAtlas = 0LL;
  }
  if ( CTopLevelWindow::s_pbsPenAtlas )
  {
    CBaseObject::Release(CTopLevelWindow::s_pbsPenAtlas);
    CTopLevelWindow::s_pbsPenAtlas = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < dword_1800CA1A8; i = (unsigned int)(i + 1) )
  {
    v1 = CTopLevelWindow::s_rgpwfWindowFrames;
    v2 = *(void (__fastcall ****)(_QWORD, __int64))(CTopLevelWindow::s_rgpwfWindowFrames + 8 * i);
    if ( v2 )
    {
      (**v2)(v2, 1LL);
      v1 = CTopLevelWindow::s_rgpwfWindowFrames;
    }
    *(_QWORD *)(v1 + 8 * i) = 0LL;
  }
  dword_1800CA1A8 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8u);
}
