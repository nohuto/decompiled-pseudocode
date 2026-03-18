/*
 * XREFs of VidSchiInterlockedInsertTailList @ 0x1C00071A0
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0005FE0 (VidSchWaitForSingleSyncObject.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiCreateContextInternal @ 0x1C00106B4 (VidSchiCreateContextInternal.c)
 *     VidSchiFreeQueuePacket @ 0x1C0010C4C (VidSchiFreeQueuePacket.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00244E8 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 *     VidSchiProcessDpcDmaPacket @ 0x1C002863C (VidSchiProcessDpcDmaPacket.c)
 *     ?VidSchiFreeHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002D62C (-VidSchiFreeHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C006E3C0 (VidSchSubmitCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006EA50 (VidSchiAllocateQueuePacket.c)
 *     VidSchiCreateDeviceInternal @ 0x1C0070C1C (VidSchiCreateDeviceInternal.c)
 *     VidSchRegisterCompletionEvent @ 0x1C007182C (VidSchRegisterCompletionEvent.c)
 *     VidSchiCreateNode @ 0x1C00771B0 (VidSchiCreateNode.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiInterlockedInsertTailList(KSPIN_LOCK *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v7; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a1, &LockHandle);
  v7 = *(_QWORD **)(a2 + 8);
  if ( *v7 != a2 )
    __fastfail(3u);
  *a3 = a2;
  a3[1] = v7;
  *v7 = a3;
  *(_QWORD *)(a2 + 8) = a3;
  if ( a4 )
    ++*a4;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
