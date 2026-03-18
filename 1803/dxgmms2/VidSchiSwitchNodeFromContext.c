/*
 * XREFs of VidSchiSwitchNodeFromContext @ 0x1C0055710
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0002C30 (VidSchiSwitchFromSuspendedDevices.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C002DC80 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0005B40 (VidSchWaitForEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C00558D4 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C005593C (VidSchiAllocateDmaPacket.c)
 */

__int64 __fastcall VidSchiSwitchNodeFromContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 DmaPacket; // rdi
  __int64 v5; // rax
  int v6; // ecx
  void (__fastcall *v7)(_QWORD); // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  struct _KEVENT *p_Event; // [rsp+60h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 96);
  if ( a1 == *(_QWORD *)(result + 224) )
  {
    result = *(unsigned int *)(result + 2824);
    if ( !(_DWORD)result )
    {
      v2 = *(_QWORD *)(a1 + 96);
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL);
      DmaPacket = VidSchiAllocateDmaPacket(v2);
      *(_DWORD *)(DmaPacket + 88) = 0;
      *(_DWORD *)DmaPacket = 1953189956;
      *(_QWORD *)(DmaPacket + 80) = MEMORY[0xFFFFF78000000320];
      *(_DWORD *)(DmaPacket + 72) = 7;
      *(_QWORD *)(DmaPacket + 48) = *(_QWORD *)(v2 + 32);
      v5 = *(_QWORD *)(v3 + 8LL * *(unsigned __int16 *)(v2 + 4) + 440);
      *(_QWORD *)(DmaPacket + 104) = ++*(_QWORD *)(v5 + 48);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v6 = *(_DWORD *)(DmaPacket + 92) | 0x1000;
      *(_QWORD *)(DmaPacket + 200) = &Event;
      *(_DWORD *)(DmaPacket + 92) = v6;
      if ( *(_DWORD *)(v2 + 6256) != -1 )
      {
        v7 = *(void (__fastcall **)(_QWORD))(v3 + 2888);
        if ( v7 )
        {
          v7(*(_QWORD *)(v3 + 2952));
          v6 = *(_DWORD *)(DmaPacket + 92);
        }
      }
      *(_DWORD *)(DmaPacket + 92) = v6 | 0x400;
      VidSchiSendToExecutionQueueWithWait(DmaPacket, 0LL);
      p_Event = &Event;
      return VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
    }
  }
  return result;
}
