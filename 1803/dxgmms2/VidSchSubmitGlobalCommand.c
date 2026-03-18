/*
 * XREFs of VidSchSubmitGlobalCommand @ 0x1C0079320
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0012590 (VidSchSuspendResumeDevice.c)
 *     VidSchSuspendAdapter @ 0x1C0056B00 (VidSchSuspendAdapter.c)
 *     VidSchSwitchFromContext @ 0x1C0079240 (VidSchSwitchFromContext.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00A5F48 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchSwitchFromDevice @ 0x1C00BE290 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006BD0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSetPriorityContext @ 0x1C0012174 (VidSchiSetPriorityContext.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0076AF0 (VidSchiAllocateQueuePacket.c)
 */

void __fastcall VidSchSubmitGlobalCommand(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  struct _VIDSCH_CONTEXT *v5; // rbp
  _QWORD *QueuePacket; // rdi
  KPRIORITY PriorityThread; // eax

  v2 = (__int64 *)(a1 + 224);
  if ( *(_DWORD *)(a2 + 40) == 2 )
    v2 = *(__int64 **)(a2 + 48);
  v5 = (struct _VIDSCH_CONTEXT *)*v2;
  QueuePacket = VidSchiAllocateQueuePacket(*v2, 1);
  *(_DWORD *)QueuePacket = 1953189969;
  *((_DWORD *)QueuePacket + 12) = 6;
  QueuePacket[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)QueuePacket + 13) = 2;
  QueuePacket[11] = v5;
  QueuePacket[13] = KeGetCurrentThread();
  *((_OWORD *)QueuePacket + 17) = *(_OWORD *)a2;
  *((_OWORD *)QueuePacket + 18) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)QueuePacket + 19) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)QueuePacket + 20) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)QueuePacket + 21) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)QueuePacket + 22) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)QueuePacket + 23) = *(_OWORD *)(a2 + 96);
  *((_OWORD *)QueuePacket + 24) = *(_OWORD *)(a2 + 112);
  if ( (*(_DWORD *)(a1 + 2192) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v5, PriorityThread);
  }
  VidSchiSubmitCommandPacketToQueue((__int64)QueuePacket);
}
