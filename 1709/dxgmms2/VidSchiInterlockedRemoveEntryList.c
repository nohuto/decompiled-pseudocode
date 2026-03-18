/*
 * XREFs of VidSchiInterlockedRemoveEntryList @ 0x1C0010DCC
 * Callers:
 *     VidSchiFreeQueuePacket @ 0x1C0010C4C (VidSchiFreeQueuePacket.c)
 *     ?VidSchiFreeHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D62C (-VidSchiFreeHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z @ 0x1C006769C (-WaitDmaBufferNotBusy@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@EPEAE@Z.c)
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006EA50 (VidSchiAllocateQueuePacket.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00715AC (VidSchiWaitFlushCompletion.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1C0071710 (VidSchWaitForQueuedPresentLimit.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z @ 0x1C0073A14 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchBlockUntilNoUnorderedWaitsInContext @ 0x1C00B41A0 (VidSchBlockUntilNoUnorderedWaitsInContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiInterlockedRemoveEntryList(KSPIN_LOCK *a1, _QWORD *a2, _DWORD *a3)
{
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  bool v7; // di
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v5 = (_QWORD *)*a2;
  v6 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v6 != a2 )
    __fastfail(3u);
  *v6 = v5;
  v5[1] = v6;
  v7 = v6 == v5;
  if ( a3 )
    --*a3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v7;
}
