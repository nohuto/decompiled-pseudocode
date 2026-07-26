/*
 * XREFs of ndisFreePacketPool @ 0x1C0052348
 * Callers:
 *     NdisFreePacketPool @ 0x1C0052000 (NdisFreePacketPool.c)
 *     ndisVerifierFreePacketPool @ 0x1C0065BB0 (ndisVerifierFreePacketPool.c)
 * Callees:
 *     ?ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z @ 0x1C005190C (-ndisFreePacketPoolHdr@@YAXPEAU_NDIS_PKT_POOL_HDR@@PEAU_NDIS_PKT_POOL@@@Z.c)
 */

void __fastcall ndisFreePacketPool(struct _NDIS_PKT_POOL *a1)
{
  KIRQL v2; // bp
  _LIST_ENTRY *p_AgingBlocks; // rdi
  char *Flink; // rcx
  _LIST_ENTRY *v5; // rdx
  _LIST_ENTRY *p_FreeBlocks; // rdi
  char *v7; // rcx
  _LIST_ENTRY *v8; // rax
  _LIST_ENTRY *p_UsedBlocks; // rdi
  char *v10; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // r8
  _LIST_ENTRY *Blink; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  p_AgingBlocks = &a1->AgingBlocks;
  while ( p_AgingBlocks->Flink != p_AgingBlocks )
  {
    Flink = (char *)p_AgingBlocks->Flink;
    v5 = p_AgingBlocks->Flink->Flink;
    if ( p_AgingBlocks->Flink->Blink != p_AgingBlocks || (char *)v5->Blink != Flink )
      __fastfail(3u);
    p_AgingBlocks->Flink = v5;
    v5->Blink = p_AgingBlocks;
    ndisFreePacketPoolHdr(Flink, a1);
  }
  p_FreeBlocks = &a1->FreeBlocks;
  while ( p_FreeBlocks->Flink != p_FreeBlocks )
  {
    v7 = (char *)p_FreeBlocks->Flink;
    v8 = p_FreeBlocks->Flink->Flink;
    if ( p_FreeBlocks->Flink->Blink != p_FreeBlocks || (char *)v8->Blink != v7 )
      __fastfail(3u);
    p_FreeBlocks->Flink = v8;
    v8->Blink = p_FreeBlocks;
    ndisFreePacketPoolHdr(v7, a1);
  }
  p_UsedBlocks = &a1->UsedBlocks;
  while ( p_UsedBlocks->Flink != p_UsedBlocks )
  {
    v10 = (char *)p_UsedBlocks->Flink;
    v11 = p_UsedBlocks->Flink->Flink;
    if ( p_UsedBlocks->Flink->Blink != p_UsedBlocks || (char *)v11->Blink != v10 )
      __fastfail(3u);
    p_UsedBlocks->Flink = v11;
    v11->Blink = p_UsedBlocks;
    ndisFreePacketPoolHdr(v10, a1);
  }
  KeAcquireSpinLockAtDpcLevel(&ndisGlobalPacketPoolListLock);
  v12 = a1->GlobalPacketPoolList.Flink;
  Blink = a1->GlobalPacketPoolList.Blink;
  if ( v12->Blink != &a1->GlobalPacketPoolList || Blink->Flink != &a1->GlobalPacketPoolList )
    __fastfail(3u);
  Blink->Flink = v12;
  v12->Blink = Blink;
  KeReleaseSpinLockFromDpcLevel(&ndisGlobalPacketPoolListLock);
  KeReleaseSpinLock(&a1->Lock, v2);
  ExFreePoolWithTag(a1, 0);
}
