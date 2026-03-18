/*
 * XREFs of ?AllocateFenceStorageSlot@VIDMM_GLOBAL@@SAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C006FB68
 * Callers:
 *     ?VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z @ 0x1C000E250 (-VidMmAllocateFenceStorageSlot@@YAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N1_K1@Z.c)
 *     VidSchCreateSyncObject @ 0x1C006F8F0 (VidSchCreateSyncObject.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000E2A4 (-AllocateSharedFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STOR.c)
 *     ?AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C000E370 (-AllocateFenceStorageSlot@VIDMM_PROCESS_FENCE_STORAGE@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@@.c)
 */

__int64 __fastcall VIDMM_GLOBAL::AllocateFenceStorageSlot(
        struct VIDMM_MONITORED_FENCE_STORAGE *a1,
        char a2,
        char a3,
        __int64 a4,
        bool a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  VIDMM_PROCESS_FENCE_STORAGE *v11; // rcx
  __int64 result; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx

  if ( DXGPROCESS::GetCurrent() && (v9 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v10 = *(_QWORD *)(v9 + 8);
  else
    v10 = 0LL;
  if ( a3 || a2 )
  {
    if ( v10 )
    {
      v14 = *(_QWORD *)(v10 + 32);
      if ( (*(_BYTE *)(v14 + 307) & 8) != 0 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v14 + 440) + 64LL);
        if ( v15 )
          v15 = *(_QWORD *)(v15 + 8);
        v11 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v15 + 40);
        *((_BYTE *)v11 + 64) = 1;
LABEL_17:
        if ( a2 )
          goto LABEL_18;
        goto LABEL_8;
      }
    }
LABEL_16:
    v11 = (VIDMM_PROCESS_FENCE_STORAGE *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage;
    goto LABEL_17;
  }
  if ( !v10 )
    goto LABEL_16;
  v11 = *(VIDMM_PROCESS_FENCE_STORAGE **)(v10 + 40);
LABEL_8:
  if ( !*((_BYTE *)v11 + 64) )
  {
    result = VIDMM_PROCESS_FENCE_STORAGE::AllocateFenceStorageSlot(v11, a1);
    goto LABEL_10;
  }
LABEL_18:
  result = VIDMM_PROCESS_FENCE_STORAGE::AllocateSharedFenceStorageSlot((KSPIN_LOCK *)v11, a1);
LABEL_10:
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
