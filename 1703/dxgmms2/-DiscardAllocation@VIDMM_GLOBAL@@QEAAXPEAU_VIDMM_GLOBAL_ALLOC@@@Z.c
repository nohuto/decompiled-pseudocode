/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059FF8
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0049C70 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0002834 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0012304 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     Template_pppxxq @ 0x1C001F774 (Template_pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005837C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0058548 (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0059440 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchGetDriverPagingContext @ 0x1C006D1FC (VidSchGetDriverPagingContext.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00969BC (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DiscardAllocation(ADAPTER_RENDER **this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  void *DriverPagingContext; // rax
  __int64 v7; // rax
  D3DGPU_VIRTUAL_ADDRESS v8; // rax
  __int64 v9; // rcx
  bool IsPagingOperationPending; // al
  ADAPTER_RENDER *v11; // rcx
  int v12; // r14d
  ADAPTER_RENDER *v13; // rcx
  ADAPTER_RENDER *v14; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // [rsp+48h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v20; // [rsp+58h] [rbp-B0h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = *((_DWORD *)a2 + 19) & 0x3F;
  memset(&v20, 0, sizeof(v20));
  LOBYTE(v5) = (*((_BYTE *)this + 40873) & 4) != 0;
  DriverPagingContext = (void *)VidSchGetDriverPagingContext(*((_QWORD *)this[2] + 52), (unsigned int)v4, v5);
  v20.MultipassOffset = 0;
  v20.Transfer.TransferOffset = 0;
  v20.hSystemContext = DriverPagingContext;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v4, a2, &v20);
    v7 = *((_QWORD *)a2 + 5);
    v20.Operation = DXGK_OPERATION_DISCARD_CONTENT;
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 16);
    else
      v8 = *((_QWORD *)a2 + 6);
    v9 = *((_QWORD *)a2 + 17);
    v20.UpdateContextAllocation.ContextAllocation = v8;
    if ( (*(_DWORD *)(v9 + 80) & 0x1000) != 0 )
      v20.DiscardContent.SegmentId = 0;
    else
      v20.DiscardContent.SegmentId = *(_DWORD *)(v9 + 16) + 1;
    v20.Transfer.TransferSize = *((_QWORD *)a2 + 18) + *(_QWORD *)(v9 + 24);
    IsPagingOperationPending = VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, a2, 0);
    v11 = this[2];
    v20.Transfer.TransferOffset = !IsPagingOperationPending | v20.Transfer.TransferOffset & 0xFFFFFFFE;
    v12 = ADAPTER_RENDER::DdiBuildPagingBuffer(v11, &v20);
    if ( v12 == -1071775486 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a2);
      VIDMM_GLOBAL::VerifyAllocationIsIdle((VIDMM_GLOBAL *)this, a2);
      v13 = this[2];
      v20.Transfer.TransferOffset |= 1u;
      v12 = ADAPTER_RENDER::DdiBuildPagingBuffer(v13, &v20);
    }
    if ( bTracingEnabled )
    {
      v14 = this[v4 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        LODWORD(v19) = 5;
        Template_pppxxq(v17, v16, v18, CurrentProcessId, a2, v14, 0LL, 0LL, v19);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), *((_QWORD *)a2 + 2), 5);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((signed __int64)this, (unsigned int)v4, a2, &v20, v12, 0, 0LL);
  }
  while ( v12 < 0 );
}
