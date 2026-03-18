/*
 * XREFs of VidSchiDiscardQueuePacket @ 0x1C00AA7D4
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0069E70 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C006A150 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00AB184 (VidSchiSubmitRenderCommand.c)
 *     VidSchFlushPendingCommand @ 0x1C00ABCB0 (VidSchFlushPendingCommand.c)
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C0002BC0 (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C000E814 (VidSchiSignalRegisteredEvent.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C001E50C (-UnreferenceDmaBuffer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 *     ?DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z @ 0x1C001E8AC (-DdiCancelCommand@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_CANCELCOMMAND@@@Z.c)
 *     ?VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0022890 (-VidSchiFreeHistoryBufferStorage@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiDiscardQueuePacket(
        struct _VIDSCH_QUEUE_PACKET *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rsi
  bool v8; // zf
  UINT v9; // ecx
  UINT v10; // eax
  UINT *v11; // rcx
  void *v12; // rax
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rcx
  int v16; // r15d
  _QWORD *v17; // rax
  _DXGKARG_CANCELCOMMAND v19; // [rsp+28h] [rbp-29h] BYREF

  v3 = *((_QWORD *)a1 + 11);
  v5 = *((_QWORD *)a1 + 34);
  v6 = *(_QWORD *)(v3 + 96);
  v7 = *(_QWORD *)(*(_QWORD *)(v3 + 104) + 32LL);
  if ( *(_BYTE *)(v7 + 46) )
  {
    memset(&v19, 0, sizeof(v19));
    v8 = (*((_DWORD *)a1 + 18) & 0x8000000) == 0;
    v19.hContext = *(HANDLE *)(v3 + 64);
    if ( v8 )
    {
      if ( !v5 )
        goto LABEL_16;
      v19.DmaBufferSize = *(_DWORD *)(v5 + 40);
      v19.pDmaBufferPrivateData = *(void **)(v5 + 128);
      v13 = *(_QWORD *)(v5 + 56);
      v19.DmaBufferPrivateDataSize = *(_DWORD *)(*(_QWORD *)(v5 + 136) + 88LL);
      v14 = *(void **)(v13 + 368);
      LODWORD(v13) = *((_DWORD *)a1 + 79);
      v19.DmaBufferSubmissionStartOffset = 0;
      v19.DmaBufferSubmissionEndOffset = v13;
      v19.DmaBufferPrivateDataSubmissionStartOffset = *((_DWORD *)a1 + 84);
      v19.PatchLocationListSubmissionStart = 0;
      v19.DmaBufferPrivateDataSubmissionEndOffset = v19.DmaBufferPrivateDataSize
                                                  + v19.DmaBufferPrivateDataSubmissionStartOffset;
      v19.pAllocationList = *(const DXGK_ALLOCATIONLIST **)(v5 + 112);
      v19.AllocationListSize = *((_DWORD *)a1 + 81);
      v19.pPatchLocationList = *(const D3DDDI_PATCHLOCATIONLIST **)(v5 + 120);
      v19.PatchLocationListSize = *(_DWORD *)(v5 + 52);
      v19.PatchLocationListSubmissionLength = v19.PatchLocationListSize;
      v19.pDmaBuffer = v14;
    }
    else
    {
      v9 = *((_DWORD *)a1 + 79);
      v19.DmaBufferVirtualAddress = *((_QWORD *)a1 + 38);
      v10 = *((_DWORD *)a1 + 86);
      v19.DmaBufferSize = v9;
      v19.DmaBufferSubmissionEndOffset = v9;
      v11 = (UINT *)*((_QWORD *)a1 + 35);
      v19.DmaBufferUmdPrivateDataSize = v10;
      v19.DmaBufferPrivateDataSubmissionEndOffset = *((_DWORD *)a1 + 85);
      if ( v11 )
      {
        v19.DmaBufferPrivateDataSize = *v11;
        v12 = v11 + 2;
      }
      else if ( v5 )
      {
        v19.DmaBufferPrivateDataSize = *(_DWORD *)(*(_QWORD *)(v5 + 136) + 88LL);
        v12 = *(void **)(v5 + 128);
      }
      else
      {
        v19.DmaBufferPrivateDataSize = 0;
        v12 = 0LL;
      }
      v19.pDmaBufferPrivateData = v12;
    }
    v16 = ADAPTER_RENDER::DdiCancelCommand(*(ADAPTER_RENDER **)(v7 + 8), &v19);
    if ( v16 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, a2, a3);
      v17[5] = v16;
      v17[6] = &v19;
      v17[3] = 281LL;
      v17[4] = 9LL;
      v17[7] = a1;
      WdLogEvent5_WdCriticalError(v17);
      __debugbreak();
    }
  }
  if ( v5 && !*((_DWORD *)a1 + 12) )
    VIDMM_GLOBAL::UnreferenceDmaBuffer(
      *(VIDMM_GLOBAL **)(*(_QWORD *)(v7 + 8) + 440LL),
      (struct _VIDMM_DMA_BUFFER *)v5,
      0);
LABEL_16:
  if ( (*((_DWORD *)a1 + 18) & 0x100) != 0 )
  {
    VIDMM_DMA_POOL::ReleaseBuffer(
      *(VIDMM_DMA_POOL **)(v5 + 136),
      (struct _VIDMM_DMA_BUFFER *)v5,
      *((_DWORD *)a1 + 12) == 8);
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v3 + 368));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v6 + 408));
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1792));
    *(_QWORD *)(v3 + 344) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 312), 0, 0);
    *(_QWORD *)(v6 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v6 + 240), 0, 0);
    *(_QWORD *)(v7 + 1600) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1568), 0, 0);
    VidSchiSignalRegisteredEvent(v7, (struct _KEVENT **)(v7 + 1840));
  }
  *((_DWORD *)a1 + 20) |= 0x20u;
  if ( *((_QWORD *)a1 + 32) )
    VidSchiFreeHistoryBufferStorage(a1);
  return VidSchiProcessCompletedQueuePacket(a1, a2, a3);
}
