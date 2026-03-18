/*
 * XREFs of MiRemoveSystemCacheReferences @ 0x1402125C0
 * Callers:
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14009B950 (MiCheckControlArea.c)
 *     MiRemoveViewsFromSection @ 0x1400A8D90 (MiRemoveViewsFromSection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140221484 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiRemoveSystemCacheReferences(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  __int64 v5; // r14
  KIRQL v6; // bl
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 result; // rax

  v2 = *(_QWORD *)a1;
  v5 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)a1 + 72LL));
  v7 = MiRemoveViewsFromSection(a1, a2, 4u);
  --*(_QWORD *)(v2 + 40);
  LOBYTE(v8) = v6;
  --*(_DWORD *)(v2 + 88);
  v9 = v7;
  result = MiCheckControlArea(v2, v8);
  if ( v9 )
    return MiReturnCrossPartitionSectionCharges(v5, 1LL, v9);
  return result;
}
