/*
 * XREFs of ?GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801A7EA8
 * Callers:
 *     ?CalculateInsets@CProjectedShadow@@AEBAXPEAVCDrawingContext@@W4ShadowPath@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV4@AEAVInsets@@4@Z @ 0x1801B4160 (-CalculateInsets@CProjectedShadow@@AEBAXPEAVCDrawingContext@@W4ShadowPath@@AEBV-$TMilRect_@MUMil.c)
 *     ?GetOpacity@CProjectedShadow@@AEBAMPEAVCDrawingContext@@@Z @ 0x1801B57DC (-GetOpacity@CProjectedShadow@@AEBAMPEAVCDrawingContext@@@Z.c)
 *     ?GetPlaneOfVisual@CProjectedShadow@@CA?AUD2D_VECTOR_4F@@PEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801B589C (-GetPlaneOfVisual@CProjectedShadow@@CA-AUD2D_VECTOR_4F@@PEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B619C (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18004CDE0 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 */

bool __fastcall CVisual::GetRelativeOffset(CVisual *this, float *a2, float *a3, float *a4)
{
  bool v6; // zf
  float y; // xmm3_4
  float z; // xmm2_4
  FLOAT *v9; // r11
  struct D2D_VECTOR_3F v11; // [rsp+20h] [rbp-18h] BYREF

  CVisual::GetRelativeOffsetInternal(this, &v11);
  v6 = v11.x == 0.0;
  y = v11.y;
  z = v11.z;
  *v9 = v11.x;
  *a3 = y;
  *a4 = z;
  return !v6 || y != 0.0 || z != 0.0;
}
