/*
 * XREFs of PspRemoveIoAttribution @ 0x1404459B4
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x1404457CC (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x140007C70 (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspRemoveIoAttribution(PRTL_BALANCED_NODE *Object)
{
  PRTL_BALANCED_NODE *v2; // rax
  __int64 v4[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_DWORD *)Object + 333) )
  {
    IoStopDiskIoAttributionForContext(Object[167]);
    IoDiskIoAttributionDereference((__int64)Object[167]);
    Object[167] = 0LL;
    v2 = Object;
  }
  else
  {
    v2 = 0LL;
  }
  v4[1] = (__int64)v2;
  v4[0] = 0LL;
  v4[2] = 0LL;
  return PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v4, 5);
}
