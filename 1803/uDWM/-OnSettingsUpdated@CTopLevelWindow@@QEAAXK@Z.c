/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001EE5C
 * Callers:
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A550 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x18002C010 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 * Callees:
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001EF60 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 */

void __fastcall CTopLevelWindow::OnSettingsUpdated(CTopLevelWindow *this, char a2)
{
  int v2; // edi
  bool v4; // r14
  int v5; // esi
  int v6; // ebx

  v2 = a2 & 9;
  v4 = (a2 & 4) != 0 || (a2 & 9) != 0;
  v5 = a2 & 0x40;
  v6 = (unsigned __int8)IsOpenThemeDataPresent() != 0 ? 0x1000 : 0;
  if ( v4 )
    CVisual::SetDirtyFlags(this, v6 | 0x200000);
  if ( v2 )
    CTopLevelWindow::OnWindowScaleUpdated(this);
  if ( v5 )
    CVisual::SetDirtyFlags(this, v6 | 0x1000000);
}
