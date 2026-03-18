/*
 * XREFs of AlpcRegionDestroyProcedure @ 0x14056DF50
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcRegionDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v1 = *(_QWORD *)(a1 + 16);
  AlpcpLockForCachedReferenceBlob(v1);
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  v3 = *(_QWORD *)a1;
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a1 + 8);
  --*(_DWORD *)(v1 + 52);
  AlpcpUnlockBlob(v1, v3, v4, v5);
  AlpcpDereferenceBlobEx(v1, 1);
  return 0LL;
}
