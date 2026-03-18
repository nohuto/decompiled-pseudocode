/*
 * XREFs of ExpUnblockPushLock @ 0x1400BBEE8
 * Callers:
 *     CmpDecrementAppHiveUnloadCount @ 0x140015C74 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     ExSweepSingleHandle @ 0x1400B8890 (ExSweepSingleHandle.c)
 *     MiLockPagableImageSection @ 0x1400BC630 (MiLockPagableImageSection.c)
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400BD7E0 (ExTimedWaitForUnblockPushLock.c)
 *     PspHandleTableWalker @ 0x140128200 (PspHandleTableWalker.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x1401FACF0 (IopCheckHandleForRevocation.c)
 *     ExUnblockOnAddressPushLockEx @ 0x140284F70 (ExUnblockOnAddressPushLockEx.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400BD7E0 (ExTimedWaitForUnblockPushLock.c)
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
      return ExTimedWaitForUnblockPushLock(a1, a2, 0LL);
  }
  return result;
}
