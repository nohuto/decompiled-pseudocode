/*
 * XREFs of ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18003CBF0
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x18001E590 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180041260 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18009677C (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CDrawingContext::PushTransform(CDrawingContext *this, struct CTransform *a2)
{
  const struct CMILMatrix *Matrix; // rax
  int v4; // eax
  unsigned int v5; // ebx

  if ( a2 )
    Matrix = CTransform3D::GetMatrix(a2, 0LL);
  else
    Matrix = (const struct CMILMatrix *)&CMILMatrix::Identity;
  v4 = CDrawingContext::PushTransformInternal(this, 0LL, Matrix, 1, 1);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x12E0u);
  return v5;
}
