/*
 * XREFs of ?OnSettingsUpdated@CTopLevelWindow@@QEAAXK@Z @ 0x18001ED04
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180025BF4 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A900 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001ED98 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
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
