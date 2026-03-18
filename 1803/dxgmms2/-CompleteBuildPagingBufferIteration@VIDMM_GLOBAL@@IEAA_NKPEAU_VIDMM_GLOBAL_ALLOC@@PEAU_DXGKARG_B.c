/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88
 * Callers:
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C005EDF8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00619A0 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0061B30 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0061D04 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0061E6C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0061F10 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C006221C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00627D8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C009EDF0 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C00A1984 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C00A4134 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00A467C (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C006BB20 (-RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFF.c)
 */

bool __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        void *a7)
{
  unsigned __int64 v7; // r14
  unsigned int v8; // ebx
  int v9; // r15d
  __int64 v13; // rsi
  int v14; // r12d
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v20; // ebx
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rbx
  _QWORD *v27; // rax
  unsigned int v28; // [rsp+78h] [rbp+10h]

  v28 = a2;
  v7 = -1LL;
  v8 = a2;
  v9 = 0;
  if ( !a3 || (**((_DWORD **)a3 + 63) & 0x10000000) == 0 )
  {
    v13 = (unsigned int)a2;
    v14 = LODWORD(a4->pDmaBufferPrivateData) - *((_DWORD *)this + 2 * (unsigned int)a2 + 798);
    v9 = LODWORD(a4->pDmaBuffer) - *((_DWORD *)this + 2 * (unsigned int)a2 + 670);
    if ( LODWORD(a4->pDmaBuffer) != *((_DWORD *)this + 2 * (unsigned int)a2 + 670) || v14 )
    {
      if ( !*((_DWORD *)this + (unsigned int)a2 + 1171) )
      {
        *((_DWORD *)this + (unsigned int)a2 + 1171) = 1;
        ++*((_QWORD *)this + (unsigned int)a2 + 618);
      }
      v7 = *((_QWORD *)this + (unsigned int)a2 + 618);
      if ( a3 )
      {
        if ( *((_QWORD *)a3 + 22) > v7 )
        {
          v20 = *((_DWORD *)a3 + 19) & 0x3F;
          v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
          v21[6] = v20;
          v21[3] = 270LL;
          v21[4] = 31LL;
          v21[5] = a3;
          v21[7] = v7;
          WdLogEvent5_WdCriticalError(v21);
        }
        *((_QWORD *)a3 + 22) = v7;
        if ( *((_DWORD *)this + 2) == 206 )
        {
          if ( *((_QWORD *)a3 + 21) > v7 )
          {
            v22 = *((_DWORD *)a3 + 19) & 0x3F;
            v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
            v23[6] = v22;
            v23[3] = 270LL;
            v23[4] = 31LL;
            v23[5] = a3;
            v23[7] = v7;
            WdLogEvent5_WdCriticalError(v23);
          }
          *((_QWORD *)a3 + 21) = v7;
        }
      }
      v15 = *((_BYTE *)this + 41449);
      v8 = v28;
      if ( (v15 & 2) != 0 )
        *((_BYTE *)this + 41449) = v15 & 0xFD;
    }
    *((_DWORD *)this + v13 + 414) += v9;
    if ( *((_DWORD *)this + v13 + 414) > *((_DWORD *)this + v13 + 29) )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
      v24[5] = 0LL;
      v24[6] = 0LL;
      v24[7] = 0LL;
      v24[3] = 270LL;
      v24[4] = 18LL;
      WdLogEvent5_WdCriticalError(v24);
    }
    *((_DWORD *)this + v13 + 542) += v14;
    if ( *((_DWORD *)this + v13 + 542) > *((_DWORD *)this + v13 + 93) )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3);
      v25[5] = 0LL;
      v25[6] = 0LL;
      v25[7] = 0LL;
      v25[3] = 270LL;
      v25[4] = 19LL;
      WdLogEvent5_WdCriticalError(v25);
    }
  }
  VIDMM_GLOBAL::RecordPagingOperation(this, v8, a3, a4, a5, v7, a6, a7);
  if ( a5 < 0 )
  {
    if ( a5 == -1071775743 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v17);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v8, 1u, 0LL, 0LL, 1, 0);
    }
    else
    {
      v26 = *((_QWORD *)this + 3);
      v27 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
      v27[3] = 270LL;
      v27[4] = 11LL;
      v27[5] = a4;
      v27[6] = a5;
      v27[7] = v26;
      WdLogEvent5_WdCriticalError(v27);
    }
  }
  return v9 != 0;
}
