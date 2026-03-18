/*
 * XREFs of MiReleaseFaultCharges @ 0x1400322C4
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A8D04 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseFaultCharges(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v5; // ebp
  __int64 v6; // rdx
  KIRQL v7; // r15
  int v8; // eax
  __int64 result; // rax

  v1 = *a1;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(*a1 + 64) != 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*a1 + 72));
  v8 = *(_DWORD *)(v1 + 56);
  if ( (v8 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v8 & 0x400) == 0 )
    v3 = MiDecrementSubsections(a1, a1, 4LL);
  --*(_QWORD *)(v1 + 40);
  if ( v3 )
    v4 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  LOBYTE(v6) = v7;
  result = MiCheckControlArea(v1, v6);
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v4, v5, v3);
  return result;
}
