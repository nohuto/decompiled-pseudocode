/*
 * XREFs of KeAndAffinityEx @ 0x14008CC70
 * Callers:
 *     PpmParkReportParkedCores @ 0x14008F710 (PpmParkReportParkedCores.c)
 *     PpmPerfApplyDomainStates @ 0x14008F7B0 (PpmPerfApplyDomainStates.c)
 *     PpmParkSteerInterrupts @ 0x14008FDD0 (PpmParkSteerInterrupts.c)
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 *     KiGetDeepIdleProcessors @ 0x1400DE17C (KiGetDeepIdleProcessors.c)
 *     KeQueryLogicalProcessorRelationship @ 0x1400FBEB0 (KeQueryLogicalProcessorRelationship.c)
 *     PpmPerfApplyDomainState @ 0x140113190 (PpmPerfApplyDomainState.c)
 *     KeIsSubsetAffinityEx @ 0x140202CB0 (KeIsSubsetAffinityEx.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x14023B290 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x14023C8A0 (PpmUpdateIdleDomains.c)
 *     PspSetEffectiveJobLimits @ 0x14050B034 (PspSetEffectiveJobLimits.c)
 *     KeInitializeProfile @ 0x1406D8594 (KeInitializeProfile.c)
 *     PsUpdateActiveProcessAffinity @ 0x140716588 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x140716B3C (PspSetProcessAffinitySafe.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 __fastcall KeAndAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2, _BYTE *a3)
{
  unsigned __int16 v3; // ax
  _BYTE *v4; // r9
  unsigned __int16 v6; // r8
  unsigned int v7; // r10d
  unsigned __int16 v8; // cx
  __int64 v9; // r8
  bool v10; // zf
  __int64 v11; // rdx
  _BYTE v13[176]; // [rsp+0h] [rbp-C8h] BYREF

  v3 = *a1;
  v4 = v13;
  if ( a3 )
    v4 = a3;
  v6 = *a2;
  v7 = 0;
  v8 = 0;
  if ( v3 < *a2 )
    v6 = v3;
  *(_WORD *)v4 = v6;
  if ( v6 )
  {
    do
    {
      v9 = 4LL * v8;
      v10 = (*(_QWORD *)&a2[v9 + 4] & *(_QWORD *)&a1[v9 + 4]) == 0LL;
      *(_QWORD *)&v4[v9 * 2 + 8] = *(_QWORD *)&a2[v9 + 4] & *(_QWORD *)&a1[v9 + 4];
      if ( !v10 )
        v7 = 1;
      ++v8;
    }
    while ( v8 < *(_WORD *)v4 );
  }
  if ( v4 != v13 )
  {
    *((_DWORD *)v4 + 1) = 0;
    *((_WORD *)v4 + 1) = 20;
    if ( v8 < 0x14u )
    {
      do
      {
        v11 = v8++;
        *(_QWORD *)&v4[8 * v11 + 8] = 0LL;
      }
      while ( v8 < *((_WORD *)v4 + 1) );
    }
  }
  return v7;
}
