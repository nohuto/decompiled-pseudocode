/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005A9B0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0055C00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0056EA0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00575C0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0057C60 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0099548 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E7C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
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
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C009CABC (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00A5508 (-RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFE.c)
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
        LONG a17,
        unsigned __int64 a18)
{
  bool v18; // zf
  UINT v19; // r13d
  unsigned int v21; // r15d
  enum _DXGK_PAGETABLEUPDATEMODE v22; // r12d
  _OWORD *v23; // rdx
  __int64 v24; // r8
  __int64 FillPattern; // rcx
  __int64 v26; // rax
  LONG v27; // ebx
  D3DGPU_VIRTUAL_ADDRESS v28; // r11
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
  int v41; // ecx
  int v42; // esi
  __int64 v43; // r15
  __int64 v44; // r9
  _BOOL8 v45; // rdx
  __int64 v46; // rcx
  SIZE_T v47; // rcx
  _QWORD *v48; // rax
  int v49; // r15d
  unsigned int v50; // esi
  unsigned __int64 v51; // rdx
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v54; // rax
  __int64 v55; // rcx
  __int128 v56; // xmm0
  __int64 v57; // rsi
  _QWORD *v58; // rax
  char v59[8]; // [rsp+30h] [rbp-F8h]
  char v60[8]; // [rsp+38h] [rbp-F0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v62; // [rsp+B8h] [rbp-70h] BYREF
  struct _DXGK_PTE *v63; // [rsp+1F8h] [rbp+D0h]
  DXGK_PTE *v64; // [rsp+200h] [rbp+D8h]
  D3DGPU_VIRTUAL_ADDRESS v65; // [rsp+208h] [rbp+E0h]
  struct _VIDMM_GLOBAL_ALLOC *v66; // [rsp+210h] [rbp+E8h]
  struct VIDMM_PROCESS *v67; // [rsp+218h] [rbp+F0h]
  _QWORD v68[2]; // [rsp+220h] [rbp+F8h] BYREF
  unsigned __int64 v69; // [rsp+300h] [rbp+1D8h]

  v18 = *((_BYTE *)this + 6496) == 0;
  v19 = a2;
  v21 = a12;
  v66 = a6;
  v63 = a10;
  v64 = a11;
  v65 = a4;
  v67 = a3;
  if ( v18 )
  {
    v22 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    if ( (*((_BYTE *)this + 40872) & 8) == 0 )
      v22 = a15;
    memset(&v62, 0, sizeof(v62));
    FillPattern = *(_QWORD *)(*((_QWORD *)this + 2) + 512LL);
    if ( (*((_BYTE *)this + 40873) & 4) != 0 )
      v26 = *(_QWORD *)(FillPattern + 248);
    else
      v26 = *(_QWORD *)(FillPattern + 240);
    v27 = a17;
    v28 = a16 << 12;
    v62.hSystemContext = *(HANDLE *)(*(_QWORD *)(v26 + 8LL * a12) + 64LL);
    v62.MultipassOffset = 0;
    v69 = a16 << 12;
    while ( 1 )
    {
      v29 = *((_QWORD *)this + a12 + 79);
      if ( (*(_DWORD *)(v29 + 32) & 4) == 0 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v23, v24);
        v48[3] = 270LL;
        v48[4] = 29LL;
        v48[5] = v29;
        v48[6] = 0LL;
        v48[7] = 0LL;
        WdLogEvent5_WdCriticalError(v48);
        v28 = v69;
      }
      v30 = (_QWORD *)*((_QWORD *)this + a12 + 143);
      NumPageTableEntries = a9;
      v32 = *(_QWORD *)(v30[7] + 368LL);
      *((_QWORD *)this + a12 + 335) = v32;
      v33 = (void *)(*((unsigned int *)this + a12 + 414) + v32);
      *((_QWORD *)this + a12 + 335) = v33;
      v62.pDmaBuffer = v33;
      v34 = (void *)(*((unsigned int *)this + a12 + 542) + v30[16]);
      *((_QWORD *)this + a12 + 399) = v34;
      v35 = *((_DWORD *)this + a12 + 29);
      LODWORD(v33) = *((_DWORD *)this + a12 + 93) - *((_DWORD *)this + a12 + 542);
      v62.pDmaBufferPrivateData = v34;
      LODWORD(v34) = *((_DWORD *)this + a12 + 414);
      v62.DmaSize = v35 - (_DWORD)v34;
      v62.DmaBufferPrivateDataSize = (unsigned int)v33;
      v62.DmaBufferGpuVirtualAddress = v30[12];
      v68[0] = 0LL;
      v68[1] = 0LL;
      v36 = v27;
      v62.DmaBufferWriteOffset = (unsigned int)v34;
      v62.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v62.Transfer.Destination.SegmentAddress.HighPart = v27;
      v62.UnmapApertureSegment.DummyPage.HighPart = a9;
      if ( v22 )
      {
        if ( v22 == DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
        {
          v62.Transfer.TransferSize = a14;
        }
        else
        {
          v62.Fill.FillPattern = a13;
          v62.MapApertureSegment.OffsetInPages = a14;
        }
      }
      else
      {
        v62.Transfer.TransferSize = a14;
      }
      SegmentId = v19;
      v62.Transfer.Destination.SegmentId = a8;
      v62.ReadPhysical.SegmentId = v19;
      if ( v63 )
      {
        v62.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v63;
        v62.UpdatePageTable.pPageTableEntries64KB = v64;
      }
      else
      {
        v62.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v68;
        if ( (**(_DWORD **)(1552LL * a12 + *((_QWORD *)this + 5021) + 440) & 0x80u) != 0 )
          v62.UpdatePageTable.pPageTableEntries64KB = (DXGK_PTE *)v68;
        v36 = v27 | 1;
        v62.Transfer.Destination.SegmentAddress.HighPart = v27 | 1;
      }
      v62.Reserved.Reserved[20] = v22;
      v62.UpdatePageTable.FirstPteVirtualAddress = v28;
      if ( !v19 )
      {
        if ( a18 == 16 )
        {
          if ( (v27 & 8) != 0 )
            goto LABEL_73;
        }
        else if ( a18 == 1 && (v27 & 8) == 0 )
        {
LABEL_73:
          v36 |= 1u;
          v62.Transfer.Destination.SegmentAddress.HighPart = v36;
        }
      }
      v62.TransferVirtual.DestinationPageTable = v65;
      if ( v66 )
      {
        v46 = *((_QWORD *)v66 + 5);
        if ( v46 )
          v47 = *(_QWORD *)(v46 + 16);
        else
          v47 = *((_QWORD *)v66 + 6);
        v62.Fill.FillSize = v47;
        v62.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v18 = *((_QWORD *)this + 5115) == 0LL;
      v62.UpdatePageTable.hProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v67 + 4) + 40LL)
                                                           + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL))
                                               + 16LL);
      if ( !v18 )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(this, v67, &v62.UpdatePageTable, a5, v66, v21);
        LOBYTE(v36) = v62.Reserved.Reserved[13];
        NumPageTableEntries = v62.UpdatePageTable.NumPageTableEntries;
        SegmentId = v62.ReadPhysical.SegmentId;
      }
      if ( *((_QWORD *)this + 5119) && !SegmentId && (v36 & 1) == 0 )
      {
        v49 = 0x10000;
        if ( (v36 & 8) == 0 )
          v49 = 4096;
        v50 = 0;
        if ( NumPageTableEntries )
        {
          do
          {
            v51 = *(_QWORD *)(v62.Transfer.Source.SegmentAddress.QuadPart + 16LL * v50);
            if ( (v51 & 1) != 0 )
            {
              VIDMM_GLOBAL::RecordPageMappingHistory(
                this,
                (v51 >> 5) & 0x1F,
                *(_QWORD *)(v62.Transfer.Source.SegmentAddress.QuadPart + 16LL * v50 + 8),
                1LL,
                1,
                v62.UpdatePageTable.FirstPteVirtualAddress + v50 * v49,
                *(_QWORD *)v60);
              NumPageTableEntries = v62.UpdatePageTable.NumPageTableEntries;
            }
            ++v50;
          }
          while ( v50 < NumPageTableEntries );
          v27 = a17;
        }
      }
      v38 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v62);
      v40 = -1LL;
      v41 = LODWORD(v62.pDmaBuffer) - *((_DWORD *)this + 2 * a12 + 670);
      v42 = LODWORD(v62.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a12 + 798);
      v43 = v38;
      if ( LODWORD(v62.pDmaBuffer) != *((_DWORD *)this + 2 * a12 + 670) || v42 )
      {
        if ( !*((_DWORD *)this + a12 + 1155) )
        {
          *((_DWORD *)this + a12 + 1155) = 1;
          ++*((_QWORD *)this + a12 + 610);
        }
        v40 = *((_QWORD *)this + a12 + 610);
      }
      FillPattern = (unsigned int)(*((_DWORD *)this + a12 + 414) + v41);
      *((_DWORD *)this + a12 + 414) = FillPattern;
      if ( (unsigned int)FillPattern > *((_DWORD *)this + a12 + 29) )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v39, v24);
        v52[3] = 270LL;
        v52[4] = 18LL;
        v52[5] = 0LL;
        v52[6] = 0LL;
        v52[7] = 0LL;
        WdLogEvent5_WdCriticalError(v52);
      }
      *((_DWORD *)this + a12 + 542) += v42;
      if ( *((_DWORD *)this + a12 + 542) > *((_DWORD *)this + a12 + 93) )
      {
        v53 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v39, v24);
        v53[3] = 270LL;
        v53[4] = 19LL;
        v53[5] = 0LL;
        v53[6] = 0LL;
        v53[7] = 0LL;
        WdLogEvent5_WdCriticalError(v53);
      }
      if ( bTracingEnabled )
      {
        v24 = *((_QWORD *)this + a12 + 143);
        v44 = *((_QWORD *)this + 3);
        v45 = (_DWORD)v43 == -1071775743;
        if ( v62.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          FillPattern = 0LL;
          if ( v62.Reserved.Reserved[20] == 2 )
            FillPattern = v62.Fill.FillPattern;
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            *(_QWORD *)v60 = 0LL;
            *(_DWORD *)v59 = v43 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
          }
        }
        else if ( v62.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            *(_QWORD *)v60 = 0LL;
            *(_DWORD *)v59 = v43 == -1071775743;
            McTemplateK0pptpqxpxx(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
          }
        }
        else
        {
          switch ( v62.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpqxqxqxq(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpxqqx(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpqqx(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v60 = v62.ReadPhysical.SegmentId;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptqx(FillPattern, (__int64)&EventPagingOpReadPhysical, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v60 = v62.ReadPhysical.SegmentId;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptqx(FillPattern, (__int64)&EventPagingOpWritePhysical, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpqxxqt(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpqxxt(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpqxqxqxqqq(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpxxqqxx(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpqxpx(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpxxpq(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v60 = 0LL;
                *(_DWORD *)v59 = v43 == -1071775743;
                McTemplateK0pptpqxq(FillPattern, v45, v24, v44, v24, *(_QWORD *)v59);
              }
              break;
            default:
              break;
          }
        }
      }
      v23 = (_OWORD *)*((_QWORD *)this + 978);
      if ( v23 )
      {
        *((_QWORD *)v23 + 45 * *((unsigned int *)this + 1958) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978)) = a12;
        v54 = &v62;
        v23 = (_OWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 24LL);
        v55 = 2LL;
        do
        {
          v23 += 8;
          v56 = *(_OWORD *)&v54->pDmaBuffer;
          v54 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v54 + 128);
          *(v23 - 8) = v56;
          *(v23 - 7) = *(_OWORD *)&v54[-1].Reserved.Reserved[42];
          *(v23 - 6) = *(_OWORD *)&v54[-1].Reserved.Reserved[46];
          *(v23 - 5) = *(_OWORD *)&v54[-1].Reserved.Reserved[50];
          *(v23 - 4) = *(_OWORD *)&v54[-1].Reserved.Reserved[54];
          *(v23 - 3) = *(_OWORD *)&v54[-1].Reserved.Reserved[58];
          *(v23 - 2) = *(_OWORD *)&v54[-1].Reserved.Reserved[62];
          *(v23 - 1) = *(_OWORD *)&v54[-1].DmaBufferGpuVirtualAddress;
          --v55;
        }
        while ( v55 );
        *v23 = *(_OWORD *)&v54->pDmaBuffer;
        v23[1] = *(_OWORD *)&v54->pDmaBufferPrivateData;
        v23[2] = *(_OWORD *)&v54->MultipassOffset;
        v23[3] = *(_OWORD *)&v54->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 344) = v43;
        FillPattern = 360LL * *((unsigned int *)this + 1958);
        *(_QWORD *)(FillPattern + *((_QWORD *)this + 978) + 352) = v40;
        if ( ++*((_DWORD *)this + 1958) >= *((_DWORD *)this + 1954) )
        {
          ++*((_DWORD *)this + 1959);
          *((_DWORD *)this + 1958) = 0;
        }
      }
      if ( (int)v43 >= 0 )
        goto LABEL_39;
      if ( (_DWORD)v43 == -1071775743 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(FillPattern);
        v21 = a12;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, a12, 1u, 0LL, 0LL, 1, 0);
        v28 = v69;
        v19 = a2;
      }
      else
      {
        v57 = *((_QWORD *)this + 3);
        v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(FillPattern, v23, v24);
        v58[5] = &v62;
        v58[3] = 270LL;
        v58[4] = 11LL;
        v58[6] = v43;
        v58[7] = v57;
        WdLogEvent5_WdCriticalError(v58);
LABEL_39:
        v19 = a2;
        v18 = (_DWORD)v43 == -1071775743;
        v21 = a12;
        v28 = v69;
        if ( !v18 )
          return;
      }
    }
  }
}
