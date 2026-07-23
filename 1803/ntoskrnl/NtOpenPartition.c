/*
 * XREFs of NtOpenPartition @ 0x140653090
 * Callers:
 *     <none>
 * Callees:
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  NTSTATUS result; // eax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v7 = (__int64)PartitionHandle;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(
             (__int64)ObjectAttributes,
             PsPartitionType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             (__int64)Handle);
  if ( result >= 0 )
    *PartitionHandle = Handle[0];
  return result;
}
