/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C004EFF8
 * Callers:
 *     ?VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C0001F30 (-VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 *     VidSchCreateSyncObject @ 0x1C004FEB0 (VidSchCreateSyncObject.c)
 * Callees:
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0001BD8 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B40 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C0020CA4 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        char a2,
        char a3,
        __int64 a4,
        bool a5)
{
  __int64 v9; // rdx
  __int64 v10; // rdx
  KSPIN_LOCK *v11; // rcx
  __int64 result; // rax
  _QWORD *v13; // rcx

  if ( DXGPROCESS::GetCurrent() && (v9 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v10 = *(_QWORD *)(v9 + 8);
  else
    v10 = 0LL;
  if ( !a3 && (!a2 && v10 || v10 && (*(_BYTE *)(*(_QWORD *)(v10 + 32) + 275LL) & 4) != 0) )
    v11 = *(KSPIN_LOCK **)(v10 + 40);
  else
    v11 = (KSPIN_LOCK *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
  if ( a2 || *((_BYTE *)v11 + 64) )
    result = VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot(v11, a1);
  else
    result = VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot((VIDMM_PROCESS_FENCE_STORAGE *)v11, a1);
  if ( (int)result >= 0 )
  {
    v13 = (_QWORD *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 4) = a4;
    if ( a5 )
      *v13 = a4;
    else
      *(_DWORD *)v13 = a4;
  }
  return result;
}
