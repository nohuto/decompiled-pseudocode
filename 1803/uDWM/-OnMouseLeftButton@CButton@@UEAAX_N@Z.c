/*
 * XREFs of ?OnMouseLeftButton@CButton@@UEAAX_N@Z @ 0x180005550
 * Callers:
 *     <none>
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
