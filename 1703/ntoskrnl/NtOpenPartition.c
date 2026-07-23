/*
 * XREFs of NtOpenPartition @ 0x1405D3F94
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 */

NTSTATUS __cdecl NtOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  int v3; // r10d
  char PreviousMode; // cl
  __int64 v6; // r8
  NTSTATUS result; // eax
  void *v8; // [rsp+50h] [rbp-18h] BYREF

  v3 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v6 = (__int64)PartitionHandle;
    *(_QWORD *)v6 = *(_QWORD *)v6;
  }
  result = ObOpenObjectByName(v3, (int)MmPartitionObjectType, PreviousMode, 0, DesiredAccess, 0LL, (__int64)&v8);
  if ( result >= 0 )
    *PartitionHandle = v8;
  return result;
}
