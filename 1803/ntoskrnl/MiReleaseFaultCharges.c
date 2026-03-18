/*
 * XREFs of MiReleaseFaultCharges @ 0x1400C7D70
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiFaultGetFileExtents @ 0x14026194C (MiFaultGetFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402682E4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiReleaseFaultCharges(__int64 *BugCheckParameter2)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  BOOL v5; // ebp
  __int64 v6; // rdx
  KIRQL v7; // r15
  int v8; // eax
  __int64 result; // rax

  v1 = *BugCheckParameter2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = *(_QWORD *)(*BugCheckParameter2 + 64) != 0LL;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*BugCheckParameter2 + 72));
  v8 = *(_DWORD *)(v1 + 56);
  if ( (v8 & 0x20) == 0 && *(_QWORD *)(v1 + 64) && (v8 & 0x400) == 0 )
    v3 = MiDecrementSubsections((ULONG_PTR)BugCheckParameter2);
  --*(_QWORD *)(v1 + 40);
  if ( v3 )
    v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(v1 + 60) & 0x3FF));
  LOBYTE(v6) = v7;
  result = MiCheckControlArea(v1, v6);
  if ( v3 )
    return MiReturnCrossPartitionSectionCharges(v4, v5, v3);
  return result;
}
