/*
 * XREFs of PfSnStartTraceTimer @ 0x1400C96BC
 * Callers:
 *     PfSnBeginScenario @ 0x14050DE38 (PfSnBeginScenario.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PfSnStartTraceTimer(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rsi
  struct _EX_RUNDOWN_REF *v2; // rbx
  KSPIN_LOCK *p_Count; // rbp
  KIRQL v4; // r14
  unsigned int v5; // edi

  v1 = a1 + 45;
  v2 = a1;
  if ( ExAcquireRundownProtection(a1 + 45) )
  {
    p_Count = &v2[34].Count;
    v4 = KeAcquireSpinLockRaiseToDpc(&v2[34].Count);
    if ( (v2[35].Count & 2) != 0 )
    {
      v5 = -1073741431;
    }
    else if ( (unsigned __int8)KiSetTimerEx((__int64)&v2[17], v2[25].Count, 0, 0, (__int64)&v2[26]) )
    {
      v5 = -1073741595;
    }
    else
    {
      LODWORD(v2[35].Count) |= 1u;
      v2 = 0LL;
      v5 = 0;
    }
    KxReleaseSpinLock(p_Count);
    __writecr8(v4);
    if ( v2 )
      ExReleaseRundownProtection(v1);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
