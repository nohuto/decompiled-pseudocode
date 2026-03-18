/*
 * XREFs of ?AddOcclusionInformation@CRenderData@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800849B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CRenderData::AddOcclusionInformation(
        CRenderData *this,
        struct IDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  return CRenderData::Draw(this, a2);
}
