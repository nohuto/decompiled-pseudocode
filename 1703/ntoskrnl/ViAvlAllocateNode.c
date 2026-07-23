/*
 * XREFs of ViAvlAllocateNode @ 0x14003B680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_RTL_BALANCED_LINKS *__fastcall ViAvlAllocateNode(_RTL_AVL_TABLE *a1)
{
  _RTL_BALANCED_LINKS *Parent; // rax

  Parent = a1[1].BalancedRoot.Parent;
  a1[1].BalancedRoot.Parent = 0LL;
  return Parent - 1;
}
