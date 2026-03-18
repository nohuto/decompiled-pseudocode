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

NTSTATUS __fastcall NtCreatePartition(void *a1, __int64 *a2, unsigned int a3, int a4)
{
  char PreviousMode; // si
  __int64 v8; // r8
  int v9; // edi
  ULONG_PTR **v10; // rbx
  NTSTATUS result; // eax
  PVOID Object; // [rsp+48h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a2;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  v9 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    result = ObReferenceObjectByHandle(a1, 2u, MmPartitionObjectType, PreviousMode, &Object, 0LL);
    v9 = result;
    v10 = (ULONG_PTR **)Object;
    if ( result < 0 )
      return result;
    if ( *(ULONG_PTR **)Object == &MiSystemPartition )
    {
      ObfDereferenceObject(Object);
      v10 = 0LL;
    }
  }
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
    v9 = -1073741727;
  if ( v9 >= 0 )
  {
    v9 = MiCreatePartition(v10, a3, a4, PreviousMode, &v13);
    if ( v9 >= 0 )
      *a2 = v13;
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return v9;
}
