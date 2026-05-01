/*
 * XREFs of ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180185E7C
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z @ 0x18028F650 (-NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Geometry::CRect::Intersects(Geometry::CRect *this, const struct tagRECT *a2)
{
  LONG top; // r10d
  LONG right; // eax
  LONG left; // r8d
  LONG bottom; // r9d

  top = *((_DWORD *)this + 1);
  right = *((_DWORD *)this + 2);
  if ( top <= a2->top )
    top = a2->top;
  left = *(_DWORD *)this;
  if ( right >= a2->right )
    right = a2->right;
  bottom = *((_DWORD *)this + 3);
  if ( left <= a2->left )
    left = a2->left;
  if ( left >= right )
    return 0;
  if ( bottom >= a2->bottom )
    bottom = a2->bottom;
  return top < bottom;
}
