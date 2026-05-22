/*
 * XREFs of ?GetClipRect@DWMCursor@@UEAAJPEAUtagRECT@@@Z @ 0x180027150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::GetClipRect(DWMCursor *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 120);
  return result;
}
