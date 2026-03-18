/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0055FAC
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C005E460 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00602A0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B40 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006D1A0 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@IPEAPEAXPEA_K@Z @ 0x1C0099AF8 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@IPEAPEAXPEA_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  NTSTATUS v3; // ebx
  int v4; // edx
  int v5; // ecx
  VIDMM_GLOBAL *v6; // rax
  int v7; // ecx
  PVOID *v8; // rdi
  PVOID v9; // rcx
  PMDL PagesForMdl; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  VIDMM_PROCESS *v16; // rbp
  struct _MDL *FullMDL; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  VIDMM_GLOBAL *v21; // [rsp+50h] [rbp+8h] BYREF

  v21 = this;
  v3 = 0;
  v4 = *((_DWORD *)a2 + 20);
  v5 = **((_DWORD **)a2 + 65);
  if ( (v4 & 0x2000) == 0 )
  {
    if ( (v5 & 0x20000008) == 0 )
    {
LABEL_13:
      *((_DWORD *)a2 + 23) |= 1u;
LABEL_14:
      *((_DWORD *)a2 + 21) = *((_DWORD *)a2 + 21) & 0xFFFFFFF7 | ((**((_DWORD **)a2 + 65) & 0x4000003A) == 0 ? 8 : 0);
      return (unsigned int)v3;
    }
    if ( (v5 & 0x400000) != 0 )
    {
      v8 = (PVOID *)((char *)a2 + 360);
      ObfReferenceObject(*((PVOID *)a2 + 45));
    }
    else
    {
      v6 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 1);
      v21 = v6;
      v7 = ~(v5 << 28) & 0x40000000 | 0x8000000;
      if ( (v4 & 0x100) != 0 )
      {
        v7 |= 0x80000u;
        v21 = (VIDMM_GLOBAL *)(((unsigned __int64)v6 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
      }
      v8 = (PVOID *)((char *)a2 + 360);
      v3 = MmCreateSection((char *)a2 + 360, 0LL, 0LL, &v21, 4, v7, 0LL, 0LL);
      if ( (**((_DWORD **)a2 + 65) & 0x20000000) != 0 )
      {
        v9 = *v8;
        if ( *v8 )
        {
          *((_BYTE *)a2 + 88) |= 1u;
          ObfReferenceObject(v9);
        }
      }
      if ( v3 < 0 )
        goto LABEL_24;
    }
    if ( (**((_DWORD **)a2 + 65) & 8) != 0 )
      v3 = MmMapViewInSystemSpace(*v8, (PVOID *)a2 + 46, (PSIZE_T)a2 + 1);
    if ( v3 >= 0 )
      goto LABEL_13;
LABEL_24:
    if ( *v8 )
    {
      ObfDereferenceObject(*v8);
      if ( (*((_BYTE *)a2 + 88) & 1) != 0 )
      {
        ObfDereferenceObject(*v8);
        *((_BYTE *)a2 + 88) &= ~1u;
      }
    }
    goto LABEL_14;
  }
  PagesForMdl = MmAllocatePagesForMdlEx(
                  gs_PhysicalAddressZero,
                  (PHYSICAL_ADDRESS)-1LL,
                  gs_PhysicalAddressZero,
                  *((_QWORD *)a2 + 1),
                  (MEMORY_CACHING_TYPE)(2 - ((v5 & 4) != 0)),
                  4u);
  *((_QWORD *)a2 + 47) = PagesForMdl;
  if ( PagesForMdl )
  {
    *((_DWORD *)a2 + 23) |= 1u;
    v15 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v15 )
      v16 = *(VIDMM_PROCESS **)(v15 + 8);
    else
      v16 = 0LL;
    FullMDL = VidMmGetFullMDL(a2, 0LL);
    v3 = VIDMM_PROCESS::MapHostAddressesToGuest(
           v16,
           FullMDL,
           *((_DWORD *)a2 + 2),
           (void **)a2 + 48,
           (unsigned __int64 *)a2 + 49);
    if ( v3 < 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v20 + 24) = 25741LL;
      WdLogEvent5_WdAssertion(v20);
      return (unsigned int)v3;
    }
    goto LABEL_13;
  }
  v14 = WdLogNewEntry5_WdAssertion(v13, v12);
  *(_QWORD *)(v14 + 24) = 25728LL;
  WdLogEvent5_WdAssertion(v14);
  return 3221225495LL;
}
