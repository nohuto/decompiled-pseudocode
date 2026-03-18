/*
 * XREFs of ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0057730
 * Callers:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00530B0 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002834 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 *     Template_pptpqqx @ 0x1C0014AC0 (Template_pptpqqx.c)
 *     Template_pptpqxpx @ 0x1C0014B94 (Template_pptpqxpx.c)
 *     Template_pptpqxpxx @ 0x1C0014C60 (Template_pptpqxpxx.c)
 *     Template_pptpqxq @ 0x1C0014D58 (Template_pptpqxq.c)
 *     Template_pptpqxqqppqqxxpqx @ 0x1C0014E2C (Template_pptpqxqqppqqxxpqx.c)
 *     Template_pptpqxqxqxq @ 0x1C0014FDC (Template_pptpqxqxqxq.c)
 *     Template_pptpqxqxqxqqq @ 0x1C00150F8 (Template_pptpqxqxqxqqq.c)
 *     Template_pptpqxxqt @ 0x1C0015248 (Template_pptpqxxqt.c)
 *     Template_pptpqxxt @ 0x1C0015340 (Template_pptpqxxt.c)
 *     Template_pptpxqqx @ 0x1C0015410 (Template_pptpxqqx.c)
 *     Template_pptpxxpq @ 0x1C00154E0 (Template_pptpxxpq.c)
 *     Template_pptpxxqqxx @ 0x1C00155AC (Template_pptpxxqqxx.c)
 *     Template_pptpxxqqxxxqqxxx @ 0x1C00156B8 (Template_pptpxxqqxxxqqxxx.c)
 *     Template_pptqx @ 0x1C0015854 (Template_pptqx.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059548 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C0099D28 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLUSHTLB@@I@Z @ 0x1C009C828 (-RecordVaPagingHistoryFlushTlb@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_FLU.c)
 */

void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct _EPROCESS **a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  struct _EPROCESS **v7; // r15
  __int64 v9; // r14
  _OWORD *v11; // rdx
  __int64 v12; // r8
  SIZE_T TransferSize; // rcx
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
  int v26; // edi
  __int64 v27; // r15
  _DWORD *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r9
  _BOOL8 v33; // rdx
  UINT FillPattern; // r11d
  struct _DXGKARG_BUILDPAGINGBUFFER *v35; // rax
  __int64 v36; // rcx
  __int128 v37; // xmm0
  __int64 v38; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r8
  char v42[8]; // [rsp+30h] [rbp-F8h]
  char v43[8]; // [rsp+38h] [rbp-F0h]
  __int64 v44; // [rsp+40h] [rbp-E8h]
  __int64 v45; // [rsp+48h] [rbp-E0h]
  __int64 v46; // [rsp+50h] [rbp-D8h]
  __int64 v47; // [rsp+58h] [rbp-D0h]
  __int64 v48; // [rsp+60h] [rbp-C8h]
  __int64 v49; // [rsp+70h] [rbp-B8h]
  __int64 v50; // [rsp+78h] [rbp-B0h]
  __int64 v51; // [rsp+80h] [rbp-A8h]
  __int64 v52; // [rsp+98h] [rbp-90h]
  struct _DXGKARG_BUILDPAGINGBUFFER v53; // [rsp+A8h] [rbp-80h] BYREF

  v7 = a4;
  v9 = a2;
  if ( *((_BYTE *)this + 6496) || (*((_BYTE *)this + 40872) & 8) != 0 )
    return;
  memset(&v53, 0, sizeof(v53));
  TransferSize = *(_QWORD *)(*((_QWORD *)this + 2) + 416LL);
  if ( (*((_BYTE *)this + 40873) & 4) != 0 )
    v14 = *(_QWORD *)(TransferSize + 240);
  else
    v14 = *(_QWORD *)(TransferSize + 232);
  v53.hSystemContext = *(HANDLE *)(*(_QWORD *)(v14 + 8 * v9) + 64LL);
  v53.MultipassOffset = 0;
  do
  {
    while ( 1 )
    {
      v15 = *((_QWORD *)this + (unsigned int)v9 + 79);
      if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11, v12);
        v29[3] = 270LL;
        v29[4] = 29LL;
        v29[5] = v15;
        v29[6] = 0LL;
        v29[7] = 0LL;
        WdLogEvent5_WdCriticalError(v29);
      }
      v16 = (_QWORD *)*((_QWORD *)this + (unsigned int)v9 + 143);
      v17 = (__int128)*a3;
      v18 = *(_QWORD *)(v16[7] + 368LL);
      *((_QWORD *)this + (unsigned int)v9 + 335) = v18;
      v19 = (void *)(*((unsigned int *)this + (unsigned int)v9 + 414) + v18);
      *((_QWORD *)this + (unsigned int)v9 + 335) = v19;
      v53.pDmaBuffer = v19;
      v20 = (void *)(*((unsigned int *)this + (unsigned int)v9 + 542) + v16[16]);
      *((_QWORD *)this + (unsigned int)v9 + 399) = v20;
      v21 = *((_DWORD *)this + (unsigned int)v9 + 29);
      LODWORD(v19) = *((_DWORD *)this + (unsigned int)v9 + 93) - *((_DWORD *)this + (unsigned int)v9 + 542);
      v53.pDmaBufferPrivateData = v20;
      LODWORD(v20) = *((_DWORD *)this + (unsigned int)v9 + 414);
      v22 = *((_QWORD *)this + 5115) == 0LL;
      v53.DmaSize = v21 - (_DWORD)v20;
      v53.DmaBufferPrivateDataSize = (unsigned int)v19;
      v53.DmaBufferGpuVirtualAddress = v16[12];
      *(_OWORD *)&v53.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      v53.Transfer.Source.SegmentAddress.QuadPart = a7;
      v53.DmaBufferWriteOffset = (unsigned int)v20;
      v53.Operation = DXGK_OPERATION_FLUSH_TLB;
      *(_OWORD *)&v53.Transfer.hAllocation = v17;
      if ( !v22 )
        VIDMM_GLOBAL::RecordVaPagingHistoryFlushTlb(this, *v7, &v53.FlushTlb, v9);
      v23 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v53);
      v25 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v53.pDmaBuffer) - *((_DWORD *)this + 2 * (unsigned int)v9 + 670));
      v26 = LODWORD(v53.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * (unsigned int)v9 + 798);
      v27 = v23;
      if ( LODWORD(v53.pDmaBuffer) != *((_DWORD *)this + 2 * (unsigned int)v9 + 670) || v26 )
      {
        if ( !*((_DWORD *)this + (unsigned int)v9 + 1155) )
        {
          *((_DWORD *)this + (unsigned int)v9 + 1155) = 1;
          ++*((_QWORD *)this + (unsigned int)v9 + 610);
        }
        v25 = *((_QWORD *)this + (unsigned int)v9 + 610);
      }
      *((_DWORD *)this + (unsigned int)v9 + 414) += TransferSize;
      if ( *((_DWORD *)this + (unsigned int)v9 + 414) > *((_DWORD *)this + (unsigned int)v9 + 29) )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v24, v12);
        v30[5] = 0LL;
        v30[6] = 0LL;
        v30[7] = 0LL;
        v30[3] = 270LL;
        v30[4] = 18LL;
        WdLogEvent5_WdCriticalError(v30);
      }
      *((_DWORD *)this + (unsigned int)v9 + 542) += v26;
      if ( *((_DWORD *)this + (unsigned int)v9 + 542) > *((_DWORD *)this + (unsigned int)v9 + 93) )
      {
        v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v24, v12);
        v31[3] = 270LL;
        v31[4] = 19LL;
        v31[5] = 0LL;
        v31[6] = 0LL;
        v31[7] = 0LL;
        WdLogEvent5_WdCriticalError(v31);
      }
      if ( bTracingEnabled )
      {
        v12 = *((_QWORD *)this + (unsigned int)v9 + 143);
        v32 = *((_QWORD *)this + 3);
        v33 = (_DWORD)v27 == -1071775743;
        switch ( v53.Operation )
        {
          case DXGK_OPERATION_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v49) = v53.Transfer.Flags.0;
              LODWORD(v48) = v53.Transfer.Destination.SegmentId;
              LODWORD(v46) = v53.Transfer.Source.SegmentId;
              LODWORD(v44) = v53.Transfer.TransferOffset;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqxqxqxq(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                v53.Transfer.TransferSize,
                v46,
                v53.Transfer.Source.SegmentAddress.QuadPart,
                v48,
                v53.Transfer.Destination.SegmentAddress.QuadPart,
                v49);
            }
            break;
          case DXGK_OPERATION_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v46) = v53.Transfer.Source.SegmentId;
              LODWORD(v45) = v53.Fill.FillPattern;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpxqqx(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v53.Fill.FillSize,
                v45,
                v46,
                v53.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_DISCARD_CONTENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v45) = v53.DiscardContent.SegmentId;
              LODWORD(v44) = v53.Transfer.TransferOffset;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqqx(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                v45,
                v53.Transfer.TransferSize);
            }
            break;
          case DXGK_OPERATION_READ_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v43 = v53.ReadPhysical.SegmentId;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpReadPhysical,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                *(_QWORD *)v43,
                v53.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_WRITE_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v43 = v53.ReadPhysical.SegmentId;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptqx(
                TransferSize,
                &EventPagingOpWritePhysical,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                *(_QWORD *)v43,
                v53.Fill.FillSize);
            }
            break;
          case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v48) = 0;
              LODWORD(v47) = v53.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v44) = v53.Fill.FillPattern;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqxxqt(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                *(_OWORD *)&v53.Reserved.Reserved[6],
                v47,
                v48);
            }
            break;
          case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v47) = 0;
              LODWORD(v44) = v53.Fill.FillPattern;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqxxt(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                *(_OWORD *)&v53.Reserved.Reserved[6],
                v47);
            }
            break;
          case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v51) = v53.SpecialLockTransfer.SwizzlingRangeData;
              LODWORD(v50) = v53.Transfer.MdlOffset;
              LODWORD(v49) = v53.Transfer.Flags.0;
              LODWORD(v48) = v53.Transfer.Destination.SegmentId;
              LODWORD(v46) = v53.Transfer.Source.SegmentId;
              LODWORD(v44) = v53.Transfer.TransferOffset;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqxqxqxqqq(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                v53.Transfer.TransferSize,
                v46,
                v53.Transfer.Source.SegmentAddress.QuadPart,
                v48,
                v53.Transfer.Destination.SegmentAddress.QuadPart,
                v49,
                v50,
                v51);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v51) = v53.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v50) = v53.Transfer.Destination.SegmentAddress.LowPart;
              LODWORD(v47) = MEMORY[4];
              LODWORD(v46) = MEMORY[0];
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpxxqqxxxqqxxx(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                *(_OWORD *)&v53.SpecialLockTransfer.TransferOffset,
                v46,
                v47,
                *(_OWORD *)&v53.Reserved.Reserved[6],
                v53.UnmapApertureSegment.DummyPage.QuadPart,
                v50,
                v51,
                v53.TransferVirtual.DestinationPageTable,
                MEMORY[8],
                MEMORY[0x10]);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v47) = MEMORY[0];
              LODWORD(v46) = v53.Transfer.Source.SegmentId;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpxxqqxx(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                *(_OWORD *)&v53.SpecialLockTransfer.TransferOffset,
                v46,
                v47,
                v53.Transfer.Source.SegmentAddress.QuadPart,
                MEMORY[8]);
            }
            break;
          case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v44) = v53.Transfer.TransferOffset;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqxpx(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                *(_OWORD *)&v53.NotifyResidency.PhysicalAddress.SegmentOffset,
                v53.Transfer.Source.SegmentAddress.QuadPart);
            }
            break;
          case DXGK_OPERATION_UPDATE_PAGE_TABLE:
            FillPattern = 0;
            if ( v53.Reserved.Reserved[20] < 2 )
            {
              TransferSize = v53.Transfer.TransferSize;
            }
            else if ( v53.Reserved.Reserved[20] == 2 )
            {
              TransferSize = v53.MapApertureSegment.OffsetInPages;
              FillPattern = v53.Fill.FillPattern;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v52) = v53.UpdatePageTable.UpdateMode;
              LODWORD(v50) = v53.Transfer.Destination.SegmentAddress.HighPart;
              LODWORD(v47) = v53.UnmapApertureSegment.DummyPage.HighPart;
              LODWORD(v49) = v53.Transfer.Destination.SegmentId;
              LODWORD(v46) = FillPattern;
              LODWORD(v44) = v53.ReadPhysical.SegmentId;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqxqqppqqxxpqx(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                TransferSize,
                v46,
                v47,
                v53.Transfer.Source.SegmentAddress.QuadPart,
                v53.UpdatePageTable.pPageTableEntries64KB,
                v49,
                v50,
                *(_OWORD *)&v53.Reserved.Reserved[14],
                v53.UpdatePageTable.hProcess,
                v52,
                v53.UpdatePageTable.FirstPteVirtualAddress);
            }
            break;
          case DXGK_OPERATION_FLUSH_TLB:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v44) = v53.ReadPhysical.SegmentId;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqxpxx(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                *(_OWORD *)&v53.SpecialLockTransfer.TransferOffset,
                *(_OWORD *)&v53.Reserved.Reserved[6]);
            }
            break;
          case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v47) = v53.Transfer.Source.SegmentId;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpxxpq(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                *(_OWORD *)&v53.Transfer.hAllocation,
                v53.Transfer.TransferSize,
                v47);
            }
            break;
          case DXGK_OPERATION_NOTIFY_RESIDENCY:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              LODWORD(v46) = v53.Transfer.Source.SegmentId;
              LODWORD(v44) = v53.Transfer.TransferOffset;
              *(_DWORD *)v42 = v27 == -1071775743;
              Template_pptpqxq(
                TransferSize,
                v33,
                v12,
                v32,
                v12,
                *(_QWORD *)v42,
                0LL,
                v44,
                v53.Transfer.TransferSize,
                v46);
            }
            break;
          default:
            break;
        }
      }
      v11 = (_OWORD *)*((_QWORD *)this + 978);
      if ( v11 )
      {
        *((_QWORD *)v11 + 45 * *((unsigned int *)this + 1958) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978)) = v9;
        v35 = &v53;
        v11 = (_OWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 24LL);
        v36 = 2LL;
        do
        {
          v11 += 8;
          v37 = *(_OWORD *)&v35->pDmaBuffer;
          v35 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v35 + 128);
          *(v11 - 8) = v37;
          *(v11 - 7) = *(_OWORD *)&v35[-1].Reserved.Reserved[42];
          *(v11 - 6) = *(_OWORD *)&v35[-1].Reserved.Reserved[46];
          *(v11 - 5) = *(_OWORD *)&v35[-1].Reserved.Reserved[50];
          *(v11 - 4) = *(_OWORD *)&v35[-1].Reserved.Reserved[54];
          *(v11 - 3) = *(_OWORD *)&v35[-1].Reserved.Reserved[58];
          *(v11 - 2) = *(_OWORD *)&v35[-1].Reserved.Reserved[62];
          *(v11 - 1) = *(_OWORD *)&v35[-1].DmaBufferGpuVirtualAddress;
          --v36;
        }
        while ( v36 );
        *v11 = *(_OWORD *)&v35->pDmaBuffer;
        v11[1] = *(_OWORD *)&v35->pDmaBufferPrivateData;
        v11[2] = *(_OWORD *)&v35->MultipassOffset;
        v11[3] = *(_OWORD *)&v35->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 344) = v27;
        TransferSize = 360LL * *((unsigned int *)this + 1958);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 978) + 352) = v25;
        if ( ++*((_DWORD *)this + 1958) >= *((_DWORD *)this + 1954) )
        {
          ++*((_DWORD *)this + 1959);
          *((_DWORD *)this + 1958) = 0;
        }
      }
      if ( (int)v27 >= 0 )
        break;
      if ( (_DWORD)v27 != -1071775743 )
      {
        v38 = *((_QWORD *)this + 3);
        v39 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v11, v12);
        v39[5] = &v53;
        v39[3] = 270LL;
        v39[4] = 11LL;
        v39[6] = v27;
        v39[7] = v38;
        WdLogEvent5_WdCriticalError(v39);
        break;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(TransferSize);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1, 0);
      v7 = a4;
    }
    v22 = (_DWORD)v27 == -1071775743;
    v7 = a4;
  }
  while ( v22 );
  v28 = *(_DWORD **)(472LL * (unsigned int)v9 + *((_QWORD *)this + 5021) + 440);
  if ( (*v28 & 0x20) != 0 && ((_DWORD)a4[6] & 2) == 0 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_q((__int64)v28, &EventPerformanceWarning, v12, 23);
    if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v28, &EventProfilerEnter, v12, 8010);
    VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0, 0);
    VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
    if ( ((_DWORD)a4[6] & 4) == 0 )
    {
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
        (VIDMM_PROCESS *)a4,
        *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
        1);
      VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
        (VIDMM_PROCESS *)a4,
        *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
        0);
    }
    if ( (qword_1C003C050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v40, &EventProfilerExit, v41, 8010);
  }
}
