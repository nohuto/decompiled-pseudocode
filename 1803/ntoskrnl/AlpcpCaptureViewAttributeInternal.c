/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x1404D9AEC
 * Callers:
 *     AlpcpCaptureViewAttribute @ 0x1404D9AAC (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140581F0C (AlpcpCaptureViewAttribute32.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x1404D03B0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpPrepareViewForDelivery @ 0x1404D9C30 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x1404D9D04 (AlpcpLocateSectionView.c)
 *     AlpcpDeleteView @ 0x1404D9E8C (AlpcpDeleteView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  ULONG_PTR v16; // rbp
  int v17; // esi
  ULONG_PTR v18; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v8 + 16));
    --*(_DWORD *)(v8 + 76);
    AlpcpUnlockBlob(*(_QWORD *)(v8 + 16), v9, v10, v11);
    if ( (*(_DWORD *)a2 & 0x10000) != 0 )
      AlpcpDeleteView(v8);
    AlpcpDereferenceBlobEx(v8, 1);
  }
  *(_DWORD *)(a3 + 40) &= ~0x4000u;
  v12 = *(_QWORD *)(a2 + 8);
  if ( !v12 )
    return 0LL;
  v13 = *(_QWORD *)(a2 + 16);
  if ( !v13 )
    return 3221225793LL;
  v14 = *(_QWORD *)(a1 + 16);
  if ( !v14 )
    return 3221225480LL;
  v16 = AlpcReferenceBlobByHandle(v14 + 40, v12, AlpcSectionType);
  if ( !v16 )
    return 3221225480LL;
  v17 = AlpcpLocateSectionView(v15, a1, v13, &BugCheckParameter2);
  if ( v17 >= 0 )
  {
    v18 = BugCheckParameter2;
    v17 = AlpcpPrepareViewForDelivery(BugCheckParameter2);
    if ( v17 < 0 )
      AlpcpDereferenceBlobEx(v18, 1);
    else
      *(_QWORD *)(a4 + 40) = v18;
  }
  AlpcpDereferenceBlobEx(v16, 1);
  return (unsigned int)v17;
}
