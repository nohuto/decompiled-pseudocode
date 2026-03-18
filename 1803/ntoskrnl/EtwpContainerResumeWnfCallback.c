/*
 * XREFs of EtwpContainerResumeWnfCallback @ 0x1402B1170
 * Callers:
 *     <none>
 * Callees:
 *     EtwpQueryPartitionRegistryInformation @ 0x14017EEF0 (EtwpQueryPartitionRegistryInformation.c)
 */

__int64 EtwpContainerResumeWnfCallback()
{
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(EtwpHostSiloState + 4128),
    (_DWORD *)(EtwpHostSiloState + 4168),
    (_QWORD *)(EtwpHostSiloState + 4160),
    (GUID *)(EtwpHostSiloState + 4144));
  return 0LL;
}
