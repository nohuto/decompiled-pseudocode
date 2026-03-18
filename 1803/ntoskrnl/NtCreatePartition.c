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

__int64 __fastcall NtCreatePartition(ULONG_PTR a1, HANDLE *a2, unsigned int a3, int a4)
{
  char PreviousMode; // di
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int64 *v15; // [rsp+60h] [rbp-18h] BYREF

  Handle = 0LL;
  v14 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    *(_QWORD *)v9 = *(_QWORD *)v9;
  }
  if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
  {
    if ( !a1
      || (LOBYTE(v10) = PreviousMode, v11 = PsReferencePartitionByHandle(a1, 2LL, v10, 0x70437350u, &v14), v11 >= 0) )
    {
      v11 = PspAllocatePartition(a4, a3, PreviousMode, v14, 0, &v15, (__int64 *)&Handle);
      if ( v11 >= 0 )
      {
        PsDereferencePartition((__int64)v15);
        *a2 = Handle;
      }
    }
  }
  else
  {
    v11 = -1073741727;
  }
  if ( v14 )
    PsDereferencePartition(v14);
  return (unsigned int)v11;
}
