/*
 * XREFs of ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0055C08
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C005E460 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005FF10 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00602A0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092834 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B40 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C0050370 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K@Z @ 0x1C0099E00 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::UncommitGlobalBackingStore(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3)
{
  char v3; // si
  __int64 v5; // rcx
  void *v6; // rcx
  VIDMM_PROCESS *v7; // rcx
  void *v8; // rdx

  v3 = a3;
  if ( (*((_DWORD *)a2 + 20) & 0x2000) != 0 )
  {
    if ( *((_QWORD *)a2 + 47) )
    {
      v7 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
      if ( v7 )
        v7 = (VIDMM_PROCESS *)*((_QWORD *)v7 + 1);
      v8 = (void *)*((_QWORD *)a2 + 48);
      if ( v8 )
      {
        VIDMM_PROCESS::UnmapHostAddressesFromGuest(v7, v8, *((_QWORD *)a2 + 49));
        *((_QWORD *)a2 + 49) = 0LL;
        *((_QWORD *)a2 + 48) = 0LL;
      }
      MmFreePagesFromMdl(*((PMDL *)a2 + 47));
      ExFreePoolWithTag(*((PVOID *)a2 + 47), 0);
      *((_QWORD *)a2 + 47) = 0LL;
    }
  }
  else
  {
    v5 = **((unsigned int **)a2 + 65);
    if ( (v5 & 0x30000008) == 0 )
      goto LABEL_3;
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v5);
    v5 = **((unsigned int **)a2 + 65);
    if ( (v5 & 0x4000000) != 0 && *((_DWORD *)a2 + 103) )
    {
LABEL_3:
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v5);
    }
    else
    {
      if ( (v5 & 8) != 0 )
        MmUnmapViewInSystemSpace(*((PVOID *)a2 + 46));
      if ( (*((_BYTE *)a2 + 88) & 1) != 0 )
        ObfDereferenceObject(*((PVOID *)a2 + 45));
      v6 = (void *)*((_QWORD *)a2 + 45);
      if ( v3 )
        VidMmDereferenceObjectAsync(v6, (__int64)a2, a3);
      else
        ObfDereferenceObject(v6);
      *((_QWORD *)a2 + 45) = 0LL;
    }
  }
  *((_DWORD *)a2 + 23) &= ~1u;
}
