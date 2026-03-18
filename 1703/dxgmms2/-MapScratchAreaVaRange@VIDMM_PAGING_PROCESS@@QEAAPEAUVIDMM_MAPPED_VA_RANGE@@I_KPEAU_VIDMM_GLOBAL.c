/*
 * XREFs of ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005043C
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0053A90 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A544 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005A814 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

struct VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
        VIDMM_PAGING_PROCESS *this,
        unsigned int a2,
        __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_ALLOC *a9,
        unsigned __int64 a10)
{
  __int64 v10; // rbp
  int v13; // eax
  unsigned __int8 v14; // cl
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  CVirtualAddressAllocator *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  _QWORD *v28; // rax

  v10 = a2;
  v14 = 0;
  if ( a6 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 3712LL)
                               + 8LL
                               * (*(_DWORD *)(472LL * a2 + *(_QWORD *)(*((_QWORD *)this + 2) + 40168LL) + 20) + a6 - 1))
                   + 400LL) == 0x10000
      && !(_WORD)a3 )
    {
      v13 = *((_DWORD *)a4 + 8);
      if ( v13 )
      {
        if ( !(_WORD)v13 )
          v14 = 1;
      }
    }
  }
  *(_BYTE *)a9 = v14;
  v15 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v14 )
  {
    v16 = v15[5112];
    v17 = v15[5113];
  }
  else
  {
    v16 = v15[5110];
    v17 = v15[5111];
  }
  v18 = (CVirtualAddressAllocator *)*((_QWORD *)this + v10 + 4);
  v19 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v18,
          a4,
          a5,
          3LL,
          a3,
          0LL,
          v16,
          v17,
          *((_DWORD *)a4 + 8),
          1LL,
          a10,
          v10,
          0LL);
  v22 = v19;
  if ( v19 )
  {
    *(_DWORD *)(v19 + 64) |= 0x1000u;
    *(_QWORD *)(v19 + 40) = 0LL;
    if ( (int)CVirtualAddressAllocator::CommitVirtualAddressRange(
                v18,
                (struct VIDMM_MAPPED_VA_RANGE *)v19,
                v10,
                a6,
                a7,
                a8,
                0,
                &a9) < 0 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
      v28[3] = 270LL;
      v28[4] = 48LL;
      v28[5] = this;
      v28[6] = 0LL;
      v28[7] = 0LL;
      WdLogEvent5_WdCriticalError(v28);
    }
    return (struct VIDMM_MAPPED_VA_RANGE *)v22;
  }
  else
  {
    v27 = WdLogNewEntry5_WdEvent(v21, v20);
    WdLogEvent5_WdEvent(v27);
    return 0LL;
  }
}
