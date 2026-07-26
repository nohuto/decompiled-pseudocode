/*
 * XREFs of ndisMProcessSGListS @ 0x1C004CC50
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisMProcessDeferred @ 0x1C006098C (ndisMProcessDeferred.c)
 *     ndisMQueueWorkItem @ 0x1C0060FD4 (ndisMQueueWorkItem.c)
 */

void __fastcall ndisMProcessSGListS(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  struct _NDIS_MINIPORT_BLOCK *v6; // rbx
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *Blink; // rdx
  char v9; // di
  struct _NDIS_STACK_RESERVED *v10; // [rsp+40h] [rbp+18h] BYREF

  *(_QWORD *)(*(unsigned __int16 *)(a4 + 42) + a4 + 80) = a3;
  NDIS_STACK_RESERVED_FROM_PACKET((struct _NDIS_PACKET *)a4, &v10);
  v5 = *(_QWORD *)v10;
  if ( **(_BYTE **)v10 == 5 )
    v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v5 + 32);
  else
    v6 = *(struct _NDIS_MINIPORT_BLOCK **)(v5 + 16);
  KeAcquireSpinLockAtDpcLevel(&v6->Lock);
  v6->MiniportThread = KeGetCurrentThread();
  v7 = (_LIST_ENTRY *)(a4 + 64);
  v6->LockDbg = 1835951;
  *(_QWORD *)(a4 + 72) = a4 + 64;
  *(_QWORD *)(a4 + 64) = a4 + 64;
  Blink = v6->PacketList.Blink;
  if ( Blink->Flink != &v6->PacketList )
    __fastfail(3u);
  v7->Flink = &v6->PacketList;
  *(_QWORD *)(a4 + 72) = Blink;
  Blink->Flink = v7;
  v6->PacketList.Blink = v7;
  if ( !v6->FirstPendingPacket )
    v6->FirstPendingPacket = (_NDIS_PACKET *)a4;
  v9 = 0;
  if ( !v6->LockAcquired )
  {
    v6->LockAcquired = 1;
    v9 = 1;
    v6->LockDbgX = 1835967;
    v6->LockThread = KeGetCurrentThread();
  }
  ndisMQueueWorkItem(v6, 1LL);
  if ( v9 )
  {
    ndisMProcessDeferred(v6);
    v6->LockDbgX = 0;
    v6->LockThread = 0LL;
    v6->LockAcquired = 0;
  }
  v6->MiniportThread = 0LL;
  v6->LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&v6->Lock);
}
