/*
 * XREFs of ?GetRect@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAUtagRECT@@@Z @ 0x180064850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewArrangePositionImpl::GetRect(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[1];
  return result;
}
