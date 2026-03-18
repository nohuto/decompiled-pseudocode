/*
 * XREFs of PfpServiceMainThreadBoost @ 0x1401559D8
 * Callers:
 *     PfpScenCtxScenarioSet @ 0x140478314 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall PfpServiceMainThreadBoost(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rsi
  KIRQL v6; // al
  KIRQL v7; // r15
  __int64 v8; // rcx

  v2 = 0;
  if ( *a2 )
  {
    v5 = a2[1];
    *(_DWORD *)(v5 + 160) = 1;
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    ++*(_DWORD *)(a1 + 112);
    v7 = v6;
    *(_DWORD *)(v5 + 164) = *(_DWORD *)(a1 + 112);
    if ( !*(_QWORD *)(a1 + 88) )
    {
      v8 = *a2;
      *(_QWORD *)(a1 + 88) = *a2;
      *a2 = 0LL;
      *(_DWORD *)(a1 + 96) = KeSetActualBasePriorityThread(v8, 12LL);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 104));
    __writecr8(v7);
    *(_QWORD *)(v5 + 64) = 0LL;
    *(_BYTE *)(v5 + 64) = 8;
    *(_QWORD *)(v5 + 80) = v5 + 72;
    *(_QWORD *)(v5 + 72) = v5 + 72;
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_QWORD *)(v5 + 120) = 0LL;
    *(_QWORD *)(v5 + 24) = PfpPowerActionDpcRoutine;
    *(_DWORD *)v5 = 275;
    *(_QWORD *)(v5 + 32) = v5;
    *(_QWORD *)(v5 + 56) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    KiSetTimerEx(v5 + 64, -200000000LL, 0, 0, v5);
    a2[1] = 0LL;
  }
  else
  {
    return (unsigned int)-2147483614;
  }
  return v2;
}
