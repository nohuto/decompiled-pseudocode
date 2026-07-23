/*
 * XREFs of NtCreatePartition @ 0x14077E934
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     PsReferencePartitionByHandle @ 0x140512414 (PsReferencePartitionByHandle.c)
 *     PspAllocatePartition @ 0x14064EEF0 (PspAllocatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  int v5; // r14d
  char PreviousMode; // di
  __int64 v10; // rcx
  __int64 v11; // r8
  NTSTATUS v12; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v16; // [rsp+60h] [rbp-18h] BYREF

  v5 = (int)ObjectAttributes;
  Handle = 0LL;
  v15 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v10 = (__int64)PartitionHandle;
    *(_QWORD *)v10 = *(_QWORD *)v10;
  }
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( !ParentPartitionHandle
      || (LOBYTE(v11) = PreviousMode,
          v12 = PsReferencePartitionByHandle((ULONG_PTR)ParentPartitionHandle, 2LL, v11, 0x70437350u, &v15),
          v12 >= 0) )
    {
      v12 = PspAllocatePartition(v5, DesiredAccess, PreviousMode, v15, 0, &v16, (__int64 *)&Handle);
      if ( v12 >= 0 )
      {
        PsDereferencePartition((__int64)v16);
        *PartitionHandle = Handle;
      }
    }
  }
  else
  {
    v12 = -1073741727;
  }
  if ( v15 )
    PsDereferencePartition(v15);
  return v12;
}
