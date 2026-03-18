/*
 * XREFs of ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0058BD0
 * Callers:
 *     ?ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3DDDI_RECLAIM_RESULT@@@Z @ 0x1C0061210 (-ReclaimOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@PEA_KPEAW4_D3D.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00632F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::CommitGlobalBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  NTSTATUS v3; // esi
  int v4; // edx
  int v6; // eax
  _DWORD *v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // ecx
  PVOID *v11; // rdi
  PVOID v12; // rcx
  PMDL PagesForMdl; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)a2 + 20);
  if ( (v4 & 0x1000) == 0 )
  {
    if ( (v4 & 0x10000) == 0 && (**((_DWORD **)a2 + 63) & 8) == 0 )
      goto LABEL_4;
    v8 = (_DWORD *)*((_QWORD *)a2 + 63);
    if ( (*v8 & 0x400000) != 0 )
    {
      v11 = (PVOID *)((char *)a2 + 360);
      ObfReferenceObject(*((PVOID *)a2 + 45));
    }
    else
    {
      v9 = *((_QWORD *)a2 + 1);
      v17 = v9;
      v10 = ~(*v8 << 28) & 0x40000000 | 0x8040000;
      if ( (v4 & 0x100) != 0 )
      {
        v10 |= 0x80000u;
        v17 = (v9 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      }
      v11 = (PVOID *)((char *)a2 + 360);
      v3 = MmCreateSection((char *)a2 + 360, 0LL, 0LL, &v17, 4, v10, 0LL, 0LL);
      if ( (**((_DWORD **)a2 + 63) & 0x20000000) != 0 )
      {
        v12 = *v11;
        if ( *v11 )
        {
          *((_BYTE *)a2 + 88) |= 1u;
          ObfReferenceObject(v12);
        }
      }
      if ( v3 < 0 )
        goto LABEL_22;
    }
    if ( (**((_DWORD **)a2 + 63) & 8) != 0 )
      v3 = MmMapViewInSystemSpace(*v11, (PVOID *)a2 + 46, (PSIZE_T)a2 + 1);
    if ( v3 >= 0 )
      goto LABEL_4;
LABEL_22:
    if ( *v11 )
    {
      ObfDereferenceObject(*v11);
      if ( (*((_BYTE *)a2 + 88) & 1) != 0 )
      {
        ObfDereferenceObject(*v11);
        *((_BYTE *)a2 + 88) &= ~1u;
      }
    }
    goto LABEL_5;
  }
  if ( *((_QWORD *)a2 + 64)
    || (PagesForMdl = MmAllocatePagesForMdlEx(
                        gs_PhysicalAddressZero,
                        (PHYSICAL_ADDRESS)-1LL,
                        gs_PhysicalAddressZero,
                        *((_QWORD *)a2 + 1),
                        (MEMORY_CACHING_TYPE)(2 - ((**((_DWORD **)a2 + 63) & 4) != 0)),
                        4u),
        (*((_QWORD *)a2 + 64) = PagesForMdl) != 0LL) )
  {
    *((_DWORD *)a2 + 23) |= 1u;
LABEL_4:
    v6 = *((_DWORD *)a2 + 19);
    *((_DWORD *)a2 + 23) |= 1u;
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(1552LL * (v6 & 0x3F) + *((_QWORD *)this + 5021) + 1520),
      *((_QWORD *)a2 + 1));
LABEL_5:
    *((_DWORD *)a2 + 21) ^= (*((_DWORD *)a2 + 21) ^ (*((_DWORD *)a2 + 20) >> 12)) & 8;
    return (unsigned int)v3;
  }
  v16 = WdLogNewEntry5_WdAssertion(v15, v14);
  *(_QWORD *)(v16 + 24) = 26828LL;
  WdLogEvent5_WdAssertion(v16);
  return 3221225495LL;
}
