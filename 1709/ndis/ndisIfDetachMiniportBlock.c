/*
 * XREFs of ndisIfDetachMiniportBlock @ 0x1C0001008
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005ED8C (ndisCheckIfTypeMismatch.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00AA964 (ndisIfRemoveIfBlockMiniportAssociation.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     ndisMDereferenceIfBlock @ 0x1C001F488 (ndisMDereferenceIfBlock.c)
 */

void __fastcall ndisIfDetachMiniportBlock(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  __int64 v4; // rdx
  KIRQL v5; // al
  KIRQL v6; // bl
  void *v7; // rcx
  KIRQL v8; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 4064);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  *(_BYTE *)(v1 + 1403) = 0;
  *(_BYTE *)(a1 + 4056) = 0;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LOBYTE(v4) = -1;
  *(_QWORD *)(a1 + 4072) = &Event;
  ndisMDereferenceIfBlock(a1, v4);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 4072) = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  *(_QWORD *)(a1 + 4064) = 0LL;
  v6 = v5;
  v7 = *(void **)(v1 + 1448);
  *(_QWORD *)(v1 + 1416) = 0LL;
  NdisFreeRefCount(v7);
  *(_QWORD *)(v1 + 1448) = 0LL;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v6);
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((PVOID)v1);
  KeReleaseSpinLock(&ndisIfListLock, v8);
}
