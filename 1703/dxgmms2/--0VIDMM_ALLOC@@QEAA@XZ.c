/*
 * XREFs of ??0VIDMM_ALLOC@@QEAA@XZ @ 0x1C001E5A4
 * Callers:
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C005F450 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

VIDMM_ALLOC *__fastcall VIDMM_ALLOC::VIDMM_ALLOC(VIDMM_ALLOC *this)
{
  memset(this, 0, 0xE8uLL);
  KeInitializeEvent((PRKEVENT)this + 3, NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)this + 7, SynchronizationEvent, 0);
  return this;
}
