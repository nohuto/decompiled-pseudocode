/*
 * XREFs of ?GetBounds@CHWDrawListEntry@@UEBA?AUD2D_RECT_F@@XZ @ 0x18009C030
 * Callers:
 *     ?Update@CDrawListCache@@AEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18009BCB8 (-Update@CDrawListCache@@AEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
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
