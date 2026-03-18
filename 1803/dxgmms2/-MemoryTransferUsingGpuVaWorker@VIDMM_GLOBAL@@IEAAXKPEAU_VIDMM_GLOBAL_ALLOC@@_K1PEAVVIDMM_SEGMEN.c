/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C006221C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00627D8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00A1B04 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00033CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pppxxq @ 0x1C0024190 (McTemplateK0pppxxq.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0058200 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C005A894 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0079BF4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C00A87B8 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACCB0 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
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
  unsigned __int64 v16; // r8
  bool v17; // r11
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r10
  __int64 v22; // r11
  __int64 v23; // rcx
  struct _MDL *v24; // rdx
  unsigned int v25; // r12d
  unsigned __int64 v26; // rcx
  SIZE_T v27; // rdi
  __int64 v28; // rax
  LARGE_INTEGER *v29; // rbx
  unsigned __int64 v30; // r15
  unsigned int v31; // ebx
  unsigned __int64 v32; // r14
  struct _MDL *v33; // rax
  unsigned __int64 v34; // rbx
  __int64 v35; // r15
  unsigned int v36; // r12d
  struct VIDMM_MAPPED_VA_RANGE *v37; // rcx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  struct VIDMM_MAPPED_VA_RANGE *v40; // rbx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // r8
  struct _VIDMM_GLOBAL_ALLOC *v43; // r8
  struct VIDMM_SEGMENT *v44; // r12
  D3DGPU_VIRTUAL_ADDRESS v45; // rax
  D3DGPU_VIRTUAL_ADDRESS v46; // rax
  ADAPTER_RENDER *v47; // r15
  __int64 v48; // rcx
  __int64 v49; // rax
  CVirtualAddressAllocator *v50; // rbx
  int v51; // eax
  __int64 v52; // rcx
  int v53; // ebx
  int v54; // ebx
  __int64 v55; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  bool v59; // sf
  struct VIDMM_MAPPED_VA_RANGE *v60; // r10
  __int64 *v61; // rdx
  __int64 v62; // rcx
  __int64 **v63; // rax
  LARGE_INTEGER *v64; // r9
  __int64 *v65; // rcx
  __int64 v66; // rdx
  __int64 **v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  struct VIDMM_SEGMENT *v72; // rcx
  struct _MDL *v73; // rdx
  _QWORD *v74; // rax
  struct _MDL *v75; // rcx
  unsigned __int8 *v76; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v77; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 v78; // [rsp+51h] [rbp-AFh] BYREF
  bool v79; // [rsp+52h] [rbp-AEh]
  unsigned int v80; // [rsp+54h] [rbp-ACh]
  __int64 v81; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v82; // [rsp+60h] [rbp-A0h]
  struct _MDL *v83; // [rsp+68h] [rbp-98h]
  unsigned int v84; // [rsp+70h] [rbp-90h]
  unsigned int v85; // [rsp+74h] [rbp-8Ch]
  SIZE_T v86; // [rsp+78h] [rbp-88h]
  unsigned __int64 v87; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER *v88; // [rsp+88h] [rbp-78h]
  struct _MDL *v89; // [rsp+90h] [rbp-70h]
  struct VIDMM_MAPPED_VA_RANGE *v90; // [rsp+98h] [rbp-68h]
  int v91; // [rsp+A0h] [rbp-60h]
  __int64 v92; // [rsp+A8h] [rbp-58h]
  struct VIDMM_SEGMENT *v93; // [rsp+B0h] [rbp-50h]
  __int64 v94; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v95; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v96; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v97; // [rsp+D0h] [rbp-30h]
  SIZE_T v98; // [rsp+D8h] [rbp-28h]
  struct VIDMM_SEGMENT *v99; // [rsp+E0h] [rbp-20h]
  struct _DXGKARG_BUILDPAGINGBUFFER v100; // [rsp+F0h] [rbp-10h] BYREF
  int v101; // [rsp+230h] [rbp+130h] BYREF
  int v102; // [rsp+234h] [rbp+134h]
  __int64 v103; // [rsp+238h] [rbp+138h]
  unsigned __int64 v104; // [rsp+240h] [rbp+140h]

  v16 = a7;
  v83 = a8;
  v17 = a10 < a7;
  v89 = a11;
  v80 = a2;
  v96 = a14;
  v18 = *((unsigned int *)this + 10372);
  v86 = a4;
  v93 = a6;
  v99 = a9;
  v79 = a10 < a7;
  if ( a6 == a9 )
  {
    if ( a7 == a10 )
      return;
    if ( a10 >= a7 )
      v19 = a10 - a7;
    else
      v19 = a7 - a10;
    if ( v19 > v18 )
      v19 = v18;
    v97 = v19;
  }
  else
  {
    v17 = 1;
    v97 = v18;
    v79 = 1;
    v19 = (unsigned int)v18;
  }
  v20 = a5;
  v21 = a12;
  if ( !v17 )
  {
    v20 = a4 + a5;
    v21 = a4 + a12;
  }
  v82 = v21;
  v87 = v20 + a10;
  v22 = v20 + a7;
  v81 = v20 + a7;
  v23 = 4096LL;
  if ( !a6 || (*((_DWORD *)a6 + 20) & 0x1000) != 0 )
    v84 = 0;
  else
    v84 = *((_DWORD *)a6 + 4) + 1;
  if ( !a9 || (*((_DWORD *)a9 + 20) & 0x1000) != 0 )
  {
    v85 = 0;
  }
  else
  {
    v23 = (unsigned int)(*((_DWORD *)a9 + 4) + 1);
    v85 = *((_DWORD *)a9 + 4) + 1;
  }
  v78 = 0;
  v77 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v23) + 24) = a3;
    v69 = (_QWORD *)WdLogNewEntry5_WdTrace(v68);
    v69[3] = v86;
    v69[4] = a5;
    v69[5] = a12;
    v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v70);
    v72 = v93;
    v73 = v83;
    v71[3] = v93;
    v71[4] = a7;
    v71[5] = v73;
    v74 = (_QWORD *)WdLogNewEntry5_WdTrace(v72);
    v75 = v89;
    v74[3] = a9;
    v74[4] = a10;
    v74[5] = v75;
    a4 = v86;
    v22 = v81;
    v21 = v82;
    v16 = a7;
  }
  v24 = v83;
  if ( a4 )
  {
    v25 = v80;
    v92 = v80;
    while ( 1 )
    {
      v26 = v87;
      v27 = (unsigned int)a4;
      v28 = v22;
      if ( a4 > v19 )
        v27 = (unsigned int)v19;
      v29 = (LARGE_INTEGER *)v21;
      if ( !v79 )
      {
        v28 = v22 - v27;
        v26 = v87 - v27;
        v29 = (LARGE_INTEGER *)(v21 - v27);
      }
      v30 = (unsigned __int64)v29;
      v88 = v29;
      v31 = v84;
      v32 = v28 - v16;
      v95 = v26;
      v94 = v28;
      v98 = v28 - v16;
      if ( !v24 )
        v30 = v28;
      while ( 1 )
      {
        v90 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40896),
                v25,
                v27,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v32,
                v31,
                v30,
                v24,
                (struct VIDMM_ALLOC *)&v78,
                v96);
        if ( v90 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v25, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v25);
        v24 = v83;
      }
      v33 = v89;
      v34 = (unsigned __int64)v88;
      v35 = v80;
      if ( !v89 )
        v34 = v95;
      v36 = v85;
      while ( 1 )
      {
        v37 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40896),
                v35,
                v27,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v32,
                v36,
                v34,
                v33,
                (struct VIDMM_ALLOC *)&v77,
                v96);
        v88 = (LARGE_INTEGER *)v37;
        if ( v37 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v35, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v35);
        v33 = v89;
      }
      v38 = *((_QWORD *)v37 + 13);
      v39 = *((_QWORD *)v37 + 12);
      v40 = v90;
      v41 = *((_QWORD *)v90 + 13);
      v42 = *((_QWORD *)v90 + 12);
      if ( v41 <= v38 )
        v41 = v38;
      if ( v42 >= v39 )
        v42 = v39;
      CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v35 + 5116), v35, v42, v41);
      memset(&v100, 0, sizeof(v100));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v35, v43, &v100);
      v19 = v97;
      v44 = v99;
      v100.Transfer.Destination.SegmentAddress.LowPart = v83 ? 1 : v89 == 0LL ? 2 : 0;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          this,
          (unsigned int)v35,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v100);
        if ( a3 )
        {
          v45 = a3[5];
          if ( v45 )
            v46 = *(_QWORD *)(v45 + 16);
          else
            v46 = a3[6];
        }
        else
        {
          v46 = 0LL;
        }
        v47 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        v100.UpdateContextAllocation.ContextAllocation = v46;
        v100.Fill.FillSize = v98;
        v100.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v100.Transfer.TransferSize = v27;
        v100.MapApertureSegment.OffsetInPages = *((_QWORD *)v40 + 12);
        v100.Transfer.Source.SegmentAddress = v88[12];
        v48 = *((_QWORD *)v47 + 126);
        if ( v48 )
          v49 = v48 + 144 * v92;
        else
          v49 = 0LL;
        if ( (*(_DWORD *)(v49 + 20) & 1) != 0 )
        {
          v50 = (CVirtualAddressAllocator *)*((_QWORD *)this + v92 + 5116);
          v100.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                         v50,
                                                                         v80,
                                                                         *((_QWORD *)v90 + 12),
                                                                         v78);
          v100.TransferVirtual.DestinationPageTable = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                      v50,
                                                                      v80,
                                                                      v88[12].QuadPart,
                                                                      v77);
          v100.Transfer.Destination.SegmentAddress.HighPart = v100.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v78 & 1 | (2 * (v77 & 1));
        }
        if ( *((_QWORD *)this + 5187) )
        {
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v100, (struct _VIDMM_GLOBAL_ALLOC *)a3);
          v47 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        }
        v51 = ADAPTER_RENDER::DdiBuildPagingBuffer(v47, &v100);
        v52 = *((_QWORD *)this + 877);
        v53 = v51;
        v91 = v51;
        if ( v52 && (!v44 || (*((_DWORD *)v44 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v52 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
            v27);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 1052, v27);
        if ( bTracingEnabled )
        {
          if ( !v93 || (v54 = 2, (*((_DWORD *)v93 + 20) & 0x1001) != 0) )
            v54 = 1;
          v55 = *((_QWORD *)this + v92 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v76) = v54;
            McTemplateK0pppxxq(v94, v57, v58, CurrentProcessId, a3, v55, v94, v27, v76);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7704), v27, v54);
          v53 = v91;
        }
        if ( v93 )
          v101 = *((_DWORD *)v93 + 4) + 1;
        else
          v101 = 0;
        v103 = v94;
        if ( v44 )
          v102 = *((_DWORD *)v44 + 4) + 1;
        else
          v102 = 0;
        v35 = v80;
        v104 = v95;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          this,
          v80,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v100,
          v53,
          0,
          &v101);
        v59 = v53 < 0;
        if ( v53 >= 0 )
        {
          v60 = v90;
          v61 = (__int64 *)((char *)v90 + 24);
          v62 = 1560 * v35 + *((_QWORD *)this + 5090) + 464LL;
          v63 = *(__int64 ***)(v62 + 8);
          if ( *v63 != (__int64 *)v62 )
            __fastfail(3u);
          v64 = v88;
          *v61 = v62;
          v61[1] = (__int64)v63;
          *v63 = v61;
          *(_QWORD *)(v62 + 8) = v61;
          v65 = (__int64 *)&v64[3];
          v66 = 1560 * v35 + *((_QWORD *)this + 5090) + 464LL;
          v67 = *(__int64 ***)(v66 + 8);
          if ( *v67 != (__int64 *)v66 )
            __fastfail(3u);
          *v65 = v66;
          v59 = v53 < 0;
          v64[4].QuadPart = (LONGLONG)v67;
          *v67 = v65;
          *(_QWORD *)(v66 + 8) = v65;
          *((_QWORD *)v60 + 5) = a3[22];
          v64[5].QuadPart = a3[22];
        }
        v40 = v90;
      }
      while ( v59 );
      a4 = v86 - v27;
      v86 -= v27;
      if ( v79 )
      {
        v87 += v27;
        v22 = v27 + v81;
        v21 = v27 + v82;
      }
      else
      {
        v87 -= v27;
        v22 = v81 - v27;
        v21 = v82 - v27;
      }
      v82 = v21;
      v81 = v22;
      if ( !a4 )
        break;
      v16 = a7;
      v25 = v80;
      v24 = v83;
    }
  }
}
