/*
 * XREFs of ?VidMmFreeDeferredDmaBufferMapping@VIDMM_EXPORT@@QEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C0024450
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00C1280 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003944 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall VIDMM_EXPORT::VidMmFreeDeferredDmaBufferMapping(VIDMM_EXPORT *this, struct _VIDMM_DMA_BUFFER *a2)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v6, Current);
  (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*((_QWORD *)this + 1) + 616LL))(a2);
  if ( v6 )
  {
    v5 = v6 + 136;
    *(_QWORD *)(v6 + 144) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
