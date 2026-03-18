/*
 * XREFs of PspAddProcessToJobChain @ 0x140547D90
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 * Callees:
 *     PspNotifyProcessBackgroundTransition @ 0x1400323A0 (PspNotifyProcessBackgroundTransition.c)
 *     PspSendJobNotification @ 0x140039434 (PspSendJobNotification.c)
 *     RtlInterlockedSetClearBits @ 0x1401161F0 (RtlInterlockedSetClearBits.c)
 *     PsUpdateComponentPower @ 0x140116230 (PsUpdateComponentPower.c)
 *     PspApplyJobLimitsToProcess @ 0x140549298 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x14054E8F8 (PspSetProcessSchedulingGroup.c)
 *     PspCheckJobAccessState @ 0x1406E13A8 (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspAddProcessToJobChain(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  int v7; // r15d
  __int64 v8; // rbx
  int v9; // r14d
  int v10; // eax
  int v11; // edx
  int v12; // eax
  signed int v13; // eax
  __int64 i; // rbx
  int v15; // r9d
  signed __int32 v16; // eax
  int v17; // r9d
  signed __int32 v18; // r8d
  __int64 v20; // rcx

  v7 = 0;
  v8 = a1;
  if ( a1 != a2 )
  {
    v9 = a4 & 0x8000;
    do
    {
      v10 = *(_DWORD *)(v8 + 212);
      if ( v10 != -1 )
        *(_DWORD *)(v8 + 212) = v10 + 1;
      ++*(_DWORD *)(v8 + 216);
      ++*(_DWORD *)(v8 + 1208);
      if ( v9 )
        ++*(_DWORD *)(v8 + 1212);
      if ( (*(_DWORD *)(a3 + 772) & 0x4000000) != 0
        && (v20 = *(_QWORD *)(v8 + 432)) != 0
        && (v13 = PspCheckJobAccessState(v20, a3), v13 < 0) )
      {
        _InterlockedOr((volatile signed __int32 *)(a3 + 768), 2u);
      }
      else
      {
        v11 = *(_DWORD *)(v8 + 256);
        if ( (v11 & 8) != 0 && (unsigned int)(*(_DWORD *)(v8 + 216) - *(_DWORD *)(v8 + 1212)) > *(_DWORD *)(v8 + 260) )
        {
          RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 768), 2);
          if ( *(_QWORD *)(v8 + 456) && (*(_DWORD *)(v8 + 876) & 8) != 0 )
            PspSendJobNotification(v8, 3LL, 0, 1);
        }
        else
        {
          if ( (v11 & 4) == 0 || !*(_DWORD *)(v8 + 4) )
          {
            v12 = *(_DWORD *)(v8 + 1304);
            if ( (v12 & 0x20000000) != 0 )
            {
              _InterlockedOr((volatile signed __int32 *)(a3 + 768), 2u);
              v13 = -1073741811;
            }
            else
            {
              v13 = (v12 & 0x80u) != 0 ? 0xC000010A : 0;
            }
            goto LABEL_12;
          }
          _InterlockedOr((volatile signed __int32 *)(a3 + 768), 2u);
        }
        v13 = -1073741756;
      }
LABEL_12:
      v8 = *(_QWORD *)(v8 + 1072);
      if ( v13 >= 0 )
        v13 = v7;
      v7 = v13;
    }
    while ( v8 != a2 );
  }
  if ( v7 >= 0 )
  {
    for ( i = a1; i != a2; i = *(_QWORD *)(i + 1072) )
    {
      _InterlockedAnd((volatile signed __int32 *)(i + 1304), 0xFFDFFFFF);
      if ( *(_QWORD *)(i + 456) && (*(_DWORD *)(i + 876) & 0x40) != 0 )
        PspSendJobNotification(i, 6LL, *(_QWORD *)(a3 + 736), 0);
    }
    PspApplyJobLimitsToProcess(a3, 0LL);
    if ( *(_QWORD *)(a1 + 1016) )
    {
      if ( a2 && *(_QWORD *)(a2 + 1016) || PsCpuFairShareEnabled )
        PspSetProcessSchedulingGroup(a3, 0LL);
      PspSetProcessSchedulingGroup(a3, *(_QWORD *)(a1 + 1016));
    }
    v15 = (*(_DWORD *)(a1 + 864) != 0 ? 2 : 0) | 1;
    v16 = *(_DWORD *)(a3 + 768);
    if ( !*(_DWORD *)(a1 + 856) )
      v15 = *(_DWORD *)(a1 + 864) != 0 ? 2 : 0;
    v17 = v15 << 28;
    do
    {
      v18 = v16;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(a3 + 768), v17 | v16 & 0xCFFFFFFF, v16);
    }
    while ( v16 != v18 );
    if ( *(_DWORD *)(a1 + 860) && (!a2 || !*(_DWORD *)(a2 + 860)) )
      PspNotifyProcessBackgroundTransition(a3, 1);
    if ( (*(_DWORD *)(a1 + 1304) & 0x40000) != 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a3 + 440), 4u);
    PsUpdateComponentPower((PEPROCESS)a3, 8u, *(_QWORD *)(a1 + 1544));
    RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 768), 4);
  }
  return (unsigned int)v7;
}
