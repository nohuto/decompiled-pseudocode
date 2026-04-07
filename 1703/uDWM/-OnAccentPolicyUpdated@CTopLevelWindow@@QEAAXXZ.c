/*
 * XREFs of ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800248B0
 * Callers:
 *     ?AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031630 (-AccentPolicyChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004C608 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::OnAccentPolicyUpdated(CTopLevelWindow *this)
{
  __int64 v1; // rax
  bool v2; // dl

  v1 = *((_QWORD *)this + 90);
  if ( !v1 || (v2 = 1, (*(_BYTE *)(v1 + 592) & 1) == 0) || (*(_BYTE *)(v1 + 596) & 1) != 0 )
    v2 = 0;
  CTopLevelWindow::UpdateAccent(this, v2);
}
