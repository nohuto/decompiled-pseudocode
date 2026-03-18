/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C00579C0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0050850 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0050EDC (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0055260 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0091E2C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002834 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
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
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C0094B6C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C009D1F4 (-RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UP.c)
 */

void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        UINT a2,
        struct VIDMM_PROCESS *a3,
        D3DGPU_VIRTUAL_ADDRESS a4,
        struct VIDMM_ALLOC *a5,
        struct _VIDMM_GLOBAL_ALLOC *a6,
        UINT64 a7,
        UINT a8,
        LONG a9,
        struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        DXGK_UPDATEPAGETABLEFLAGS a17,
        unsigned __int64 a18)
{
  bool v18; // zf
  UINT v19; // r13d
  unsigned int v21; // r14d
  enum _DXGK_PAGETABLEUPDATEMODE v22; // r12d
  _OWORD *v23; // rdx
  __int64 v24; // r8
  SIZE_T TransferSize; // rcx
  __int64 v26; // rax
  D3DGPU_VIRTUAL_ADDRESS v27; // r11
  void *v28; // rax
  __int64 v29; // rsi
  _QWORD *v30; // r8
  unsigned int NumPageTableEntries; // r10d
  __int64 v32; // rcx
  void *v33; // rcx
  void *v34; // rdx
  int v35; // eax
  LONG v36; // eax
  UINT SegmentId; // r9d
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r13
  int v41; // esi
  __int64 v42; // r14
  __int64 v43; // rcx
  SIZE_T v44; // rcx
  _QWORD *v45; // rax
  int v46; // r14d
  unsigned int i; // esi
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // r9
  _BOOL8 v52; // rdx
  struct _DXGKARG_BUILDPAGINGBUFFER *v53; // rax
  __int64 v54; // rcx
  __int128 v55; // xmm0
  __int64 v56; // rsi
  _QWORD *v57; // rax
  char v58[8]; // [rsp+30h] [rbp-F8h]
  char v59[8]; // [rsp+38h] [rbp-F0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v61; // [rsp+B8h] [rbp-70h] BYREF
  struct _DXGK_PTE *v62; // [rsp+1F8h] [rbp+D0h]
  DXGK_PTE *v63; // [rsp+200h] [rbp+D8h]
  D3DGPU_VIRTUAL_ADDRESS v64; // [rsp+208h] [rbp+E0h]
  struct _VIDMM_GLOBAL_ALLOC *v65; // [rsp+210h] [rbp+E8h]
  struct VIDMM_PROCESS *v66; // [rsp+218h] [rbp+F0h]
  _QWORD v67[2]; // [rsp+220h] [rbp+F8h] BYREF
  unsigned __int64 v68; // [rsp+300h] [rbp+1D8h]

  v18 = *((_BYTE *)this + 6496) == 0;
  v19 = a2;
  v21 = a12;
  v65 = a6;
  v62 = a10;
  v63 = a11;
  v64 = a4;
  v66 = a3;
  if ( v18 )
  {
    v22 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    if ( (*((_BYTE *)this + 40872) & 8) == 0 )
      v22 = a15;
    memset(&v61, 0, sizeof(v61));
    TransferSize = *(_QWORD *)(*((_QWORD *)this + 2) + 416LL);
    if ( (*((_BYTE *)this + 40873) & 4) != 0 )
      v26 = *(_QWORD *)(TransferSize + 240);
    else
      v26 = *(_QWORD *)(TransferSize + 232);
    v27 = a16 << 12;
    v68 = a16 << 12;
    v28 = *(void **)(*(_QWORD *)(v26 + 8LL * a12) + 64LL);
    v61.MultipassOffset = 0;
    v61.hSystemContext = v28;
    while ( 1 )
    {
      v29 = *((_QWORD *)this + a12 + 79);
      if ( (*(_DWORD *)(v29 + 32) & 4) == 0 )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v23, v24);
        v45[3] = 270LL;
        v45[4] = 29LL;
        v45[5] = v29;
        v45[6] = 0LL;
        v45[7] = 0LL;
        WdLogEvent5_WdCriticalError(v45);
        v27 = v68;
      }
      v30 = (_QWORD *)*((_QWORD *)this + a12 + 143);
      NumPageTableEntries = a9;
      v32 = *(_QWORD *)(v30[7] + 368LL);
      *((_QWORD *)this + a12 + 335) = v32;
      v33 = (void *)(*((unsigned int *)this + a12 + 414) + v32);
      *((_QWORD *)this + a12 + 335) = v33;
      v61.pDmaBuffer = v33;
      v34 = (void *)(*((unsigned int *)this + a12 + 542) + v30[16]);
      *((_QWORD *)this + a12 + 399) = v34;
      v35 = *((_DWORD *)this + a12 + 29);
      LODWORD(v33) = *((_DWORD *)this + a12 + 93) - *((_DWORD *)this + a12 + 542);
      v61.pDmaBufferPrivateData = v34;
      LODWORD(v34) = *((_DWORD *)this + a12 + 414);
      v61.DmaSize = v35 - (_DWORD)v34;
      v61.DmaBufferPrivateDataSize = (unsigned int)v33;
      v61.DmaBufferGpuVirtualAddress = v30[12];
      v67[0] = 0LL;
      v67[1] = 0LL;
      v36 = (LONG)a17;
      v61.DmaBufferWriteOffset = (unsigned int)v34;
      v61.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v61.UpdatePageTable.Flags = a17;
      v61.UnmapApertureSegment.DummyPage.HighPart = a9;
      if ( v22 )
      {
        if ( v22 == DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
        {
          v61.Transfer.TransferSize = a14;
        }
        else
        {
          v61.Fill.FillPattern = a13;
          v61.MapApertureSegment.OffsetInPages = a14;
        }
      }
      else
      {
        v61.Transfer.TransferSize = a14;
      }
      SegmentId = v19;
      v61.Transfer.Destination.SegmentId = a8;
      v61.ReadPhysical.SegmentId = v19;
      if ( v62 )
      {
        v61.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v62;
        v61.UpdatePageTable.pPageTableEntries64KB = v63;
      }
      else
      {
        v61.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v67;
        if ( (**(_DWORD **)(472LL * a12 + *((_QWORD *)this + 5021) + 440) & 0x80u) != 0 )
          v61.UpdatePageTable.pPageTableEntries64KB = (DXGK_PTE *)v67;
        v36 = *(_DWORD *)&a17 | 1;
        v61.Transfer.Destination.SegmentAddress.HighPart = *(_DWORD *)&a17 | 1;
      }
      v61.Reserved.Reserved[20] = v22;
      v61.UpdatePageTable.FirstPteVirtualAddress = v27;
      if ( !v19 )
      {
        if ( a18 == 16 )
        {
          if ( (*(_BYTE *)&a17 & 8) != 0 )
            goto LABEL_53;
        }
        else if ( a18 == 1 && (*(_BYTE *)&a17 & 8) == 0 )
        {
LABEL_53:
          v36 |= 1u;
          v61.Transfer.Destination.SegmentAddress.HighPart = v36;
        }
      }
      v61.TransferVirtual.DestinationPageTable = v64;
      if ( v65 )
      {
        v43 = *((_QWORD *)v65 + 5);
        if ( v43 )
          v44 = *(_QWORD *)(v43 + 16);
        else
          v44 = *((_QWORD *)v65 + 6);
        v61.Fill.FillSize = v44;
        v61.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v18 = *((_QWORD *)this + 5115) == 0LL;
      v61.UpdatePageTable.hProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 4) + 40LL)
                                                           + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL))
                                               + 16LL);
      if ( !v18 )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(
          this,
          *(struct _EPROCESS **)v66,
          &v61.UpdatePageTable,
          a5,
          v65,
          v21);
        LOBYTE(v36) = v61.Reserved.Reserved[13];
        NumPageTableEntries = v61.UpdatePageTable.NumPageTableEntries;
        SegmentId = v61.ReadPhysical.SegmentId;
      }
      if ( *((_QWORD *)this + 5119) && !SegmentId && (v36 & 1) == 0 )
      {
        v46 = 0x10000;
        if ( (v36 & 8) == 0 )
          v46 = 4096;
        for ( i = 0; i < NumPageTableEntries; ++i )
        {
          v48 = *(_QWORD *)(v61.Transfer.Source.SegmentAddress.QuadPart + 16LL * i);
          if ( (v48 & 1) != 0 )
          {
            VIDMM_GLOBAL::RecordPageMappingHistory(
              this,
              (v48 >> 5) & 0x1F,
              *(_QWORD *)(v61.Transfer.Source.SegmentAddress.QuadPart + 16LL * i + 8),
              1LL,
              1,
              v61.UpdatePageTable.FirstPteVirtualAddress + i * v46,
              *(_QWORD *)v59);
            NumPageTableEntries = v61.UpdatePageTable.NumPageTableEntries;
          }
        }
      }
      v38 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v61);
      v40 = -1LL;
      TransferSize = (unsigned int)(LODWORD(v61.pDmaBuffer) - *((_DWORD *)this + 2 * a12 + 670));
      v41 = LODWORD(v61.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a12 + 798);
      v42 = v38;
      if ( LODWORD(v61.pDmaBuffer) != *((_DWORD *)this + 2 * a12 + 670) || v41 )
      {
        if ( !*((_DWORD *)this + a12 + 1155) )
        {
          *((_DWORD *)this + a12 + 1155) = 1;
          ++*((_QWORD *)this + a12 + 610);
        }
        v40 = *((_QWORD *)this + a12 + 610);
      }
      *((_DWORD *)this + a12 + 414) += TransferSize;
      if ( *((_DWORD *)this + a12 + 414) > *((_DWORD *)this + a12 + 29) )
      {
        v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v39, v24);
        v49[5] = 0LL;
        v49[6] = 0LL;
        v49[7] = 0LL;
        v49[3] = 270LL;
        v49[4] = 18LL;
        WdLogEvent5_WdCriticalError(v49);
      }
      *((_DWORD *)this + a12 + 542) += v41;
      if ( *((_DWORD *)this + a12 + 542) > *((_DWORD *)this + a12 + 93) )
      {
        v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v39, v24);
        v50[5] = 0LL;
        v50[6] = 0LL;
        v50[7] = 0LL;
        v50[3] = 270LL;
        v50[4] = 19LL;
        WdLogEvent5_WdCriticalError(v50);
      }
      if ( bTracingEnabled )
      {
        v24 = *((_QWORD *)this + a12 + 143);
        v51 = *((_QWORD *)this + 3);
        v52 = (_DWORD)v42 == -1071775743;
        switch ( v61.Operation )
        {
          case DXGK_OPERATION_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqxqxqxq(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpxqqx(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_DISCARD_CONTENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqqx(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_READ_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v59 = v61.ReadPhysical.SegmentId;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptqx(TransferSize, &EventPagingOpReadPhysical, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_WRITE_PHYSICAL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_DWORD *)v59 = v61.ReadPhysical.SegmentId;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptqx(TransferSize, &EventPagingOpWritePhysical, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqxxqt(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqxxt(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqxqxqxqqq(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_TRANSFER:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpxxqqxxxqqxxx(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_VIRTUAL_FILL:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpxxqqxx(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqxpx(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_UPDATE_PAGE_TABLE:
            if ( v61.Reserved.Reserved[20] < 2 )
            {
              TransferSize = v61.Transfer.TransferSize;
            }
            else if ( v61.Reserved.Reserved[20] == 2 )
            {
              TransferSize = v61.MapApertureSegment.OffsetInPages;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqxqqppqqxxpqx(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_FLUSH_TLB:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqxpxx(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpxxpq(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          case DXGK_OPERATION_NOTIFY_RESIDENCY:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              *(_QWORD *)v59 = 0LL;
              *(_DWORD *)v58 = v42 == -1071775743;
              Template_pptpqxq(TransferSize, v52, v24, v51, v24, *(_QWORD *)v58);
            }
            break;
          default:
            break;
        }
      }
      v23 = (_OWORD *)*((_QWORD *)this + 978);
      if ( v23 )
      {
        v24 = 0LL;
        *((_QWORD *)v23 + 45 * *((unsigned int *)this + 1958) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978)) = a12;
        v53 = &v61;
        v23 = (_OWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 24LL);
        v54 = 2LL;
        do
        {
          v23 += 8;
          v55 = *(_OWORD *)&v53->pDmaBuffer;
          v53 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v53 + 128);
          *(v23 - 8) = v55;
          *(v23 - 7) = *(_OWORD *)&v53[-1].Reserved.Reserved[42];
          *(v23 - 6) = *(_OWORD *)&v53[-1].Reserved.Reserved[46];
          *(v23 - 5) = *(_OWORD *)&v53[-1].Reserved.Reserved[50];
          *(v23 - 4) = *(_OWORD *)&v53[-1].Reserved.Reserved[54];
          *(v23 - 3) = *(_OWORD *)&v53[-1].Reserved.Reserved[58];
          *(v23 - 2) = *(_OWORD *)&v53[-1].Reserved.Reserved[62];
          *(v23 - 1) = *(_OWORD *)&v53[-1].DmaBufferGpuVirtualAddress;
          --v54;
        }
        while ( v54 );
        *v23 = *(_OWORD *)&v53->pDmaBuffer;
        v23[1] = *(_OWORD *)&v53->pDmaBufferPrivateData;
        v23[2] = *(_OWORD *)&v53->MultipassOffset;
        v23[3] = *(_OWORD *)&v53->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 344) = v42;
        TransferSize = 360LL * *((unsigned int *)this + 1958);
        *(_QWORD *)(TransferSize + *((_QWORD *)this + 978) + 352) = v40;
        if ( ++*((_DWORD *)this + 1958) >= *((_DWORD *)this + 1954) )
        {
          ++*((_DWORD *)this + 1959);
          *((_DWORD *)this + 1958) = 0;
        }
      }
      if ( (int)v42 >= 0 )
        goto LABEL_34;
      if ( (_DWORD)v42 == -1071775743 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(TransferSize);
        v21 = a12;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, a12, 1u, 0LL, 0LL, 1, 0);
        v27 = v68;
        v19 = a2;
      }
      else
      {
        v56 = *((_QWORD *)this + 3);
        v57 = (_QWORD *)WdLogNewEntry5_WdCriticalError(TransferSize, v23, v24);
        v57[5] = &v61;
        v57[3] = 270LL;
        v57[4] = 11LL;
        v57[6] = v42;
        v57[7] = v56;
        WdLogEvent5_WdCriticalError(v57);
LABEL_34:
        v19 = a2;
        v18 = (_DWORD)v42 == -1071775743;
        v21 = a12;
        v27 = v68;
        if ( !v18 )
          return;
      }
    }
  }
}
