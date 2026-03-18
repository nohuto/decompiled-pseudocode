/*
 * XREFs of ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005DB1C
 * Callers:
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C005E16C (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C009BBB4 (-MemoryTransferUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEA.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E7C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0013284 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pppxxq @ 0x1C0021844 (McTemplateK0pppxxq.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C0054284 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B470 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B62C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B768 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D1C4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0072574 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z @ 0x1C007CC60 (-ChargeEvictionTransfer@VIDMM_PROCESS@@QEAAXK_K@Z.c)
 *     ?RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A58E0 (-RecordVaPagingHistoryVirtualTransfer@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransferUsingGpuVaWorker(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
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
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  bool v18; // r11
  unsigned int v19; // r8d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rbx
  unsigned int v26; // ecx
  unsigned __int64 v27; // r14
  struct _VIDMM_GLOBAL_ALLOC *v28; // r15
  unsigned int v29; // r13d
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rax
  struct _VIDMM_GLOBAL_ALLOC *v33; // r12
  unsigned int v34; // r14d
  unsigned int v35; // r13d
  unsigned __int64 v36; // r15
  unsigned __int64 v37; // rax
  struct VIDMM_MAPPED_VA_RANGE *v38; // rcx
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r8
  struct _VIDMM_GLOBAL_ALLOC *v41; // r8
  unsigned __int64 v42; // r13
  struct VIDMM_SEGMENT *v43; // r15
  struct _VIDMM_GLOBAL_ALLOC *v44; // rbx
  __int64 v45; // rax
  D3DGPU_VIRTUAL_ADDRESS v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  CVirtualAddressAllocator *v49; // rbx
  unsigned int VirtualAddressOfPageTable; // eax
  int v51; // eax
  __int64 v52; // rcx
  int v53; // ebx
  int v54; // ebx
  __int64 v55; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // r9d
  __int64 v60; // r8
  struct VIDMM_MAPPED_VA_RANGE *v61; // r11
  __int64 v62; // rcx
  __int64 *v63; // rdx
  __int64 **v64; // rax
  LARGE_INTEGER *v65; // r10
  LARGE_INTEGER *v66; // rcx
  __int64 v67; // rdx
  LARGE_INTEGER **v68; // rax
  __int64 v69; // rax
  struct _VIDMM_GLOBAL_ALLOC *v70; // rcx
  _QWORD *v71; // rax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  struct _MDL *v74; // rcx
  _QWORD *v75; // rax
  int v76; // [rsp+20h] [rbp-E0h]
  unsigned __int8 *v77; // [rsp+40h] [rbp-C0h]
  bool v78; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v79; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int8 v80[2]; // [rsp+52h] [rbp-AEh] BYREF
  unsigned int v81; // [rsp+54h] [rbp-ACh]
  unsigned __int64 v82; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v83; // [rsp+60h] [rbp-A0h]
  unsigned int v84; // [rsp+68h] [rbp-98h]
  unsigned int v85; // [rsp+6Ch] [rbp-94h]
  struct _VIDMM_GLOBAL_ALLOC *v86; // [rsp+70h] [rbp-90h]
  unsigned __int64 v87; // [rsp+78h] [rbp-88h]
  struct VIDMM_SEGMENT *v88; // [rsp+80h] [rbp-80h]
  unsigned __int64 v89; // [rsp+88h] [rbp-78h]
  __int64 v90; // [rsp+90h] [rbp-70h]
  struct _MDL *v91; // [rsp+98h] [rbp-68h]
  struct _MDL *v92; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v93; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v94; // [rsp+B0h] [rbp-50h]
  struct VIDMM_SEGMENT *v95; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v96; // [rsp+C0h] [rbp-40h]
  struct VIDMM_MAPPED_VA_RANGE *v97; // [rsp+C8h] [rbp-38h]
  LARGE_INTEGER *v98; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v100; // [rsp+E0h] [rbp-20h]
  struct _DXGKARG_BUILDPAGINGBUFFER v101; // [rsp+F0h] [rbp-10h] BYREF
  int v102; // [rsp+230h] [rbp+130h] BYREF
  int v103; // [rsp+234h] [rbp+134h]
  unsigned __int64 v104; // [rsp+238h] [rbp+138h]
  unsigned __int64 v105; // [rsp+240h] [rbp+140h]

  v15 = (unsigned __int64)a6;
  v16 = a4;
  v17 = a7;
  v91 = a8;
  v92 = a11;
  v18 = a10 < a7;
  v86 = a3;
  v19 = a2;
  v81 = a2;
  v99 = a14;
  v20 = *((unsigned int *)this + 10228);
  v89 = a4;
  v88 = a6;
  v95 = a9;
  v78 = a10 < a7;
  if ( a6 == a9 )
  {
    if ( a7 == a10 )
      return;
    if ( a10 >= a7 )
      v21 = a10 - a7;
    else
      v21 = a7 - a10;
    if ( v21 > v20 )
      v21 = v20;
    v100 = v21;
  }
  else
  {
    v18 = 1;
    v100 = v20;
    v78 = 1;
    v21 = (unsigned int)v20;
  }
  if ( v18 )
  {
    v87 = a12;
    v22 = a5;
  }
  else
  {
    v87 = a12 + a4;
    v22 = a5 + a4;
  }
  v23 = v22 + a10;
  v83 = v22 + a10;
  v24 = v22 + a7;
  v82 = v22 + a7;
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
    v15 = (unsigned int)(*((_DWORD *)a9 + 4) + 1);
    v85 = *((_DWORD *)a9 + 4) + 1;
  }
  v80[0] = 0;
  v79 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v69 = WdLogNewEntry5_WdTrace(v15);
    v70 = v86;
    *(_QWORD *)(v69 + 24) = v86;
    v71 = (_QWORD *)WdLogNewEntry5_WdTrace(v70);
    v71[3] = v16;
    v71[4] = a5;
    v71[5] = a12;
    v73 = (_QWORD *)WdLogNewEntry5_WdTrace(v72);
    v74 = v91;
    v73[3] = v88;
    v73[4] = a7;
    v73[5] = v74;
    v75 = (_QWORD *)WdLogNewEntry5_WdTrace(v74);
    v75[3] = v95;
    v75[5] = v92;
    v75[4] = a10;
    v18 = v78;
    v23 = v83;
    v24 = v82;
    v19 = v81;
  }
  if ( v16 )
  {
    v90 = v19;
    do
    {
      v25 = v87;
      v26 = v16;
      if ( v16 > v21 )
        v26 = v21;
      v27 = v24;
      if ( v18 )
      {
        v96 = v23;
      }
      else
      {
        v27 = v24 - v26;
        v96 = v23 - v26;
        v25 = v87 - v26;
      }
      v28 = v86;
      v29 = v81;
      v30 = v27 - v17;
      v93 = v27 - v17;
      v94 = v27;
      v31 = v26;
      while ( 1 )
      {
        v32 = v27;
        if ( v91 )
          v32 = v25;
        v97 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v29,
                v31,
                v28,
                v30,
                v84,
                v32,
                v91,
                v80,
                v99);
        if ( v97 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v29, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v29);
        v30 = v93;
      }
      v33 = v28;
      v34 = v29;
      v35 = v85;
      v36 = v93;
      while ( 1 )
      {
        v37 = v96;
        if ( v92 )
          v37 = v25;
        v38 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_GLOBAL *)((char *)this + 40320),
                v34,
                v31,
                v33,
                v36,
                v35,
                v37,
                v92,
                &v79,
                v99);
        v98 = (LARGE_INTEGER *)v38;
        if ( v38 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v34, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges(this, v34);
      }
      v39 = *((_QWORD *)v38 + 13);
      v40 = *((_QWORD *)v38 + 12);
      if ( *((_QWORD *)v97 + 13) > v39 )
        v39 = *((_QWORD *)v97 + 13);
      if ( *((_QWORD *)v97 + 12) < v40 )
        v40 = *((_QWORD *)v97 + 12);
      CVirtualAddressAllocator::FlushGpuVaTlb(*((CVirtualAddressAllocator **)this + v34 + 5044), v34, v40, v39);
      memset(&v101, 0, sizeof(v101));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer(this, v34, v41, &v101);
      v21 = v100;
      v17 = a7;
      v42 = v89;
      v43 = v88;
      if ( v91 )
        v101.Transfer.Destination.SegmentAddress.LowPart = 1;
      else
        v101.Transfer.Destination.SegmentAddress.LowPart = v92 == 0LL ? 2 : 0;
      v44 = v86;
      while ( 1 )
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(this, v81, v44, &v101);
        if ( v44 )
        {
          v45 = *((_QWORD *)v44 + 5);
          if ( v45 )
            v46 = *(_QWORD *)(v45 + 16);
          else
            v46 = *((_QWORD *)v44 + 6);
        }
        else
        {
          v46 = 0LL;
        }
        v101.UpdateContextAllocation.ContextAllocation = v46;
        v101.Fill.FillSize = v93;
        v101.Operation = DXGK_OPERATION_VIRTUAL_TRANSFER;
        v101.Transfer.TransferSize = v31;
        v101.MapApertureSegment.OffsetInPages = *((_QWORD *)v97 + 12);
        v101.Transfer.Source.SegmentAddress = v98[12];
        v47 = *(_QWORD *)(*((_QWORD *)this + 2) + 992LL);
        if ( v47 )
          v48 = v47 + 144 * v90;
        else
          v48 = 0LL;
        if ( (*(_DWORD *)(v48 + 20) & 1) != 0 )
        {
          v49 = (CVirtualAddressAllocator *)*((_QWORD *)this + v90 + 5044);
          v101.UnmapApertureSegment.DummyPage.QuadPart = (unsigned int)CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                                                         v49,
                                                                         v81,
                                                                         *((_QWORD *)v97 + 12),
                                                                         v80[0]);
          VirtualAddressOfPageTable = CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
                                        v49,
                                        v81,
                                        v98[12].QuadPart,
                                        v79);
          v44 = v86;
          v101.TransferVirtual.DestinationPageTable = VirtualAddressOfPageTable;
          v101.Transfer.Destination.SegmentAddress.HighPart = v101.Transfer.Destination.SegmentAddress.HighPart & 0xFFFFFFFC | v80[0] & 1 | (2 * (v79 & 1));
        }
        if ( *((_QWORD *)this + 5115) )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualTransfer(this, &v101, v44);
        v51 = ADAPTER_RENDER::DdiBuildPagingBuffer(*((ADAPTER_RENDER **)this + 2), &v101);
        v52 = *((_QWORD *)this + 805);
        v53 = v51;
        LODWORD(v89) = v51;
        if ( v52 && (!v95 || (*((_DWORD *)v95 + 20) & 0x1001) != 0) )
          VIDMM_PROCESS::ChargeEvictionTransfer(
            *(VIDMM_PROCESS **)(v52 + 8),
            *(_DWORD *)(*((_QWORD *)this + 3) + 200LL),
            v31);
        _InterlockedExchangeAdd64((volatile signed __int64 *)this + 980, v31);
        if ( bTracingEnabled )
        {
          if ( !v43 || (v54 = 2, (*((_DWORD *)v43 + 20) & 0x1001) != 0) )
            v54 = 1;
          v55 = *((_QWORD *)this + v90 + 143);
          CurrentProcessId = PsGetCurrentProcessId();
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v77) = v54;
            McTemplateK0pppxxq((__int64)v86, v57, v58, CurrentProcessId, v86, v55, v94, v31, v77);
          }
          VidMmRecordTransfer((VIDMM_GLOBAL *)((char *)this + 7128), v31, v54);
          v43 = v88;
          v53 = v89;
        }
        if ( v43 )
          v102 = *((_DWORD *)v43 + 4) + 1;
        else
          v102 = 0;
        v104 = v94;
        if ( v95 )
          v103 = *((_DWORD *)v95 + 4) + 1;
        else
          v103 = 0;
        v105 = v96;
        v76 = v53;
        v44 = v86;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(this, v81, v86, &v101, v76, 0, &v102);
        v59 = v89;
        if ( (v89 & 0x80000000) == 0LL )
        {
          v60 = 1552 * v90;
          v61 = v97;
          v62 = 1552 * v90 + *((_QWORD *)this + 5021) + 456LL;
          v63 = (__int64 *)((char *)v97 + 24);
          v64 = *(__int64 ***)(v62 + 8);
          if ( *v64 != (__int64 *)v62 )
            __fastfail(3u);
          v65 = v98;
          *v63 = v62;
          v63[1] = (__int64)v64;
          *v64 = v63;
          *(_QWORD *)(v62 + 8) = v63;
          v66 = v65 + 3;
          v67 = v60 + *((_QWORD *)this + 5021) + 456LL;
          v68 = *(LARGE_INTEGER ***)(v67 + 8);
          if ( *v68 != (LARGE_INTEGER *)v67 )
            __fastfail(3u);
          v66->QuadPart = v67;
          v65[4].QuadPart = (LONGLONG)v68;
          *v68 = v66;
          *(_QWORD *)(v67 + 8) = v66;
          *((_QWORD *)v61 + 5) = *((_QWORD *)v44 + 22);
          v65[5] = *(LARGE_INTEGER *)((char *)v44 + 176);
          if ( v59 >= 0 )
            break;
        }
      }
      v18 = v78;
      v16 = v42 - v31;
      v89 = v16;
      if ( v78 )
      {
        v24 = v31 + v82;
        v23 = v31 + v83;
        v87 += v31;
      }
      else
      {
        v24 = v82 - v31;
        v23 = v83 - v31;
        v87 -= v31;
      }
      v83 = v23;
      v82 = v24;
    }
    while ( v16 );
  }
}
