/*
 * XREFs of NtCreatePartition @ 0x14071ADC8
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     PsReferencePartitionByHandle @ 0x1404FC8D4 (PsReferencePartitionByHandle.c)
 *     PspAllocatePartition @ 0x1405E9330 (PspAllocatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  char PreviousMode; // di
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  void *v13; // [rsp+20h] [rbp-58h]
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v16; // [rsp+60h] [rbp-18h] BYREF

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
      || (v11 = PsReferencePartitionByHandle(ParentPartitionHandle, 2u, PreviousMode, (PVOID *)&v15, v13), v11 >= 0) )
    {
      v11 = PspAllocatePartition(
              (__int64)ObjectAttributes,
              DesiredAccess,
              PreviousMode,
              v15,
              0,
              &v16,
              (__int64 *)&Handle);
      if ( v11 >= 0 )
      {
        PsDereferencePartition((__int64)v16);
        *PartitionHandle = Handle;
      }
    }
  }
  else
  {
    v11 = -1073741727;
  }
  if ( v15 )
    PsDereferencePartition(v15);
  return v11;
}
