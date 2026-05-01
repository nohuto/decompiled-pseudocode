/*
 * XREFs of ?GetDesiredApplicationRect@CFrameApplicationPresentation@@UEAAJPEAUtagRECT@@@Z @ 0x180069ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::GetDesiredApplicationRect(struct tagRECT *this, struct tagRECT *a2)
{
  *a2 = this[9];
  return IsRectEmpty(a2) ? 0x80070490 : 0;
}
