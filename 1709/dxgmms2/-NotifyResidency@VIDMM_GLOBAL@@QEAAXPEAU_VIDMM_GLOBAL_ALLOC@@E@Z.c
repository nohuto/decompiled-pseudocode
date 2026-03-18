/*
 * XREFs of ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005D61C
 * Callers:
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C004DD80 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C004E2FC (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007BA00 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00A7090 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z @ 0x1C00A96A0 (-VidMmiMoveAndFlipDisplayingAllocation@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C00AAB00 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0001E7C (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005B470 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 *     ?SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B62C (-SetupForBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C005B768 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGING.c)
 *     ?RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A4F68 (-RecordVaPagingHistoryNotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAU_VI.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyResidency(
        ADAPTER_RENDER **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3)
{
  unsigned __int8 v3; // r15
  unsigned int v6; // r14d
  __int64 v7; // rax
  D3DGPU_VIRTUAL_ADDRESS v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rax
  struct _DXGKARG_BUILDPAGINGBUFFER v12; // [rsp+40h] [rbp-C0h] BYREF

  v3 = (unsigned __int8)a3;
  if ( ((_BYTE)this[5109] & 8) == 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
    {
      v11 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v11 + 24) = a2;
      *(_QWORD *)(v11 + 32) = v3;
    }
    v6 = *((_DWORD *)a2 + 19) & 0x3F;
    VIDMM_GLOBAL::SetupForBuildPagingBuffer((VIDMM_GLOBAL *)this, v6, a3, &v12);
    do
    {
      VIDMM_GLOBAL::SetupForBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v6, a2, &v12);
      v7 = *((_QWORD *)a2 + 5);
      v12.Operation = DXGK_OPERATION_NOTIFY_RESIDENCY;
      if ( v7 )
        v8 = *(_QWORD *)(v7 + 16);
      else
        v8 = *((_QWORD *)a2 + 6);
      v12.UpdateContextAllocation.ContextAllocation = v8;
      if ( v3 )
      {
        v9 = *((_QWORD *)a2 + 17);
        v12.Transfer.Source.SegmentId |= 1u;
        if ( (*(_DWORD *)(v9 + 80) & 0x1000) != 0 )
          v12.Transfer.TransferOffset = 0;
        else
          v12.Transfer.TransferOffset = *(_DWORD *)(v9 + 16) + 1;
        v12.Transfer.TransferSize = *((_QWORD *)a2 + 18);
      }
      else
      {
        v12.Transfer.Source.SegmentId &= ~1u;
        v12.Transfer.TransferOffset = 0;
        v12.Transfer.TransferSize = 0LL;
      }
      v10 = ADAPTER_RENDER::DdiBuildPagingBuffer(this[2], &v12);
      VIDMM_GLOBAL::CompleteBuildPagingBufferIteration((VIDMM_GLOBAL *)this, v6, a2, &v12, v10, 0, 0LL);
    }
    while ( v10 < 0 );
    if ( this[5115] )
      VIDMM_GLOBAL::RecordVaPagingHistoryNotifyResidency((VIDMM_GLOBAL *)this, &v12, a2);
  }
}
