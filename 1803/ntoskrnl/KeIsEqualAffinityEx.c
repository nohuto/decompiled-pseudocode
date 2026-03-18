/*
 * XREFs of KeIsEqualAffinityEx @ 0x14017FE90
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x140034500 (PpmPerfApplyDomainStates.c)
 *     PpmParkReportMask @ 0x140036A80 (PpmParkReportMask.c)
 *     PpmPerfApplyDomainState @ 0x1400AEB30 (PpmPerfApplyDomainState.c)
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 *     KeIsSubsetAffinityEx @ 0x140240320 (KeIsSubsetAffinityEx.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140272768 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x140273E80 (PpmUpdateIdleDomains.c)
 *     PspSetEffectiveJobLimits @ 0x14052F1E4 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 *     PpmHeteroDetectFavoredCores @ 0x140640260 (PpmHeteroDetectFavoredCores.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1406403D0 (PpmHeteroComputeRelativePerformance.c)
 *     PsUpdateActiveProcessAffinity @ 0x14077A61C (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x14077ACB8 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int16 v3; // r10
  unsigned __int16 v5; // dx

  v2 = a2;
  v3 = *a1;
  if ( *a1 >= *a2 )
  {
    v3 = *a2;
    v2 = a1;
  }
  v5 = 0;
  if ( v3 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= v3 )
        goto LABEL_6;
    }
    return 0LL;
  }
  else
  {
LABEL_6:
    while ( v5 < *v2 )
    {
      if ( *(_QWORD *)&v2[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
