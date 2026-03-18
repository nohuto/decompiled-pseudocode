/*
 * XREFs of ViDeadlockUpdateChildrenCount @ 0x1407BD2FC
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1407BA944 (VfDeadlockAcquireResource.c)
 *     ViDeadlockMergeNodes @ 0x1407BC994 (ViDeadlockMergeNodes.c)
 *     ViDeadlockRemoveNode @ 0x1407BCCA8 (ViDeadlockRemoveNode.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ViDeadlockUpdateChildrenCount(__int64 *a1, int a2)
{
  int v2; // r8d
  PVOID result; // rax

  do
  {
    *((_DWORD *)a1 + 19) += a2;
    v2 = *((_DWORD *)a1 + 19);
    a1 = (__int64 *)*a1;
  }
  while ( a1 );
  result = ViDeadlockGlobals;
  if ( v2 > *((_DWORD *)ViDeadlockGlobals + 8282) )
    *((_DWORD *)ViDeadlockGlobals + 8282) = v2;
  return result;
}
