/*
 * XREFs of IoQueryFileDosDeviceName @ 0x14048E280
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x1401E0BAC (CcMmLogLostDelayedWriteError.c)
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopQueryNameInternal @ 0x14048F970 (IopQueryNameInternal.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  SIZE_T v2; // rdi
  __int64 v5; // rdx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rbx
  __int64 v7; // r8
  NTSTATUS v8; // edi
  int v10; // [rsp+30h] [rbp-18h]
  unsigned int i; // [rsp+60h] [rbp+18h] BYREF

  v2 = 208LL;
  for ( i = 208; ; v2 = i )
  {
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, v2, 0x6E446F49u);
    if ( !PoolWithTag )
      break;
    LOBYTE(v10) = 0;
    LOBYTE(v7) = 1;
    v8 = IopQueryNameInternal(FileObject, v5, v7, PoolWithTag, v2, &i, v10);
    if ( !v8 )
    {
      *ObjectNameInformation = PoolWithTag;
      return v8;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v8 != -2147483643 )
      return v8;
  }
  return -1073741670;
}
