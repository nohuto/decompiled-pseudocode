/*
 * XREFs of NtCreatePartition @ 0x1406BD278
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 */

NTSTATUS __cdecl NtCreatePartition(
        HANDLE ParentPartitionHandle,
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG PreferredNode)
{
  int v5; // r15d
  char PreviousMode; // si
  __int64 v9; // r8
  NTSTATUS v10; // edi
  ULONG_PTR **v11; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  v5 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)PartitionHandle < 0x7FFFFFFF0000LL )
      v9 = (__int64)PartitionHandle;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  v10 = 0;
  v11 = 0LL;
  if ( ParentPartitionHandle )
  {
    result = ObReferenceObjectByHandle(ParentPartitionHandle, 2u, MmPartitionObjectType, PreviousMode, &Object, 0LL);
    v10 = result;
    v11 = (ULONG_PTR **)Object;
    if ( result < 0 )
      return result;
    if ( *(ULONG_PTR **)Object == &MiSystemPartition )
    {
      ObfDereferenceObject(Object);
      v11 = 0LL;
    }
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    v10 = -1073741727;
  if ( v10 >= 0 )
  {
    v10 = MiCreatePartition(v11, DesiredAccess, v5, PreviousMode, &v14);
    if ( v10 >= 0 )
      *PartitionHandle = (HANDLE)v14;
  }
  if ( v11 )
    ObfDereferenceObject(v11);
  return v10;
}
