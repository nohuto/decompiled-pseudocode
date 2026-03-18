/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x14050D3E4
 * Callers:
 *     PspAssignProcessToJob @ 0x14050BFAC (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x14050CBD0 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     RtlInterlockedSetClearBits @ 0x1400D4814 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x1400D4850 (PsUpdateComponentPower.c)
 *     PspNotifyProcessBackgroundTransition @ 0x140127588 (PspNotifyProcessBackgroundTransition.c)
 *     PspRequestProcessExecutionState @ 0x14050D8F0 (PspRequestProcessExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x14050D938 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14059AAA8 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx

  PspApplyJobLimitsToProcess(a3, 0LL);
  if ( *(_QWORD *)(a1 + 1016) )
  {
    if ( a2 && *(_QWORD *)(a2 + 1016) || PsCpuFairShareEnabled )
      PspSetProcessSchedulingGroup(a3, 0LL);
    PspSetProcessSchedulingGroup(a3, *(_QWORD *)(a1 + 1016));
  }
  v6 = (*(_DWORD *)(a1 + 864) != 0 ? 2 : 0) | 1u;
  if ( !*(_DWORD *)(a1 + 856) )
    v6 = *(_DWORD *)(a1 + 864) != 0 ? 2 : 0;
  PspRequestProcessExecutionState(a3, v6, 0LL);
  if ( *(_DWORD *)(a1 + 860) && (!a2 || !*(_DWORD *)(a2 + 860)) )
    PspNotifyProcessBackgroundTransition(a3, 1);
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 440), 4u);
  PsUpdateComponentPower((PEPROCESS)a3, 8LL, *(_QWORD *)(a1 + 1560));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 768), 4, 32);
}
