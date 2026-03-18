/*
 * XREFs of ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C0061B30
 * Callers:
 *     ?PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z @ 0x1C00605B8 (-PageInFaultedAllocation@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@_NPEA_NPEAPEAU2@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0063D00 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00033CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     McTemplateK0pppxxq @ 0x1C0024190 (McTemplateK0pppxxq.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C0056744 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0060750 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitContextAllocation(
        ADAPTER_RENDER **this,
        __int64 **a2,
        char a3,
        bool *a4,
        struct VIDMM_ALLOC **a5)
{
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  D3DGPU_VIRTUAL_ADDRESS v18; // rax
  __int64 v19; // rcx
  __int64 GpuVirtualAddress; // rax
  ADAPTER_RENDER *v21; // rcx
  int v22; // r15d
  ADAPTER_RENDER *v23; // rdi
  HANDLE CurrentProcessId; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v30; // rax
  int v31; // [rsp+30h] [rbp-D8h]
  __int64 v32; // [rsp+38h] [rbp-D0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v33; // [rsp+58h] [rbp-B0h] BYREF

  *a5 = 0LL;
  v9 = **a2;
  v10 = *(_DWORD *)(v9 + 76) & 0x3F;
  memset(&v33, 0, sizeof(v33));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v9;
  if ( a3 && (v13 = VIDMM_GLOBAL::PageInOneAllocation((__int64)this, a2, 0, 0, a4, a5), v16 = v13, v13 < 0) )
  {
    v30 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v30 + 24) = a2;
    *(_QWORD *)(v30 + 32) = v16;
    WdLogEvent5_WdEvent(v30);
    return (unsigned int)v16;
  }
  else
  {
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v10, v12, &v33);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v33);
      v33.Operation = DXGK_OPERATION_INIT_CONTEXT_RESOURCE;
      v17 = *(_QWORD *)(v9 + 40);
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 16);
      else
        v18 = *(_QWORD *)(v9 + 48);
      v33.UpdateContextAllocation.ContextAllocation = v18;
      v19 = *(_QWORD *)(v9 + 136);
      if ( (*(_DWORD *)(v19 + 80) & 0x1000) != 0 )
        v33.Transfer.TransferOffset = 0;
      else
        v33.Transfer.TransferOffset = *(_DWORD *)(v19 + 16) + 1;
      v33.Transfer.TransferSize = *(_QWORD *)(v9 + 144) + *(_QWORD *)(*(_QWORD *)(v9 + 136) + 24LL);
      if ( (*(_DWORD *)(v9 + 80) & 0x80u) != 0 )
      {
        if ( (**(_DWORD **)(v9 + 504) & 8) != 0 )
          v33.MapApertureSegment.OffsetInPages = *(_QWORD *)(v9 + 368);
        else
          v33.MapApertureSegment.OffsetInPages = *(_QWORD *)(*(_QWORD *)(v9 + 104) + 16LL);
      }
      GpuVirtualAddress = VIDMM_ALLOC::GetGpuVirtualAddress((VIDMM_ALLOC *)a2, v10);
      v21 = this[2];
      v33.Transfer.Source.SegmentAddress.QuadPart = GpuVirtualAddress;
      v22 = ADAPTER_RENDER::DdiBuildPagingBuffer(v21, &v33);
      if ( bTracingEnabled )
      {
        v23 = this[v10 + 143];
        CurrentProcessId = PsGetCurrentProcessId();
        if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          v32 = 0LL;
          v31 = (int)v23;
          McTemplateK0pppxxq(v26, v25, v27, CurrentProcessId, v9);
        }
      }
      VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 963), 0LL, 8);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        (VIDMM_GLOBAL *)this,
        (unsigned int)v10,
        (struct _VIDMM_GLOBAL_ALLOC *)v9,
        &v33,
        v22,
        v28 & v31,
        (void *)(v28 & v32));
    }
    while ( v22 < 0 );
    return 0LL;
  }
}
