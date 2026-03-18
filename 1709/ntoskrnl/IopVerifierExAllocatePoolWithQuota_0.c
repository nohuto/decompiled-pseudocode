/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     NtSetEaFile @ 0x14044F5E0 (NtSetEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x140490C90 (NtQueryVolumeInformationFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404CB2D0 (BuildQueryDirectoryIrp.c)
 *     NtQueryEaFile @ 0x140572CD0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140582FC0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x1405E06C0 (NtSetVolumeInformationFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_0(__int64 a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(NonPagedPoolNx, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
