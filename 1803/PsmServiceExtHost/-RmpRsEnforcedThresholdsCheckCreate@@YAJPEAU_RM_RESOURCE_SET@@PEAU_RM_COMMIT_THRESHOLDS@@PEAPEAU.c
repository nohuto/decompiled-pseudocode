/*
 * XREFs of ?RmpRsEnforcedThresholdsCheckCreate@@YAJPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@PEAPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x180053564
 * Callers:
 *     ?RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z @ 0x180052C6C (-RmpResourceSetTransition@@YAJPEAU_RM_RESOURCE_SET@@0@Z.c)
 *     ?RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z @ 0x180052F08 (-RmpResourceSetTrySetPpleTarget@@YAJPEAU_RM_RESOURCE_SET@@_KK@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x1800533A4 (-RmpRsEnforcedThresholdsAreNecessary@@YAKPEAU_RM_RESOURCE_SET@@0PEAU_RM_COMMIT_THRESHOLDS@@@Z.c)
 */

__int64 __fastcall RmpRsEnforcedThresholdsCheckCreate(
        struct _RM_RESOURCE_SET *a1,
        struct _RM_COMMIT_THRESHOLDS *a2,
        struct _RM_RS_ENFORCEMENT_CONTEXT **a3)
{
  __int64 v5; // rbx
  int v6; // edi
  bool v7; // zf
  struct _RM_RS_ENFORCEMENT_CONTEXT *Heap; // rax
  struct _RM_RS_ENFORCEMENT_CONTEXT *v9; // rbx
  __int64 v10; // rcx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 6) + 1872LL);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 1432);
  if ( (unsigned int)RmpRsEnforcedThresholdsAreNecessary((struct _RM_RESOURCE_SET *)v5, a1, a2)
    && (!v5 ? (v7 = *((_QWORD *)a1 + 19) == 0LL) : (v7 = *(_QWORD *)(v5 + 152) == 0LL), v7) )
  {
    Heap = (struct _RM_RS_ENFORCEMENT_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x38uLL);
    v9 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0x38uLL);
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
        __fastfail(0xEu);
      *(_QWORD *)v9 = a1;
      v6 = TpAllocTimer((char *)v9 + 40, RmpRsEnforcedThresholdsTimerCallback, v9, 0LL);
      if ( v6 >= 0 )
      {
        *a3 = v9;
        v9 = 0LL;
        v6 = 0;
      }
      if ( v9 )
      {
        RmpObjectRelease(*(char **)v9);
        v10 = *((_QWORD *)v9 + 5);
        if ( v10 )
          TpReleaseTimer(v10);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    *a3 = 0LL;
    return 0;
  }
  return (unsigned int)v6;
}
