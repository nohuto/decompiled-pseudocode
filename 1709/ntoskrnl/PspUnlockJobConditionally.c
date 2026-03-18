/*
 * XREFs of PspUnlockJobConditionally @ 0x140510B94
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x1404454F8 (PspSetJobIoRateControl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x14050E678 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspSendProcessNotificationToJobChain @ 0x14051259C (PspSendProcessNotificationToJobChain.c)
 *     PspSetNetRateControl @ 0x14071835C (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
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
