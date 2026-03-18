/*
 * XREFs of AlpcpFlushResourcesPort @ 0x140473ABC
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140473994 (AlpcpDoPortCleanup.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpDeleteBlob @ 0x14047CC60 (AlpcpDeleteBlob.c)
 *     AlpcpReferenceBlob @ 0x14047D550 (AlpcpReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpFlushResourcesPort(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int64 **v2; // rsi
  __int64 *v3; // rax
  __int64 v5; // rcx
  ULONG_PTR v6; // rbp

  v1 = (volatile signed __int64 *)(a1 + 328);
  v2 = (__int64 **)(a1 + 336);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (__int64 *)v2 )
      break;
    v5 = *v3;
    if ( (__int64 **)v3[1] != v2 || *(__int64 **)(v5 + 8) != v3 )
      __fastfail(3u);
    *v2 = (__int64 *)v5;
    v6 = (ULONG_PTR)(v3 + 6);
    *(_QWORD *)(v5 + 8) = v2;
    v3[1] = (__int64)v3;
    *v3 = (__int64)v3;
    if ( AlpcpReferenceBlob((ULONG_PTR)(v3 + 6)) )
    {
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1);
      KeAbPostRelease((ULONG_PTR)v1);
      if ( (unsigned __int8)AlpcpDeleteBlob(v6) )
        AlpcpDereferenceBlobEx(v6);
      AlpcpDereferenceBlobEx(v6);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
