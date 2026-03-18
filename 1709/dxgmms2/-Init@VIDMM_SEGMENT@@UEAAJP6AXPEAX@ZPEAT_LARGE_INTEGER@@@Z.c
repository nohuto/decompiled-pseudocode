/*
 * XREFs of ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007C210
 * Callers:
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007BDB0 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007C5B0 (-Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C007CDE0 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C007BE64 (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C007C420 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C007C440 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C007C50C (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00A9B18 (-BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  void (*v4)(void *); // rdi
  VIDMM_LINEAR_POOL *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  LONGLONG v12; // rax
  __int64 result; // rax
  PMDL PagesForMdl; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  SIZE_T v24; // rax
  unsigned __int64 v25; // kr00_8
  PVOID v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax

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
      _InterlockedIncrement(&dword_1C0040580);
      v22 = WdLogNewEntry5_WdLowResource(v8, v7);
      *(_QWORD *)(v22 + 24) = 353LL;
      goto LABEL_22;
    }
    v9 = VIDMM_LINEAR_POOL::Init(v6, this[6].QuadPart, 1u, v4, (int (*)(void *))IsAllocationOffered);
    v11 = v9;
    if ( v9 < 0 )
    {
      _InterlockedIncrement(&dword_1C0040584);
      v23 = WdLogNewEntry5_WdLowResource(v10, a2);
      *(_QWORD *)(v23 + 24) = v11;
      WdLogEvent5_WdLowResource(v23);
      return (unsigned int)v11;
    }
  }
  if ( !this[10].HighPart
    || (LOBYTE(a2) = 6, result = VIDMM_SEGMENT::BlockMemoryRanges(this, a2, 12LL), (int)result >= 0) )
  {
    if ( !this[11].LowPart
      || (LOBYTE(a2) = 7, result = VIDMM_SEGMENT::BlockMemoryRanges(this, a2, 18LL), (int)result >= 0) )
    {
      v12 = a3 ? a3->QuadPart : *(_QWORD *)(*(_QWORD *)(this[1].QuadPart + 24) + 1632LL);
      this[15].QuadPart = v12;
      result = VIDMM_SEGMENT::InitializeForwardProgressMdl(this);
      LODWORD(v11) = result;
      if ( (int)result >= 0 )
      {
        PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, this[15], gs_PhysicalAddressZero, 0x1000uLL);
        this[34].QuadPart = (LONGLONG)PagesForMdl;
        if ( PagesForMdl )
        {
          v17 = (unsigned int)dword_1C0040194;
          this[30].QuadPart = (unsigned int)dword_1C0040194;
          if ( (_DWORD)v17 )
          {
            v25 = v17;
            v24 = 16 * v17;
            if ( !is_mul_ok(v25, 0x10uLL) )
              v24 = -1LL;
            v26 = operator new[](v24, 0x36336956u, (POOL_TYPE)512);
            this[31].QuadPart = (LONGLONG)v26;
            if ( v26 )
            {
              memset(v26, 0, 16LL * this[30].LowPart);
            }
            else
            {
              this[30].LowPart = 0;
              _InterlockedIncrement(&dword_1C0040650);
              v29 = WdLogNewEntry5_WdLowResource(v28, v27);
              *(_QWORD *)(v29 + 24) = 815LL;
              WdLogEvent5_WdLowResource(v29);
            }
          }
          v18 = WdLogNewEntry5_WdEvent(v16, v15);
          WdLogEvent5_WdEvent(v18);
          v21 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19);
          v21[3] = this[6].QuadPart;
          v21[4] = this[3].HighPart;
          v21[5] = this[3].LowPart;
          v21[6] = this[2].LowPart;
          WdLogEvent5_WdEvent(v21);
          if ( bTracingEnabled )
            VIDMM_SEGMENT::ReportSegment((VIDMM_SEGMENT *)this);
          return (unsigned int)v11;
        }
        _InterlockedIncrement(&dword_1C0040614);
        v22 = WdLogNewEntry5_WdLowResource(v16, v15);
        *(_QWORD *)(v22 + 24) = 425LL;
LABEL_22:
        WdLogEvent5_WdLowResource(v22);
        return 3221225495LL;
      }
    }
  }
  return result;
}
