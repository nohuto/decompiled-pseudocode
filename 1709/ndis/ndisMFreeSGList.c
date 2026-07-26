/*
 * XREFs of ndisMFreeSGList @ 0x1C004BAD4
 * Callers:
 *     ndisMAbortPackets @ 0x1C0001868 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C004B5A8 (ndisMAllocSGListS.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00535F0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00536D0 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0054F90 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0055440 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0056080 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0056260 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00569F0 (ndisMSendPacketsSGToMiniport.c)
 * Callees:
 *     PplpLazyInitializeLookasideList @ 0x1C0015C74 (PplpLazyInitializeLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisMFreeSGList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  _SLIST_ENTRY *v9; // rdi
  __int64 v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  struct _MDL *v17; // rcx
  char *v18; // rbx

  v3 = *(unsigned __int16 *)(a2 + 42);
  v5 = *(_QWORD *)(a1 + 504);
  LOBYTE(a3) = 1;
  v6 = *(_QWORD *)(v3 + a2 + 80);
  *(_QWORD *)(v3 + a2 + 80) = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 8LL) + 96LL))(
    *(_QWORD *)(v5 + 24),
    v6,
    a3);
  v7 = *(_DWORD *)(a2 + 36);
  if ( (v7 & 0x2000) != 0 )
  {
    *(_DWORD *)(a2 + 36) = v7 & 0xFFFFDFFF;
    v8 = *(unsigned __int16 *)(a2 + 42);
    v9 = *(_SLIST_ENTRY **)(v8 + a2 + 72);
    *(_QWORD *)(v8 + a2 + 72) = 0LL;
    v10 = *(_QWORD *)(v5 + 64);
    v11 = KeGetPcr()->Prcb.Number + 1;
    v12 = *(_DWORD *)v10 - 1;
    if ( v11 < *(_DWORD *)v10 )
      v12 = v11;
    v13 = v12;
    v14 = *(_QWORD *)(v10 + 32);
    v15 = *(_QWORD *)(v14 + 8 * v13);
    if ( !*(_BYTE *)(v15 + 112) )
      PplpLazyInitializeLookasideList(v10, *(_QWORD *)(v14 + 8 * v13));
    ++*(_DWORD *)(v15 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v15) < *(_WORD *)(v15 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v15, v9);
    }
    else
    {
      ++*(_DWORD *)(v15 + 32);
      (*(void (__fastcall **)(_SLIST_ENTRY *, __int64))(v15 + 56))(v9, v15);
    }
  }
  else if ( (v7 & 0x800) != 0 )
  {
    *(_DWORD *)(a2 + 36) = v7 & 0xFFFFF7FF;
    v16 = *(unsigned __int16 *)(a2 + 42);
    v17 = *(struct _MDL **)(v16 + a2 + 72);
    *(_QWORD *)(v16 + a2 + 72) = 0LL;
    v18 = (char *)v17->StartVa + v17->ByteOffset;
    IoFreeMdl(v17);
    ExFreePoolWithTag(v18, 0);
  }
}
