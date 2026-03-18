/*
 * XREFs of ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0076050
 * Callers:
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0075630 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0075730 (-Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00757D0 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C0075C64 (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ?ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C0075D28 (-ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C00761E8 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C00762B4 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00A13B8 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00A3188 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  void (*v4)(void *); // rdi
  VIDMM_LINEAR_POOL *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  LONGLONG v11; // rax
  __int64 result; // rax
  PMDL PagesForMdl; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  SIZE_T v24; // rax
  unsigned __int64 v25; // kr00_8
  PVOID v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax

  v4 = a2;
  if ( !this[29].QuadPart )
    this[29].QuadPart = this[6].QuadPart - this[9].QuadPart;
  if ( (this[10].LowPart & 0x1000) == 0 )
  {
    v6 = (VIDMM_LINEAR_POOL *)operator new[](0x140uLL, 0x37316956u, (POOL_TYPE)512);
    if ( v6 )
      v6 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v6);
    this[22].QuadPart = (LONGLONG)v6;
    if ( !v6 )
    {
      _InterlockedIncrement(&dword_1C003C570);
      v22 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v22 + 24) = 348LL;
      goto LABEL_22;
    }
    v8 = VIDMM_LINEAR_POOL::Init(v6, this[6].QuadPart, 1u, v4, (int (*)(void *))IsAllocationOffered);
    v10 = v8;
    if ( v8 < 0 )
    {
      _InterlockedIncrement(&dword_1C003C574);
      v23 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v23 + 24) = v10;
      WdLogEvent5_WdLowResource(v23);
      return (unsigned int)v10;
    }
  }
  if ( !this[10].HighPart
    || (LOBYTE(a2) = 6, result = VIDMM_SEGMENT::BlockMemoryRanges(this, a2, 12LL), (int)result >= 0) )
  {
    if ( !this[11].LowPart
      || (LOBYTE(a2) = 7, result = VIDMM_SEGMENT::BlockMemoryRanges(this, a2, 18LL), (int)result >= 0) )
    {
      v11 = a3 ? a3->QuadPart : *(_QWORD *)(*(_QWORD *)(this[1].QuadPart + 24) + 1608LL);
      this[18].QuadPart = v11;
      result = VIDMM_SEGMENT::InitializeForwardProgressMdl(this);
      LODWORD(v10) = result;
      if ( (int)result >= 0 )
      {
        PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, this[18], gs_PhysicalAddressZero, 0x1000uLL);
        this[37].QuadPart = (LONGLONG)PagesForMdl;
        if ( PagesForMdl )
        {
          v15 = (unsigned int)dword_1C003C15C;
          this[33].QuadPart = (unsigned int)dword_1C003C15C;
          if ( (_DWORD)v15 )
          {
            v25 = v15;
            v24 = 16 * v15;
            if ( !is_mul_ok(v25, 0x10uLL) )
              v24 = -1LL;
            v26 = operator new[](v24, 0x36336956u, (POOL_TYPE)512);
            this[34].QuadPart = (LONGLONG)v26;
            if ( v26 )
            {
              memset(v26, 0, 16LL * this[33].LowPart);
            }
            else
            {
              this[33].LowPart = 0;
              _InterlockedIncrement(&dword_1C003C640);
              v28 = WdLogNewEntry5_WdLowResource(v27);
              *(_QWORD *)(v28 + 24) = 805LL;
              WdLogEvent5_WdLowResource(v28);
            }
          }
          VIDMM_SEGMENT::ComputeBaseAddressAndSizeOfPageableRegion((VIDMM_SEGMENT *)this);
          v18 = WdLogNewEntry5_WdEvent(v17, v16);
          WdLogEvent5_WdEvent(v18);
          v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
          v21[3] = this[6].QuadPart;
          v21[4] = this[3].HighPart;
          v21[5] = this[3].LowPart;
          v21[6] = this[2].LowPart;
          WdLogEvent5_WdEvent(v21);
          if ( bTracingEnabled )
            VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
          return (unsigned int)v10;
        }
        _InterlockedIncrement(&dword_1C003C604);
        v22 = WdLogNewEntry5_WdLowResource(v14);
        *(_QWORD *)(v22 + 24) = 420LL;
LABEL_22:
        WdLogEvent5_WdLowResource(v22);
        return 3221225495LL;
      }
    }
  }
  return result;
}
