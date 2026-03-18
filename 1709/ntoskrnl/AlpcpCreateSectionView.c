/*
 * XREFs of AlpcpCreateSectionView @ 0x1404610D4
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x14045E120 (AlpcpMapLegacyPortView.c)
 *     NtAlpcCreateSectionView @ 0x140460B14 (NtAlpcCreateSectionView.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     AlpcpCreateRegion @ 0x1404611C8 (AlpcpCreateRegion.c)
 *     AlpcpCreateView @ 0x1404618E0 (AlpcpCreateView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCreateSectionView(
        ULONG_PTR BugCheckParameter2,
        signed __int64 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *BugCheckParameter2a)
{
  int Region; // ebx
  int View; // esi
  __int64 v10; // [rsp+20h] [rbp-28h]

  *BugCheckParameter2a = 0LL;
  AlpcpLockForCachedReferenceBlob(BugCheckParameter2);
  Region = AlpcpCreateRegion(BugCheckParameter2);
  AlpcpUnlockBlob(BugCheckParameter2);
  if ( Region < 0 )
    return (unsigned int)Region;
  ExAcquirePushLockSharedEx((ULONG_PTR)(a2 + 44), 0LL);
  AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2a);
  View = AlpcpCreateView((ULONG_PTR)BugCheckParameter2a, a2);
  AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2a);
  if ( _InterlockedCompareExchange64(a2 + 44, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2 + 44);
  KeAbPostRelease((ULONG_PTR)(a2 + 44));
  AlpcpDereferenceBlobEx((ULONG_PTR)BugCheckParameter2a);
  if ( View < 0 )
    return (unsigned int)View;
  *BugCheckParameter2a = v10;
  return 0LL;
}
