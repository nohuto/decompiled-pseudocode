/*
 * XREFs of ndisIfDetachMiniportBlock @ 0x1C0025030
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005EFE0 (ndisCheckIfTypeMismatch.c)
 *     ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00BEA64 (ndisIfRemoveIfBlockMiniportAssociation.c)
 * Callees:
 *     ndisMDereferenceIfBlock @ 0x1C0019F9C (ndisMDereferenceIfBlock.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B868 (IFBLOCK_DECREMENT_REF.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 */

void __fastcall ndisIfDetachMiniportBlock(__int64 a1)
{
  __int64 v1; // rsi
  KIRQL v3; // al
  KIRQL v4; // al
  KIRQL v5; // bl
  void *v6; // rcx
  KIRQL v7; // bl
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 4064);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  *(_BYTE *)(v1 + 1403) = 0;
  *(_BYTE *)(a1 + 4056) = 0;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v3);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  *(_QWORD *)(a1 + 4072) = &Event;
  ndisMDereferenceIfBlock(a1, 0xFFu);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 4072) = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  *(_QWORD *)(a1 + 4064) = 0LL;
  v5 = v4;
  v6 = *(void **)(v1 + 1448);
  *(_QWORD *)(v1 + 1416) = 0LL;
  NdisFreeRefCount(v6);
  *(_QWORD *)(v1 + 1448) = 0LL;
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  IFBLOCK_DECREMENT_REF((_QWORD *)v1, 0xCu);
  KeReleaseSpinLock(&ndisIfListLock, v7);
}
