/*
 * XREFs of KeIsEqualAffinityEx @ 0x140138DD0
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x14008F7B0 (PpmPerfApplyDomainStates.c)
 *     PpmParkReportMask @ 0x1400901C0 (PpmParkReportMask.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyDomainState @ 0x140113190 (PpmPerfApplyDomainState.c)
 *     KeIsSubsetAffinityEx @ 0x140202CB0 (KeIsSubsetAffinityEx.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x14023B290 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x14023C8A0 (PpmUpdateIdleDomains.c)
 *     PspSetEffectiveJobLimits @ 0x14050B034 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x1405B500C (PpmRegisterPerfStates.c)
 *     PpmHeteroDetectFavoredCores @ 0x1405B5C34 (PpmHeteroDetectFavoredCores.c)
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1405B6D34 (PpmHeteroComputeRelativePerformance.c)
 *     PsUpdateActiveProcessAffinity @ 0x140716588 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x140716B3C (PspSetProcessAffinitySafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // dx

  v2 = a2;
  v4 = *a2;
  if ( *a1 >= *a2 )
    v2 = a1;
  else
    v4 = *a1;
  v5 = 0;
  if ( v4 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v4 )
        goto LABEL_7;
    }
    return 0LL;
  }
  else
  {
LABEL_7:
    while ( v5 < *v2 )
    {
      if ( *(_QWORD *)&v2[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
