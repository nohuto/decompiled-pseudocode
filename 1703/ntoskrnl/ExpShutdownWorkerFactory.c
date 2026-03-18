/*
 * XREFs of ExpShutdownWorkerFactory @ 0x14012AB80
 * Callers:
 *     NtShutdownWorkerFactory @ 0x14012B704 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x14055E070 (ExpCloseWorkerFactory.c)
 * Callees:
 *     KeDeregisterObjectNotification @ 0x140051420 (KeDeregisterObjectNotification.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x1400E2780 (IoSetIoCompletionEx2.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x14012ACD0 (KeCancelTimer2.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x14012B1B8 (ExpLeaveWorkerFactoryAwayMode.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(char *Object)
{
  PVOID *v2; // rsi
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
  v2 = (PVOID *)(Object + 72);
  v3 = 4LL;
  *((_DWORD *)Object + 38) = *((_DWORD *)Object + 38) & 0xFFFFFFF8 | 4;
  v4 = 1;
  do
  {
    if ( *v2 )
    {
      ObfDereferenceObjectWithTag(*v2, 0x746C6644u);
      *v2 = 0LL;
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( (*((_DWORD *)Object + 38) & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( *((char **)Object + 42) == Object + 168
    && KeDeregisterObjectNotification((volatile signed __int32 *)Object + 42, (__int64 *)Object + 38) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  *(_BYTE *)(*((_QWORD *)Object + 2) + 33LL) = 1;
  v5 = *((_QWORD *)Object + 2);
  *((_DWORD *)Object + 31) = 0;
  *((_DWORD *)Object + 30) = 0;
  if ( !*(_DWORD *)(v5 + 28) || *(_BYTE *)(v5 + 32) )
    v4 = 0;
  else
    *(_BYTE *)(v5 + 32) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  result = KeCancelTimer2(Object + 168, 0LL);
  if ( v4 )
    return IoSetIoCompletionEx2(
             *(_QWORD *)(*((_QWORD *)Object + 2) + 8LL),
             0LL,
             0LL,
             0,
             0LL,
             0,
             *(_QWORD *)(*((_QWORD *)Object + 2) + 16LL),
             0);
  return result;
}
