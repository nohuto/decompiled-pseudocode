/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C005A5C0
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0054BF0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E7C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 *     McTemplateK0pptpqqx @ 0x1C0016FA8 (McTemplateK0pptpqqx.c)
 *     McTemplateK0pptpqxpx @ 0x1C0017068 (McTemplateK0pptpqxpx.c)
 *     McTemplateK0pptpqxpxx @ 0x1C0017148 (McTemplateK0pptpqxpxx.c)
 *     McTemplateK0pptpqxq @ 0x1C0017238 (McTemplateK0pptpqxq.c)
 *     McTemplateK0pptpqxqqppqqxxpqx @ 0x1C00172F8 (McTemplateK0pptpqxqqppqqxxpqx.c)
 *     McTemplateK0pptpqxqxqxq @ 0x1C00174A4 (McTemplateK0pptpqxqxqxq.c)
 *     McTemplateK0pptpqxqxqxqqq @ 0x1C00175BC (McTemplateK0pptpqxqxqxqqq.c)
 *     McTemplateK0pptpqxxqt @ 0x1C0017704 (McTemplateK0pptpqxxqt.c)
 *     McTemplateK0pptpqxxt @ 0x1C00177F4 (McTemplateK0pptpqxxt.c)
 *     McTemplateK0pptpxqqx @ 0x1C00178D4 (McTemplateK0pptpxqqx.c)
 *     McTemplateK0pptpxxpq @ 0x1C00179B4 (McTemplateK0pptpxxpq.c)
 *     McTemplateK0pptpxxqqxx @ 0x1C0017A94 (McTemplateK0pptpxxqqxx.c)
 *     McTemplateK0pptpxxqqxxxqqxxx @ 0x1C0017B98 (McTemplateK0pptpxxqqxxxqqxxx.c)
 *     McTemplateK0pptqx @ 0x1C0017D2C (McTemplateK0pptqx.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005C7E0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00A2130 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C00A4AE0 (-RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER.c)
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
  struct VIDMM_PROCESS *v7; // r14
  __int64 v9; // r15
  _OWORD *v11; // rdx
  __int64 v12; // r8
  __int64 FillPattern; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // r8
  __int128 v17; // xmm0
  __int64 v18; // rcx
  void *v19; // rcx
  void *v20; // rdx
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r12
  int v26; // ecx
  int v27; // edi
  __int64 v28; // r14
  __int64 v29; // r9
  _BOOL8 v30; // rdx
  SIZE_T OffsetInPages; // r11
  _DWORD *v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int64 v39; // rdi
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  char v43[8]; // [rsp+30h] [rbp-F8h]
  char v44[8]; // [rsp+38h] [rbp-F0h]
  __int64 v45; // [rsp+40h] [rbp-E8h]
  __int64 v46; // [rsp+48h] [rbp-E0h]
  __int64 v47; // [rsp+50h] [rbp-D8h]
  __int64 v48; // [rsp+58h] [rbp-D0h]
  __int64 v49; // [rsp+60h] [rbp-C8h]
  __int64 v50; // [rsp+70h] [rbp-B8h]
  __int64 v51; // [rsp+78h] [rbp-B0h]
  __int64 v52; // [rsp+80h] [rbp-A8h]
  __int64 v53; // [rsp+98h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v54; // [rsp+A8h] [rbp-80h] BYREF

  v7 = a4;
  v9 = a2;
  if ( *((_BYTE *)this + 6496) || (*((_BYTE *)this + 40872) & 8) != 0 )
    return;
  memset(&v54, 0, sizeof(v54));
  FillPattern = *(_QWORD *)(*((_QWORD *)this + 2) + 512LL);
  if ( (*((_BYTE *)this + 40873) & 4) != 0 )
    v14 = *(_QWORD *)(FillPattern + 248);
  else
    v14 = *(_QWORD *)(FillPattern + 240);
  v54.hSystemContext = *(HANDLE *)(*(_QWORD *)(v14 + 8 * v9) + 64LL);
  v54.MultipassOffset = 0;
  do
  {
    while ( 1 )
    {
      v15 = *((_QWORD *)this + (unsigned int)v9 + 79);
      if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
      {
        v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v11, v12);
        v33[5] = v15;
        v33[3] = 270LL;
        v33[4] = 29LL;
        v33[6] = 0LL;
        v33[7] = 0LL;
        WdLogEvent5_WdCriticalError(v33);
      }
      v16 = (_QWORD *)*((_QWORD *)this + (unsigned int)v9 + 143);
      v17 = (__int128)*a3;
      v18 = *(_QWORD *)(v16[7] + 368LL);
      *((_QWORD *)this + (unsigned int)v9 + 335) = v18;
      v19 = (void *)(*((unsigned int *)this + (unsigned int)v9 + 414) + v18);
      *((_QWORD *)this + (unsigned int)v9 + 335) = v19;
      v54.pDmaBuffer = v19;
      v20 = (void *)(*((unsigned int *)this + (unsigned int)v9 + 542) + v16[16]);
      *((_QWORD *)this + (unsigned int)v9 + 399) = v20;
      v21 = *((_DWORD *)this + (unsigned int)v9 + 29);
      LODWORD(v19) = *((_DWORD *)this + (unsigned int)v9 + 93) - *((_DWORD *)this + (unsigned int)v9 + 542);
      v54.pDmaBufferPrivateData = v20;
      LODWORD(v20) = *((_DWORD *)this + (unsigned int)v9 + 414);
      v22 = *((_QWORD *)this + 5115) == 0LL;
      v54.DmaSize = v21 - (_DWORD)v20;
      v54.DmaBufferPrivateDataSize = (unsigned int)v19;
      v54.DmaBufferGpuVirtualAddress = v16[12];
      *(_OWORD *)&v54.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      v54.Transfer.Source.SegmentAddress.QuadPart = a7;
      v54.DmaBufferWriteOffset = (unsigned int)v20;
      v54.Operation = DXGK_OPERATION_FLUSH_TLB;
      *(_OWORD *)&v54.Transfer.hAllocation = v17;
      if ( !v22 )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(this, v7, &v54.FlushTlb, v9);
      v23 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v54);
      v25 = -1LL;
      v26 = LODWORD(v54.pDmaBuffer) - *((_DWORD *)this + 2 * (unsigned int)v9 + 670);
      v27 = LODWORD(v54.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * (unsigned int)v9 + 798);
      v28 = v23;
      if ( LODWORD(v54.pDmaBuffer) != *((_DWORD *)this + 2 * (unsigned int)v9 + 670) || v27 )
      {
        if ( !*((_DWORD *)this + (unsigned int)v9 + 1155) )
        {
          *((_DWORD *)this + (unsigned int)v9 + 1155) = 1;
          ++*((_QWORD *)this + (unsigned int)v9 + 610);
        }
        v25 = *((_QWORD *)this + (unsigned int)v9 + 610);
      }
      FillPattern = (unsigned int)(*((_DWORD *)this + (unsigned int)v9 + 414) + v26);
      *((_DWORD *)this + (unsigned int)v9 + 414) = FillPattern;
      if ( (unsigned int)FillPattern > *((_DWORD *)this + (unsigned int)v9 + 29) )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v24, v12);
        v34[5] = 0LL;
        v34[6] = 0LL;
        v34[7] = 0LL;
        v34[3] = 270LL;
        v34[4] = 18LL;
        WdLogEvent5_WdCriticalError(v34);
      }
      *((_DWORD *)this + (unsigned int)v9 + 542) += v27;
      if ( *((_DWORD *)this + (unsigned int)v9 + 542) > *((_DWORD *)this + (unsigned int)v9 + 93) )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v24, v12);
        v35[5] = 0LL;
        v35[6] = 0LL;
        v35[7] = 0LL;
        v35[3] = 270LL;
        v35[4] = 19LL;
        WdLogEvent5_WdCriticalError(v35);
      }
      if ( bTracingEnabled )
      {
        v12 = *((_QWORD *)this + (unsigned int)v9 + 143);
        v29 = *((_QWORD *)this + 3);
        v30 = (_DWORD)v28 == -1071775743;
        if ( v54.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          FillPattern = 0LL;
          if ( v54.Reserved.Reserved[20] == 2 )
          {
            OffsetInPages = v54.MapApertureSegment.OffsetInPages;
            FillPattern = v54.Fill.FillPattern;
          }
          else if ( v54.Reserved.Reserved[20] > 1 )
          {
            OffsetInPages = 0LL;
          }
          else
          {
            OffsetInPages = v54.Transfer.TransferSize;
          }
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v53) = v54.UpdatePageTable.UpdateMode;
            LODWORD(v51) = v54.Transfer.Destination.SegmentAddress.HighPart;
            LODWORD(v48) = v54.UnmapApertureSegment.DummyPage.HighPart;
            LODWORD(v50) = v54.Transfer.Destination.SegmentId;
            LODWORD(v47) = FillPattern;
            LODWORD(v45) = v54.ReadPhysical.SegmentId;
            *(_DWORD *)v43 = v28 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx(
              FillPattern,
              v30,
              v12,
              v29,
              v12,
              *(_QWORD *)v43,
              0LL,
              v45,
              OffsetInPages,
              v47,
              v48,
              v54.Transfer.Source.SegmentAddress.QuadPart,
              v54.UpdatePageTable.pPageTableEntries64KB,
              v50,
              v51,
              *(_OWORD *)&v54.Reserved.Reserved[14],
              v54.UpdatePageTable.hProcess,
              v53,
              v54.UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( v54.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v45) = v54.ReadPhysical.SegmentId;
            *(_DWORD *)v43 = v28 == -1071775743;
            McTemplateK0pptpqxpxx(
              FillPattern,
              v30,
              v12,
              v29,
              v12,
              *(_QWORD *)v43,
              0LL,
              v45,
              *(_OWORD *)&v54.SpecialLockTransfer.TransferOffset,
              *(_OWORD *)&v54.Reserved.Reserved[6]);
          }
        }
        else
        {
          switch ( v54.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v50) = v54.Transfer.Flags.0;
                LODWORD(v49) = v54.Transfer.Destination.SegmentId;
                LODWORD(v47) = v54.Transfer.Source.SegmentId;
                LODWORD(v45) = v54.Transfer.TransferOffset;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpqxqxqxq(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  v54.Transfer.TransferSize,
                  v47,
                  v54.Transfer.Source.SegmentAddress.QuadPart,
                  v49,
                  v54.Transfer.Destination.SegmentAddress.QuadPart,
                  v50);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v47) = v54.Transfer.Source.SegmentId;
                LODWORD(v46) = v54.Fill.FillPattern;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpxqqx(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  v54.Fill.FillSize,
                  v46,
                  v47,
                  v54.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v46) = v54.DiscardContent.SegmentId;
                LODWORD(v45) = v54.Transfer.TransferOffset;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpqqx(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  v46,
                  v54.Transfer.TransferSize);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v44 = v54.ReadPhysical.SegmentId;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptqx(
                  FillPattern,
                  (__int64)&EventPagingOpReadPhysical,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  *(_QWORD *)v44,
                  v54.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v44 = v54.ReadPhysical.SegmentId;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptqx(
                  FillPattern,
                  (__int64)&EventPagingOpWritePhysical,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  *(_QWORD *)v44,
                  v54.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v49) = 0;
                LODWORD(v48) = v54.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v45) = v54.Fill.FillPattern;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpqxxqt(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  *(_OWORD *)&v54.Reserved.Reserved[6],
                  v48,
                  v49);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v48) = 0;
                LODWORD(v45) = v54.Fill.FillPattern;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpqxxt(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  *(_OWORD *)&v54.Reserved.Reserved[6],
                  v48);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v52) = v54.SpecialLockTransfer.SwizzlingRangeData;
                LODWORD(v51) = v54.Transfer.MdlOffset;
                LODWORD(v50) = v54.Transfer.Flags.0;
                LODWORD(v49) = v54.Transfer.Destination.SegmentId;
                LODWORD(v47) = v54.Transfer.Source.SegmentId;
                LODWORD(v45) = v54.Transfer.TransferOffset;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpqxqxqxqqq(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  v54.Transfer.TransferSize,
                  v47,
                  v54.Transfer.Source.SegmentAddress.QuadPart,
                  v49,
                  v54.Transfer.Destination.SegmentAddress.QuadPart,
                  v50,
                  v51,
                  v52);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v52) = v54.Transfer.Destination.SegmentAddress.HighPart;
                LODWORD(v51) = v54.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v48) = MEMORY[4];
                LODWORD(v47) = MEMORY[0];
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  *(_OWORD *)&v54.SpecialLockTransfer.TransferOffset,
                  v47,
                  v48,
                  *(_OWORD *)&v54.Reserved.Reserved[6],
                  v54.UnmapApertureSegment.DummyPage.QuadPart,
                  v51,
                  v52,
                  v54.TransferVirtual.DestinationPageTable,
                  MEMORY[8],
                  MEMORY[0x10]);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v48) = MEMORY[0];
                LODWORD(v47) = v54.Transfer.Source.SegmentId;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpxxqqxx(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  *(_OWORD *)&v54.SpecialLockTransfer.TransferOffset,
                  v47,
                  v48,
                  v54.Transfer.Source.SegmentAddress.QuadPart,
                  MEMORY[8]);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v45) = v54.Transfer.TransferOffset;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpqxpx(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  *(_OWORD *)&v54.NotifyResidency.PhysicalAddress.SegmentOffset,
                  v54.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v48) = v54.Transfer.Source.SegmentId;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpxxpq(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  *(_OWORD *)&v54.Transfer.hAllocation,
                  v54.Transfer.TransferSize,
                  v48);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                LODWORD(v47) = v54.Transfer.Source.SegmentId;
                LODWORD(v45) = v54.Transfer.TransferOffset;
                *(_DWORD *)v43 = v28 == -1071775743;
                McTemplateK0pptpqxq(
                  FillPattern,
                  v30,
                  v12,
                  v29,
                  v12,
                  *(_QWORD *)v43,
                  0LL,
                  v45,
                  v54.Transfer.TransferSize,
                  v47);
              }
              break;
            default:
              break;
          }
        }
      }
      v11 = (_OWORD *)*((_QWORD *)this + 978);
      if ( v11 )
      {
        *((_QWORD *)v11 + 45 * *((unsigned int *)this + 1958) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978)) = v9;
        v36 = &v54;
        v11 = (_OWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 24LL);
        v37 = 2LL;
        do
        {
          v11 += 8;
          v38 = *(_OWORD *)&v36->pDmaBuffer;
          v36 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v36 + 128);
          *(v11 - 8) = v38;
          *(v11 - 7) = *(_OWORD *)&v36[-1].Reserved.Reserved[42];
          *(v11 - 6) = *(_OWORD *)&v36[-1].Reserved.Reserved[46];
          *(v11 - 5) = *(_OWORD *)&v36[-1].Reserved.Reserved[50];
          *(v11 - 4) = *(_OWORD *)&v36[-1].Reserved.Reserved[54];
          *(v11 - 3) = *(_OWORD *)&v36[-1].Reserved.Reserved[58];
          *(v11 - 2) = *(_OWORD *)&v36[-1].Reserved.Reserved[62];
          *(v11 - 1) = *(_OWORD *)&v36[-1].DmaBufferGpuVirtualAddress;
          --v37;
        }
        while ( v37 );
        *v11 = *(_OWORD *)&v36->pDmaBuffer;
        v11[1] = *(_OWORD *)&v36->pDmaBufferPrivateData;
        v11[2] = *(_OWORD *)&v36->MultipassOffset;
        v11[3] = *(_OWORD *)&v36->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 344) = v28;
        FillPattern = 360LL * *((unsigned int *)this + 1958);
        *(_QWORD *)(FillPattern + *((_QWORD *)this + 978) + 352) = v25;
        if ( ++*((_DWORD *)this + 1958) >= *((_DWORD *)this + 1954) )
        {
          ++*((_DWORD *)this + 1959);
          *((_DWORD *)this + 1958) = 0;
        }
      }
      if ( (int)v28 >= 0 )
        break;
      if ( (_DWORD)v28 != -1071775743 )
      {
        v39 = *((_QWORD *)this + 3);
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v11, v12);
        v40[5] = &v54;
        v40[3] = 270LL;
        v40[4] = 11LL;
        v40[6] = v28;
        v40[7] = v39;
        WdLogEvent5_WdCriticalError(v40);
        break;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(FillPattern);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1, 0);
      v7 = a4;
    }
    v22 = (_DWORD)v28 == -1071775743;
    v7 = a4;
  }
  while ( v22 );
  v32 = *(_DWORD **)(1552LL * (unsigned int)v9 + *((_QWORD *)this + 5021) + 440);
  if ( (*v32 & 0x20) != 0 && (*((_DWORD *)a4 + 12) & 2) == 0 )
  {
    if ( bTracingEnabled && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((__int64)v32, (__int64)&EventPerformanceWarning, v12, 23);
    if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v32, (__int64)&EventProfilerEnter, v12, 8010);
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
    if ( (*((_DWORD *)a4 + 12) & 4) == 0 )
    {
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), 1);
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a4, *(_DWORD *)(*((_QWORD *)this + 3) + 200LL), 0);
    }
    if ( (qword_1C0040010 & 2) != 0 && ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v41, (__int64)&EventProfilerExit, v42, 8010);
  }
}
