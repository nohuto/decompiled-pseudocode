/*
 * XREFs of KiSwitchPriQueue @ 0x1400CEB28
 * Callers:
 *     KeRemovePriQueue @ 0x1401264C0 (KeRemovePriQueue.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1400AF378 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

_QWORD *__fastcall KiSwitchPriQueue(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v8; // rax
  _QWORD *result; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 520);
  if ( a3 )
    KiActivateWaiterQueueWithNoLocks(a1, a3, v3);
  KiAcquireKobjectLockSafe(a2);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  while ( 1 )
  {
    LOBYTE(v6) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v6);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v10);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_QWORD *)(a1 + 232) = a2;
  v8 = *(char *)(a1 + 563);
  *(_DWORD *)(a1 + 540) = v8;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 4 * v8 + 536));
  KiReleaseThreadLockSafe(a1);
  result = *(_QWORD **)(a2 + 680);
  if ( *result != a2 + 672 )
    __fastfail(3u);
  *v3 = a2 + 672;
  v3[1] = result;
  *result = v3;
  *(_QWORD *)(a2 + 680) = v3;
  _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
  return result;
}
