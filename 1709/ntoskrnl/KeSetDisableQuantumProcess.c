/*
 * XREFs of KeSetDisableQuantumProcess @ 0x1400D48E4
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14050D938 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall KeSetDisableQuantumProcess(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // r14
  volatile LONG *v5; // rsi
  signed __int8 v6; // cf
  volatile signed __int32 **v7; // rbx
  unsigned int v8; // edi
  volatile signed __int32 *i; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( a2 )
    v6 = _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 2u);
  else
    v6 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 2u);
  v7 = (volatile signed __int32 **)(a1 + 48);
  v8 = v6;
  for ( i = *v7; i != (volatile signed __int32 *)v7; i = *(volatile signed __int32 **)i )
  {
    if ( a2 )
      _interlockedbittestandset(i - 160, 8u);
    else
      _interlockedbittestandreset(i - 160, 8u);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  __writecr8(CurrentIrql);
  return v8;
}
