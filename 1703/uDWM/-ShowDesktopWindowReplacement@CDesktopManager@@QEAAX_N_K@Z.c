/*
 * XREFs of ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180021F68
 * Callers:
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180033048 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 * Callees:
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180015568 (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x180015AD8 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x180016D78 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 */

void __fastcall CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager *this, char a2, unsigned __int64 a3)
{
  char v4; // bl
  _BYTE *Element; // rax

  v4 = a2 && !*((_BYTE *)this + 19);
  if ( *((_BYTE *)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                    (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51) + 8LL),
                    a3)
       + 56) != v4 )
  {
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51) + 8LL),
                a3);
    if ( Element )
      Element[56] = v4;
    if ( v4 )
      CDesktopManager::CreateDesktopWindowForLogonDesktop(a3);
    else
      CDesktopManager::DestroyDesktopWindowReplacement(a3);
  }
}
