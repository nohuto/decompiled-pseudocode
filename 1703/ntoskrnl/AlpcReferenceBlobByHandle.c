/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x14047CEE0
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140436258 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSecurityContext @ 0x14043D388 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x140442BA0 (NtAlpcDeletePortSection.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14047A5CC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14047CDCC (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406B1970 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcRevokeSecurityContext @ 0x1406B1C98 (NtAlpcRevokeSecurityContext.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140136B30 (ExfAcquireReleasePushLockExclusive.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  ULONG_PTR v6; // rbx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0LL;
  v5 = a2 - 16;
  ExAcquirePushLockSharedEx(a1 + 16, 0LL);
  if ( v5 < *(_DWORD *)(a1 + 8)
    && (v6 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v5)) != 0
    && *(unsigned __int8 *)(v6 - 31) == *a3
    && AlpcpReferenceBlob(v6) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 16));
    KeAbPostRelease(a1 + 16);
    if ( (*(_BYTE *)(v6 - 32) & 4) != 0 )
    {
      _InterlockedOr(v8, 0);
      if ( (*(_QWORD *)(v6 - 16) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v6 - 16));
    }
    return v6;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 16));
    KeAbPostRelease(a1 + 16);
    return 0LL;
  }
}
