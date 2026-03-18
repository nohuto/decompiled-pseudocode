/*
 * XREFs of ?VidMmReportDmaPoolState@VIDMM_EXPORT@@QEAAXPEAVVIDMM_DMA_POOL@@@Z @ 0x1C0024538
 * Callers:
 *     ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C0187EC4 (-ReportState@DXGCONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmReportDmaPoolState(VIDMM_EXPORT *this, struct VIDMM_DMA_POOL *a2)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v6, Current);
  (*(void (__fastcall **)(struct VIDMM_DMA_POOL *))(*((_QWORD *)this + 1) + 456LL))(a2);
  if ( v6 )
  {
    v5 = v6 + 136;
    *(_QWORD *)(v6 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
