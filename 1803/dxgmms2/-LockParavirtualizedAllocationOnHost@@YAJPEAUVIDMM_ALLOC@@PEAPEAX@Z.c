/*
 * XREFs of ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00A1598
 * Callers:
 *     ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C005E500 (-LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z.c)
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSVIDMMLOCK@@PEAPEAX@Z @ 0x1C00688C8 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAVDXGPROCESSV.c)
 * Callees:
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056034 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00A8AB0 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall LockParavirtualizedAllocationOnHost(__int64 **a1, void **a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  VIDMM_PROCESS *v7; // rbp
  struct _MDL *FullMDL; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rax

  v3 = **a1;
  v4 = *(_QWORD *)(v3 + 136);
  if ( !v4 || (*(_DWORD *)(v4 + 80) & 0x1001) != 0 )
  {
    if ( *(_QWORD *)(v3 + 520)
      || ((v7 = (VIDMM_PROCESS *)a1[1][1], (FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)**a1, 0LL)) == 0LL)
        ? (v11 = -1073741823)
        : (v11 = VIDMM_PROCESS::MapHostAddressesToGuest(
                   v7,
                   FullMDL,
                   *(_QWORD *)(v3 + 8),
                   (void **)(v3 + 520),
                   (unsigned __int64 *)(v3 + 528))),
          v11 >= 0) )
    {
      *a2 = *(void **)(v3 + 528);
      return 0LL;
    }
    else
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v12 + 24) = v11;
      WdLogEvent5_WdAssertion(v12);
      return (unsigned int)v11;
    }
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v5 + 24) = v3;
    WdLogEvent5_WdAssertion(v5);
    return 3221225473LL;
  }
}
