/*
 * XREFs of ndisReturnNetBufferListsToPackets @ 0x1C006B4A0
 * Callers:
 *     <none>
 * Callees:
 *     NdisMPauseComplete @ 0x1C0013580 (NdisMPauseComplete.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0015F08 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C004E4B0 (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisReturnPacketToMiniport @ 0x1C006B5E0 (ndisReturnPacketToMiniport.c)
 */

void __fastcall ndisReturnNetBufferListsToPackets(
        KSPIN_LOCK *MiniportAdapterHandle,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  int v3; // r15d
  char v4; // bp
  KIRQL v5; // si
  struct _NET_BUFFER_LIST *Alignment; // r14
  struct _NDIS_PACKET *v9; // rax
  __int64 v10; // r9
  int v11; // eax
  bool v12; // zf
  struct _NDIS_STACK_RESERVED *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3 & 1;
  v5 = 0;
  if ( (a3 & 1) == 0 )
    v5 = KfRaiseIrql(2u);
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      v9 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(a2);
      if ( v9 )
      {
        ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
        NDIS_STACK_RESERVED_FROM_PACKET(v9, &v13);
        ++v3;
        *(_QWORD *)v13 = MiniportAdapterHandle;
        ndisReturnPacketToMiniport(MiniportAdapterHandle, v10);
      }
      a2 = Alignment;
    }
    while ( Alignment );
  }
  KeAcquireSpinLockAtDpcLevel(MiniportAdapterHandle + 250);
  MiniportAdapterHandle[252] = (KSPIN_LOCK)KeGetCurrentThread();
  v11 = *((_DWORD *)MiniportAdapterHandle + 503) - v3;
  *((_DWORD *)MiniportAdapterHandle + 506) = 2492646;
  v12 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
  *((_DWORD *)MiniportAdapterHandle + 503) = v11;
  if ( !v12 || v11 )
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
  if ( !v4 && v5 != 2 )
    KeLowerIrql(v5);
}
