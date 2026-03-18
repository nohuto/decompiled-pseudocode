/*
 * XREFs of ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00619A0
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0054DD4 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     ?VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z @ 0x1C00033CC (-VidMmRecordTransfer@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@_KI@Z.c)
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0005148 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     McTemplateK0pppxxq @ 0x1C0024190 (McTemplateK0pppxxq.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005FD88 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005FF5C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C006007C (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0060E60 (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0060FAC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A558C (-VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DiscardAllocation(
        ADAPTER_RENDER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  D3DGPU_VIRTUAL_ADDRESS v7; // rax
  __int64 v8; // rcx
  bool IsPagingOperationPending; // al
  ADAPTER_RENDER *v10; // rcx
  int v11; // r14d
  ADAPTER_RENDER *v12; // r15
  HANDLE CurrentProcessId; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  ADAPTER_RENDER *v17; // rcx
  __int64 v18; // [rsp+48h] [rbp-C0h]
  _DXGKARG_BUILDPAGINGBUFFER v19; // [rsp+58h] [rbp-B0h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v5 = *((_DWORD *)a2 + 19) & 0x3F;
  VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, *((_DWORD *)a2 + 19) & 0x3F, a3, &v19);
  v19.Transfer.TransferOffset = 0;
  do
  {
    VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v5, a2, &v19);
    v6 = *((_QWORD *)a2 + 5);
    v19.Operation = DXGK_OPERATION_DISCARD_CONTENT;
    if ( v6 )
      v7 = *(_QWORD *)(v6 + 16);
    else
      v7 = *((_QWORD *)a2 + 6);
    v8 = *((_QWORD *)a2 + 17);
    v19.UpdateContextAllocation.ContextAllocation = v7;
    if ( (*(_DWORD *)(v8 + 80) & 0x1000) != 0 )
      v19.DiscardContent.SegmentId = 0;
    else
      v19.DiscardContent.SegmentId = *(_DWORD *)(v8 + 16) + 1;
    v19.Transfer.TransferSize = *((_QWORD *)a2 + 18) + *(_QWORD *)(v8 + 24);
    IsPagingOperationPending = VIDMM_GLOBAL::IsPagingOperationPending((VIDMM_GLOBAL *)this, a2, 0);
    v10 = this[2];
    v19.Transfer.TransferOffset = !IsPagingOperationPending | v19.Transfer.TransferOffset & 0xFFFFFFFE;
    v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(v10, &v19);
    if ( v11 == -1071775486 )
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)this, a2);
      VIDMM_GLOBAL::VerifyAllocationIsIdle((VIDMM_GLOBAL *)this, a2);
      v17 = this[2];
      v19.Transfer.TransferOffset |= 1u;
      v11 = ADAPTER_RENDER::DdiBuildPagingBuffer(v17, &v19);
    }
    if ( bTracingEnabled )
    {
      v12 = this[v5 + 143];
      CurrentProcessId = PsGetCurrentProcessId();
      if ( ((unsigned __int16)Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        LODWORD(v18) = 5;
        McTemplateK0pppxxq(v15, v14, v16, CurrentProcessId, a2, v12, 0LL, 0LL, v18);
      }
    }
    VidMmRecordTransfer((struct _VIDMM_GLOBAL_STATISTICS *)(this + 963), *((_QWORD *)a2 + 2), 5);
    VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, (unsigned int)v5, a2, &v19, v11, 0, 0LL);
  }
  while ( v11 < 0 );
}
