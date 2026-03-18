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

__int64 __fastcall NtCreatePartition(void *a1, HANDLE *a2, ACCESS_MASK a3, __int64 a4)
{
  char PreviousMode; // di
  __int64 v9; // rcx
  int v10; // ebx
  void *v12; // [rsp+20h] [rbp-58h]
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
    if ( !a1 || (v10 = PsReferencePartitionByHandle(a1, 2u, PreviousMode, (PVOID *)&v14, v12), v10 >= 0) )
    {
      v10 = PspAllocatePartition(a4, a3, PreviousMode, v14, 0, &v15, (__int64 *)&Handle);
      if ( v10 >= 0 )
      {
        PsDereferencePartition((__int64)v15);
        *a2 = Handle;
      }
    }
  }
  else
  {
    v10 = -1073741727;
  }
  if ( v14 )
    PsDereferencePartition(v14);
  return (unsigned int)v10;
}
