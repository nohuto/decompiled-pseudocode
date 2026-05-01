/*
 * XREFs of ?GetDesiredApplicationRect@CFrameApplicationPresentation@@UEAAJPEAUtagRECT@@@Z @ 0x180067A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::GetDesiredApplicationRect(struct tagRECT *this, struct tagRECT *a2)
{
  *a2 = this[8];
  return IsRectEmpty(a2) ? 0x80070490 : 0;
}
