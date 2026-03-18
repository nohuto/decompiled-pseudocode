/*
 * XREFs of ObpSetObjectAuditInfo @ 0x14075938C
 * Callers:
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x1404C1B80 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 */

__int64 __fastcall ObpSetObjectAuditInfo(__int64 a1, void *a2)
{
  _QWORD *v5; // rbx
  SIZE_T v6; // r14
  PVOID PoolWithTag; // rax
  void *v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9

  if ( !RtlValidSecurityDescriptor(a2) )
    return 3221225593LL;
  if ( (*(_BYTE *)(a1 + 26) & 0x20) != 0 )
    v5 = (_QWORD *)(a1 - ObpInfoMaskToOffset[*(_BYTE *)(a1 + 26) & 0x3F]);
  else
    v5 = 0LL;
  if ( v5 && !*v5 )
  {
    v6 = RtlLengthSecurityDescriptor(a2);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x4941624Fu);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memmove(PoolWithTag, a2, v6);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = a1 + 16;
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    if ( *v5 )
    {
      ExReleasePushLockEx(v10, 0LL, v11, v12);
      KeLeaveCriticalRegion();
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      *v5 = v8;
      ExReleasePushLockEx(v10, 0LL, v11, v12);
      KeLeaveCriticalRegion();
    }
  }
  return 0LL;
}
