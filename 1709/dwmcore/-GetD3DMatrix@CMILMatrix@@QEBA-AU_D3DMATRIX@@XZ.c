/*
 * XREFs of ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x18005ACD4
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x180091B04 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z @ 0x1800957F0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z.c)
 *     ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180095B20 (-GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z @ 0x180129E60 (-SetTransform@CCoRenderVisualProxy@@UEAAJPEBU_D3DMATRIX@@0@Z.c)
 *     ?GetWorldTransform4x4@CDrawingContext@@UEBAXPEAUD2D_MATRIX_4X4_F@@@Z @ 0x18013DB90 (-GetWorldTransform4x4@CDrawingContext@@UEBAXPEAUD2D_MATRIX_4X4_F@@@Z.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014A5BC (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ @ 0x180169B90 (-Push2DVisualTransformToRenderThread@CInteraction@@UEAAJXZ.c)
 *     ??0CVector3ForceEvaluator@@QEAA@XZ @ 0x18017271C (--0CVector3ForceEvaluator@@QEAA@XZ.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x180172CF0 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180199450 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18019A2FC (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18019B700 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 * Callees:
 *     <none>
 */

struct _D3DMATRIX *__fastcall CMILMatrix::GetD3DMatrix(struct _D3DMATRIX *this, struct _D3DMATRIX *__return_ptr retstr)
{
  *retstr = *this;
  return retstr;
}
