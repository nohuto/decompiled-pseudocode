/*
 * XREFs of ?GetRemoteAppSurfaceBounds@CWindowNode@@UEAAJAEAUtagRECT@@@Z @ 0x1800D65F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::GetRemoteAppSurfaceBounds(struct tagRECT *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = this[41];
  return result;
}
