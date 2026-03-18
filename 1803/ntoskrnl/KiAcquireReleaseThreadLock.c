/*
 * XREFs of KiAcquireReleaseThreadLock @ 0x140041D0C
 * Callers:
 *     KeRundownApcQueues @ 0x1404B9854 (KeRundownApcQueues.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiAcquireReleaseThreadLock(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // si
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  _InterlockedOr(v6, 0);
  if ( *(_QWORD *)(a1 + 64) )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = 0;
    while ( 1 )
    {
      LOBYTE(a2) = 1;
      KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      do
        KeYieldProcessorEx(&v7);
      while ( *(_QWORD *)(a1 + 64) );
    }
    KiReleaseThreadLockSafe(a1);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
