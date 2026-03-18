/*
 * XREFs of ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_PROCESS_ADAPTER_INFO@@@Z @ 0x1C009CBE0
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00622B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009CBB0 (-RemoveAllocationFromDecommitList@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RemoveAllocationFromDecommitList(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct VIDMM_PROCESS_ADAPTER_INFO *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  _QWORD *i; // r8
  struct _VIDMM_GLOBAL_ALLOC *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  v4 = *(_QWORD *)(*((_QWORD *)a3 + 5) + 32LL);
  KeEnterCriticalRegion();
  v5 = v4 + 344;
  ExAcquirePushLockSharedEx(v4 + 344, 0LL);
  v6 = (_QWORD *)(v4 + 360);
  for ( i = (_QWORD *)*v6; i != v6; i = (_QWORD *)*i )
  {
    v8 = (struct _VIDMM_GLOBAL_ALLOC *)i[2];
    if ( v8 == (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416) )
      i[2] = *(_QWORD *)v8;
  }
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  v9 = (_QWORD *)((char *)a2 + 416);
  v10 = *((_QWORD *)a2 + 52);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v10 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 416)
    || (v11 = (_QWORD *)*((_QWORD *)a2 + 53), (_QWORD *)*v11 != v9) )
  {
    __fastfail(3u);
  }
  *v11 = v10;
  *(_QWORD *)(v10 + 8) = v11;
  *v9 = 0LL;
}
