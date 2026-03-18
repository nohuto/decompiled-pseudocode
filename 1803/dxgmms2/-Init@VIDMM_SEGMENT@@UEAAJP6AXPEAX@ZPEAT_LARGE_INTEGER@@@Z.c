/*
 * XREFs of ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007F130
 * Callers:
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007ED60 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007F2E0 (-Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00B08E0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C007EE14 (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C007F2BC (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C007F378 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C007F444 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00B1C44 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  SIZE_T v23; // rax
  unsigned __int64 v24; // kr00_8
  PVOID v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax

  v4 = a2;
  if ( !this[26].QuadPart )
    this[26].QuadPart = this[6].QuadPart - this[9].QuadPart;
  if ( (this[10].LowPart & 0x1000) == 0 )
  {
    v6 = (VIDMM_LINEAR_POOL *)operator new[](0x140uLL, 0x37316956u, (POOL_TYPE)512);
    if ( v6 )
      v6 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v6);
    this[19].QuadPart = (LONGLONG)v6;
    if ( !v6 )
    {
      _InterlockedIncrement(&dword_1C0047580);
      v21 = WdLogNewEntry5_WdLowResource(v7);
      *(_QWORD *)(v21 + 24) = 353LL;
      goto LABEL_22;
    }
    v8 = VIDMM_LINEAR_POOL::Init(v6, this[6].QuadPart, 1u, v4, (int (*)(void *))IsAllocationOffered);
    v10 = v8;
    if ( v8 < 0 )
    {
      _InterlockedIncrement(&dword_1C0047584);
      v22 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v22 + 24) = v10;
      WdLogEvent5_WdLowResource(v22);
      return (unsigned int)v10;
    }
  }
  if ( !this[10].HighPart
    || (LOBYTE(a2) = 6, result = VIDMM_SEGMENT::BlockMemoryRanges(this, a2, 12LL), (int)result >= 0) )
  {
    if ( !this[11].LowPart
      || (LOBYTE(a2) = 7, result = VIDMM_SEGMENT::BlockMemoryRanges(this, a2, 18LL), (int)result >= 0) )
    {
      v11 = a3 ? a3->QuadPart : *(_QWORD *)(*(_QWORD *)(this[1].QuadPart + 24) + 1768LL);
      this[15].QuadPart = v11;
      result = VIDMM_SEGMENT::InitializeForwardProgressMdl(this);
      LODWORD(v10) = result;
      if ( (int)result >= 0 )
      {
        PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, this[15], gs_PhysicalAddressZero, 0x1000uLL);
        this[34].QuadPart = (LONGLONG)PagesForMdl;
        if ( PagesForMdl )
        {
          v16 = (unsigned int)dword_1C0047194;
          this[30].QuadPart = (unsigned int)dword_1C0047194;
          if ( (_DWORD)v16 )
          {
            v24 = v16;
            v23 = 16 * v16;
            if ( !is_mul_ok(v24, 0x10uLL) )
              v23 = -1LL;
            v25 = operator new[](v23, 0x36336956u, (POOL_TYPE)512);
            this[31].QuadPart = (LONGLONG)v25;
            if ( v25 )
            {
              memset(v25, 0, 16LL * this[30].LowPart);
            }
            else
            {
              this[30].LowPart = 0;
              _InterlockedIncrement(&dword_1C0047650);
              v27 = WdLogNewEntry5_WdLowResource(v26);
              *(_QWORD *)(v27 + 24) = 815LL;
              WdLogEvent5_WdLowResource(v27);
            }
          }
          v17 = WdLogNewEntry5_WdEvent(v15, v14);
          WdLogEvent5_WdEvent(v17);
          v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18);
          v20[3] = this[6].QuadPart;
          v20[4] = this[3].HighPart;
          v20[5] = this[3].LowPart;
          v20[6] = this[2].LowPart;
          WdLogEvent5_WdEvent(v20);
          if ( bTracingEnabled )
            VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
          return (unsigned int)v10;
        }
        _InterlockedIncrement(&dword_1C0047614);
        v21 = WdLogNewEntry5_WdLowResource(v15);
        *(_QWORD *)(v21 + 24) = 425LL;
LABEL_22:
        WdLogEvent5_WdLowResource(v21);
        return 3221225495LL;
      }
    }
  }
  return result;
}
