/*
 * XREFs of ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D1C4
 * Callers:
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004D5F0 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0057440 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005D814 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005DB1C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0077550 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C00022B0 (VidSchIsMonitoredFenceSignaled.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000F1F0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0054BF0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushScratchGpuVaRanges(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  char v5; // al
  struct _KTHREAD **v6; // rbp
  char v7; // r15
  _QWORD **v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rcx
  struct VIDMM_VAD *v13; // r14
  char v14; // di

  v3 = a2;
  v4 = 1552LL * a2;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5021) + v4 + 436) & 1) != 0 )
  {
    if ( *((_QWORD *)this + a2 + 143) )
    {
      if ( *((_DWORD *)this + 2) )
      {
        v5 = *((_BYTE *)this + 40872);
        if ( v5 >= 0 )
        {
          *((_BYTE *)this + 40872) = v5 | 0x80;
          v6 = (struct _KTHREAD **)*((_QWORD *)this + a2 + 5044);
          while ( 1 )
          {
            v7 = 0;
            while ( 1 )
            {
              v8 = (_QWORD **)(v4 + *((_QWORD *)this + 5021) + 456LL);
              v9 = *v8;
              if ( *v8 == v8 || !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v3 + 738), v9[2]) )
                break;
              v11 = *v9;
              if ( *(_QWORD **)(*v9 + 8LL) != v9 || (v12 = (_QWORD *)v9[1], (_QWORD *)*v12 != v9) )
                __fastfail(3u);
              *v12 = v11;
              *(_QWORD *)(v11 + 8) = v12;
              *v9 = 0LL;
              v9[1] = 0LL;
              if ( VIDMM_GLOBAL::_Config >= 0 )
              {
                v7 = 1;
                CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *((CVirtualAddressAllocator **)this + v3 + 5044),
                  (struct VIDMM_MAPPED_VA_RANGE *)(v9 - 3),
                  0LL,
                  1);
              }
              v13 = (struct VIDMM_VAD *)*(v9 - 3);
              v14 = 0;
              if ( v6[8] != KeGetCurrentThread() )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 7));
                v14 = 1;
              }
              CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v6, v13, v10);
              if ( v14 )
              {
                v6[8] = 0LL;
                ExReleasePushLockExclusiveEx(v6 + 7, 0LL);
                KeLeaveCriticalRegion();
              }
            }
            if ( !v7 )
              break;
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v3, 0, 0LL, 0LL, 0, 0);
          }
          *((_BYTE *)this + 40872) &= ~0x80u;
        }
      }
    }
  }
}
