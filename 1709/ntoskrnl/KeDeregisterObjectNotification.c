/*
 * XREFs of KeDeregisterObjectNotification @ 0x1400E293C
 * Callers:
 *     IopCancelWaitCompletionPacket @ 0x1400E281C (IopCancelWaitCompletionPacket.c)
 *     ExpLeaveWorkerFactoryAwayMode @ 0x1400E28E4 (ExpLeaveWorkerFactoryAwayMode.c)
 *     ExpShutdownWorkerFactory @ 0x1400E3A58 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400E3300 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KeDeregisterObjectNotification(volatile signed __int32 *a1, __int64 *a2)
{
  char v4; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 *v6; // rax
  __int64 **v7; // rcx

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(a1);
  if ( *((_BYTE *)a2 + 17) == 4 )
  {
    v6 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2 || (v7 = (__int64 **)a2[1], *v7 != a2) )
      __fastfail(3u);
    *v7 = v6;
    v4 = 1;
    v6[1] = (__int64)v7;
    *((_BYTE *)a2 + 17) = 5;
  }
  _InterlockedAnd(a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return v4;
}
