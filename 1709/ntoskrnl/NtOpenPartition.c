/*
 * XREFs of NtOpenPartition @ 0x1405EFBCC
 * Callers:
 *     <none>
 * Callees:
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
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
             (__int64)PsPartitionType,
             PreviousMode,
             0LL,
             DesiredAccess,
             0LL,
             Handle);
  if ( result >= 0 )
    *PartitionHandle = Handle[0];
  return result;
}
