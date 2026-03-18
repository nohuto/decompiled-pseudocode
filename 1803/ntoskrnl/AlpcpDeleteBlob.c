/*
 * XREFs of AlpcpDeleteBlob @ 0x1404D9EC0
 * Callers:
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1404D02B4 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x1404D99B8 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x1404D9E8C (AlpcpDeleteView.c)
 *     AlpcpFlushResourcesPort @ 0x1404DAB68 (AlpcpFlushResourcesPort.c)
 *     NtAlpcCreatePortSection @ 0x1405569D4 (NtAlpcCreatePortSection.c)
 *     NtAlpcCreateSecurityContext @ 0x14055D9AC (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x14056A2AC (NtAlpcDeletePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x140748204 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // al

  v1 = (volatile signed __int64 *)(a1 - 16);
  ExAcquirePushLockExclusiveEx(a1 - 16, 0LL);
  v6 = *(_BYTE *)(a1 - 32);
  if ( (v6 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1, v3, v4, v5);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v6 | 8;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1, v3, v4, v5);
    KeAbPostRelease((ULONG_PTR)v1);
    (*(void (__fastcall **)(__int64))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 32LL))(a1);
    return 1;
  }
}
