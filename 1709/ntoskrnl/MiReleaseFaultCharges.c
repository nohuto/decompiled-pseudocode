/*
 * XREFs of MiReleaseFaultCharges @ 0x1401286F4
 * Callers:
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14022E13C (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseFaultCharges(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v5; // ebp
  KIRQL v6; // r15
  int v7; // eax
  __int64 result; // rax

  v1 = *BugCheckParameter2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v7 = *(_DWORD *)(v1 + 56);
  if ( (v7 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v7 & 0x400) == 0 )
    v3 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2, (__int64)BugCheckParameter2, 4u);
  --*(_QWORD *)(v1 + 40);
  if ( v3 )
    v4 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  result = MiCheckControlArea(v1, v6);
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v4, v5, v3);
  return result;
}
