/*
 * XREFs of ExpAllocateAsid @ 0x1402BBEA8
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x1402BB7A0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 ExpAllocateAsid()
{
  _KPROCESS *Process; // r14
  unsigned int v1; // edi
  char *PoolWithTag; // rbp
  void *v3; // rsi
  unsigned int v4; // ebx
  _KPROCESS **v5; // rax
  int v6; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
LABEL_14:
  KeAcquireInStackQueuedSpinLock(&qword_14039EBD8, &LockHandle);
  while ( 1 )
  {
    v4 = dword_14039EBC4;
    if ( (_DWORD)dword_14039EBC4 != dword_14039EBC8 )
      break;
    if ( (_DWORD)dword_14039EBC4 == ExpSvmAgents )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v1 = v4 + 8;
    if ( v4 + 8 >= v4 )
    {
      if ( v1 > ExpSvmAgents )
        v1 = ExpSvmAgents;
    }
    else
    {
      v1 = ExpSvmAgents;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v1, 0x73417845u);
    if ( !PoolWithTag )
      return 0LL;
    KeAcquireInStackQueuedSpinLock(&qword_14039EBD8, &LockHandle);
    v3 = PoolWithTag;
    if ( v4 == (_DWORD)dword_14039EBC4 )
    {
      v3 = qword_14039EBD0;
      if ( qword_14039EBD0 )
        memmove(PoolWithTag, qword_14039EBD0, 16LL * v4);
      memset(&PoolWithTag[16 * v4], 0, 16LL * (v1 - v4));
      qword_14039EBD0 = PoolWithTag;
      LODWORD(dword_14039EBC4) = v1;
    }
    if ( v3 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ExFreePoolWithTag(v3, 0);
      goto LABEL_14;
    }
  }
  v5 = (_KPROCESS **)qword_14039EBD0;
  v6 = 0;
  if ( (_DWORD)dword_14039EBC4 )
  {
    while ( *v5 )
    {
      v5 += 2;
      if ( ++v6 >= (unsigned int)dword_14039EBC4 )
        goto LABEL_23;
    }
    v5[1] = (_KPROCESS *)1;
    *v5 = Process;
  }
LABEL_23:
  ++dword_14039EBC8;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return (unsigned int)(v6 + 1);
}
