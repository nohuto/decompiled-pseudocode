/*
 * XREFs of AlpcpDeleteBlob @ 0x14046248C
 * Callers:
 *     NtAlpcDeletePortSection @ 0x1404601B0 (NtAlpcDeletePortSection.c)
 *     NtAlpcCreatePortSection @ 0x140460298 (NtAlpcCreatePortSection.c)
 *     AlpcpDeleteView @ 0x1404618AC (AlpcpDeleteView.c)
 *     NtAlpcDeleteSecurityContext @ 0x140461B78 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcCreateSecurityContext @ 0x140461C6C (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x140462094 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpFlushResourcesPort @ 0x1404646A0 (AlpcpFlushResourcesPort.c)
 *     NtAlpcDeleteResourceReserve @ 0x1406DD4E4 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
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
