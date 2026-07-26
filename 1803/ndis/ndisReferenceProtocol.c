/*
 * XREFs of ndisReferenceProtocol @ 0x1C001AC14
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00C0C08 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00C2390 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00E78C0 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F6D18 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisPDStartup @ 0x1C00FAE80 (NdisPDStartup.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0101E78 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     NdisOpenAdapterEx @ 0x1C0104520 (NdisOpenAdapterEx.c)
 *     ndisReferenceProtocolByName @ 0x1C010E318 (ndisReferenceProtocolByName.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     WPP_SF_DqlD @ 0x1C005C78C (WPP_SF_DqlD.c)
 */

bool __fastcall ndisReferenceProtocol(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  KIRQL v5; // bp
  unsigned __int16 v6; // cx
  bool v7; // bl
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = a1;
  v2 = a1 + 32;
  v4 = 1;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 32));
  if ( !*(_BYTE *)(v2 + 10) )
  {
    v6 = *(_WORD *)(v2 + 8);
    if ( v6 >= 0xFFEBu )
    {
      ndisRefCountReferenceCountOverflow = 1;
      v4 = 2;
    }
    else
    {
      *(_WORD *)(v2 + 8) = v6 + 1;
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 16), a2);
      v4 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  v7 = v4 == 0;
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_DqlD(
      v9,
      *(unsigned __int8 *)(v9 + 42),
      a2,
      &v9,
      *(unsigned __int16 *)(v9 + 40),
      *(unsigned __int8 *)(v9 + 42));
  return v7;
}
