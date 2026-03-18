/*
 * XREFs of UnmapGpadl @ 0x1C00231F8
 * Callers:
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C005E324 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0072694 (-LockAllocationBackingStore@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 UnmapGpadl()
{
  return ((__int64 (*)(void))DxgCoreInterface[71])();
}
