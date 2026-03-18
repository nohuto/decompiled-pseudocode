/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C005EE70
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C005B1F0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0016180 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00161A4 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 *     McTemplateK0pptpqqx @ 0x1C0016898 (McTemplateK0pptpqqx.c)
 *     McTemplateK0pptpqxpx @ 0x1C0016958 (McTemplateK0pptpqxpx.c)
 *     McTemplateK0pptpqxpxx @ 0x1C0016A38 (McTemplateK0pptpqxpxx.c)
 *     McTemplateK0pptpqxq @ 0x1C0016B28 (McTemplateK0pptpqxq.c)
 *     McTemplateK0pptpqxqqppqqxxpqx @ 0x1C0016BE8 (McTemplateK0pptpqxqqppqqxxpqx.c)
 *     McTemplateK0pptpqxqxqxq @ 0x1C0016D94 (McTemplateK0pptpqxqxqxq.c)
 *     McTemplateK0pptpqxqxqxqqq @ 0x1C0016EAC (McTemplateK0pptpqxqxqxqqq.c)
 *     McTemplateK0pptpqxxqt @ 0x1C0016FF4 (McTemplateK0pptpqxxqt.c)
 *     McTemplateK0pptpqxxt @ 0x1C00170E4 (McTemplateK0pptpqxxt.c)
 *     McTemplateK0pptpxqqx @ 0x1C00171C4 (McTemplateK0pptpxqqx.c)
 *     McTemplateK0pptpxx @ 0x1C00172A4 (McTemplateK0pptpxx.c)
 *     McTemplateK0pptpxxpq @ 0x1C0017364 (McTemplateK0pptpxxpq.c)
 *     McTemplateK0pptpxxqqxx @ 0x1C0017444 (McTemplateK0pptpxxqqxx.c)
 *     McTemplateK0pptpxxqqxxxqqxxx @ 0x1C0017548 (McTemplateK0pptpxxqqxxxqqxxx.c)
 *     McTemplateK0pptqx @ 0x1C00176DC (McTemplateK0pptqx.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0060F70 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00A8FC4 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C00ABECC (-RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER.c)
 */

void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct VIDMM_PROCESS *a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  struct VIDMM_PROCESS *v7; // r13
  struct _D3DGPU_PHYSICAL_ADDRESS *v8; // r15
  __int64 v9; // r12
  _OWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rax
  __int64 v17; // rdi
  _QWORD *v18; // r8
  struct _D3DGPU_PHYSICAL_ADDRESS v19; // xmm0
  __int64 v20; // rcx
  void *v21; // rcx
  void *v22; // rdx
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r13
  int v28; // edi
  __int64 v29; // r15
  char v30; // al
  __int64 v31; // r9
  _BOOL8 v32; // rdx
  UINT FillPattern; // r10d
  SIZE_T OffsetInPages; // r11
  _DWORD *v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm0
  __int64 v42; // rdi
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  char v46[8]; // [rsp+30h] [rbp-F8h]
  char v47[8]; // [rsp+38h] [rbp-F0h]
  __int64 v48; // [rsp+40h] [rbp-E8h]
  __int64 v49; // [rsp+48h] [rbp-E0h]
  __int64 v50; // [rsp+50h] [rbp-D8h]
  __int64 v51; // [rsp+58h] [rbp-D0h]
  __int64 v52; // [rsp+60h] [rbp-C8h]
  __int64 v53; // [rsp+70h] [rbp-B8h]
  __int64 v54; // [rsp+78h] [rbp-B0h]
  __int64 v55; // [rsp+80h] [rbp-A8h]
  __int64 v56; // [rsp+98h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v57; // [rsp+A8h] [rbp-80h] BYREF
  int v58; // [rsp+1E8h] [rbp+C0h] BYREF
  __int64 v59; // [rsp+1F0h] [rbp+C8h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( *((_BYTE *)this + 7072) || (*((_BYTE *)this + 41448) & 0x10) != 0 )
    return;
  memset(&v57, 0, sizeof(v57));
  v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 248) + 8 * v9);
  if ( v14 )
  {
    v16 = *(void **)(v14 + 40);
  }
  else
  {
    if ( (*((_BYTE *)this + 41449) & 8) != 0 )
      v15 = *(_QWORD *)(v13 + 264);
    else
      v15 = *(_QWORD *)(v13 + 240);
    v16 = *(void **)(*(_QWORD *)(v15 + 8 * v9) + 64LL);
  }
  v57.hSystemContext = v16;
  v57.MultipassOffset = 0;
  do
  {
    while ( 1 )
    {
      v17 = *((_QWORD *)this + v9 + 79);
      if ( (*(_DWORD *)(v17 + 32) & 4) == 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11, v12);
        v36[3] = 270LL;
        v36[4] = 29LL;
        v36[5] = v17;
        v36[6] = 0LL;
        v36[7] = 0LL;
        WdLogEvent5_WdCriticalError(v36);
      }
      v18 = (_QWORD *)*((_QWORD *)this + v9 + 143);
      v19 = *v8;
      v20 = *(_QWORD *)(v18[7] + 368LL);
      *((_QWORD *)this + v9 + 335) = v20;
      v21 = (void *)(*((unsigned int *)this + v9 + 414) + v20);
      *((_QWORD *)this + v9 + 335) = v21;
      v57.pDmaBuffer = v21;
      v22 = (void *)(*((unsigned int *)this + v9 + 542) + v18[16]);
      *((_QWORD *)this + v9 + 399) = v22;
      v23 = *((_DWORD *)this + v9 + 29);
      LODWORD(v21) = *((_DWORD *)this + v9 + 93) - *((_DWORD *)this + v9 + 542);
      v57.pDmaBufferPrivateData = v22;
      LODWORD(v22) = *((_DWORD *)this + v9 + 414);
      v24 = *((_QWORD *)this + 5187) == 0LL;
      v57.DmaSize = v23 - (_DWORD)v22;
      v57.DmaBufferPrivateDataSize = (unsigned int)v21;
      v57.DmaBufferGpuVirtualAddress = v18[12];
      *(_OWORD *)&v57.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      v57.Transfer.Source.SegmentAddress.QuadPart = a7;
      v57.DmaBufferWriteOffset = (unsigned int)v22;
      v57.Operation = DXGK_OPERATION_FLUSH_TLB;
      v57.FlushTlb.RootPageTableAddress = v19;
      if ( !v24 )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(this, v7, &v57.FlushTlb, v9);
      v25 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v57);
      v27 = -1LL;
      v13 = (unsigned int)(LODWORD(v57.pDmaBuffer) - *((_DWORD *)this + 2 * v9 + 670));
      v28 = LODWORD(v57.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * v9 + 798);
      v29 = v25;
      if ( LODWORD(v57.pDmaBuffer) != *((_DWORD *)this + 2 * v9 + 670) || v28 )
      {
        if ( !*((_DWORD *)this + v9 + 1171) )
        {
          *((_DWORD *)this + v9 + 1171) = 1;
          ++*((_QWORD *)this + v9 + 618);
        }
        v30 = *((_BYTE *)this + 41449);
        v27 = *((_QWORD *)this + v9 + 618);
        if ( (v30 & 2) != 0 )
          *((_BYTE *)this + 41449) = v30 & 0xFD;
      }
      *((_DWORD *)this + v9 + 414) += v13;
      if ( *((_DWORD *)this + v9 + 414) > *((_DWORD *)this + v9 + 29) )
      {
        v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v26, v12);
        v37[3] = 270LL;
        v37[4] = 18LL;
        v37[5] = 0LL;
        v37[6] = 0LL;
        v37[7] = 0LL;
        WdLogEvent5_WdCriticalError(v37);
      }
      *((_DWORD *)this + v9 + 542) += v28;
      if ( *((_DWORD *)this + v9 + 542) > *((_DWORD *)this + v9 + 93) )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v26, v12);
        v38[3] = 270LL;
        v38[4] = 19LL;
        v38[5] = 0LL;
        v38[6] = 0LL;
        v38[7] = 0LL;
        WdLogEvent5_WdCriticalError(v38);
      }
      if ( bTracingEnabled )
      {
        v12 = *((_QWORD *)this + v9 + 143);
        v31 = *((_QWORD *)this + 3);
        v32 = (_DWORD)v29 == -1071775743;
        if ( v57.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          v13 = v57.Reserved.Reserved[20];
          FillPattern = 0;
          if ( v57.Reserved.Reserved[20] == 2 )
          {
            OffsetInPages = v57.MapApertureSegment.OffsetInPages;
            FillPattern = v57.Fill.FillPattern;
          }
          else if ( v57.Reserved.Reserved[20] > 1 )
          {
            OffsetInPages = 0LL;
          }
          else
          {
            OffsetInPages = v57.Transfer.TransferSize;
          }
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v56) = v57.UpdatePageTable.UpdateMode;
            LODWORD(v54) = v57.Transfer.Destination.SegmentAddress.HighPart;
            LODWORD(v51) = v57.UnmapApertureSegment.DummyPage.HighPart;
            LODWORD(v53) = v57.Transfer.Destination.SegmentId;
            LODWORD(v50) = FillPattern;
            LODWORD(v48) = v57.ReadPhysical.SegmentId;
            *(_DWORD *)v46 = v29 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx(
              v57.Reserved.Reserved[20],
              v32,
              v12,
              v31,
              v12,
              *(_QWORD *)v46,
              0LL,
              v48,
              OffsetInPages,
              v50,
              v51,
              v57.Transfer.Source.SegmentAddress.QuadPart,
              v57.UpdatePageTable.pPageTableEntries64KB,
              v53,
              v54,
              *(_OWORD *)&v57.Reserved.Reserved[14],
              v57.UpdatePageTable.hProcess,
              v56,
              v57.UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( v57.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v48) = v57.ReadPhysical.SegmentId;
            *(_DWORD *)v46 = v29 == -1071775743;
            McTemplateK0pptpqxpxx(
              v13,
              v32,
              v12,
              v31,
              v12,
              *(_QWORD *)v46,
              0LL,
              v48,
              *(_OWORD *)&v57.SpecialLockTransfer.TransferOffset,
              *(_OWORD *)&v57.Reserved.Reserved[6]);
          }
        }
        else
        {
          switch ( v57.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v53) = v57.Transfer.Flags.0;
                LODWORD(v52) = v57.Transfer.Destination.SegmentId;
                LODWORD(v50) = v57.Transfer.Source.SegmentId;
                LODWORD(v48) = v57.Transfer.TransferOffset;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpqxqxqxq(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  v48,
                  v57.Transfer.TransferSize,
                  v50,
                  v57.Transfer.Source.SegmentAddress.QuadPart,
                  v52,
                  v57.Transfer.Destination.SegmentAddress.QuadPart,
                  v53);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v50) = v57.Transfer.Source.SegmentId;
                LODWORD(v49) = v57.Fill.FillPattern;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpxqqx(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  v57.Fill.FillSize,
                  v49,
                  v50,
                  v57.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v49) = v57.DiscardContent.SegmentId;
                LODWORD(v48) = v57.Transfer.TransferOffset;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpqqx(v13, v32, v12, v31, v12, *(_QWORD *)v46, 0LL, v48, v49, v57.Transfer.TransferSize);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v47 = v57.ReadPhysical.SegmentId;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptqx(
                  v13,
                  (__int64)&EventPagingOpReadPhysical,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  *(_QWORD *)v47,
                  v57.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v47 = v57.ReadPhysical.SegmentId;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptqx(
                  v13,
                  (__int64)&EventPagingOpWritePhysical,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  *(_QWORD *)v47,
                  v57.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v52) = 0;
                LODWORD(v51) = v57.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v48) = v57.Fill.FillPattern;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpqxxqt(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  v48,
                  *(_OWORD *)&v57.Reserved.Reserved[6],
                  v51,
                  v52);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v51) = 0;
                LODWORD(v48) = v57.Fill.FillPattern;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpqxxt(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  v48,
                  *(_OWORD *)&v57.Reserved.Reserved[6],
                  v51);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v55) = v57.SpecialLockTransfer.SwizzlingRangeData;
                LODWORD(v54) = v57.Transfer.MdlOffset;
                LODWORD(v53) = v57.Transfer.Flags.0;
                LODWORD(v52) = v57.Transfer.Destination.SegmentId;
                LODWORD(v50) = v57.Transfer.Source.SegmentId;
                LODWORD(v48) = v57.Transfer.TransferOffset;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpqxqxqxqqq(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  v48,
                  v57.Transfer.TransferSize,
                  v50,
                  v57.Transfer.Source.SegmentAddress.QuadPart,
                  v52,
                  v57.Transfer.Destination.SegmentAddress.QuadPart,
                  v53,
                  v54,
                  v55);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v55) = v57.Transfer.Destination.SegmentAddress.HighPart;
                LODWORD(v54) = v57.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v51) = MEMORY[4];
                LODWORD(v50) = MEMORY[0];
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  *(_OWORD *)&v57.SpecialLockTransfer.TransferOffset,
                  v50,
                  v51,
                  *(_OWORD *)&v57.Reserved.Reserved[6],
                  v57.UnmapApertureSegment.DummyPage.QuadPart,
                  v54,
                  v55,
                  v57.TransferVirtual.DestinationPageTable,
                  MEMORY[8],
                  MEMORY[0x10]);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v51) = MEMORY[0];
                LODWORD(v50) = v57.Transfer.Source.SegmentId;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpxxqqxx(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  *(_OWORD *)&v57.SpecialLockTransfer.TransferOffset,
                  v50,
                  v51,
                  v57.Transfer.Source.SegmentAddress.QuadPart,
                  MEMORY[8]);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v48) = v57.Transfer.TransferOffset;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpqxpx(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  v48,
                  *(_OWORD *)&v57.NotifyResidency.PhysicalAddress.SegmentOffset,
                  v57.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v51) = v57.Transfer.Source.SegmentId;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpxxpq(
                  v13,
                  v32,
                  v12,
                  v31,
                  v12,
                  *(_QWORD *)v46,
                  0LL,
                  *(_OWORD *)&v57.Transfer.hAllocation,
                  v57.Transfer.TransferSize,
                  v51);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v50) = v57.Transfer.Source.SegmentId;
                LODWORD(v48) = v57.Transfer.TransferOffset;
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpqxq(v13, v32, v12, v31, v12, *(_QWORD *)v46, 0LL, v48, v57.Transfer.TransferSize, v50);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v46 = v29 == -1071775743;
                McTemplateK0pptpxx(v13, v32, v12, v31, v12, *(_QWORD *)v46, 0LL, *(_OWORD *)&v57.Transfer.hAllocation);
              }
              break;
            default:
              break;
          }
        }
      }
      v11 = (_OWORD *)*((_QWORD *)this + 1050);
      if ( v11 )
      {
        *((_QWORD *)v11 + 45 * *((unsigned int *)this + 2102) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050)) = v9;
        v39 = &v57;
        v11 = (_OWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 24LL);
        v40 = 2LL;
        do
        {
          v11 += 8;
          v41 = *(_OWORD *)&v39->pDmaBuffer;
          v39 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v39 + 128);
          *(v11 - 8) = v41;
          *(v11 - 7) = *(_OWORD *)&v39[-1].Reserved.Reserved[42];
          *(v11 - 6) = *(_OWORD *)&v39[-1].Reserved.Reserved[46];
          *(v11 - 5) = *(_OWORD *)&v39[-1].Reserved.Reserved[50];
          *(v11 - 4) = *(_OWORD *)&v39[-1].Reserved.Reserved[54];
          *(v11 - 3) = *(_OWORD *)&v39[-1].Reserved.Reserved[58];
          *(v11 - 2) = *(_OWORD *)&v39[-1].Reserved.Reserved[62];
          *(v11 - 1) = *(_OWORD *)&v39[-1].DmaBufferGpuVirtualAddress;
          --v40;
        }
        while ( v40 );
        *v11 = *(_OWORD *)&v39->pDmaBuffer;
        v11[1] = *(_OWORD *)&v39->pDmaBufferPrivateData;
        v11[2] = *(_OWORD *)&v39->MultipassOffset;
        v11[3] = *(_OWORD *)&v39->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 344) = v29;
        v13 = 360LL * *((unsigned int *)this + 2102);
        *(_QWORD *)(v13 + *((_QWORD *)this + 1050) + 352) = v27;
        if ( ++*((_DWORD *)this + 2102) >= *((_DWORD *)this + 2098) )
        {
          ++*((_DWORD *)this + 2103);
          *((_DWORD *)this + 2102) = 0;
        }
      }
      if ( (int)v29 >= 0 )
        break;
      if ( (_DWORD)v29 != -1071775743 )
      {
        v42 = *((_QWORD *)this + 3);
        v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11, v12);
        v43[5] = &v57;
        v43[3] = 270LL;
        v43[4] = 11LL;
        v43[6] = v29;
        v43[7] = v42;
        WdLogEvent5_WdCriticalError(v43);
        break;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v13);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1, 0);
      v8 = a3;
      v7 = a4;
    }
    v7 = a4;
    v24 = (_DWORD)v29 == -1071775743;
    v8 = a3;
  }
  while ( v24 );
  v35 = *(_DWORD **)(1560LL * (unsigned int)v9 + *((_QWORD *)this + 5090) + 440);
  if ( (*v35 & 0x20) != 0 && (*((_DWORD *)a4 + 22) & 2) == 0 )
  {
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((__int64)v35, (__int64)&EventPerformanceWarning, v12, 23);
    v59 = 0LL;
    v58 = 8010;
    if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v35, (__int64)&EventProfilerEnter, v12, 8010);
    DXGETWPROFILER_BASE::PushProfilerEntry();
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
    if ( (*((_DWORD *)a4 + 22) & 4) == 0 )
    {
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), 1);
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), 0);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
    if ( (qword_1C0047010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v44, (__int64)&EventProfilerExit, v45, v58);
  }
}
