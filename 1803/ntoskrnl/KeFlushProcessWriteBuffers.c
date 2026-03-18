/*
 * XREFs of KeFlushProcessWriteBuffers @ 0x1400A3F28
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x1400607C0 (KeQueryTotalCycleTimeThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1400735B8 (PoFxSendSystemLatencyUpdate.c)
 *     NtFlushProcessWriteBuffers @ 0x1400A3F10 (NtFlushProcessWriteBuffers.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140271C34 (PpmClearExitLatencySamplingPercentage.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140273790 (PpmSetExitLatencySamplingPercentage.c)
 *     PsQueryTotalCycleTimeProcess @ 0x14048B3B0 (PsQueryTotalCycleTimeProcess.c)
 *     PspTerminateAllThreads @ 0x1404E89FC (PspTerminateAllThreads.c)
 *     ExpGetProcessInformation @ 0x1405A2940 (ExpGetProcessInformation.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x140034E10 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x140034E50 (KeCopyAffinityEx.c)
 *     KiIpiSendPacket @ 0x1400A4018 (KiIpiSendPacket.c)
 *     KeCountSetBitsAffinityEx @ 0x1400A4080 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
