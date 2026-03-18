/*
 * XREFs of PspUnlockJobConditionally @ 0x140537718
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x140489B40 (PspSetJobIoRateControl.c)
 *     PspSendProcessNotificationToJobChain @ 0x140532A40 (PspSendProcessNotificationToJobChain.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1405361A8 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspSetNetRateControl @ 0x14077C38C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 */

void __fastcall PspUnlockJobConditionally(__int64 a1, _QWORD *a2)
{
  int v2; // eax

  v2 = 0;
  while ( a1 != *a2 )
  {
    ++v2;
    ++a2;
    if ( v2 )
    {
      ExReleaseResourceLite((PERESOURCE)(a1 + 56));
      return;
    }
  }
}
