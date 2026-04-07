/*
 * XREFs of ?GetBeginRect@CAccentTransitionAnimatedVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180036F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAccentTransitionAnimatedVisual::GetBeginRect(
        CAccentTransitionAnimatedVisual *this,
        struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 40);
  return result;
}
