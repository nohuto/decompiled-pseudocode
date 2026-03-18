/*
 * XREFs of ?GetBounds@CWARPDrawListEntry@@UEBA?AUD2D_RECT_F@@XZ @ 0x1800CCDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall CWARPDrawListEntry::GetBounds(
        CWARPDrawListEntry *this,
        struct D2D_RECT_F *__return_ptr retstr)
{
  struct D2D_RECT_F *result; // rax

  result = retstr;
  *retstr = *(struct D2D_RECT_F *)((char *)this + 72);
  return result;
}
