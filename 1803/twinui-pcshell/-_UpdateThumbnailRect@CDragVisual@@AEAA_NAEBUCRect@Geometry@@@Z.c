/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x1802F3E7C
 * Callers:
 *     ?SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z @ 0x1802F1DE0 (-SetDragStartRect@CDragVisual@@UEAAXUtagRECT@@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x1802F3EB8 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 * Callees:
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18013E9F4 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?_CheckDragStartBounds@CDragVisual@@AEAAXXZ @ 0x1802F2784 (-_CheckDragStartBounds@CDragVisual@@AEAAXXZ.c)
 */

bool __fastcall CDragVisual::_UpdateThumbnailRect(const struct _GUID *this, const struct Geometry::CRect *a2)
{
  _OWORD *v2; // rdx
  bool v3; // bl
  _OWORD *v4; // r8
  CDragVisual *v5; // r9

  v3 = !Platform::Guid::Equals(a2, this + 15);
  if ( v3 )
  {
    *v2 = *v4;
    CDragVisual::_CheckDragStartBounds(v5);
  }
  return v3;
}
