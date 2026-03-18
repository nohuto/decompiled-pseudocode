/*
 * XREFs of VidSchSubmitGlobalCommand @ 0x1C006C8E0
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0010450 (VidSchSuspendResumeDevice.c)
 *     VidSchSwitchFromContext @ 0x1C006C800 (VidSchSwitchFromContext.c)
 *     VidSchSuspendAdapter @ 0x1C006C9E0 (VidSchSuspendAdapter.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009738C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchSwitchFromDevice @ 0x1C00AC9E0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiSetPriorityContext @ 0x1C000FE48 (VidSchiSetPriorityContext.c)
 *     VidSchiAllocateQueuePacket @ 0x1C006AD40 (VidSchiAllocateQueuePacket.c)
 */

void __fastcall VidSchSubmitGlobalCommand(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v5; // rbp
  __int64 *QueuePacket; // rdi
  KPRIORITY PriorityThread; // eax

  v2 = (__int64 *)(a1 + 216);
  if ( *(_DWORD *)(a2 + 40) == 2 )
    v2 = *(__int64 **)(a2 + 48);
  v5 = *v2;
  QueuePacket = VidSchiAllocateQueuePacket(*v2, 1);
  *(_DWORD *)QueuePacket = 1953189969;
  *((_DWORD *)QueuePacket + 12) = 6;
  QueuePacket[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)QueuePacket + 13) = 2;
  QueuePacket[11] = v5;
  QueuePacket[12] = (__int64)KeGetCurrentThread();
  *(_OWORD *)(QueuePacket + 33) = *(_OWORD *)a2;
  *(_OWORD *)(QueuePacket + 35) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(QueuePacket + 37) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(QueuePacket + 39) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(QueuePacket + 41) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(QueuePacket + 43) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(QueuePacket + 45) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(QueuePacket + 47) = *(_OWORD *)(a2 + 112);
  if ( (*(_DWORD *)(a1 + 2152) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v5, PriorityThread);
  }
  VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)QueuePacket);
}
