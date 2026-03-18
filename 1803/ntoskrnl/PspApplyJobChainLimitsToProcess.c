/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x1405319B4
 * Callers:
 *     PspAssignProcessToJob @ 0x1405306C8 (PspAssignProcessToJob.c)
 *     PspImplicitAssignProcessToJob @ 0x140531810 (PspImplicitAssignProcessToJob.c)
 * Callees:
 *     PspNotifyProcessBackgroundTransition @ 0x1400637B8 (PspNotifyProcessBackgroundTransition.c)
 *     RtlInterlockedSetClearBits @ 0x14008ABB8 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x14008ABF0 (PsUpdateComponentPower.c)
 *     PspRequestProcessExecutionState @ 0x140532010 (PspRequestProcessExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x140532058 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14056E418 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx

  PspApplyJobLimitsToProcess(a3, 0LL);
  v6 = *(_QWORD *)(a1 + 1016);
  if ( v6 )
  {
    if ( a2 && *(_QWORD *)(a2 + 1016) || PsCpuFairShareEnabled )
    {
      PspSetProcessSchedulingGroup(a3, 0LL);
      v6 = *(_QWORD *)(a1 + 1016);
    }
    PspSetProcessSchedulingGroup(a3, v6);
  }
  v7 = (*(_DWORD *)(a1 + 864) != 0 ? 2 : 0) | 1u;
  if ( !*(_DWORD *)(a1 + 856) )
    v7 = *(_DWORD *)(a1 + 864) != 0 ? 2 : 0;
  PspRequestProcessExecutionState(a3, v7, 0LL);
  if ( *(_DWORD *)(a1 + 860) && (!a2 || !*(_DWORD *)(a2 + 860)) )
    PspNotifyProcessBackgroundTransition(a3, 1);
  if ( (*(_DWORD *)(a1 + 1304) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 440), 4u);
  PsUpdateComponentPower((PEPROCESS)a3, 8, *(_QWORD *)(a1 + 1560));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 768), 4, 32);
}
