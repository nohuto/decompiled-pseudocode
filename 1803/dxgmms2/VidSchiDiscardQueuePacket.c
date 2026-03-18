/*
 * XREFs of VidSchiDiscardQueuePacket @ 0x1C00BBAC8
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0074C50 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0074F20 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00BC4E4 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C00BD1A0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiProcessCompletedQueuePacket @ 0x1C0002C0C (VidSchiProcessCompletedQueuePacket.c)
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0004BA0 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000F294 (VidSchiSignalRegisteredEvent.c)
 *     memset @ 0x1C0017DC0 (memset.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C00225D0 (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C0022B48 (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0027850 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // r14
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rsi
  bool v6; // zf
  UINT v7; // ecx
  UINT v8; // eax
  UINT *v9; // rcx
  UINT v10; // eax
  void *v11; // rax
  __int64 v12; // rax
  void *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r15
  _QWORD *v19; // rax
  _DXGKARG_CANCELCOMMAND v21; // [rsp+28h] [rbp-29h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v3 = *((_QWORD *)a1 + 35);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 104) + 32LL);
  if ( *(_BYTE *)(v5 + 46) )
  {
    memset(&v21, 0, sizeof(v21));
    v6 = (*((_DWORD *)a1 + 18) & 0x8000000) == 0;
    v21.hContext = *(HANDLE *)(v1 + 64);
    if ( v6 )
    {
      if ( !v3 )
        goto LABEL_16;
      v21.DmaBufferSize = *(_DWORD *)(v3 + 40);
      v21.pDmaBufferPrivateData = *(void **)(v3 + 128);
      v12 = *(_QWORD *)(v3 + 56);
      v21.DmaBufferPrivateDataSize = *(_DWORD *)(*(_QWORD *)(v3 + 136) + 88LL);
      v13 = *(void **)(v12 + 368);
      LODWORD(v12) = *((_DWORD *)a1 + 81);
      v21.DmaBufferSubmissionStartOffset = 0;
      v21.DmaBufferSubmissionEndOffset = v12;
      v21.DmaBufferPrivateDataSubmissionStartOffset = *((_DWORD *)a1 + 86);
      v21.PatchLocationListSubmissionStart = 0;
      v21.DmaBufferPrivateDataSubmissionEndOffset = v21.DmaBufferPrivateDataSize
                                                  + v21.DmaBufferPrivateDataSubmissionStartOffset;
      v21.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v3 + 112);
      v21.AllocationListSize = *((_DWORD *)a1 + 83);
      v21.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v3 + 120);
      v21.PatchLocationListSize = *(_DWORD *)(v3 + 52);
      v21.PatchLocationListSubmissionLength = v21.PatchLocationListSize;
      v21.pDmaBuffer = v13;
    }
    else
    {
      v7 = *((_DWORD *)a1 + 81);
      v21.DmaBufferVirtualAddress = *((_QWORD *)a1 + 39);
      v8 = *((_DWORD *)a1 + 88);
      v21.DmaBufferSize = v7;
      v21.DmaBufferSubmissionEndOffset = v7;
      v9 = (UINT *)*((_QWORD *)a1 + 36);
      v21.DmaBufferUmdPrivateDataSize = v8;
      v10 = *((_DWORD *)a1 + 87);
      v21.DmaBufferPrivateDataSubmissionEndOffset = v10;
      if ( v9 )
      {
        v21.DmaBufferPrivateDataSize = *v9;
        v11 = v9 + 2;
      }
      else if ( v3 )
      {
        v21.DmaBufferPrivateDataSize = v10;
        v11 = *(void **)(v3 + 128);
      }
      else
      {
        v21.DmaBufferPrivateDataSize = 0;
        v11 = 0LL;
      }
      v21.pDmaBufferPrivateData = v11;
    }
    v14 = ADAPTER_RENDER::DdiCancelCommand(*(ADAPTER_RENDER **)(v5 + 8), &v21);
    v18 = v14;
    if ( v14 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, v15, v17);
      v19[6] = &v21;
      v19[3] = 281LL;
      v19[4] = 9LL;
      v19[5] = v18;
      v19[7] = a1;
      WdLogEvent5_WdCriticalError(v19);
      __debugbreak();
    }
  }
  if ( v3 && !*((_DWORD *)a1 + 12) )
    VIDMM_GLOBAL::UnreferenceDmaBuffer(
      *(VIDMM_GLOBAL **)(*(_QWORD *)(v5 + 8) + 552LL),
      (struct _VIDMM_DMA_BUFFER *)v3,
      0);
LABEL_16:
  if ( (*((_DWORD *)a1 + 18) & 0x100) != 0 )
  {
    VIDMM_DMA_POOL::ReleaseBuffer(
      *(VIDMM_DMA_POOL **)(v3 + 136),
      (struct _VIDMM_DMA_BUFFER *)v3,
      *((_DWORD *)a1 + 12) == 8);
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v1 + 376));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v4 + 408));
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1816));
    *(_QWORD *)(v1 + 352) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v1 + 320), 0, 0);
    *(_QWORD *)(v4 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 240), 0, 0);
    *(_QWORD *)(v5 + 1624) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1592), 0, 0);
    VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v5 + 1864));
  }
  *((_DWORD *)a1 + 20) |= 0x20u;
  if ( *((_QWORD *)a1 + 33) )
    VidSchiFreeHistoryBufferStorage(a1);
  return VidSchiProcessCompletedQueuePacket(a1);
}
