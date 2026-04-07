/*
 * XREFs of ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001FCFC
 * Callers:
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A0C0 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180071A70 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?InvalidateAcrylicAccentDevices@CWindowList@@QEAAXXZ @ 0x1800852DC (-InvalidateAcrylicAccentDevices@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnAccentPolicyUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 90);
  if ( !v1 || (v2 = 1, (*(_BYTE *)(v1 + 592) & 1) == 0) || *(char *)(v1 + 595) < 0 )
    v2 = 0;
  CTopLevelWindow::UpdateAccent(this, v2);
}
