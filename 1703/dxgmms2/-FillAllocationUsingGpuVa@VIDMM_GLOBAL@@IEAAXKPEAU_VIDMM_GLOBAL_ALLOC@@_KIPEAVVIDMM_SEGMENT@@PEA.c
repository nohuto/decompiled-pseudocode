/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A544
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A4A0 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C00026DC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002834 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0012304 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pppxxq @ 0x1C001F774 (Template_pppxxq.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C005043C (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005837C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0058548 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059F28 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     VidSchGetDriverPagingContext @ 0x1C006D1FC (VidSchGetDriverPagingContext.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009D444 (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        SIZE_T a4,
        UINT a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  SIZE_T v7; // r14
  LONGLONG QuadPart; // rbx
  __int64 v11; // r15
  SIZE_T v12; // rdx
  unsigned __int64 v13; // rcx
  SIZE_T v14; // r8
  bool v15; // cc
  SIZE_T v16; // r12
  struct VIDMM_SEGMENT *v17; // r14
  unsigned int v18; // eax
  LARGE_INTEGER *v19; // r13
  __int64 v20; // r8
  void *DriverPagingContext; // rax
  __int64 v22; // rax
  D3DGPU_VIRTUAL_ADDRESS v23; // rax
  bool v24; // zf
  int v25; // eax
  LARGE_INTEGER *v26; // rcx
  SIZE_T v27; // r14
  __int64 v28; // rdx
  LARGE_INTEGER **v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rax
  HANDLE CurrentProcessId; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int8 *v36; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v37[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh]
  LONGLONG v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+60h] [rbp-A0h]
  struct VIDMM_SEGMENT *v41; // [rsp+68h] [rbp-98h]
  SIZE_T v42; // [rsp+70h] [rbp-90h]
  ADAPTER_RENDER *v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h]
  SIZE_T v45; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_BUILDPAGINGBUFFER v46; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+1D0h] [rbp+D0h] BYREF
  LONGLONG v48; // [rsp+1D8h] [rbp+D8h]

  v7 = a4;
  v42 = a4;
  QuadPart = a7->QuadPart;
  v39 = a7->QuadPart;
  v11 = a2;
  v41 = a6;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
    v31 = WdLogNewEntry5_WdTrace(v30);
    *(_QWORD *)(v31 + 24) = v7;
    *(_QWORD *)(v31 + 32) = a5;
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(a5);
    v32[4] = SHIDWORD(v39);
    v32[5] = (unsigned int)QuadPart;
    v32[3] = a6;
  }
  v12 = *((unsigned int *)this + 10228);
  v13 = 0LL;
  v40 = *((_DWORD *)this + 10228);
  v39 = 0LL;
  v37[0] = 0;
  if ( v7 )
  {
    v14 = (unsigned int)v12;
    v45 = v12;
    v44 = 472 * v11;
    while ( 1 )
    {
      v15 = v7 <= v14;
      v16 = (unsigned int)v7;
      v17 = v41;
      if ( !v15 )
        v16 = (unsigned int)v12;
      while ( 1 )
      {
        v18 = (*((_DWORD *)v17 + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)v17 + 4) + 1;
        v19 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                 (VIDMM_PAGING_PROCESS *)(this + 5040),
                                 v11,
                                 v16,
                                 a3,
                                 v13,
                                 v18,
                                 QuadPart,
                                 0LL,
                                 (struct VIDMM_ALLOC *)v37,
                                 0LL);
        if ( v19 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v11, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)this, v11);
        v13 = v39;
      }
      CVirtualAddressAllocator::FlushGpuVaTlb(this[v11 + 5044], v11, v19[12].QuadPart, v19[13].QuadPart);
      memset(&v46, 0, sizeof(v46));
      LOBYTE(v20) = (*((_BYTE *)this + 40873) & 4) != 0;
      DriverPagingContext = (void *)VidSchGetDriverPagingContext(*((_QWORD *)this[2] + 52), (unsigned int)v11, v20);
      v46.MultipassOffset = 0;
      v46.hSystemContext = DriverPagingContext;
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v11, a3, &v46);
        v46.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v22 = *((_QWORD *)a3 + 5);
          if ( v22 )
            v23 = *(_QWORD *)(v22 + 16);
          else
            v23 = *((_QWORD *)a3 + 6);
        }
        else
        {
          v23 = 0LL;
        }
        v24 = this[5115] == 0LL;
        v46.UpdateContextAllocation.ContextAllocation = v23;
        v46.Transfer.Source.SegmentId = a5;
        v46.Transfer.TransferSize = v16;
        v46.Transfer.Source.SegmentAddress = v19[12];
        if ( !v24 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill((VIDMM_GLOBAL *)this, &v46, v11, a3);
        v38 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v46);
        if ( bTracingEnabled )
        {
          v43 = this[v11 + 143];
          CurrentProcessId = PsGetCurrentProcessId();
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v36) = 0;
            Template_pppxxq((__int64)v43, v34, v35, CurrentProcessId, a3, v43, 0LL, v16, v36);
          }
        }
        VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), v16, 0);
        v25 = *((_DWORD *)v17 + 4) + 1;
        v48 = QuadPart;
        v47 = v25;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          (signed __int64)this,
          (unsigned int)v11,
          a3,
          &v46,
          v38,
          0,
          &v47);
      }
      while ( v38 < 0 );
      v26 = v19 + 3;
      v27 = v42;
      v28 = (__int64)this[5021] + v44 + 456;
      v29 = *(LARGE_INTEGER ***)(v28 + 8);
      if ( *v29 != (LARGE_INTEGER *)v28 )
        __fastfail(3u);
      v26->QuadPart = v28;
      v7 = v27 - v16;
      v19[4].QuadPart = (LONGLONG)v29;
      QuadPart += v16;
      *v29 = v26;
      *(_QWORD *)(v28 + 8) = v26;
      v13 = v16 + v39;
      v19[5] = *(LARGE_INTEGER *)((char *)a3 + 176);
      v42 = v7;
      v39 = v13;
      if ( !v7 )
        break;
      LODWORD(v12) = v40;
      v14 = v45;
    }
  }
}
