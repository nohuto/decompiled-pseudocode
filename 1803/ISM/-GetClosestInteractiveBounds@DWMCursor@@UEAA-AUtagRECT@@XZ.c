/*
 * XREFs of ?GetClosestInteractiveBounds@DWMCursor@@UEAA?AUtagRECT@@XZ @ 0x18008B210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall DWMCursor::GetClosestInteractiveBounds(DWMCursor *this, struct tagRECT *__return_ptr retstr)
{
  struct tagRECT *result; // rax

  result = retstr;
  *retstr = *(struct tagRECT *)((char *)this + 88);
  return result;
}
