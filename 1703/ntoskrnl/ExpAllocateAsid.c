/*
 * XREFs of ExpAllocateAsid @ 0x14025E058
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14025D960 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 ExpAllocateAsid()
{
  _KPROCESS *Process; // r14
  unsigned int v1; // edi
  char *PoolWithTag; // rbp
  unsigned int v3; // ecx
  void *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  _KPROCESS **v7; // rdx
  int v8; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
LABEL_14:
  KeAcquireInStackQueuedSpinLock(&qword_140342DD8, &LockHandle);
  v3 = dword_140342DC4;
  while ( 1 )
  {
    v5 = dword_140342DC8;
    v6 = v3;
    if ( v3 != dword_140342DC8 )
      break;
    if ( v3 == ExpSvmAgents )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return 0LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v1 = v6 + 8;
    if ( v6 + 8 >= v6 )
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
    KeAcquireInStackQueuedSpinLock(&qword_140342DD8, &LockHandle);
    v3 = dword_140342DC4;
    v4 = PoolWithTag;
    if ( v6 == (_DWORD)dword_140342DC4 )
    {
      v4 = qword_140342DD0;
      if ( qword_140342DD0 )
        memmove(PoolWithTag, qword_140342DD0, 16LL * v6);
      memset(&PoolWithTag[16 * v6], 0, 16LL * (v1 - v6));
      v3 = v1;
      qword_140342DD0 = PoolWithTag;
      LODWORD(dword_140342DC4) = v1;
    }
    if ( v4 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      ExFreePoolWithTag(v4, 0);
      goto LABEL_14;
    }
  }
  v7 = (_KPROCESS **)qword_140342DD0;
  v8 = 0;
  if ( v3 )
  {
    while ( *v7 )
    {
      v7 += 2;
      if ( ++v8 >= v3 )
        goto LABEL_23;
    }
    v7[1] = (_KPROCESS *)1;
    *v7 = Process;
    v5 = dword_140342DC8;
  }
LABEL_23:
  dword_140342DC8 = v5 + 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return (unsigned int)(v8 + 1);
}
