/*
 * XREFs of ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004CA70
 * Callers:
 *     ?ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18000C700 (-ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?AdjustWorldBounds@CVisual@@AEAAXPEAV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800860F0 (-AdjustWorldBounds@CVisual@@AEAAXPEAV-$CRectF@UPageInPixels@CoordinateSpace@@@@@Z.c)
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ @ 0x180086C60 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@MEBA_NXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPrimitiveGroup::IsOfType(__int64 a1, int a2)
{
  return a2 == 102 || a2 == 91;
}
