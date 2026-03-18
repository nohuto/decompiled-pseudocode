/*
 * XREFs of KeSetQuantumProcess @ 0x14006B758
 * Callers:
 *     KeSetPriorityAndQuantumProcess @ 0x14006AA44 (KeSetPriorityAndQuantumProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x140532058 (PspApplyJobLimitsToProcess.c)
 *     PsChangeQuantumTable @ 0x1406116A8 (PsChangeQuantumTable.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KeSetQuantumProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  volatile LONG *v5; // rsi
  _QWORD **v6; // rdi
  _QWORD *i; // rax

  if ( *(_BYTE *)(a1 + 445) != a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v5 = (volatile LONG *)(a1 + 64);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    *(_BYTE *)(a1 + 445) = a2;
    v6 = (_QWORD **)(a1 + 48);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
      *((_BYTE *)i - 109) = a2;
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    __writecr8(CurrentIrql);
  }
}
