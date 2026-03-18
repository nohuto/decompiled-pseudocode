/*
 * XREFs of PspUnlockJobConditionally @ 0x140479E68
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     PspSetJobIoRateControl @ 0x14041EBBC (PspSetJobIoRateControl.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140478450 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspSendProcessNotificationToJobChain @ 0x140546E24 (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 *     PspSetNetRateControl @ 0x1406E1F2C (PspSetNetRateControl.c)
 * Callees:
 *     <none>
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
