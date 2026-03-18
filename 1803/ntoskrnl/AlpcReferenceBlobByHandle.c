/*
 * XREFs of AlpcReferenceBlobByHandle @ 0x1404D03B0
 * Callers:
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404D02B4 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x1404D99B8 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1404D9AEC (AlpcpCaptureViewAttributeInternal.c)
 *     NtAlpcCreateSectionView @ 0x140556558 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeletePortSection @ 0x14056A2AC (NtAlpcDeletePortSection.c)
 *     NtAlpcRevokeSecurityContext @ 0x1407476C8 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x140748204 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x1400C5D80 (ExfAcquireReleasePushLockExclusive.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 */

ULONG_PTR __fastcall AlpcReferenceBlobByHandle(__int64 a1, int a2, _DWORD *a3)
{
  signed __int64 *v6; // rdi
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( !a1 )
    return 0LL;
  v6 = (signed __int64 *)(a1 + 16);
  ExAcquirePushLockSharedEx(a1 + 16, 0LL);
  v7 = (unsigned int)(a2 - 16);
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 8)
    && (v8 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v7)) != 0
    && *(unsigned __int8 *)(v8 - 31) == *a3
    && AlpcpReferenceBlob(v8) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( (*(_BYTE *)(v8 - 32) & 4) != 0 )
    {
      _InterlockedOr(v10, 0);
      if ( (*(_QWORD *)(v8 - 16) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive((unsigned __int64 *)(v8 - 16));
    }
    return v8;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    return 0LL;
  }
}
