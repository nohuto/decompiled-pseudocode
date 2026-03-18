/*
 * XREFs of VidSchRegisterCompletionEvent @ 0x1C004FCEC
 * Callers:
 *     VidSchiWaitFlushCompletion @ 0x1C004F99C (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C004FA00 (VidSchWaitForQueuedPresentLimit.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C0063D90 (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchSubmitCommand @ 0x1C006A5F0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006AD40 (VidSchiAllocateQueuePacket.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0097F4C (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C00AB860 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C00063A0 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchRegisterCompletionEvent(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rdx
  KSPIN_LOCK *v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // rdx

  KeInitializeEvent((PRKEVENT)(a2 + 96), SynchronizationEvent, 0);
  *(_DWORD *)(a2 + 32) |= 8u;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 128) = KeGetCurrentThread();
  if ( !v4 )
  {
    if ( (v5 & 2) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 24) + 368LL;
    }
    else if ( (v5 & 1) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a2 + 48) + 416) + 408LL;
    }
    else
    {
      v9 = a1 + 1792;
    }
    goto LABEL_6;
  }
  v6 = v4 - 1;
  if ( !v6 )
  {
    v9 = a1 + 1808;
    goto LABEL_6;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v12 = *(_QWORD *)(a2 + 24);
    v10 = (KSPIN_LOCK *)(a1 + 1896);
    v11 = (_QWORD *)a2;
    if ( v12 )
      v9 = v12 + 112;
    else
      v9 = a1 + 1824;
    goto LABEL_7;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *(_QWORD *)(a2 + 24) + 96LL;
LABEL_6:
    v10 = (KSPIN_LOCK *)(a1 + 1896);
    v11 = (_QWORD *)a2;
LABEL_7:
    VidSchiInterlockedInsertTailList(v10, v9, v11, 0LL);
    return;
  }
  if ( v8 == 1 )
  {
    v9 = a1 + 1840;
    goto LABEL_6;
  }
}
