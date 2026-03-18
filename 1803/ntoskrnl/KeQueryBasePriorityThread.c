/*
 * XREFs of KeQueryBasePriorityThread @ 0x140060CB0
 * Callers:
 *     NtQueryInformationThread @ 0x1404CF440 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x14002F8F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1)
{
  __int64 v2; // rbp
  unsigned __int8 CurrentIrql; // r14
  __int64 v4; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v6; // ebx
  char v7; // al
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  CurrentPrcb = KeGetCurrentPrcb();
  v9 = 0;
  while ( 1 )
  {
    LOBYTE(v4) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, v4);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = *(char *)(a1 + 563) - *(char *)(v2 + 444);
  v7 = *(_BYTE *)(a1 + 645);
  if ( v7 )
    v6 = 16 * v7;
  KiReleaseThreadLockSafe(a1);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v2 + 64));
  __writecr8(CurrentIrql);
  return v6;
}
