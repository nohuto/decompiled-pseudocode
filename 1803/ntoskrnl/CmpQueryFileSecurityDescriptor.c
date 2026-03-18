/*
 * XREFs of CmpQueryFileSecurityDescriptor @ 0x14049BD64
 * Callers:
 *     CmpInitHiveFromFile @ 0x14049DBFC (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x14049E1B8 (CmpOpenHiveFile.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x1405F4564 (CmpStartRMLog.c)
 * Callees:
 *     ZwQuerySecurityObject @ 0x1401A9F20 (ZwQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpQueryFileSecurityDescriptor(HANDLE Handle, _QWORD *a2)
{
  PVOID PoolWithTag; // rdi
  NTSTATUS SecurityObject; // ebx
  __int64 result; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  SecurityObject = ZwQuerySecurityObject(Handle, 4u, 0LL, 0, (PULONG)&NumberOfBytes);
  if ( SecurityObject == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64734D43u);
    if ( PoolWithTag )
    {
      SecurityObject = ZwQuerySecurityObject(Handle, 4u, PoolWithTag, NumberOfBytes, (PULONG)&NumberOfBytes);
      if ( SecurityObject < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
    }
    else
    {
      SecurityObject = -1073741670;
    }
  }
  else if ( !SecurityObject )
  {
    SecurityObject = -1073741823;
  }
  result = (unsigned int)SecurityObject;
  *a2 = PoolWithTag;
  return result;
}
