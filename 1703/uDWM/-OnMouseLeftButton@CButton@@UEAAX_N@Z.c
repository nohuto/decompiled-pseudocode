/*
 * XREFs of ?OnMouseLeftButton@CButton@@UEAAX_N@Z @ 0x18000EAB0
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x180032100 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CButton::OnMouseLeftButton(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 280) & 4) != 0) != a2 )
  {
    *((_BYTE *)this + 280) = (4 * a2) | *((_BYTE *)this + 280) & 0xFB;
    CVisual::SetDirtyFlags(this, 0x8000u);
  }
}
