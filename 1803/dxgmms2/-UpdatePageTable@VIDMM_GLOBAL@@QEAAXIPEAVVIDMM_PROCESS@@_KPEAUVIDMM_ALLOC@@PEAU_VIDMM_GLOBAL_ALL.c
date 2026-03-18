/*
 * XREFs of ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C005F2A0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0058E60 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00594C0 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C4F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005D8B0 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C009E6BC (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
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
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00A2FD4 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@I@Z @ 0x1C00AC8DC (-RecordVaPagingHistoryUpdatePte@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAU_DXGK_BUILDPAGINGBUFFE.c)
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
  UINT v19; // r12d
  LONG v21; // ebx
  unsigned int v22; // r14d
  _OWORD *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  void *v29; // rax
  D3DGPU_VIRTUAL_ADDRESS v30; // r11
  __int64 v31; // rsi
  _QWORD *v32; // r8
  unsigned int NumPageTableEntries; // r10d
  __int64 v34; // rcx
  void *v35; // rcx
  void *v36; // rdx
  int v37; // eax
  LONG v38; // eax
  UINT SegmentId; // r9d
  __int64 v40; // rcx
  DXGK_PTE *pPageTableEntries64KB; // rax
  __int64 v42; // rcx
  void *v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r12
  int v47; // esi
  __int64 v48; // r14
  char v49; // al
  __int64 v50; // r9
  _BOOL8 v51; // rdx
  __int64 v52; // rcx
  SIZE_T v53; // rcx
  _QWORD *v54; // rax
  int v55; // r14d
  unsigned int v56; // esi
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER *v60; // rax
  __int64 v61; // rcx
  __int128 v62; // xmm0
  __int64 v63; // rsi
  _QWORD *v64; // rax
  char v65[8]; // [rsp+30h] [rbp-F8h]
  char v66[8]; // [rsp+38h] [rbp-F0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v68; // [rsp+B8h] [rbp-70h] BYREF
  struct _DXGK_PTE *v69; // [rsp+1F8h] [rbp+D0h]
  DXGK_PTE *v70; // [rsp+200h] [rbp+D8h]
  D3DGPU_VIRTUAL_ADDRESS v71; // [rsp+208h] [rbp+E0h]
  struct _VIDMM_GLOBAL_ALLOC *v72; // [rsp+210h] [rbp+E8h]
  struct VIDMM_PROCESS *v73; // [rsp+218h] [rbp+F0h]
  _QWORD v74[2]; // [rsp+220h] [rbp+F8h] BYREF
  unsigned __int64 v75; // [rsp+300h] [rbp+1D8h]

  v18 = *((_BYTE *)this + 7072) == 0;
  v19 = a2;
  v21 = a17;
  v22 = a12;
  v72 = a6;
  v69 = a10;
  v70 = a11;
  v71 = a4;
  v73 = a3;
  if ( v18 )
  {
    if ( (*((_BYTE *)this + 41448) & 0x10) != 0 )
      a15 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    memset(&v68, 0, sizeof(v68));
    v26 = *(_QWORD *)(*((_QWORD *)this + 2) + 528LL);
    v27 = *(_QWORD *)(*(_QWORD *)(v26 + 248) + 8LL * a12);
    if ( v27 )
    {
      v29 = *(void **)(v27 + 40);
    }
    else
    {
      if ( (*((_BYTE *)this + 41449) & 8) != 0 )
        v28 = *(_QWORD *)(v26 + 264);
      else
        v28 = *(_QWORD *)(v26 + 240);
      v29 = *(void **)(*(_QWORD *)(v28 + 8LL * a12) + 64LL);
    }
    v30 = a16 << 12;
    v75 = a16 << 12;
    v68.MultipassOffset = 0;
    v68.hSystemContext = v29;
    while ( 1 )
    {
      v31 = *((_QWORD *)this + a12 + 79);
      if ( (*(_DWORD *)(v31 + 32) & 4) == 0 )
      {
        v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v24, v25);
        v54[3] = 270LL;
        v54[4] = 29LL;
        v54[5] = v31;
        v54[6] = 0LL;
        v54[7] = 0LL;
        WdLogEvent5_WdCriticalError(v54);
        v30 = v75;
      }
      v32 = (_QWORD *)*((_QWORD *)this + a12 + 143);
      NumPageTableEntries = a9;
      v34 = *(_QWORD *)(v32[7] + 368LL);
      *((_QWORD *)this + a12 + 335) = v34;
      v35 = (void *)(*((unsigned int *)this + a12 + 414) + v34);
      *((_QWORD *)this + a12 + 335) = v35;
      v68.pDmaBuffer = v35;
      v36 = (void *)(*((unsigned int *)this + a12 + 542) + v32[16]);
      *((_QWORD *)this + a12 + 399) = v36;
      v37 = *((_DWORD *)this + a12 + 29);
      LODWORD(v35) = *((_DWORD *)this + a12 + 93) - *((_DWORD *)this + a12 + 542);
      v68.pDmaBufferPrivateData = v36;
      LODWORD(v36) = *((_DWORD *)this + a12 + 414);
      v68.DmaSize = v37 - (_DWORD)v36;
      v68.DmaBufferPrivateDataSize = (unsigned int)v35;
      v68.DmaBufferGpuVirtualAddress = v32[12];
      v74[0] = 0LL;
      v74[1] = 0LL;
      v38 = v21;
      v68.DmaBufferWriteOffset = (unsigned int)v36;
      v68.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v68.Transfer.Destination.SegmentAddress.HighPart = v21;
      v68.UnmapApertureSegment.DummyPage.HighPart = a9;
      if ( a15 )
      {
        if ( a15 == DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
        {
          v68.Transfer.TransferSize = a14;
        }
        else
        {
          v68.Fill.FillPattern = a13;
          v68.MapApertureSegment.OffsetInPages = a14;
        }
      }
      else
      {
        v68.Transfer.TransferSize = a14;
      }
      SegmentId = v19;
      v68.Transfer.Destination.SegmentId = a8;
      v68.ReadPhysical.SegmentId = v19;
      if ( v69 )
      {
        v68.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v69;
        v68.UpdatePageTable.pPageTableEntries64KB = v70;
      }
      else
      {
        v40 = *((_QWORD *)this + 5090);
        v68.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v74;
        pPageTableEntries64KB = (DXGK_PTE *)v74;
        if ( **(char **)(1560LL * a12 + v40 + 440) >= 0 )
          pPageTableEntries64KB = v68.UpdatePageTable.pPageTableEntries64KB;
        v68.UpdatePageTable.pPageTableEntries64KB = pPageTableEntries64KB;
        v38 = v21 | 1;
        v68.Transfer.Destination.SegmentAddress.HighPart = v21 | 1;
      }
      v68.Reserved.Reserved[20] = a15;
      v68.UpdatePageTable.FirstPteVirtualAddress = v30;
      if ( !v19 )
      {
        if ( a18 == 16 )
        {
          if ( (v21 & 8) != 0 )
            goto LABEL_76;
        }
        else if ( a18 == 1 && (v21 & 8) == 0 )
        {
LABEL_76:
          v38 |= 1u;
          v68.Transfer.Destination.SegmentAddress.HighPart = v38;
        }
      }
      v68.TransferVirtual.DestinationPageTable = v71;
      if ( v72 )
      {
        v52 = *((_QWORD *)v72 + 5);
        if ( v52 )
          v53 = *(_QWORD *)(v52 + 16);
        else
          v53 = *((_QWORD *)v72 + 6);
        v68.Fill.FillSize = v53;
        v68.UpdatePageTable.AllocationOffsetInBytes = a7;
      }
      v42 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v73 + 4) + 48LL) + 8LL
                                                                 * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL));
      if ( v42 )
        v43 = *(void **)(v42 + 16);
      else
        v43 = 0LL;
      v18 = *((_QWORD *)this + 5187) == 0LL;
      v68.UpdatePageTable.hProcess = v43;
      if ( !v18 )
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUpdatePte(this, v73, &v68.UpdatePageTable, a5, v72, v22);
        LOBYTE(v38) = v68.Reserved.Reserved[13];
        NumPageTableEntries = v68.UpdatePageTable.NumPageTableEntries;
        SegmentId = v68.ReadPhysical.SegmentId;
      }
      if ( *((_QWORD *)this + 5191) && !SegmentId && (v38 & 1) == 0 )
      {
        v55 = 0x10000;
        if ( (v38 & 8) == 0 )
          v55 = 4096;
        v56 = 0;
        if ( NumPageTableEntries )
        {
          do
          {
            v57 = *(_QWORD *)(v68.Transfer.Source.SegmentAddress.QuadPart + 16LL * v56);
            if ( (v57 & 1) != 0 )
            {
              VIDMM_GLOBAL::RecordPageMappingHistory(
                this,
                (v57 >> 5) & 0x1F,
                *(_QWORD *)(v68.Transfer.Source.SegmentAddress.QuadPart + 16LL * v56 + 8),
                1LL,
                1,
                v68.UpdatePageTable.FirstPteVirtualAddress + v56 * v55,
                *(_QWORD *)v66);
              NumPageTableEntries = v68.UpdatePageTable.NumPageTableEntries;
            }
            ++v56;
          }
          while ( v56 < NumPageTableEntries );
          v21 = a17;
        }
      }
      v44 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v68);
      v46 = -1LL;
      v26 = (unsigned int)(LODWORD(v68.pDmaBuffer) - *((_DWORD *)this + 2 * a12 + 670));
      v47 = LODWORD(v68.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * a12 + 798);
      v48 = v44;
      if ( LODWORD(v68.pDmaBuffer) != *((_DWORD *)this + 2 * a12 + 670) || v47 )
      {
        if ( !*((_DWORD *)this + a12 + 1171) )
        {
          *((_DWORD *)this + a12 + 1171) = 1;
          ++*((_QWORD *)this + a12 + 618);
        }
        v49 = *((_BYTE *)this + 41449);
        v46 = *((_QWORD *)this + a12 + 618);
        if ( (v49 & 2) != 0 )
          *((_BYTE *)this + 41449) = v49 & 0xFD;
      }
      *((_DWORD *)this + a12 + 414) += v26;
      if ( *((_DWORD *)this + a12 + 414) > *((_DWORD *)this + a12 + 29) )
      {
        v58 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v45, v25);
        v58[3] = 270LL;
        v58[4] = 18LL;
        v58[5] = 0LL;
        v58[6] = 0LL;
        v58[7] = 0LL;
        WdLogEvent5_WdCriticalError(v58);
      }
      *((_DWORD *)this + a12 + 542) += v47;
      if ( *((_DWORD *)this + a12 + 542) > *((_DWORD *)this + a12 + 93) )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v45, v25);
        v59[3] = 270LL;
        v59[4] = 19LL;
        v59[5] = 0LL;
        v59[6] = 0LL;
        v59[7] = 0LL;
        WdLogEvent5_WdCriticalError(v59);
      }
      if ( bTracingEnabled )
      {
        v25 = *((_QWORD *)this + a12 + 143);
        v50 = *((_QWORD *)this + 3);
        v51 = (_DWORD)v48 == -1071775743;
        if ( v68.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          v26 = v68.Reserved.Reserved[20];
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            *(_QWORD *)v66 = 0LL;
            *(_DWORD *)v65 = v48 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx(v68.Reserved.Reserved[20], v51, v25, v50, v25, *(_QWORD *)v65);
          }
        }
        else if ( v68.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            *(_QWORD *)v66 = 0LL;
            *(_DWORD *)v65 = v48 == -1071775743;
            McTemplateK0pptpqxpxx(v26, v51, v25, v50, v25, *(_QWORD *)v65);
          }
        }
        else
        {
          switch ( v68.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpqxqxqxq(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpxqqx(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpqqx(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v66 = v68.ReadPhysical.SegmentId;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptqx(v26, (__int64)&EventPagingOpReadPhysical, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_DWORD *)v66 = v68.ReadPhysical.SegmentId;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptqx(v26, (__int64)&EventPagingOpWritePhysical, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpqxxqt(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpqxxt(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpqxqxqxqqq(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpxxqqxx(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpqxpx(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpxxpq(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpqxq(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                *(_QWORD *)v66 = 0LL;
                *(_DWORD *)v65 = v48 == -1071775743;
                McTemplateK0pptpxx(v26, v51, v25, v50, v25, *(_QWORD *)v65);
              }
              break;
            default:
              break;
          }
        }
      }
      v24 = (_OWORD *)*((_QWORD *)this + 1050);
      if ( v24 )
      {
        *((_QWORD *)v24 + 45 * *((unsigned int *)this + 2102) + 1) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050)) = a12;
        v60 = &v68;
        v24 = (_OWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 24LL);
        v61 = 2LL;
        do
        {
          v24 += 8;
          v62 = *(_OWORD *)&v60->pDmaBuffer;
          v60 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v60 + 128);
          *(v24 - 8) = v62;
          *(v24 - 7) = *(_OWORD *)&v60[-1].Reserved.Reserved[42];
          *(v24 - 6) = *(_OWORD *)&v60[-1].Reserved.Reserved[46];
          *(v24 - 5) = *(_OWORD *)&v60[-1].Reserved.Reserved[50];
          *(v24 - 4) = *(_OWORD *)&v60[-1].Reserved.Reserved[54];
          *(v24 - 3) = *(_OWORD *)&v60[-1].Reserved.Reserved[58];
          *(v24 - 2) = *(_OWORD *)&v60[-1].Reserved.Reserved[62];
          *(v24 - 1) = *(_OWORD *)&v60[-1].DmaBufferGpuVirtualAddress;
          --v61;
        }
        while ( v61 );
        *v24 = *(_OWORD *)&v60->pDmaBuffer;
        v24[1] = *(_OWORD *)&v60->pDmaBufferPrivateData;
        v24[2] = *(_OWORD *)&v60->MultipassOffset;
        v24[3] = *(_OWORD *)&v60->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 2102) + *((_QWORD *)this + 1050) + 344) = v48;
        v26 = 360LL * *((unsigned int *)this + 2102);
        *(_QWORD *)(v26 + *((_QWORD *)this + 1050) + 352) = v46;
        if ( ++*((_DWORD *)this + 2102) >= *((_DWORD *)this + 2098) )
        {
          ++*((_DWORD *)this + 2103);
          *((_DWORD *)this + 2102) = 0;
        }
      }
      if ( (int)v48 >= 0 )
        goto LABEL_41;
      if ( (_DWORD)v48 == -1071775743 )
      {
        if ( g_IsInternalReleaseOrDbg )
          WdLogNewEntry5_WdTrace(v26);
        v22 = a12;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, a12, 1u, 0LL, 0LL, 1, 0);
        v30 = v75;
        v19 = a2;
      }
      else
      {
        v63 = *((_QWORD *)this + 3);
        v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v24, v25);
        v64[5] = &v68;
        v64[3] = 270LL;
        v64[4] = 11LL;
        v64[6] = v48;
        v64[7] = v63;
        WdLogEvent5_WdCriticalError(v64);
LABEL_41:
        v30 = v75;
        v18 = (_DWORD)v48 == -1071775743;
        v19 = a2;
        v22 = a12;
        if ( !v18 )
          return;
      }
    }
  }
}
