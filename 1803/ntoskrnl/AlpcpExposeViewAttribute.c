/*
 * XREFs of AlpcpExposeViewAttribute @ 0x1405602F0
 * Callers:
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpExposeViewAttribute(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rbx
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx

  v4 = *(_QWORD *)(a2 + 144);
  if ( v4 )
  {
    v9 = *(_QWORD *)(v4 + 16);
    AlpcpReferenceBlob(v9);
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 144) + 16LL);
    AlpcpLockForCachedReferenceBlob(v10);
    v11 = *(_DWORD *)(v10 + 48);
    AlpcpUnlockBlob(v10, v12, v13, v14);
    AlpcpDereferenceBlobEx(v9, 1);
    v15 = *(_QWORD *)(a2 + 144);
    memset(a3, 0, 0x20uLL);
    a3[2] = *(_QWORD *)(v15 + 40);
    a3[3] = *(_QWORD *)(v15 + 48);
    if ( (v11 & 1) != 0 )
      *(_DWORD *)a3 = 0x40000;
    *a4 |= 0x40000000u;
  }
  return 0LL;
}
