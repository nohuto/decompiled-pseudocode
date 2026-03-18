/*
 * XREFs of PspLockJobConditionally @ 0x140534D04
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140489B40 (PspSetJobIoRateControl.c)
 *     PspSendProcessNotificationToJobChain @ 0x140532A40 (PspSendProcessNotificationToJobChain.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     PspSetNetRateControl @ 0x14077C38C (PspSetNetRateControl.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
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
