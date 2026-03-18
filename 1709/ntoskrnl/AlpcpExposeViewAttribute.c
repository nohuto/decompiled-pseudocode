/*
 * XREFs of AlpcpExposeViewAttribute @ 0x14057F054
 * Callers:
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 */

__int64 __fastcall AlpcpExposeViewAttribute(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rbx
  int v11; // esi
  __int64 v12; // rbx

  v4 = *(_QWORD *)(a2 + 144);
  if ( v4 )
  {
    v9 = *(_QWORD *)(v4 + 16);
    AlpcpReferenceBlob(v9);
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 144) + 16LL);
    AlpcpLockForCachedReferenceBlob(v10);
    v11 = *(_DWORD *)(v10 + 48);
    AlpcpUnlockBlob(v10);
    AlpcpDereferenceBlobEx(v9, 1);
    v12 = *(_QWORD *)(a2 + 144);
    memset(a3, 0, 0x20uLL);
    a3[2] = *(_QWORD *)(v12 + 40);
    a3[3] = *(_QWORD *)(v12 + 48);
    if ( (v11 & 1) != 0 )
      *(_DWORD *)a3 = 0x40000;
    *a4 |= 0x40000000u;
  }
  return 0LL;
}
