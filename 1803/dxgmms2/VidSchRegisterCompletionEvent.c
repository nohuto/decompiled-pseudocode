/*
 * XREFs of VidSchRegisterCompletionEvent @ 0x1C0074B84
 * Callers:
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0057270 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C0074940 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchSubmitCommand @ 0x1C0075380 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0076AF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C0078FEC (VidSchiWaitFlushCompletion.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C007A080 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x1C00BCD70 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00BEC50 (VidSchiAllocateHwQueuePacket.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007300 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchRegisterCompletionEvent(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  KSPIN_LOCK *v10; // rcx
  __int64 v11; // rax

  KeInitializeEvent((PRKEVENT)(a2 + 96), SynchronizationEvent, 0);
  v4 = *(_DWORD *)(a2 + 32) | 0x20;
  *(_DWORD *)(a2 + 32) = v4;
  v5 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 128) = KeGetCurrentThread();
  if ( !v5 )
  {
    v10 = (KSPIN_LOCK *)(a1 + 1920);
    if ( (v4 & 2) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 24) + 376LL;
    }
    else if ( (v4 & 4) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 24) + 368LL;
    }
    else if ( (v4 & 1) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 440) + 408LL;
    }
    else
    {
      v9 = a1 + 1816;
    }
    goto LABEL_7;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = a1 + 1832;
    goto LABEL_6;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v11 = *(_QWORD *)(a2 + 24);
    v10 = (KSPIN_LOCK *)(a1 + 1920);
    v9 = v11 + 136;
    if ( !v11 )
      v9 = a1 + 1848;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a2 + 24) + 120LL;
LABEL_6:
    v10 = (KSPIN_LOCK *)(a1 + 1920);
LABEL_7:
    VidSchiInterlockedInsertTailList(v10, v9, (_QWORD *)a2, 0LL);
    return;
  }
  if ( v8 == 1 )
  {
    v9 = a1 + 1864;
    goto LABEL_6;
  }
}
