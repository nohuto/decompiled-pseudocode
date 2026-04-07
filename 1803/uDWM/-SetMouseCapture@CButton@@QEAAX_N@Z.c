/*
 * XREFs of ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180005518
 * Callers:
 *     ?UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z @ 0x18001D4B0 (-UpdateCapturedButton@CTopLevelWindow@@AEAAXI@Z.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EF88 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002AC30 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CButton::SetMouseCapture(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 280) & 8) != 0) != a2 )
  {
    *((_BYTE *)this + 280) = (8 * a2) | *((_BYTE *)this + 280) & 0xF7;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
