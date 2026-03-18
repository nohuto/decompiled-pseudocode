/*
 * XREFs of ?GetCurrentAdapterLuid@CDrawingContext@@UEBA?AU_LUID@@XZ @ 0x1800C1520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDrawingContext::GetCurrentAdapterLuid(CDrawingContext *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this + 48);
  return (struct _LUID)a2;
}
