/*
 * XREFs of ViDeadlockRemoveResource @ 0x1407BCE14
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x140277E68 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockAddResource @ 0x1407BBBA0 (ViDeadlockAddResource.c)
 *     ViDeadlockEmptyDatabase @ 0x1407BC684 (ViDeadlockEmptyDatabase.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1402779AC (VfReportIssueWithOptions.c)
 *     VfUtilAddressRangeRemove @ 0x1407A6D38 (VfUtilAddressRangeRemove.c)
 *     ViDeadlockPreprocessOptions @ 0x1407BCBAC (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveNode @ 0x1407BCCA8 (ViDeadlockRemoveNode.c)
 */

_QWORD *__fastcall ViDeadlockRemoveResource(int *a1, int a2, int **a3)
{
  __int64 *v6; // rax
  int *v7; // rsi
  int *v8; // rbx
  _QWORD *v9; // r9
  __int64 v10; // rdx
  int **v11; // rcx
  unsigned __int64 v12; // r10
  _QWORD *result; // rax

  if ( *((_DWORD *)ViDeadlockGlobals + 8196) || *((_DWORD *)ViDeadlockGlobals + 8282) > ViDeadlockChildrenCountMaximum )
    a2 = 1;
  if ( !a2 )
  {
    v6 = (__int64 *)*((_QWORD *)a1 + 2);
    if ( v6 )
    {
      ViDeadlockPreprocessOptions(
        byte_140359ABC,
        "Deleted lock 0x%p is still owned by the thread 0x%p.",
        4107LL,
        *((_QWORD *)a1 + 1),
        *v6,
        (__int64)a1);
      VfReportIssueWithOptions(
        0xC4u,
        0x100BuLL,
        *((_QWORD *)a1 + 1),
        **((_QWORD **)a1 + 2),
        (__int64)a1,
        byte_140359ABC);
    }
  }
  v7 = (int *)*((_QWORD *)a1 + 3);
  while ( v7 != a1 + 6 )
  {
    v8 = v7 - 10;
    v7 = *(int **)v7;
    ViDeadlockRemoveNode(v8, a2);
    *(_QWORD *)v8 = *a3;
    *a3 = v8;
  }
  v9 = ViDeadlockGlobals;
  --*((_QWORD *)ViDeadlockGlobals + 3);
  v10 = *((_QWORD *)a1 + 5);
  if ( *(int **)(v10 + 8) != a1 + 10 || (v11 = (int **)*((_QWORD *)a1 + 6), *v11 != a1 + 10) )
    __fastfail(3u);
  *v11 = (int *)v10;
  *(_QWORD *)(v10 + 8) = v11;
  v12 = (*((_QWORD *)a1 + 1) >> 12) % 0x3FFuLL;
  if ( *(_QWORD *)(v9[2] + 16 * v12) != v9[2] + 16 * v12 )
    return (_QWORD *)VfUtilAddressRangeRemove(
                       &v9[2 * v12 + 4],
                       *((_QWORD *)a1 + 1),
                       (unsigned int)ViDeadlockResourceTypeSizeInfo[*a1]);
  result = &v9[2 * v12 + 4];
  *result = 0LL;
  result[1] = 0LL;
  return result;
}
