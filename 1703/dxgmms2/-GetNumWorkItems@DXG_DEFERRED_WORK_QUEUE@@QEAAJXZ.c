/*
 * XREFs of ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C001E418
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A29D8 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00A40CC (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXG_DEFERRED_WORK_QUEUE::GetNumWorkItems(DXG_DEFERRED_WORK_QUEUE *this)
{
  unsigned int v2; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_QWORD *)this + 1) = KeGetCurrentThread();
  v2 = *((_DWORD *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  ExReleasePushLockExclusiveEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
