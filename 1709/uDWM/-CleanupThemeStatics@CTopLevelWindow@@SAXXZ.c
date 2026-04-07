/*
 * XREFs of ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x18003C9D8
 * Callers:
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x18003BB78 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x18003CAB0 (--_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void CTopLevelWindow::CleanupThemeStatics(void)
{
  __int64 i; // rbx
  CTopLevelWindow::WindowFrame *v1; // rcx
  void *(__fastcall *v2)(CTopLevelWindow::WindowFrame *__hidden, unsigned int); // rax

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
  for ( i = 0LL; (unsigned int)i < dword_1800C1948; i = (unsigned int)(i + 1) )
  {
    v1 = *(CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * i);
    if ( v1 )
    {
      v2 = **(void *(__fastcall ***)(CTopLevelWindow::WindowFrame *__hidden, unsigned int))v1;
      if ( v2 == CTopLevelWindow::WindowFrame::`scalar deleting destructor' )
        CTopLevelWindow::WindowFrame::`scalar deleting destructor'(v1, 1u);
      else
        v2(v1, 1u);
    }
    *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * i) = 0LL;
  }
  dword_1800C1948 = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)&CTopLevelWindow::s_rgpwfWindowFrames, 8u);
}
