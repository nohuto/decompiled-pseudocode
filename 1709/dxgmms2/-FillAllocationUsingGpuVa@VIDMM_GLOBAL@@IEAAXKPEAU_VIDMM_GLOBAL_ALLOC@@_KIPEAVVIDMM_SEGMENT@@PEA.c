/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005D814
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005D770 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0001CCC (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E7C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0013284 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     McTemplateK0pppxxq @ 0x1C0021844 (McTemplateK0pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B470 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B62C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B768 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D1C4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0072574 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A5768 (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        ADAPTER_RENDER **this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        unsigned __int64 a4,
        UINT a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  unsigned __int64 v7; // r14
  LONGLONG QuadPart; // rbx
  __int64 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  bool v15; // cc
  unsigned __int64 v16; // r12
  struct VIDMM_SEGMENT *v17; // r14
  unsigned int v18; // eax
  LARGE_INTEGER *v19; // r13
  struct _VIDMM_GLOBAL_ALLOC *v20; // r8
  D3DGPU_VIRTUAL_ADDRESS v21; // rax
  D3DGPU_VIRTUAL_ADDRESS v22; // rax
  bool v23; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // eax
  LARGE_INTEGER *v28; // rcx
  unsigned __int64 v29; // r14
  __int64 v30; // rdx
  LARGE_INTEGER **v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rax
  unsigned __int8 *v35; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v36[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh]
  LONGLONG v38; // [rsp+58h] [rbp-A8h]
  int v39; // [rsp+60h] [rbp-A0h]
  struct VIDMM_SEGMENT *v40; // [rsp+68h] [rbp-98h]
  unsigned __int64 v41; // [rsp+70h] [rbp-90h]
  ADAPTER_RENDER *v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  unsigned __int64 v44; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_BUILDPAGINGBUFFER v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+1D0h] [rbp+D0h] BYREF
  LONGLONG v47; // [rsp+1D8h] [rbp+D8h]

  v7 = a4;
  v41 = a4;
  QuadPart = a7->QuadPart;
  v38 = a7->QuadPart;
  v11 = a2;
  v40 = a6;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
    v33 = WdLogNewEntry5_WdTrace(v32);
    *(_QWORD *)(v33 + 24) = v7;
    *(_QWORD *)(v33 + 32) = a5;
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(a5);
    v34[4] = SHIDWORD(v38);
    v34[5] = (unsigned int)QuadPart;
    v34[3] = a6;
  }
  v12 = *((unsigned int *)this + 10228);
  v13 = 0LL;
  v39 = *((_DWORD *)this + 10228);
  v38 = 0LL;
  v36[0] = 0;
  if ( v7 )
  {
    v14 = (unsigned int)v12;
    v44 = v12;
    v43 = 1552 * v11;
    while ( 1 )
    {
      v15 = v7 <= v14;
      v16 = (unsigned int)v7;
      v17 = v40;
      if ( !v15 )
        v16 = (unsigned int)v12;
      while ( 1 )
      {
        v18 = (*((_DWORD *)v17 + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)v17 + 4) + 1;
        v19 = (LARGE_INTEGER *)VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                                 (VIDMM_PAGING_PROCESS *)(this + 5040),
                                 v11,
                                 v16,
                                 (struct _VIDMM_GLOBAL_ALLOC *)a3,
                                 v13,
                                 v18,
                                 QuadPart,
                                 0LL,
                                 v36,
                                 0LL);
        if ( v19 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v11, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)this, v11);
        v13 = v38;
      }
      CVirtualAddressAllocator::FlushGpuVaTlb(this[v11 + 5044], v11, v19[12].QuadPart, v19[13].QuadPart);
      VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v11, v20, &v45);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          (VIDMM_GLOBAL *)this,
          (unsigned int)v11,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v45);
        v45.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v21 = a3[5];
          if ( v21 )
            v22 = *(_QWORD *)(v21 + 16);
          else
            v22 = a3[6];
        }
        else
        {
          v22 = 0LL;
        }
        v23 = this[5115] == 0LL;
        v45.UpdateContextAllocation.ContextAllocation = v22;
        v45.Transfer.Source.SegmentId = a5;
        v45.Transfer.TransferSize = v16;
        v45.Transfer.Source.SegmentAddress = v19[12];
        if ( !v23 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
            (VIDMM_GLOBAL *)this,
            &v45,
            v11,
            (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v37 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v45);
        if ( bTracingEnabled )
        {
          v42 = this[v11 + 143];
          CurrentProcessId = PsGetCurrentProcessId();
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v35) = 0;
            McTemplateK0pppxxq((__int64)v42, v25, v26, CurrentProcessId, a3, v42, 0LL, v16, v35);
          }
        }
        VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), v16, 0);
        v27 = *((_DWORD *)v17 + 4) + 1;
        v47 = QuadPart;
        v46 = v27;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          (VIDMM_GLOBAL *)this,
          (unsigned int)v11,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v45,
          v37,
          0,
          &v46);
      }
      while ( v37 < 0 );
      v28 = v19 + 3;
      v29 = v41;
      v30 = (__int64)this[5021] + v43 + 456;
      v31 = *(LARGE_INTEGER ***)(v30 + 8);
      if ( *v31 != (LARGE_INTEGER *)v30 )
        __fastfail(3u);
      v28->QuadPart = v30;
      v7 = v29 - v16;
      v19[4].QuadPart = (LONGLONG)v31;
      QuadPart += v16;
      *v31 = v28;
      *(_QWORD *)(v30 + 8) = v28;
      v13 = v16 + v38;
      v19[5].QuadPart = a3[22];
      v41 = v7;
      v38 = v13;
      if ( !v7 )
        break;
      LODWORD(v12) = v39;
      v14 = v44;
    }
  }
}
