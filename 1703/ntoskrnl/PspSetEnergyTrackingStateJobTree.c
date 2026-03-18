/*
 * XREFs of PspSetEnergyTrackingStateJobTree @ 0x14055FCF4
 * Callers:
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     PspIsContextAdmin @ 0x14045EEC4 (PspIsContextAdmin.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140478B80 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetEnergyTrackingStateJobTree(char *Object, _DWORD *a2)
{
  if ( (*a2 & 0xFFFFFFFB) != 0 || (~*a2 & a2[1]) != 0 )
    return 3221225485LL;
  if ( !PspIsContextAdmin() )
    return 3221225506LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  *((_QWORD *)Object + 193) = *(_QWORD *)a2;
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetJobEnergyTrackingStateCallback,
    0,
    (int)PspSetProcessEnergyTrackingStateCallback,
    (__int64)a2,
    5);
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  return 0LL;
}
