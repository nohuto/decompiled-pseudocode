/*
 * XREFs of PopClearSpecialRequest @ 0x14075D6EC
 * Callers:
 *     PopPowerRequestActionInfo @ 0x140523D80 (PopPowerRequestActionInfo.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     PopDiagTracePowerRequestChange @ 0x1400765E8 (PopDiagTracePowerRequestChange.c)
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 *     PopAcquirePowerRequestPushLock @ 0x14051D5A8 (PopAcquirePowerRequestPushLock.c)
 */

__int64 __fastcall PopClearSpecialRequest(__int64 a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi

  if ( a2 == 3 )
  {
    v4 = 0LL;
    PopAcquirePowerRequestPushLock(1);
    if ( *(_QWORD *)(a1 + 96) )
    {
      v4 = *(_QWORD *)(a1 + 88);
      if ( v4 )
        *(_QWORD *)(a1 + 88) = 0LL;
      *(_QWORD *)(a1 + 96) = 0LL;
      --*(_DWORD *)(a1 + 44);
      PopDiagTracePowerRequestChange(a1);
      v3 = 0;
    }
    else
    {
      v3 = -1073741811;
    }
    PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
    if ( v4 )
      PsReleaseProcessWakeCounter(v4, a1);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
