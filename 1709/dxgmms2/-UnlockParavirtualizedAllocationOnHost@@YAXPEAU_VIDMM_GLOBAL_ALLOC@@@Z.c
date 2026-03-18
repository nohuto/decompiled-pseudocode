/*
 * XREFs of ?UnlockParavirtualizedAllocationOnHost@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009DA50
 * Callers:
 *     ?EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z @ 0x1C006476C (-EndCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKPEAU_VIDMM_REGION@@@Z.c)
 *     ?Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0066970 (-Unlock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ @ 0x1C0072890 (--1_VIDMM_GLOBAL_ALLOC@@QEAA@XZ.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1@Z @ 0x1C00A2208 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1@Z.c)
 */

void __fastcall UnlockParavirtualizedAllocationOnHost(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  VIDMM_PROCESS *v2; // rcx

  if ( *((_QWORD *)a1 + 65) )
  {
    v2 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v2 )
      v2 = (VIDMM_PROCESS *)*((_QWORD *)v2 + 1);
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(v2, *((void **)a1 + 65), *((_QWORD *)a1 + 66), *((_QWORD *)a1 + 1));
    *((_QWORD *)a1 + 66) = 0LL;
    *((_QWORD *)a1 + 65) = 0LL;
  }
}
