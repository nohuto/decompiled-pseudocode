/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1400D3028
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14008D6A0 (KeQueryTotalCycleTimeThread.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400B1788 (PoFxSendSystemLatencyUpdate.c)
 *     NtFlushProcessWriteBuffers @ 0x1400D3010 (NtFlushProcessWriteBuffers.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1400D34C8 (KeSetPriorityAndQuantumProcess.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14023A804 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x14023C1A0 (PpmSetExitLatencySamplingPercentage.c)
 *     ExpGetProcessInformation @ 0x1404AF9A0 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     PspTerminateAllThreads @ 0x1404D6C7C (PspTerminateAllThreads.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140716370 (PsQueryTotalCycleTimeProcess.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14005B700 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x1400D3118 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1400D3180 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
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
