/*
 * XREFs of ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0054DD0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0057440 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0059DE8 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C005BE50 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005D814 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005DB1C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009E118 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 *     ?UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009EB3C (-UpdateVirtualAddressForNewResourceLocation@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C00531B0 (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C005A5C0 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C005F61C (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 */

void __fastcall CVirtualAddressAllocator::FlushGpuVaTlb(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_GLOBAL *v4; // r10
  unsigned __int64 v5; // r11
  CVirtualAddressAllocator *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  UINT v12; // eax
  unsigned int v13; // eax
  __int64 v14; // r9
  void *KmdProcessHandle; // rax
  struct _D3DGPU_PHYSICAL_ADDRESS v16; // [rsp+40h] [rbp-18h] BYREF

  v4 = (VIDMM_GLOBAL *)*((_QWORD *)this + 10);
  v5 = a4;
  v7 = this;
  if ( (*((_BYTE *)v4 + 40872) & 8) == 0 && a3 <= v5 )
  {
    v8 = *((_QWORD *)this + 14);
    v9 = 32LL * a2;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + v8) + 8LL);
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 136) )
      {
        v11 = *((_QWORD *)v7 + 13) == 0LL;
        v12 = *(_DWORD *)(v9 + v8 + 24);
        v16.SegmentOffset = *(_QWORD *)(v10 + 144);
        v16.SegmentId = v12;
        if ( v11 )
        {
          v13 = VIDMM_GLOBAL::AdapterId(v4);
          KmdProcessHandle = VIDMM_PROCESS::GetKmdProcessHandle(*(VIDMM_PROCESS **)(v14 + 88), v13);
          *((_QWORD *)v7 + 13) = KmdProcessHandle;
        }
        VIDMM_GLOBAL::FlushGpuVaTlb(v4, a2, &v16, *((struct VIDMM_PROCESS **)v7 + 11), *((void **)v7 + 13), a3, v5);
      }
    }
  }
}
