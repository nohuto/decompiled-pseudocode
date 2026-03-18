/*
 * XREFs of FsRtlpRegisterProviderWithMUP @ 0x1405CE304
 * Callers:
 *     FsRtlpRegisterUncProvider @ 0x1405CE20C (FsRtlpRegisterUncProvider.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x14017DFC0 (ZwWaitForSingleObject.c)
 *     ZwFsControlFile @ 0x14017E660 (ZwFsControlFile.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRegisterProviderWithMUP(HANDLE Handle, const void **a2, __int64 a3, __int64 a4)
{
  ULONG InputBufferLength; // edi
  char *PoolWithTag; // rax
  void *InputBuffer; // rbx
  unsigned int Status; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  InputBufferLength = *(unsigned __int16 *)a2 + 32;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, InputBufferLength, 0x6E755346u);
  InputBuffer = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 32;
  *(_WORD *)PoolWithTag = *(_WORD *)a2;
  *((_WORD *)PoolWithTag + 1) = *(_WORD *)a2;
  *((_QWORD *)PoolWithTag + 2) = a3;
  *((_QWORD *)PoolWithTag + 3) = a4;
  memmove(PoolWithTag + 32, a2[1], *(unsigned __int16 *)a2);
  Status = ZwFsControlFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x100004u, InputBuffer, InputBufferLength, 0LL, 0);
  if ( Status == 259 )
  {
    ZwWaitForSingleObject(Handle, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  ExFreePoolWithTag(InputBuffer, 0);
  return Status;
}
