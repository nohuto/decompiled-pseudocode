/*
 * XREFs of PnpBuildRemovalRelationList @ 0x14056F2D8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopSortRelationListForRemove @ 0x14056F378 (IopSortRelationListForRemove.c)
 *     PnpProcessRelation @ 0x14056F60C (PnpProcessRelation.c)
 *     IopAllocateRelationList @ 0x140570214 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x1405702D8 (IopFreeRelationList.c)
 */

__int64 __fastcall PnpBuildRemovalRelationList(__int64 a1, unsigned int a2, int a3, UNICODE_STRING *a4, _QWORD *a5)
{
  __int64 v8; // r15
  ULONG_PTR BugCheckParameter3; // rax
  void *v10; // rbx
  int v11; // edi

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  *a5 = 0LL;
  BugCheckParameter3 = IopAllocateRelationList(a2);
  v10 = (void *)BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v11 = PnpProcessRelation(v8, a2, 2, a3, a4, BugCheckParameter3);
  if ( v11 < 0 )
  {
    IopFreeRelationList(v10);
  }
  else
  {
    *a5 = v10;
    IopSortRelationListForRemove(v10);
  }
  return (unsigned int)v11;
}
