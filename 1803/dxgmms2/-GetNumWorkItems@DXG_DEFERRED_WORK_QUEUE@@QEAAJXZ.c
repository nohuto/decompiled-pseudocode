/*
 * XREFs of ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE@@QEAAJXZ @ 0x1C0022578
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00550FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00B3410 (-ProcessPendingMoves@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00B4F2C (-UpdateActiveVPRAfterMove@VIDMM_SEGMENT@@QEAAJXZ.c)
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
