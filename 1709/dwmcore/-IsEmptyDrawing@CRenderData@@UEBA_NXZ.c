/*
 * XREFs of ?IsEmptyDrawing@CRenderData@@UEBA_NXZ @ 0x18001D850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CRenderData::IsEmptyDrawing(CRenderData *this)
{
  return *((_BYTE *)this + 137);
}
