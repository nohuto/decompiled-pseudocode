/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x1405E81D4
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpInsertResourcePort @ 0x1404D4A3C (AlpcpInsertResourcePort.c)
 *     AlpcpRemoveResourcePort @ 0x1404D6EA4 (AlpcpRemoveResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404DCB2C (AlpcpLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *Object, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  signed __int64 *v4; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  signed __int64 *v10; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v4 = Object + 44;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v3 + 16));
  v10 = *(signed __int64 **)(v3 + 24);
  if ( Object != v10 )
  {
    AlpcpRemoveResourcePort((__int64)v10, v3);
    ObfDereferenceObject(*(PVOID *)(v3 + 24));
    ObfReferenceObject(Object);
    *(_QWORD *)(v3 + 24) = Object;
    AlpcpInsertResourcePort((__int64)Object, v3);
  }
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *(_DWORD *)a3 = 24;
  a3[2] = *(_QWORD *)(v3 + 40);
  a3[1] = *(_QWORD *)(v3 + 48);
  AlpcpUnlockBlob(*(_QWORD *)(v3 + 16), v7, v8, v9);
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 0LL;
}
