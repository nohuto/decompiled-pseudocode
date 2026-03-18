/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D294
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E7C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C0013284 (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 *     McTemplateK0pppxxq @ 0x1C0021844 (McTemplateK0pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B470 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B62C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005C6C8 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     VidSchGetDriverPagingContext @ 0x1C0072B20 (VidSchGetDriverPagingContext.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009EECC (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
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
  ADAPTER_RENDER *v13; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  ADAPTER_RENDER *v18; // rcx
  __int64 v19; // [rsp+48h] [rbp-C0h]
  struct _DXGKARG_BUILDPAGINGBUFFER v20; // [rsp+58h] [rbp-B0h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v4 = *((_DWORD *)a2 + 19) & 0x3F;
  memset(&v20, 0, sizeof(v20));
  LOBYTE(v5) = (*((_BYTE *)this + 40873) & 4) != 0;
  DriverPagingContext = (void *)VidSchGetDriverPagingContext(*((_QWORD *)this[2] + 64), (unsigned int)v4, v5);
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
      v18 = this[2];
      v20.Transfer.TransferOffset |= 1u;
      v12 = ADAPTER_RENDER::DdiBuildPagingBuffer(v18, &v20);
    }
    if ( bTracingEnabled )
    {
      v13 = this[v4 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        LODWORD(v19) = 5;
        McTemplateK0pppxxq(v16, v15, v17, CurrentProcessId, a2, v13, 0LL, 0LL, v19);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 891), *((_QWORD *)a2 + 2), 5);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v4, a2, &v20, v12, 0, 0LL);
  }
  while ( v12 < 0 );
}
