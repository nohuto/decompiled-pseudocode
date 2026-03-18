/*
 * XREFs of ExpShutdownWorkerFactory @ 0x140087284
 * Callers:
 *     NtShutdownWorkerFactory @ 0x140085388 (NtShutdownWorkerFactory.c)
 *     ExpCloseWorkerFactory @ 0x14052EE30 (ExpCloseWorkerFactory.c)
 * Callees:
 *     IoSetIoCompletionEx2 @ 0x1400863C0 (IoSetIoCompletionEx2.c)
 *     KeCancelTimer2 @ 0x1400873D0 (KeCancelTimer2.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x140087A0C (ExpLeaveWorkerFactoryAwayMode.c)
 *     KeDeregisterObjectNotification @ 0x140087A64 (KeDeregisterObjectNotification.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

__int64 __fastcall ExpShutdownWorkerFactory(PKSPIN_LOCK *Object)
{
  PVOID *v2; // rsi
  __int64 v3; // rbp
  char v4; // di
  PKSPIN_LOCK v5; // rax
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(Object[2], &LockHandle);
  v2 = (PVOID *)(Object + 9);
  v3 = 4LL;
  *((_DWORD *)Object + 38) = (_DWORD)Object[19] & 0xFFFFFFF8 | 4;
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
  if ( ((_DWORD)Object[19] & 0x200) != 0 )
    ExpLeaveWorkerFactoryAwayMode(Object);
  if ( Object[42] == (PKSPIN_LOCK)(Object + 21) && (unsigned __int8)KeDeregisterObjectNotification(Object + 21) )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  *((_BYTE *)Object[2] + 33) = 1;
  v5 = Object[2];
  *((_DWORD *)Object + 31) = 0;
  *((_DWORD *)Object + 30) = 0;
  if ( !*((_DWORD *)v5 + 7) || *((_BYTE *)v5 + 32) )
    v4 = 0;
  else
    *((_BYTE *)v5 + 32) = 1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  result = KeCancelTimer2(Object + 21);
  if ( v4 )
    return IoSetIoCompletionEx2(Object[2][1], 0LL, 0LL, 0, 0LL, 0, Object[2][2], 0);
  return result;
}
