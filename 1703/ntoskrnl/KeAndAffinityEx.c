/*
 * XREFs of KeAndAffinityEx @ 0x1400450B0
 * Callers:
 *     PpmPerfApplyDomainState @ 0x14000E170 (PpmPerfApplyDomainState.c)
 *     PpmParkReportParkedCores @ 0x140045820 (PpmParkReportParkedCores.c)
 *     PpmPerfApplyDomainStates @ 0x1400458C0 (PpmPerfApplyDomainStates.c)
 *     PpmParkSteerInterrupts @ 0x140045AD0 (PpmParkSteerInterrupts.c)
 *     KiGetDeepIdleProcessors @ 0x14006D67C (KiGetDeepIdleProcessors.c)
 *     KeQueryLogicalProcessorRelationship @ 0x140080400 (KeQueryLogicalProcessorRelationship.c)
 *     KeIsSubsetAffinityEx @ 0x1401FCEB0 (KeIsSubsetAffinityEx.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140228324 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRecheckCoordinatedIdleMask @ 0x140228974 (PpmIdleRecheckCoordinatedIdleMask.c)
 *     PpmUpdateIdleDomains @ 0x1402299E0 (PpmUpdateIdleDomains.c)
 *     PspSetEffectiveJobLimits @ 0x14054CE94 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x1406AD294 (KeInitializeProfile.c)
 *     PsUpdateActiveProcessAffinity @ 0x1406DFF78 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1406E0848 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  unsigned __int16 v3; // ax
  _BYTE *v4; // r9
  unsigned __int16 v6; // cx
  unsigned int v7; // ebx
  unsigned __int16 i; // cx
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx
  _BYTE v13[176]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = *a2;
  v4 = v13;
  v6 = *a1;
  if ( a3 )
    v4 = a3;
  v7 = 0;
  if ( v6 < v3 )
    v3 = v6;
  *(_WORD *)v4 = v3;
  for ( i = 0; i < *(_WORD *)v4; ++i )
  {
    v9 = 4LL * i;
    v10 = (*(_QWORD *)&a2[v9 + 4] & *(_QWORD *)&a1[v9 + 4]) == 0LL;
    *(_QWORD *)&v4[v9 * 2 + 8] = *(_QWORD *)&a2[v9 + 4] & *(_QWORD *)&a1[v9 + 4];
    if ( !v10 )
      v7 = 1;
  }
  if ( v4 != v13 )
  {
    *((_DWORD *)v4 + 1) = 0;
    *((_WORD *)v4 + 1) = 20;
    if ( i < 0x14u )
    {
      do
      {
        v11 = i++;
        *(_QWORD *)&v4[8 * v11 + 8] = 0LL;
      }
      while ( i < *((_WORD *)v4 + 1) );
    }
  }
  return v7;
}
