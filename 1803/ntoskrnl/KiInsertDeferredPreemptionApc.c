/*
 * XREFs of KiInsertDeferredPreemptionApc @ 0x1400439A8
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x14003AD30 (KiDeferGroupSchedulingPreemption.c)
 *     KiBeginThreadAccountingPeriod @ 0x14009E860 (KiBeginThreadAccountingPeriod.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400EABEC (KiGroupSchedulingQuantumEnd.c)
 *     KiSwapThread @ 0x1400F6B40 (KiSwapThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThreadForApc @ 0x140041EC4 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x140043A70 (KiInsertQueueApc.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KiInsertDeferredPreemptionApc(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v6; // r10
  __int64 result; // rax
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  if ( a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xBu);
  }
  else if ( (*(_DWORD *)(a2 + 120) & 0x400) != 0 )
  {
    return result;
  }
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xAu);
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v8);
    while ( *(_QWORD *)(v3 + 64) );
  }
  if ( !*(_BYTE *)(v3 + 730) && (*(_DWORD *)(v3 + 116) & 0x4000) != 0 )
  {
    *(_BYTE *)(v3 + 730) = 1;
    KiInsertQueueApc(v3 + 648);
    KiSignalThreadForApc(a1, v6, 2);
  }
  return KiReleaseThreadLockSafe(v3);
}
