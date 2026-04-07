/*
 * XREFs of ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180016C1C
 * Callers:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180025858 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002C1BC (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180034430 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x1800363F4 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager *this, char a2, unsigned __int64 a3)
{
  char v4; // bl
  __int64 Element; // rax

  v4 = a2 && !*((_BYTE *)this + 19);
  if ( *(_BYTE *)(CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57) + 8LL,
                    a3)
                + 56) != v4 )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57) + 8LL,
                a3);
    if ( Element )
      *(_BYTE *)(Element + 56) = v4;
    if ( v4 )
      CDesktopManager::CreateDesktopWindowForLogonDesktop(a3);
    else
      CDesktopManager::DestroyDesktopWindowReplacement(a3);
  }
}
