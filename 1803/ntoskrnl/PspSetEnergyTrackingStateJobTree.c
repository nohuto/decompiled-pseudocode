/*
 * XREFs of PspSetEnergyTrackingStateJobTree @ 0x14052FB00
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PspIsContextAdmin @ 0x14052FBA0 (PspIsContextAdmin.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetEnergyTrackingStateJobTree(char *Object, _DWORD *a2)
{
  if ( (*a2 & 0xFFFFFFF3) != 0 || (~*a2 & a2[1]) != 0 )
    return 3221225485LL;
  if ( !(unsigned __int8)PspIsContextAdmin() )
    return 3221225506LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  *((_QWORD *)Object + 195) = *(_QWORD *)a2;
  PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)a2, 5);
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return 0LL;
}
