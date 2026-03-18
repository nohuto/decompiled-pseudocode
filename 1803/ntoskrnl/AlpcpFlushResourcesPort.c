/*
 * XREFs of AlpcpFlushResourcesPort @ 0x1404DAB68
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1404DAA48 (AlpcpDoPortCleanup.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReferenceBlob @ 0x1404D0478 (AlpcpReferenceBlob.c)
 *     AlpcpDeleteBlob @ 0x1404D9EC0 (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpFlushResourcesPort(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  _QWORD **v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *v6; // rax
  _QWORD *v8; // rcx
  ULONG_PTR v9; // rbp

  v1 = (volatile signed __int64 *)(a1 + 328);
  v2 = (_QWORD **)(a1 + 336);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  while ( 1 )
  {
    v6 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v6[1] != v2 || (v8 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v2 = v8;
    v9 = (ULONG_PTR)(v6 + 6);
    v8[1] = v2;
    v6[1] = v6;
    *v6 = v6;
    if ( AlpcpReferenceBlob((ULONG_PTR)(v6 + 6)) )
    {
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1, v3, v4, v5);
      KeAbPostRelease((ULONG_PTR)v1);
      if ( AlpcpDeleteBlob(v9) )
        AlpcpDereferenceBlobEx(v9, 1);
      AlpcpDereferenceBlobEx(v9, 1);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v1, 0LL);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1, v3, v4, v5);
  return KeAbPostRelease((ULONG_PTR)v1);
}
