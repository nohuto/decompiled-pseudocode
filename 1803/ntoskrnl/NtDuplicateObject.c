/*
 * XREFs of NtDuplicateObject @ 0x1404B6B60
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  PVOID v9; // rdi
  char PreviousMode; // si
  __int64 v11; // rdx
  NTSTATUS result; // eax
  NTSTATUS v13; // r14d
  PVOID v14; // r15
  NTSTATUS v15; // esi
  PVOID v16; // [rsp+48h] [rbp-40h] BYREF
  void *v17; // [rsp+50h] [rbp-38h]
  PVOID Object[3]; // [rsp+58h] [rbp-30h] BYREF

  v9 = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v11 = (__int64)TargetHandle;
    if ( (unsigned __int64)TargetHandle >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    *TargetHandle = 0LL;
  }
  result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)SourceProcessHandle, 0x7544624Fu, (__int64)Object, 0LL, 0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v13 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)TargetProcessHandle, 0x7544624Fu, (__int64)&v16, 0LL, 0LL);
      if ( v13 < 0 )
        v16 = 0LL;
      else
        v9 = v16;
    }
    else
    {
      v16 = 0LL;
      v13 = 0;
    }
    v14 = Object[0];
    v15 = ObDuplicateObject((ULONG_PTR)Object[0], DesiredAccess, HandleAttributes, Options, PreviousMode);
    if ( TargetHandle )
      *TargetHandle = v17;
    ObfDereferenceObjectWithTag(v14, 0x7544624Fu);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x7544624Fu);
    if ( v13 < 0 )
      return v13;
    return v15;
  }
  return result;
}
