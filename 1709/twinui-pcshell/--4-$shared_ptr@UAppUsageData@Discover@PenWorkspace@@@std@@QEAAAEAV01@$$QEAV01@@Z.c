/*
 * XREFs of ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EB4B0
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800E8A08 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 *     ??$_Sort_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC8E0 (--$_Sort_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@.c)
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0AEAP6A_NAEAV10@1@Z@Z @ 0x1800EC9F4 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAE.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JV12@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@_J1$$QEAV10@AEAP6A_NAEAV10@3@Z@Z @ 0x1800ECBAC (--$_Pop_heap_hole_by_index@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@_JV12@P6A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  volatile signed __int32 *v5; // rbx

  v2 = a2[1];
  a2[1] = 0LL;
  v4 = *a2;
  *a2 = 0LL;
  v5 = (volatile signed __int32 *)a1[1];
  a1[1] = v2;
  *a1 = v4;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
