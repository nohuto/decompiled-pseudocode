/*
 * XREFs of ?SetDragStartPosition@CDragVisual@@UEAAXUtagPOINT@@@Z @ 0x1802F1D80
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800F6188 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?_CheckDragStartBounds@CDragVisual@@AEAAXXZ @ 0x1802F2784 (-_CheckDragStartBounds@CDragVisual@@AEAAXXZ.c)
 */

void __fastcall CDragVisual::SetDragStartPosition(struct tagPOINT *this, struct tagPOINT a2)
{
  this[19] = a2;
  if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&this[27]) )
    CDragVisual::_CheckDragStartBounds((CDragVisual *)&this[-3]);
  this[39] = a2;
}
