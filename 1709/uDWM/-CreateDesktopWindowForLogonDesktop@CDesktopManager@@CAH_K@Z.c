/*
 * XREFs of ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x180034430
 * Callers:
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x180016C1C (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x180027E30 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18003D5B0 (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800256E8 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18002C1BC (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z @ 0x1800344FC (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJPEAUIDwmChannel@@K@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x1800348B0 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopWindowForLogonDesktop(unsigned __int64 a1)
{
  _QWORD *Element; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi
  struct CRenderDataVisual *RootVisualForDesktop; // rax

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 57) + 8LL),
              a1);
  if ( Element )
    v3 = Element[4];
  else
    v3 = 0LL;
  if ( !*(_DWORD *)(v3 + 272) )
  {
    v4 = 0;
    if ( !CDesktopManager::IsLogonDesktop(a1) && CAccent::s_clrCurrentAccentBackground != 0xFFFFFF )
      v4 = CAccent::s_clrCurrentAccentBackground;
    if ( (int)CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(
                (CDesktopWindowReplacement *)v3,
                *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
                v4) >= 0 )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
                               a1);
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)RootVisualForDesktop + 3) + 32LL),
        (struct CVisual **)v3,
        RootVisualForDesktop,
        0,
        1);
      CVisual::RenderRecursive((CVisual *)v3);
    }
  }
  return 1LL;
}
