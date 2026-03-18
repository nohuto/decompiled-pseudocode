/*
 * XREFs of VidSchiSwitchNodeFromContext @ 0x1C006CD70
 * Callers:
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C00116B0 (VidSchiSwitchFromSuspendedDevices.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0028D50 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 * Callees:
 *     VidSchWaitForEvents @ 0x1C0001F8C (VidSchWaitForEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C006CF24 (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C006CF88 (VidSchiAllocateDmaPacket.c)
 *     VidSchGetNewSubmissionFenceId @ 0x1C006D024 (VidSchGetNewSubmissionFenceId.c)
 */

__int64 __fastcall VidSchiSwitchNodeFromContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 DmaPacket; // rdi
  void (__fastcall *v5)(_QWORD); // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  struct _KEVENT *p_Event; // [rsp+60h] [rbp+8h] BYREF

  result = *(_QWORD *)(a1 + 96);
  if ( a1 == *(_QWORD *)(result + 224) )
  {
    result = *(unsigned int *)(result + 2768);
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
      VidSchGetNewSubmissionFenceId(v3, 0LL, *(unsigned __int16 *)(v2 + 4), DmaPacket + 104);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      *(_DWORD *)(DmaPacket + 92) |= 0x1000u;
      *(_QWORD *)(DmaPacket + 200) = &Event;
      if ( *(_DWORD *)(v2 + 2792) != -1 )
      {
        v5 = *(void (__fastcall **)(_QWORD))(v3 + 2848);
        if ( v5 )
          v5(*(_QWORD *)(v3 + 2912));
      }
      *(_DWORD *)(DmaPacket + 92) |= 0x400u;
      VidSchiSendToExecutionQueueWithWait(DmaPacket, 0LL);
      p_Event = &Event;
      return VidSchWaitForEvents(v3, 1u, (PVOID *)&p_Event, 0LL, 0);
    }
  }
  return result;
}
