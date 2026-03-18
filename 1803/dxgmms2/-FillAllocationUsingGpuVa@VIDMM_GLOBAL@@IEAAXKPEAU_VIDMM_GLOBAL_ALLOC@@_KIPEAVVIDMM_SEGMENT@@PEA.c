/*
 * XREFs of ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0061F10
 * Callers:
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0061E6C (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00033CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0004FC8 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McTemplateK0pppxxq @ 0x1C0024190 (McTemplateK0pppxxq.c)
 *     ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL_ALLOC@@0I0PEAU_MDL@@PEAE0@Z @ 0x1C0058200 (-MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAU_VIDMM_GLOBAL.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0079BF4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACB3C (-RecordVaPagingHistoryVirtualFill@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@KPEAU_VIDMM.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationUsingGpuVa(
        ADAPTER_RENDER **this,
        unsigned int a2,
        D3DGPU_VIRTUAL_ADDRESS *a3,
        SIZE_T a4,
        UINT a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  SIZE_T v7; // r15
  LONGLONG QuadPart; // rbx
  __int64 v11; // r12
  unsigned __int64 QuadPart_high; // rsi
  SIZE_T v13; // rdx
  unsigned __int64 v14; // rcx
  SIZE_T v15; // r8
  bool v16; // cc
  SIZE_T v17; // rsi
  struct VIDMM_SEGMENT *v18; // r15
  unsigned int v19; // eax
  struct VIDMM_MAPPED_VA_RANGE *v20; // rax
  LARGE_INTEGER *v21; // r13
  struct _VIDMM_GLOBAL_ALLOC *v22; // r8
  D3DGPU_VIRTUAL_ADDRESS v23; // rax
  D3DGPU_VIRTUAL_ADDRESS v24; // rax
  bool v25; // zf
  HANDLE CurrentProcessId; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  int v29; // eax
  LARGE_INTEGER *v30; // rcx
  SIZE_T v31; // r15
  __int64 v32; // rdx
  LARGE_INTEGER **v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int8 *v37; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v38[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+54h] [rbp-ACh]
  int v40; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+60h] [rbp-A0h]
  struct VIDMM_SEGMENT *v42; // [rsp+68h] [rbp-98h]
  SIZE_T v43; // [rsp+70h] [rbp-90h]
  ADAPTER_RENDER *v44; // [rsp+78h] [rbp-88h]
  __int64 v45; // [rsp+80h] [rbp-80h]
  SIZE_T v46; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_BUILDPAGINGBUFFER v47; // [rsp+90h] [rbp-70h] BYREF
  int v48; // [rsp+1D0h] [rbp+D0h] BYREF
  LONGLONG v49; // [rsp+1D8h] [rbp+D8h]

  v7 = a4;
  v43 = a4;
  QuadPart = a7->QuadPart;
  v11 = a2;
  QuadPart_high = HIDWORD(a7->QuadPart);
  v42 = a6;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
    v35 = WdLogNewEntry5_WdTrace(v34);
    *(_QWORD *)(v35 + 24) = v7;
    *(_QWORD *)(v35 + 32) = a5;
    v36 = (_QWORD *)WdLogNewEntry5_WdTrace(a5);
    v36[4] = (int)QuadPart_high;
    v36[5] = (unsigned int)QuadPart;
    v36[3] = a6;
  }
  v13 = *((unsigned int *)this + 10372);
  v14 = 0LL;
  v40 = *((_DWORD *)this + 10372);
  v41 = 0LL;
  v38[0] = 0;
  if ( v7 )
  {
    v15 = (unsigned int)v13;
    v46 = v13;
    v45 = 1560 * v11;
    while ( 1 )
    {
      v16 = v7 <= v15;
      v17 = (unsigned int)v7;
      v18 = v42;
      if ( !v16 )
        v17 = (unsigned int)v13;
      while ( 1 )
      {
        v19 = (*((_DWORD *)v18 + 20) & 0x1000) != 0 ? 0 : *((_DWORD *)v18 + 4) + 1;
        v20 = VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
                (VIDMM_PAGING_PROCESS *)(this + 5112),
                v11,
                v17,
                (struct _VIDMM_GLOBAL_ALLOC *)a3,
                v14,
                v19,
                QuadPart,
                0LL,
                (struct VIDMM_ALLOC *)v38,
                0LL);
        v21 = (LARGE_INTEGER *)v20;
        if ( v20 )
          break;
        VIDMM_GLOBAL::FlushPagingBufferInternal((VIDMM_GLOBAL *)this, v11, 1u, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::FlushScratchGpuVaRanges((VIDMM_GLOBAL *)this, v11);
        v14 = v41;
      }
      CVirtualAddressAllocator::FlushGpuVaTlb(this[v11 + 5116], v11, *((_QWORD *)v20 + 12), *((_QWORD *)v20 + 13));
      VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v11, v22, &v47);
      do
      {
        VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
          (VIDMM_GLOBAL *)this,
          (unsigned int)v11,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v47);
        v47.Operation = DXGK_OPERATION_VIRTUAL_FILL;
        if ( a3 )
        {
          v23 = a3[5];
          if ( v23 )
            v24 = *(_QWORD *)(v23 + 16);
          else
            v24 = a3[6];
        }
        else
        {
          v24 = 0LL;
        }
        v25 = this[5187] == 0LL;
        v47.UpdateContextAllocation.ContextAllocation = v24;
        v47.Transfer.Source.SegmentId = a5;
        v47.Transfer.TransferSize = v17;
        v47.Transfer.Source.SegmentAddress = v21[12];
        if ( !v25 )
          VIDMM_GLOBAL::RecordVaPagingHistoryVirtualFill(
            (VIDMM_GLOBAL *)this,
            &v47,
            v11,
            (struct _VIDMM_GLOBAL_ALLOC *)a3);
        v39 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v47);
        if ( bTracingEnabled )
        {
          v44 = this[v11 + 143];
          CurrentProcessId = PsGetCurrentProcessId();
          if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
          {
            LODWORD(v37) = 0;
            McTemplateK0pppxxq((__int64)v44, v27, v28, CurrentProcessId, a3, v44, 0LL, v17, v37);
          }
        }
        VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 963), v17, 0);
        v29 = *((_DWORD *)v18 + 4) + 1;
        v49 = QuadPart;
        v48 = v29;
        VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
          (VIDMM_GLOBAL *)this,
          (unsigned int)v11,
          (struct _VIDMM_GLOBAL_ALLOC *)a3,
          &v47,
          v39,
          0,
          &v48);
      }
      while ( v39 < 0 );
      v30 = v21 + 3;
      v31 = v43;
      v32 = (__int64)this[5090] + v45 + 464;
      v33 = *(LARGE_INTEGER ***)(v32 + 8);
      if ( *v33 != (LARGE_INTEGER *)v32 )
        __fastfail(3u);
      v30->QuadPart = v32;
      v7 = v31 - v17;
      v21[4].QuadPart = (LONGLONG)v33;
      QuadPart += v17;
      *v33 = v30;
      *(_QWORD *)(v32 + 8) = v30;
      v14 = v17 + v41;
      v21[5].QuadPart = a3[22];
      v43 = v7;
      v41 = v14;
      if ( !v7 )
        break;
      LODWORD(v13) = v40;
      v15 = v46;
    }
  }
}
