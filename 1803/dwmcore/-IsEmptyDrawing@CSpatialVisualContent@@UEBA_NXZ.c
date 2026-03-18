/*
 * XREFs of ?IsEmptyDrawing@CSpatialVisualContent@@UEBA_NXZ @ 0x1801C2180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSpatialVisualContent::IsEmptyDrawing(CSpatialVisualContent *this)
{
  return *((_QWORD *)this + 8) == 0LL;
}
