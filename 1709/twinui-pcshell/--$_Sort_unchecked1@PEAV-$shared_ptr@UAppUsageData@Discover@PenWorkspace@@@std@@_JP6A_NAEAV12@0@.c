/*
 * XREFs of ??$_Sort_unchecked1@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JAEAP6A_NAEAV10@2@Z@Z @ 0x1800EC384
 * Callers:
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1800E8014 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 *     ??$_Sort_unchecked1@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JAEAP6A_NAEAV10@2@Z@Z @ 0x1800EC384 (--$_Sort_unchecked1@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@.c)
 * Callees:
 *     ??$_Sort_unchecked1@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JAEAP6A_NAEAV10@2@Z@Z @ 0x1800EC384 (--$_Sort_unchecked1@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JP6A_NAEAV12@0@.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAV12@@0@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV20@1@Z@Z @ 0x1800EC4EC (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@s.c)
 *     ??$_Make_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC7E4 (--$_Make_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@.c)
 *     ??$_Sort_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC8E0 (--$_Sort_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@.c)
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC9F4 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAE.c)
 */

__int64 __fastcall std::_Sort_unchecked1<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,__int64,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  result = (a2 - a1) >> 4;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_9;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      &v9,
      v8,
      v7,
      a4);
    a3 = a3 / 2 / 2 + a3 / 2;
    if ( (__int64)((v9 - v8) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((v7 - v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      std::_Sort_unchecked1<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,__int64,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        v10,
        v7,
        a3,
        a4,
        v9);
      v7 = v9;
    }
    else
    {
      std::_Sort_unchecked1<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,__int64,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        v8,
        v9,
        a3,
        a4,
        v9);
      v8 = v10;
    }
    result = (v7 - v8) >> 4;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_9:
    if ( result >= 2 )
      return std::_Insertion_sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
               v8,
               v7,
               a4);
  }
  else
  {
    std::_Make_heap_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      v8,
      v7,
      a4);
    return std::_Sort_heap_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
             v8,
             v7,
             a4);
  }
  return result;
}
