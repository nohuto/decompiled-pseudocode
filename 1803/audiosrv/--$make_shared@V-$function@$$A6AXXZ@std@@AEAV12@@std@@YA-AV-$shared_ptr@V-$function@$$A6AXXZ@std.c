/*
 * XREFs of ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18002AB78
 * Callers:
 *     ?Initialize@_RecurringTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18002AACC (-Initialize@_RecurringTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x180097A24 (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800F33FC (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??$?0AEAV?$function@$$A6AXXZ@std@@@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@QEAA@AEAV?$function@$$A6AXXZ@1@@Z @ 0x18001C7C8 (--$-0AEAV-$function@$$A6AXXZ@std@@@-$_Ref_count_obj@V-$function@$$A6AXXZ@std@@@std@@QEAA@AEAV-$f.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<std::function<void (void)>,std::function<void (void)> &>(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  LPVOID v5; // rax
  __int64 v6; // rcx

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
  v6 = 0LL;
  if ( v5 )
    v6 = std::_Ref_count_obj<std::function<void (void)>>::_Ref_count_obj<std::function<void (void)>>((__int64)v5, a2);
  *a1 = v6 + 16;
  a1[1] = v6;
  return a1;
}
