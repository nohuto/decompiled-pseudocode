/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005A814
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005AE04 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00940B0 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002834 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0012304 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pppxxq @ 0x1C001F774 (Template_pppxxq.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005043C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C0052764 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005837C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0058548 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0058684 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059F28 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C006DCE0 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009D5BC (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct VIDMM_SEGMENT *a6,
        unsigned __int64 a7,
        struct _MDL *a8,
        struct VIDMM_SEGMENT *a9,
        unsigned __int64 a10,
        struct _MDL *a11,
        unsigned __int64 a12,
        struct _DXGK_TRANSFERFLAGS a13,
        unsigned __int64 a14)
{
  SIZE_T v15; // r13
  unsigned __int64 v16; // r12
  bool v17; // cl
  unsigned int v18; // r9d
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r11
  __int64 v24; // rcx
  unsigned __int64 v25; // r10
  bool v26; // al
  unsigned __int64 v27; // rbx
  unsigned int v28; // ecx
  unsigned __int64 v29; // r14
  struct _VIDMM_GLOBAL_ALLOC *v30; // r15
  unsigned int v31; // r13d
  unsigned __int64 v32; // rdx
  SIZE_T v33; // rsi
  unsigned __int64 v34; // rax
  struct _VIDMM_GLOBAL_ALLOC *v35; // r12
  unsigned int v36; // r14d
  unsigned int v37; // r13d
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rax
  struct VIDMM_MAPPED_VA_RANGE *v40; // rcx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r8
  struct _VIDMM_GLOBAL_ALLOC *v43; // r8
  SIZE_T v44; // r13
  struct VIDMM_SEGMENT *v45; // r15
  struct _VIDMM_GLOBAL_ALLOC *v46; // rbx
  __int64 v47; // rax
  D3DGPU_VIRTUAL_ADDRESS v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  CVirtualAddressAllocator *v51; // rbx
  unsigned int VirtualAddressOfPageTable; // eax
  int v53; // eax
  __int64 v54; // rcx
  int v55; // ebx
  int v56; // r9d
  __int64 v57; // r8
  struct VIDMM_MAPPED_VA_RANGE *v58; // r11
  __int64 v59; // rcx
  __int64 *v60; // rdx
  __int64 **v61; // rax
  LARGE_INTEGER *v62; // r10
  LARGE_INTEGER *v63; // rcx
  __int64 v64; // rdx
  LARGE_INTEGER **v65; // rax
  __int64 v66; // rax
  struct _VIDMM_GLOBAL_ALLOC *v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rax
  struct _MDL *v71; // rcx
  _QWORD *v72; // rax
  int v73; // ebx
  __int64 v74; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v76; // rdx
  __int64 v77; // r8
  int v78; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v79; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v80; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v81; // [rsp+51h] [rbp-AFh] BYREF
  bool v82; // [rsp+52h] [rbp-AEh]
  unsigned int v83; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v84; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v85; // [rsp+60h] [rbp-A0h]
  unsigned int v86; // [rsp+68h] [rbp-98h]
  unsigned int v87; // [rsp+6Ch] [rbp-94h]
  struct _VIDMM_GLOBAL_ALLOC *v88; // [rsp+70h] [rbp-90h]
  unsigned __int64 v89; // [rsp+78h] [rbp-88h]
  struct VIDMM_SEGMENT *v90; // [rsp+80h] [rbp-80h]
  SIZE_T v91; // [rsp+88h] [rbp-78h]
  __int64 v92; // [rsp+90h] [rbp-70h]
  struct _MDL *v93; // [rsp+98h] [rbp-68h]
  struct _MDL *v94; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v95; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v96; // [rsp+B0h] [rbp-50h]
  struct VIDMM_SEGMENT *v97; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v98; // [rsp+C0h] [rbp-40h]
  struct VIDMM_MAPPED_VA_RANGE *v99; // [rsp+C8h] [rbp-38h]
  LARGE_INTEGER *v100; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v101; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v102; // [rsp+E0h] [rbp-20h]
  struct _DXGKARG_BUILDPAGINGBUFFER v103; // [rsp+F0h] [rbp-10h] BYREF
  int v104; // [rsp+230h] [rbp+130h] BYREF
  int v105; // [rsp+234h] [rbp+134h]
  unsigned __int64 v106; // [rsp+238h] [rbp+138h]
  unsigned __int64 v107; // [rsp+240h] [rbp+140h]

  v15 = a4;
  v16 = a7;
  v93 = a8;
  v94 = a11;
  v17 = a10 < a7;
  v91 = a4;
  v18 = a2;
  v88 = a3;
  v83 = a2;
  v101 = a14;
  v19 = *((unsigned int *)this + 10228);
  v90 = a6;
  v97 = a9;
  v82 = a10 < a7;
  if ( a6 == a9 )
  {
    if ( a7 == a10 )
      return;
    if ( a10 >= a7 )
      v20 = a10 - a7;
    else
      v20 = a7 - a10;
    if ( v20 > v19 )
      v20 = v19;
    v102 = v20;
  }
  else
  {
    v17 = 1;
    v102 = v19;
    v82 = 1;
    v20 = (unsigned int)v19;
  }
  if ( v17 )
  {
    v89 = a12;
    v21 = a5;
    v22 = a5;
  }
  else
  {
    v21 = a5 + v15;
    v89 = a12 + v15;
    v22 = a5 + v15;
  }
  v23 = v22 + a10;
  v24 = 4096LL;
  v85 = v23;
  v25 = v21 + a7;
  v84 = v21 + a7;
  if ( !a6 || (*((_DWORD *)a6 + 20) & 0x1000) != 0 )
    v86 = 0;
  else
    v86 = *((_DWORD *)a6 + 4) + 1;
  if ( !a9 || (*((_DWORD *)a9 + 20) & 0x1000) != 0 )
  {
    v87 = 0;
  }
  else
  {
    v24 = (unsigned int)(*((_DWORD *)a9 + 4) + 1);
    v87 = *((_DWORD *)a9 + 4) + 1;
  }
  v81 = 0;
  v80 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v66 = WdLogNewEntry5_WdTrace(v24);
    v67 = v88;
    *(_QWORD *)(v66 + 24) = v88;
    v68 = (_QWORD *)WdLogNewEntry5_WdTrace(v67);
    v68[3] = v15;
    v68[4] = a5;
    v68[5] = a12;
    v70 = (_QWORD *)WdLogNewEntry5_WdTrace(v69);
    v71 = v93;
    v70[3] = v90;
    v70[4] = a7;
    v70[5] = v71;
    v72 = (_QWORD *)WdLogNewEntry5_WdTrace(v71);
    v72[3] = v97;
    v72[5] = v94;
    v72[4] = a10;
    v23 = v85;
    v25 = v84;
    v18 = v83;
  }
  if ( v15 )
  {
    v92 = v18;
    v26 = v82;
    do
    {
      v27 = v89;
      v28 = v15;
      if ( v15 > v20 )
        v28 = v20;
      v29 = v25;
      if ( v26 )
      {
        v98 = v23;
      }
      else
      {
        v29 = v25 - v28;
        v98 = v23 - v28;
        v27 = v89 - v28;
      }
      v30 = v88;
      v31 = v83;
      v32 = v29 - v16;
      v95 = v29 - v16;
      v96 = v29;
      v33 = v28;
      while ( 1 )
      {
        v34 = v29;
        if ( v93 )
          v34 = v27;
        v99 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v31,
                v33,
                v30,
                v32,
                v86,
                v34,
                v93,
                (struct VIDMM_ALLOC *)&v81,
                v101);
        if ( v99 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v31, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v31);
        v32 = v95;
      }
      v35 = v30;
      v36 = v31;
      v37 = v87;
      v38 = v95;
      while ( 1 )
      {
        v39 = v98;
        if ( v94 )
          v39 = v27;
        v40 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v36,
                v33,
                v35,
                v38,
                v37,
                v39,
                v94,
                (struct VIDMM_ALLOC *)&v80,
                v101);
        v100 = (LARGE_INTEGER *)v40;
        if ( v40 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v36, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v36);
      }
      v41 = *((_QWORD *)v40 + 13);
      v42 = *((_QWORD *)v40 + 12);
      if ( *((_QWORD *)v99 + 13) > v41 )
        v41 = *((_QWORD *)v99 + 13);
      if ( *((_QWORD *)v99 + 12) < v42 )
        v42 = *((_QWORD *)v99 + 12);
      CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v36 + 5044), v36, v42, v41);
      memset(&v103, 0, sizeof(v103));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v36, v43, &v103);
      v20 = v102;
      v16 = a7;
      v44 = v91;
      v45 = v90;
      if ( v93 )
        v103.Transfer.Destination.SegmentAddress.LowPart = 1;
      else
        v103.Transfer.Destination.SegmentAddress.LowPart = v94 == 0LL ? 2 : 0;
      v46 = v88;
      while ( 1 )
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v83, v46, &v103);
        if ( v46 )
        {
          v47 = *((_QWORD *)v46 + 5);
          if ( v47 )
            v48 = *(_QWORD *)(v47 + 16);
          else
            v48 = *((_QWORD *)v46 + 6);
        }
        else
        {
          v48 = 0LL;
        }
        v103.UpdateContextAllocation.ContextAllocation = v48;
        v103.Fill.FillSize = v95;
        v103.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v103.Transfer.TransferSize = v33;
        v103.MapApertureSegment.OffsetInPages = *((_QWORD *)v99 + 12);
        v103.Transfer.Source.SegmentAddress = v100[12];
        v49 = *(_QWORD *)(*((_QWORD *)this + 2) + 896LL);
        if ( v49 )
          v50 = v49 + 144 * v92;
        else
          v50 = 0LL;
        if ( (*(_DWORD *)(v50 + 20) & 1) != 0 )
        {
          v51 = (CVirtualAddressAllocator *)*((_QWORD *)this + v92 + 5044);
          v103.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                         v51,
                                                                         v83,
                                                                         *((_QWORD *)v99 + 12),
                                                                         v81);
          VirtualAddressOfPageTable = CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                        v51,
                                        v83,
                                        v100[12].QuadPart,
                                        v80);
          v46 = v88;
          v103.TransferVirtual.DestinationPageTable = VirtualAddressOfPageTable;
          v103.Transfer.Destination.SegmentAddress.HighPart = v103.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v81 & 1 | (2 * (v80 & 1));
        }
        if ( *((_QWORD *)this + 5115) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v103, v46);
        v53 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v103);
        v54 = *((_QWORD *)this + 805);
        v55 = v53;
        LODWORD(v91) = v53;
        if ( v54 && (!v97 || (*((_DWORD *)v97 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v54 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
            v33);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 980, v33);
        if ( bTracingEnabled )
        {
          if ( !v45 || (v73 = 2, (*((_DWORD *)v45 + 20) & 0x1001) != 0) )
            v73 = 1;
          v74 = *((_QWORD *)this + v92 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v79) = v73;
            Template_pppxxq((__int64)v88, v76, v77, CurrentProcessId, v88, v74, v96, v33, v79);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), v33, v73);
          v45 = v90;
          v55 = v91;
        }
        if ( v45 )
          v104 = *((_DWORD *)v45 + 4) + 1;
        else
          v104 = 0;
        v106 = v96;
        if ( v97 )
          v105 = *((_DWORD *)v97 + 4) + 1;
        else
          v105 = 0;
        v107 = v98;
        v78 = v55;
        v46 = v88;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((signed __int64)this, v83, v88, &v103, v78, 0, &v104);
        v56 = v91;
        if ( (v91 & 0x80000000) == 0LL )
        {
          v57 = 472 * v92;
          v58 = v99;
          v59 = 472 * v92 + *((_QWORD *)this + 5021) + 456LL;
          v60 = (__int64 *)((char *)v99 + 24);
          v61 = *(__int64 ***)(v59 + 8);
          if ( *v61 != (__int64 *)v59 )
            __fastfail(3u);
          v62 = v100;
          *v60 = v59;
          v60[1] = (__int64)v61;
          *v61 = v60;
          *(_QWORD *)(v59 + 8) = v60;
          v63 = v62 + 3;
          v64 = v57 + *((_QWORD *)this + 5021) + 456LL;
          v65 = *(LARGE_INTEGER ***)(v64 + 8);
          if ( *v65 != (LARGE_INTEGER *)v64 )
            __fastfail(3u);
          v63->QuadPart = v64;
          v62[4].QuadPart = (LONGLONG)v65;
          *v65 = v63;
          *(_QWORD *)(v64 + 8) = v63;
          *((_QWORD *)v58 + 5) = *((_QWORD *)v46 + 22);
          v62[5] = *(LARGE_INTEGER *)((char *)v46 + 176);
          if ( v56 >= 0 )
            break;
        }
      }
      v26 = v82;
      v15 = v44 - v33;
      v91 = v15;
      if ( v82 )
      {
        v25 = v33 + v84;
        v23 = v33 + v85;
        v89 += v33;
      }
      else
      {
        v25 = v84 - v33;
        v23 = v85 - v33;
        v89 -= v33;
      }
      v85 = v23;
      v84 = v25;
    }
    while ( v15 );
  }
}
