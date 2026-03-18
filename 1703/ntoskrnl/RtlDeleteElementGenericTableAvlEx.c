/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x14004C910
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 * Callees:
 *     RealPredecessor @ 0x14003B308 (RealPredecessor.c)
 *     DeleteNodeFromTree @ 0x14004C96C (DeleteNodeFromTree.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(__int64, _QWORD *); // rax

  if ( a2 == *(_QWORD **)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = RealPredecessor(a2);
  ++*(_DWORD *)(a1 + 64);
  DeleteNodeFromTree(a1);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 88);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return v4(a1, a2);
}
