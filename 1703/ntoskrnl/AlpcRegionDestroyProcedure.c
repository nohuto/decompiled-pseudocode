/*
 * XREFs of AlpcRegionDestroyProcedure @ 0x1404442D0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcRegionDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  AlpcpLockForCachedReferenceBlob(v1);
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  --*(_DWORD *)(v1 + 52);
  AlpcpUnlockBlob(v1);
  AlpcpDereferenceBlobEx(v1);
  return 0LL;
}
