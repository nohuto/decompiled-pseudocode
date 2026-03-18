/*
 * XREFs of KeQueryActualAffinityThread @ 0x14023FDEC
 * Callers:
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 */

__int64 __fastcall KeQueryActualAffinityThread(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v7);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 584);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 576);
  result = KiReleaseThreadLockSafe(a1);
  __writecr8(CurrentIrql);
  return result;
}
