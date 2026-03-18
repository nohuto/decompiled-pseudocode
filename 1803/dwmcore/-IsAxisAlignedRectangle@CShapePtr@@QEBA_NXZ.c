/*
 * XREFs of ?IsAxisAlignedRectangle@CShapePtr@@QEBA_NXZ @ 0x18013F454
 * Callers:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180019094 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18006B500 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008AA4C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18009335C (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801A4764 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801A9B5C (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18008C02C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 */

char __fastcall CShapePtr::IsAxisAlignedRectangle(CShape **this)
{
  char v1; // bl

  v1 = 0;
  if ( *this )
    return CShape::IsAxisAlignedRectangle(*this) != 0;
  return v1;
}
