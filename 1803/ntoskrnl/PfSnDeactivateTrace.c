/*
 * XREFs of PfSnDeactivateTrace @ 0x14007A440
 * Callers:
 *     PfSnEndTrace @ 0x140528AE4 (PfSnEndTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PfSnCancelTraceTimer @ 0x14007A4F8 (PfSnCancelTraceTimer.c)
 *     PfSnRemoveProcessTrace @ 0x14007A58C (PfSnRemoveProcessTrace.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  KIRQL v4; // bl
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF **v6; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_1403CD850);
  KxReleaseSpinLock(&qword_1403CD850);
  __writecr8(v2);
  PfSnRemoveProcessTrace(a1[44].Count);
  ExReleaseRundownProtection(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = a1 + 1;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1403CD850);
  Count = v3->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(v3->Count + 8) != v3 || (v6 = (struct _EX_RUNDOWN_REF **)v3[1].Count, *v6 != v3) )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *v6 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v6;
  KxReleaseSpinLock(&qword_1403CD850);
  __writecr8(v4);
  return 0LL;
}
