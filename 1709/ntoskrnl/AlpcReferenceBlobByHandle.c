/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x140462188
 * Callers:
 *     NtAlpcDeletePortSection @ 0x1404601B0 (NtAlpcDeletePortSection.c)
 *     NtAlpcCreateSectionView @ 0x140460B14 (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140461390 (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x140461B78 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140462094 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     NtAlpcRevokeSecurityContext @ 0x1406DC9A8 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406DD4E4 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1401324CC (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x1404A2210 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(__int64 a1, int a2, _DWORD *a3)
{
  signed __int64 *v6; // rbx
  ULONG_PTR v7; // rdi
  signed __int32 v9[14]; // [rsp+0h] [rbp-38h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = (signed __int64 *)(a1 + 16);
  ExAcquirePushLockSharedEx(a1 + 16, 0LL);
  if ( (unsigned int)(a2 - 16) >= *(_DWORD *)(a1 + 8)
    || (v7 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(a2 - 16))) == 0
    || *(unsigned __int8 *)(v7 - 31) != *a3
    || !AlpcpReferenceBlob(v7) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 0LL;
  }
  if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  if ( (*(_BYTE *)(v7 - 32) & 4) != 0 )
  {
    _InterlockedOr(v9, 0);
    if ( (*(_QWORD *)(v7 - 16) & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v7 - 16));
  }
  return v7;
}
