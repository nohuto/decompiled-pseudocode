/*
 * XREFs of AlpcpDeleteBlob @ 0x14047CC60
 * Callers:
 *     NtAlpcCreatePortSection @ 0x1404366D8 (NtAlpcCreatePortSection.c)
 *     NtAlpcDeleteSecurityContext @ 0x14043D388 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x140442BA0 (NtAlpcDeletePortSection.c)
 *     AlpcpFlushResourcesPort @ 0x140473ABC (AlpcpFlushResourcesPort.c)
 *     NtAlpcCreateSecurityContext @ 0x14047A324 (NtAlpcCreateSecurityContext.c)
 *     AlpcpDeleteView @ 0x14047BCF4 (AlpcpDeleteView.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14047CDCC (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406B1970 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  char v3; // al
  void (__fastcall *v4)(__int64); // rax

  v1 = (volatile signed __int64 *)(a1 - 16);
  ExAcquirePushLockExclusiveEx(a1 - 16, 0LL);
  v3 = *(_BYTE *)(a1 - 32);
  if ( (v3 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v3 | 8;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    v4 = *(void (__fastcall **)(__int64))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 24LL);
    if ( v4 )
      v4(a1);
    return 1;
  }
}
