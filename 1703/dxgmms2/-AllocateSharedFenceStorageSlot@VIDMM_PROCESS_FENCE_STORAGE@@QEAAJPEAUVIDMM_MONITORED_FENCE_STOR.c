/*
 * XREFs of ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0020CA4
 * Callers:
 *     ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C004EFF8 (-AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 * Callees:
 *     ?AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0001EA8 (-AssignFenceStorageSlot@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 *     ??_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z @ 0x1C0001EFC (--_GVIDMM_FENCE_STORAGE_PAGE@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ @ 0x1C004F844 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJXZ.c)
 *     ??0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z @ 0x1C004F938 (--0VIDMM_FENCE_STORAGE_PAGE@@QEAA@AEAVVIDMM_PROCESS_FENCE_STORAGE@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(
        KSPIN_LOCK *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2)
{
  VIDMM_FENCE_STORAGE_PAGE *v4; // rax
  VIDMM_FENCE_STORAGE_PAGE *v5; // rbx
  int v7; // edi
  VIDMM_FENCE_STORAGE_PAGE **v8; // rax
  KSPIN_LOCK v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = (VIDMM_FENCE_STORAGE_PAGE *)operator new[](0x80uLL, 0x34346956u, (POOL_TYPE)512);
  if ( v4 )
    v5 = VIDMM_FENCE_STORAGE_PAGE::VIDMM_FENCE_STORAGE_PAGE(v4, (struct VIDMM_PROCESS_FENCE_STORAGE *)this);
  else
    v5 = 0LL;
  if ( !v5 )
    return 3221225495LL;
  v7 = VIDMM_FENCE_STORAGE_PAGE::Init(v5);
  if ( v7 >= 0 )
  {
    VIDMM_FENCE_STORAGE_PAGE::AssignFenceStorageSlot(v5, a2);
    KeAcquireInStackQueuedSpinLock(this + 7, &LockHandle);
    v8 = (VIDMM_FENCE_STORAGE_PAGE **)(this + 5);
    v9 = this[5];
    if ( *(KSPIN_LOCK **)(v9 + 8) != this + 5 )
      __fastfail(3u);
    *(_QWORD *)v5 = v9;
    *((_QWORD *)v5 + 1) = v8;
    *(_QWORD *)(v9 + 8) = v5;
    *v8 = v5;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    VIDMM_FENCE_STORAGE_PAGE::`scalar deleting destructor'(v5);
    return (unsigned int)v7;
  }
}
