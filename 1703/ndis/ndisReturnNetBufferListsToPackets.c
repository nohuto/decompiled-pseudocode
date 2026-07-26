/*
 * XREFs of ndisReturnNetBufferListsToPackets @ 0x1C0069420
 * Callers:
 *     <none>
 * Callees:
 *     NdisMPauseComplete @ 0x1C0015F80 (NdisMPauseComplete.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004F040 (ndisXlateReturnNetBufferListToPacket.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisReturnPacketToMiniport @ 0x1C006955C (ndisReturnPacketToMiniport.c)
 */

void __fastcall ndisReturnNetBufferListsToPackets(
        KSPIN_LOCK *MiniportAdapterHandle,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  int v3; // r15d
  KIRQL v4; // si
  char v7; // r14
  struct _NET_BUFFER_LIST *Alignment; // rbp
  struct _NDIS_PACKET *v9; // rax
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  bool v12; // zf
  int v13; // eax
  struct _NDIS_STACK_RESERVED *v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    v4 = KfRaiseIrql(2u);
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      v9 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(a2);
      if ( v9 )
      {
        ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
        NDIS_STACK_RESERVED_FROM_PACKET(v9, &v14);
        ++v3;
        *(_QWORD *)v14 = MiniportAdapterHandle;
        ndisReturnPacketToMiniport(MiniportAdapterHandle, v10);
      }
      a2 = Alignment;
    }
    while ( Alignment );
  }
  KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 250);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 503) -= v3;
  v12 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
  MiniportAdapterHandle[252] = (KSPIN_LOCK)CurrentThread;
  v13 = *((_DWORD *)MiniportAdapterHandle + 503);
  *((_DWORD *)MiniportAdapterHandle + 506) = 2492637;
  if ( !v12 || v13 )
  {
    MiniportAdapterHandle[252] = 0LL;
    KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 250);
    *((_DWORD *)MiniportAdapterHandle + 506) = 0;
  }
  else
  {
    MiniportAdapterHandle[252] = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 502) = 6;
    KeReleaseSpinLockFromDpcLevel(MiniportAdapterHandle + 250);
    *((_DWORD *)MiniportAdapterHandle + 506) = 0;
    NdisMPauseComplete(MiniportAdapterHandle);
  }
  if ( !v7 && v4 != 2 )
    KeLowerIrql(v4);
}
