/*
 * XREFs of NtManagePartition @ 0x14043C408
 * Callers:
 *     <none>
 * Callees:
 *     MiManagePartition @ 0x14043C484 (MiManagePartition.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  KPROCESSOR_MODE AccessMode; // r10
  char *v7; // rcx
  size_t Size; // [rsp+20h] [rbp-18h]

  AccessMode = KeGetCurrentThread()->PreviousMode;
  if ( AccessMode && PartitionInformationLength )
  {
    if ( ((unsigned __int8)PartitionInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (char *)PartitionInformation + PartitionInformationLength;
    if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < PartitionInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  LODWORD(Size) = PartitionInformationLength;
  return MiManagePartition(TargetHandle, Size, AccessMode);
}
