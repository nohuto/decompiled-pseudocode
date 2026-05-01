/*
 * XREFs of ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JV12@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@_J1$$QEAV10@AEAP6A_NAEAV10@3@Z@Z @ 0x1800ECBAC
 * Callers:
 *     ??$_Make_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC7E4 (--$_Make_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@.c)
 *     ??$_Sort_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC8E0 (--$_Sort_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@.c)
 * Callees:
 *     ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EB4B0 (--4-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Pop_heap_hole_by_index<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,__int64,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 (__fastcall **a5)(__int64, __int64))
{
  __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v8; // rdi
  __int64 *v9; // r12
  __int64 v12; // r14
  __int64 v13; // rdi

  v5 = a2;
  v6 = a3 - 1;
  v8 = a2;
  v9 = a4;
  v12 = (a3 - 1) / 2;
  if ( a2 < v12 )
  {
    do
    {
      v8 = 2 * v8 + 2;
      if ( (*a5)(a1 + 16 * v8, a1 + 16 * v8 - 16) )
        --v8;
      std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(
        (_QWORD *)(a1 + 16 * v5),
        (__int64 *)(a1 + 16 * v8));
      v5 = v8;
    }
    while ( v8 < v12 );
    v9 = a4;
  }
  if ( v8 == v12 && (a3 & 1) == 0 )
  {
    std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(
      (_QWORD *)(a1 + 16 * v5),
      (__int64 *)(16 * a3 + a1 - 16));
    v5 = v6;
  }
  if ( a2 < v5 )
  {
    do
    {
      v13 = (v5 - 1) / 2;
      if ( !(*a5)(a1 + 16 * v13, (__int64)v9) )
        break;
      std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(
        (_QWORD *)(a1 + 16 * v5),
        (__int64 *)(a1 + 16 * v13));
      v5 = (v5 - 1) / 2;
    }
    while ( a2 < v13 );
  }
  return std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=((_QWORD *)(a1 + 16 * v5), v9);
}
