/*
 * XREFs of KeIsEqualAffinityEx @ 0x140160800
 * Callers:
 *     PpmPerfApplyDomainState @ 0x14000E170 (PpmPerfApplyDomainState.c)
 *     PpmPerfApplyDomainStates @ 0x1400458C0 (PpmPerfApplyDomainStates.c)
 *     PpmParkReportMask @ 0x140046D50 (PpmParkReportMask.c)
 *     KeIsSubsetAffinityEx @ 0x1401FCEB0 (KeIsSubsetAffinityEx.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140228324 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x140228974 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1402299E0 (PpmUpdateIdleDomains.c)
 *     PspSetEffectiveJobLimits @ 0x14054CE94 (PspSetEffectiveJobLimits.c)
 *     PpmRegisterPerfStates @ 0x1405BF450 (PpmRegisterPerfStates.c)
 *     PpmHeteroDetectFavoredCores @ 0x1405C0998 (PpmHeteroDetectFavoredCores.c)
 *     PpmHeteroComputeRelativePerformance @ 0x1405C0B60 (PpmHeteroComputeRelativePerformance.c)
 *     PsUpdateActiveProcessAffinity @ 0x1406DFF78 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1406E0848 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsEqualAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v3; // r10
  unsigned __int16 *v4; // rax
  unsigned __int16 v5; // dx

  if ( *a1 < *a2 )
  {
    v3 = a2;
    v4 = a1;
  }
  else
  {
    v3 = a1;
    v4 = a2;
  }
  v5 = 0;
  if ( *v4 )
  {
    while ( *(_QWORD *)&a1[4 * v5 + 4] == *(_QWORD *)&a2[4 * v5 + 4] )
    {
      if ( ++v5 >= *v4 )
        goto LABEL_6;
    }
    return 0LL;
  }
  else
  {
LABEL_6:
    while ( v5 < *v3 )
    {
      if ( *(_QWORD *)&v3[4 * v5 + 4] )
        return 0LL;
      ++v5;
    }
    return 1LL;
  }
}
