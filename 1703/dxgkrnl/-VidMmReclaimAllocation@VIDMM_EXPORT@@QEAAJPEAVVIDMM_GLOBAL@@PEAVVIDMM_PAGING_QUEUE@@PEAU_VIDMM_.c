/*
 * XREFs of ?VidMmReclaimAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0013C34
 * Callers:
 *     ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C00C3140 (-ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000E010 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReclaimAllocation(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        struct _VIDMM_MULTI_ALLOC *a4,
        unsigned __int64 *a5,
        enum _D3DDDI_RECLAIM_RESULT *a6)
{
  struct _KTHREAD **Current; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v15, Current);
  v11 = (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_PAGING_QUEUE *, struct _VIDMM_MULTI_ALLOC *, unsigned __int64 *, enum _D3DDDI_RECLAIM_RESULT *))(*((_QWORD *)this + 1) + 672LL))(
          a2,
          a3,
          a4,
          a5,
          a6);
  v12 = v15;
  v13 = v11;
  if ( v15 )
  {
    *(_QWORD *)(v15 + 120) = 0LL;
    ExReleasePushLockExclusiveEx(v12 + 112, 0LL);
    KeLeaveCriticalRegion();
  }
  return v13;
}
