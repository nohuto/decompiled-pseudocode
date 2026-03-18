/*
 * XREFs of ?GetStrokeThickness@CSpriteVectorShape@@AEBAMXZ @ 0x1801A4DEC
 * Callers:
 *     ?ComputeBounds@CSpriteVectorShape@@QEAAXXZ @ 0x1801A468C (-ComputeBounds@CSpriteVectorShape@@QEAAXXZ.c)
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801A4764 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801A4B54 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CSpriteVectorShape::GetStrokeThickness(CSpriteVectorShape *this)
{
  float v1; // xmm2_4
  float v2; // xmm1_4

  v1 = *((float *)this + 48);
  v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v2 < 0.0000011920929 )
    return FLOAT_1_0;
  return v1;
}
