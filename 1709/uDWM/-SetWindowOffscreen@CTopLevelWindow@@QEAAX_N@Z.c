/*
 * XREFs of ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180009C40
 * Callers:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180009498 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 * Callees:
 *     ?IsVisible@CVisual@@QEBA_NXZ @ 0x180019370 (-IsVisible@CVisual@@QEBA_NXZ.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027A40 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x180074D0C (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 *     McTemplateU0p @ 0x180079554 (McTemplateU0p.c)
 */

void __fastcall CTopLevelWindow::SetWindowOffscreen(CTopLevelWindow *this, char a2)
{
  CTopLevelWindow *v2; // rbx
  bool v3; // di
  char v4; // cl
  __int64 v5; // r8
  void *v6; // rdx
  CProjectionBorderVisual *v7; // r8

  v2 = this;
  v3 = 1;
  v4 = *((_BYTE *)this + 241);
  if ( ((v4 & 2) != 0) == a2 )
    return;
  v5 = *((_QWORD *)v2 + 90);
  LOBYTE(this) = (2 * a2) | v4 & 0xFD;
  *((_BYTE *)v2 + 241) = (_BYTE)this;
  if ( v5 )
  {
    if ( ((unsigned __int8)this & 2) != 0 )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v6 = &UdwmSystemAnimation_MoveOffscreen_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_5;
      v6 = &UdwmSystemAnimation_MoveOffscreen_Stop;
    }
    McTemplateU0p(this, v6, *(_QWORD *)(v5 + 40));
  }
LABEL_5:
  if ( *(_QWORD *)(*((_QWORD *)v2 + 90) + 416LL) )
  {
    if ( !CVisual::IsVisible(*((CVisual **)v2 + 32)) || (*((_BYTE *)v2 + 241) & 2) != 0 )
      v3 = 0;
    CProjectionBorderVisual::Show(v7, v3);
  }
  CWindowList::OnPositionChange(
    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 57),
    *((struct CWindowData **)v2 + 90),
    0);
}
