/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x1405E8F94
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     AlpcpInsertResourcePort @ 0x1404622C4 (AlpcpInsertResourcePort.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1404664F0 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpRemoveResourcePort @ 0x1405404DC (AlpcpRemoveResourcePort.c)
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
  AlpcpUnlockBlob(*(_QWORD *)(v3 + 16));
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 0LL;
}
