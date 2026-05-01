/*
 * XREFs of ?GetRect@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAUtagRECT@@@Z @ 0x180062B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewArrangePositionImpl::GetRect(
        CCommonApplicationViewArrangePositionImpl *this,
        struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 8);
  return result;
}
