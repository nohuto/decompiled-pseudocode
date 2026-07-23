/*
 * XREFs of PspRemoveIoAttribution @ 0x14054DD78
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     PspSetJobIoAttribution @ 0x14054D468 (PspSetJobIoAttribution.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     IoStopDiskIoAttributionForContext @ 0x14011F498 (IoStopDiskIoAttributionForContext.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
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
  return PspEnumJobsAndProcessesInJobHierarchy(
           (char *)Object,
           (int)PspSetJobIoAttributionJobPreCallback,
           0,
           (int)PspSetJobIoAttributionProcessCallback,
           (__int64)v4,
           5);
}
