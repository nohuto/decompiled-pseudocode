/*
 * XREFs of ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A4A0
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C004A470 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002834 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0012304 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     Template_pppxxq @ 0x1C001F774 (Template_pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005837C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0058548 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0058684 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A544 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 */

void __fastcall VIDMM_GLOBAL::FillAllocationInternal(
        ADAPTER_RENDER **this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct VIDMM_SEGMENT *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 v8; // r14
  __int64 v11; // rcx
  __int64 v12; // rax
  UINT v13; // r13d
  __int64 v14; // rcx
  _QWORD *v15; // rax
  D3DGPU_VIRTUAL_ADDRESS v16; // rax
  __int64 v17; // rax
  bool v18; // zf
  ADAPTER_RENDER *v19; // rcx
  ADAPTER_RENDER *v20; // r13
  HANDLE CurrentProcessId; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // [rsp+48h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+1D0h] [rbp+C8h]

  v8 = a2;
  if ( (*((_BYTE *)this[5021] + 472 * a2 + 436) & 4) != 0 )
  {
    VIDMM_GLOBAL::FillAllocationUsingGpuVa((VIDMM_GLOBAL *)this, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a3;
      v12 = WdLogNewEntry5_WdTrace(v11);
      v13 = a5;
      *(_QWORD *)(v12 + 24) = a4;
      *(_QWORD *)(v12 + 32) = a5;
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
      v15[3] = a6;
      v15[4] = a7->HighPart;
      v15[5] = a7->LowPart;
    }
    else
    {
      v13 = a5;
    }
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v8, a3, &v26);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v8, a3, &v26);
      v26.Operation = DXGK_OPERATION_FILL;
      if ( a3 )
      {
        v17 = *((_QWORD *)a3 + 5);
        if ( v17 )
          v16 = *(_QWORD *)(v17 + 16);
        else
          v16 = *((_QWORD *)a3 + 6);
      }
      else
      {
        v16 = 0LL;
      }
      v18 = (*((_DWORD *)a6 + 20) & 0x1000) == 0;
      v26.UpdateContextAllocation.ContextAllocation = v16;
      v26.Fill.FillSize = a4;
      v26.Fill.FillPattern = v13;
      if ( v18 )
        v26.Transfer.Source.SegmentId = *((_DWORD *)a6 + 4) + 1;
      else
        v26.Transfer.Source.SegmentId = 0;
      v19 = this[2];
      v26.Transfer.Source.SegmentAddress.QuadPart = a7->QuadPart + *((_QWORD *)a6 + 3);
      v27 = ADAPTER_RENDER::DdiBuildPagingBuffer(v19, &v26);
      if ( bTracingEnabled )
      {
        v20 = this[v8 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          LODWORD(v25) = 0;
          Template_pppxxq(v23, v22, v24, CurrentProcessId, a3, v20, 0LL, a4, v25);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), a4, 0);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((signed __int64)this, (unsigned int)v8, a3, &v26, v27, 0, 0LL);
      v13 = a5;
    }
    while ( v27 < 0 );
  }
}
