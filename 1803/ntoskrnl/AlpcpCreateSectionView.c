/*
 * XREFs of AlpcpCreateSectionView @ 0x140556764
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x1405563C4 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x140556558 (NtAlpcCreateSectionView.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateView @ 0x1404D47E8 (AlpcpCreateView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCreateRegion @ 0x140556858 (AlpcpCreateRegion.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        signed __int64 *Object,
        __int64 a3,
        __int64 a4,
        _QWORD *BugCheckParameter2a)
{
  int Region; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int View; // esi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  ULONG_PTR v16[5]; // [rsp+20h] [rbp-28h] BYREF

  *BugCheckParameter2a = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2, v8, v9, v10);
  if ( Region < 0 )
    return (unsigned int)Region;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2a);
  View = AlpcpCreateView((ULONG_PTR)BugCheckParameter2a, Object, v16);
  AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2a, v12, v13, v14);
  if ( _InterlockedCompareExchange64(Object + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(Object + 44);
  KeAbPostRelease((ULONG_PTR)(Object + 44));
  AlpcpDereferenceBlobEx((ULONG_PTR)BugCheckParameter2a, 1);
  if ( View < 0 )
    return (unsigned int)View;
  *BugCheckParameter2a = v16[0];
  return 0LL;
}
