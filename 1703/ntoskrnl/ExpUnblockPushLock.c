/*
 * XREFs of ExpUnblockPushLock @ 0x14007EB48
 * Callers:
 *     PspHandleTableWalker @ 0x140003D90 (PspHandleTableWalker.c)
 *     ExBlockOnAddressPushLock @ 0x14006BD30 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14006BE00 (ExTimedWaitForUnblockPushLock.c)
 *     MiUnlockImageSection @ 0x14006CF8C (MiUnlockImageSection.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14007EC20 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x14007EC54 (CmpTryToRundownHive.c)
 *     ExSweepSingleHandle @ 0x14008AB4C (ExSweepSingleHandle.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x1401F4EF0 (IopCheckHandleForRevocation.c)
 *     ExUnblockOnAddressPushLockEx @ 0x14025B640 (ExUnblockOnAddressPushLockEx.c)
 * Callees:
 *     ExTimedWaitForUnblockPushLock @ 0x14006BE00 (ExTimedWaitForUnblockPushLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rcx
  __int64 v9; // rbp
  NTSTATUS result; // eax

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
