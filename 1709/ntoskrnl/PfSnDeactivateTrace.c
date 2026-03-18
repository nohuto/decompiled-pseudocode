/*
 * XREFs of PfSnDeactivateTrace @ 0x140010884
 * Callers:
 *     PfSnEndTrace @ 0x140454934 (PfSnEndTrace.c)
 * Callees:
 *     PfSnCancelTraceTimer @ 0x14001093C (PfSnCancelTraceTimer.c)
 *     PfSnRemoveProcessTrace @ 0x1400109D0 (PfSnRemoveProcessTrace.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall PfSnDeactivateTrace(struct _EX_RUNDOWN_REF *a1)
{
  unsigned __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  KIRQL v4; // bl
  unsigned __int64 Count; // r8
  struct _EX_RUNDOWN_REF **v6; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140389D10);
  KxReleaseSpinLock(&qword_140389D10);
  __writecr8(v2);
  PfSnRemoveProcessTrace(a1[44].Count);
  ExReleaseRundownProtection_0(a1 + 45);
  PfSnCancelTraceTimer(a1);
  ExWaitForRundownProtectionRelease(a1 + 45);
  v3 = a1 + 1;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_140389D10);
  Count = v3->Count;
  if ( *(struct _EX_RUNDOWN_REF **)(v3->Count + 8) != v3 || (v6 = (struct _EX_RUNDOWN_REF **)v3[1].Count, *v6 != v3) )
    __fastfail(3u);
  --PfSnNumActiveTraces;
  *v6 = (struct _EX_RUNDOWN_REF *)Count;
  *(_QWORD *)(Count + 8) = v6;
  KxReleaseSpinLock(&qword_140389D10);
  __writecr8(v4);
  return 0LL;
}
