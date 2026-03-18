/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x140120444
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x140007340 (KeQueryTotalCycleTimeThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x140064A98 (KeSetPriorityAndQuantumProcess.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14006F988 (PoFxSendSystemLatencyUpdate.c)
 *     NtFlushProcessWriteBuffers @ 0x14012042C (NtFlushProcessWriteBuffers.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140227A34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x1402292F0 (PpmSetExitLatencySamplingPercentage.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14041F920 (PsQueryTotalCycleTimeProcess.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     ExpGetProcessInformation @ 0x140531E70 (ExpGetProcessInformation.c)
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400D9480 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x140120534 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x140120AD0 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall KeFlushProcessWriteBuffers(char a1)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  int v3; // ebx
  int v4; // eax
  unsigned __int16 *v5; // rdx
  __int64 result; // rax
  unsigned __int16 v7[88]; // [rsp+30h] [rbp-C8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( a1 )
  {
    v3 = 1;
    v4 = KeNumberProcessors_0 - 1;
    LODWORD(v5) = 0;
  }
  else
  {
    KeCopyAffinityEx((__int64)v7, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(v7, CurrentPrcb->Number);
    v4 = KeCountSetBitsAffinityEx(v7);
    v5 = v7;
  }
  if ( v4 )
  {
    KiIpiSendPacket(v3, (_DWORD)v5, (unsigned int)xHalTimerWatchdogStop, 0, 0LL, 0LL);
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
