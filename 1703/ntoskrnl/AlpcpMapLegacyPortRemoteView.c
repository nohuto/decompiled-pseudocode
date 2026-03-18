/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x140574B50
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     PsDereferencePrimaryToken @ 0x1404501D0 (PsDereferencePrimaryToken.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRemoveResourcePort @ 0x14047AB44 (AlpcpRemoveResourcePort.c)
 *     AlpcpInsertResourcePort @ 0x14047BFBC (AlpcpInsertResourcePort.c)
 *     AlpcpUnlockBlob @ 0x14047D5A0 (AlpcpUnlockBlob.c)
 *     AlpcpReferencePort @ 0x1406B1838 (AlpcpReferencePort.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *Object, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  signed __int64 *v4; // rbx
  signed __int64 *v7; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v4 = Object + 44;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v3 + 16));
  v7 = *(signed __int64 **)(v3 + 24);
  if ( Object != v7 )
  {
    AlpcpRemoveResourcePort((__int64)v7, v3);
    PsDereferencePrimaryToken(*(PACCESS_TOKEN *)(v3 + 24));
    AlpcpReferencePort(Object);
    *(_QWORD *)(v3 + 24) = Object;
    AlpcpInsertResourcePort((__int64)Object, v3);
  }
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *(_DWORD *)a3 = 24;
  a3[2] = *(_QWORD *)(v3 + 40);
  a3[1] = *(_QWORD *)(v3 + 48);
  AlpcpUnlockBlob(*(_QWORD *)(v3 + 16));
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 0LL;
}
