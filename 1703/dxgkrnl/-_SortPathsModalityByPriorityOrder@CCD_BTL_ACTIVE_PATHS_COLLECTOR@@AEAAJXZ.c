/*
 * XREFs of ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00EF564
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00EFC44 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFD48 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     qsort_0 @ 0x1C0013FF6 (qsort_0.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder(
        CCD_BTL_ACTIVE_PATHS_COLLECTOR *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int16 v3; // ax

  v1 = *(_QWORD *)this;
  v2 = *(_QWORD *)(v1 + 64);
  if ( v2 )
    v3 = *(_WORD *)(v2 + 20);
  else
    v3 = 0;
  if ( v3 )
    qsort_0(
      (void *)(*(_QWORD *)(v1 + 64) + 48LL),
      *(unsigned __int16 *)(*(_QWORD *)(v1 + 64) + 20LL),
      0x108uLL,
      (int (__cdecl *)(const void *, const void *))CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrderQSortCallback);
  return 0LL;
}
