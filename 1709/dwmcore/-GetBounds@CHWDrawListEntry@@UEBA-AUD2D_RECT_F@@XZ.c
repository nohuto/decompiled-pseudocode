/*
 * XREFs of ?GetBounds@CHWDrawListEntry@@UEBA?AUD2D_RECT_F@@XZ @ 0x180023E00
 * Callers:
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180023AB0 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct D2D_RECT_F *__fastcall CHWDrawListEntry::GetBounds(
        CHWDrawListEntry *this,
        struct D2D_RECT_F *__return_ptr retstr)
{
  struct D2D_RECT_F *result; // rax

  result = retstr;
  *retstr = *(struct D2D_RECT_F *)(*((_QWORD *)this + 7) + 56LL);
  return result;
}
