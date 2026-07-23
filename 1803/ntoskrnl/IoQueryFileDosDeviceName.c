/*
 * XREFs of IoQueryFileDosDeviceName @ 0x1404F8E90
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x1402202B4 (CcMmLogLostDelayedWriteError.c)
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14073D35C (PiDrvDbQuerySystemPathWin32.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IopQueryNameInternal @ 0x1404A5650 (IopQueryNameInternal.c)
 */

NTSTATUS __stdcall IoQueryFileDosDeviceName(PFILE_OBJECT FileObject, POBJECT_NAME_INFORMATION *ObjectNameInformation)
{
  SIZE_T v2; // rdi
  __int64 v5; // rdx
  _OBJECT_NAME_INFORMATION *PoolWithTag; // rbx
  NTSTATUS v7; // edi
  ULONG i; // [rsp+60h] [rbp+18h] BYREF

  v2 = 208LL;
  for ( i = 208; ; v2 = i )
  {
    PoolWithTag = (_OBJECT_NAME_INFORMATION *)ExAllocatePoolWithTag(PagedPool, v2, 0x6E446F49u);
    if ( !PoolWithTag )
      break;
    v7 = IopQueryNameInternal(FileObject, v5, 1, &PoolWithTag->Name, v2, &i, 0);
    if ( !v7 )
    {
      *ObjectNameInformation = PoolWithTag;
      return v7;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v7 != -2147483643 )
      return v7;
  }
  return -1073741670;
}
