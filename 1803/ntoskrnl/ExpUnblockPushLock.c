/*
 * XREFs of ExpUnblockPushLock @ 0x1400A20F4
 * Callers:
 *     ExSweepSingleHandle @ 0x14006F9D4 (ExSweepSingleHandle.c)
 *     MiUnlockImageSection @ 0x1400A190C (MiUnlockImageSection.c)
 *     ExBlockOnAddressPushLock @ 0x1400A1CF0 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400A1DC0 (ExTimedWaitForUnblockPushLock.c)
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1400A20B8 (CmpDecrementAppHiveUnloadCount.c)
 *     PspHandleTableWalker @ 0x140144390 (PspHandleTableWalker.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x140237A90 (IopCheckHandleForRevocation.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14029DF34 (RtlpCSparseBitmapPageDecommit.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1402B9630 (ExUnblockOnAddressPushLockEx.c)
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x1400A1DC0 (ExTimedWaitForUnblockPushLock.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

LONG __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  __int64 v9; // rbp
  LONG result; // eax

  v4 = 0;
  CurrentIrql = 2;
  v8 = _InterlockedExchange64(a1, 0LL);
  if ( v8 )
  {
    if ( *(_QWORD *)(v8 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    do
    {
      v9 = *(_QWORD *)(v8 + 24);
      if ( (void *)v8 == a2 )
        v4 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v8 + 52), 1u) )
        result = KeSetEvent((PRKEVENT)v8, 1, 0);
      v8 = v9;
    }
    while ( v9 );
    if ( CurrentIrql != 2 )
    {
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  if ( a2 && !v4 )
  {
    if ( a3 )
      return KeWaitForSingleObject(a2, WrPushLock, 0, 0, 0LL);
    else
      return ExTimedWaitForUnblockPushLock((__int64)a1, (volatile signed __int32 *)a2, 0LL);
  }
  return result;
}
