/*
 * XREFs of ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093300
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C005E460 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0093274 (-ForceDecommitOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1C005CFE0 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E40C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z @ 0x1C0062DF0 (-WaitForFences@VIDMM_GLOBAL@@QEAAXPEAPEAU_VIDSCH_SYNC_OBJECT@@PEB_KI1@Z.c)
 *     ?FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z @ 0x1C0093190 (-FlushPendingAllocationAccess@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_ALLOC@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ForceDiscardOffer(VIDMM_GLOBAL *this, struct VIDMM_ALLOC *a2)
{
  __int64 *v2; // rax
  unsigned __int64 v3; // r15
  int v4; // r14d
  __int64 v7; // rbx
  struct _VIDSCH_SYNC_OBJECT **v8; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  _QWORD v12[10]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp+38h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v14; // [rsp+C0h] [rbp+40h] BYREF

  v2 = *(__int64 **)a2;
  v3 = 0LL;
  v4 = 0;
  v13 = 0LL;
  v7 = *v2;
  v8 = (struct _VIDSCH_SYNC_OBJECT **)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) + 160LL * (*(_DWORD *)(*v2 + 76) & 0x3F));
  if ( *(int *)(*((_QWORD *)a2 + 12) + 8LL) > 0 )
    VIDMM_GLOBAL::FlushPendingAllocationAccess(this, (DXGFASTMUTEX **)v7, 0LL, 0);
  if ( *(_QWORD *)(v7 + 136) )
  {
    memset(v12, 0, sizeof(v12));
    v12[1] = *((_QWORD *)a2 + 1);
    LODWORD(v12[0]) = 211;
    v12[4] = v7;
    v9 = VIDMM_GLOBAL::QueueDeferredCommand(
           this,
           (struct VIDMM_PAGING_QUEUE *)v8,
           (struct _VIDMM_DEFERRED_COMMAND *)v12,
           0,
           &v13);
    v3 = v13;
    v4 = v9;
  }
  else
  {
    DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v7 + 320));
    VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)v7);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v7 + 320), v10, v11);
  }
  if ( v4 == 259 )
  {
    v14 = v8[11];
    v13 = v3;
    VIDMM_GLOBAL::WaitForFences(this, &v14, &v13, 1u, 0LL);
  }
}
