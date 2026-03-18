/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C006C280
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C00655F0 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0067090 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067620 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009F5BC (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0055E88 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3)
{
  int v3; // eax
  char v4; // di
  VIDMM_GLOBAL *v6; // rsi
  void *v7; // rcx

  v3 = *((_DWORD *)a2 + 20);
  v4 = a3;
  v6 = this;
  if ( (v3 & 0x1000) == 0 )
  {
    if ( (v3 & 0x20000) == 0 && (**((_DWORD **)a2 + 63) & 0x10000008) == 0 )
      goto LABEL_4;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(**((unsigned int **)a2 + 63));
    this = (VIDMM_GLOBAL *)**((unsigned int **)a2 + 63);
    if ( ((unsigned int)this & 0x4000000) == 0 || !*((_DWORD *)a2 + 95) )
    {
      if ( ((unsigned __int8)this & 8) != 0 )
        MmUnmapViewInSystemSpace(*((PVOID *)a2 + 46));
      if ( (*((_BYTE *)a2 + 88) & 1) != 0 )
        ObfDereferenceObject(*((PVOID *)a2 + 45));
      v7 = (void *)*((_QWORD *)a2 + 45);
      if ( v4 )
        VidMmDereferenceObjectAsync(v7, (__int64)a2, a3);
      else
        ObfDereferenceObject(v7);
      *((_QWORD *)a2 + 45) = 0LL;
    }
    else
    {
LABEL_4:
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
    }
  }
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(1560LL * (*((_DWORD *)a2 + 19) & 0x3F) + *((_QWORD *)v6 + 5090) + 1528),
    -*((_QWORD *)a2 + 1));
  *((_DWORD *)a2 + 23) &= ~1u;
}
