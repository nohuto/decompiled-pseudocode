/*
 * XREFs of PspLockJobConditionally @ 0x140510BC0
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1404454F8 (PspSetJobIoRateControl.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspSendProcessNotificationToJobChain @ 0x14051259C (PspSendProcessNotificationToJobChain.c)
 *     PspSetNetRateControl @ 0x14071835C (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall PspLockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      LOBYTE(v2) = ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
      return v2;
    }
  }
  return v2;
}
