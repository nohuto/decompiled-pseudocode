/*
 * XREFs of ?GetClipRect@DWMCursor@@UEAAJPEAUtagRECT@@@Z @ 0x18008B510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::GetClipRect(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[7];
  return result;
}
