/*
 * XREFs of ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00799F8
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00550FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C0079844 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0079B70 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00B1354 (-TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemory(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6,
        bool *a7)
{
  __int64 v11; // rdi
  int TemporaryResourcesForAllocation; // eax
  __int64 v14; // r8
  VIDMM_GLOBAL *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rax

  LODWORD(v11) = -1073741823;
  if ( *((_DWORD *)a2 + 16) )
  {
    TemporaryResourcesForAllocation = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(this[1], a2);
    v11 = TemporaryResourcesForAllocation;
    if ( TemporaryResourcesForAllocation < 0 )
    {
      v14 = 1560LL * *((unsigned int *)this + 95);
      v15 = this[1];
      v16 = *((_QWORD *)v15 + 5090);
      if ( (*(_BYTE *)(v14 + v16 + 436) & 4) != 0 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v16, v14);
        v17[7] = 0LL;
        v17[3] = 270LL;
        v17[4] = 9LL;
        v17[5] = a2;
        v17[6] = v11;
        WdLogEvent5_WdCriticalError(v17);
      }
    }
    else
    {
      LODWORD(v11) = VIDMM_MEMORY_SEGMENT::TransferMemoryFast((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, a5, a6);
      if ( (int)v11 < 0 )
      {
        VIDMM_MEMORY_SEGMENT::TransferMemorySlow((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, a5);
        LODWORD(v11) = 0;
        *a6 = 1;
        if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
          *a7 = 1;
      }
    }
  }
  return (unsigned int)v11;
}
