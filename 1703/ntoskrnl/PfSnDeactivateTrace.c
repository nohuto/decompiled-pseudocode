/*
 * XREFs of PfSnDeactivateTrace @ 0x14012D0E8
 * Callers:
 *     PfSnEndTrace @ 0x14056637C (PfSnEndTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     PfSnCancelTraceTimer @ 0x14012D1A0 (PfSnCancelTraceTimer.c)
 *     PfSnRemoveProcessTrace @ 0x14012D234 (PfSnRemoveProcessTrace.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbx
  KIRQL v3; // al
  struct _EX_RUNDOWN_REF **Count; // rdx
  struct _EX_RUNDOWN_REF *v5; // rdi
  KIRQL v6; // bl
  unsigned __int64 v7; // r8

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
  KxReleaseSpinLock(&qword_14036DFD0);
  __writecr8(v2);
  PfSnRemoveProcessTrace(a1[44].Count);
  ExReleaseRundownProtection(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
  Count = (struct _EX_RUNDOWN_REF **)a1[2].Count;
  v5 = a1 + 1;
  v6 = v3;
  v7 = v5->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(v5->Count + 8) != v5 || *Count != v5 )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *Count = (struct _EX_RUNDOWN_REF *)v7;
  *(_QWORD *)(v7 + 8) = Count;
  KxReleaseSpinLock(&qword_14036DFD0);
  __writecr8(v6);
  return 0LL;
}
