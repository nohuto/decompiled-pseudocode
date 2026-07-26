/*
 * XREFs of ndisMDeferredReturnPackets @ 0x1C005F5E4
 * Callers:
 *     ndisMProcessDeferred @ 0x1C005FF14 (ndisMProcessDeferred.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C005DB58 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C0063A14 (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMDeferredReturnPackets(__int64 a1)
{
  void (__fastcall *v1)(_QWORD, struct _NDIS_PACKET *); // rsi
  struct _NDIS_PACKET *v3; // rcx
  struct _NDIS_PACKET *v4; // rcx
  struct _NDIS_PACKET *v5; // rdi
  struct _NDIS_STACK_RESERVED *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))(a1 + 2168);
  v3 = *(struct _NDIS_PACKET **)(a1 + 152);
  if ( v3 )
  {
    do
    {
      NDIS_STACK_RESERVED_FROM_PACKET(v3, &v6);
      v5 = *(struct _NDIS_PACKET **)v6;
      *(_QWORD *)v6 = 0LL;
      --*(_DWORD *)&v4[-1].ProtocolReserved[4];
      if ( (v4[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v4[-1].ProtocolReserved[4] == -1 )
        NDIS_FREE_XFER_DATA_PACKET(v4);
      else
        v1(*(_QWORD *)(a1 + 24), v4);
      if ( (*(_DWORD *)(a1 + 120) & 0x8000) != 0 )
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 1828));
      v3 = v5;
    }
    while ( v5 );
  }
  *(_QWORD *)(a1 + 152) = 0LL;
}
