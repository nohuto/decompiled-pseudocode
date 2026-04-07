/*
 * XREFs of ?SetReverseRTLMirror@CButton@@QEAAX_N@Z @ 0x180077DF4
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18002906C (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CButton::SetReverseRTLMirror(CButton *this, char a2)
{
  if ( ((*((_BYTE *)this + 280) & 0x20) != 0) != a2 )
  {
    *((_BYTE *)this + 280) = (32 * a2) | *((_BYTE *)this + 280) & 0xDF;
    CVisual::SetDirtyFlags(this, 0x8000);
  }
}
