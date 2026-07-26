/*
 * XREFs of ndisReferenceProtocol @ 0x1C0019DB4
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C920 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AF69C (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ndisNotifyBindFailureOnUnboundProtocols @ 0x1C00B2180 (ndisNotifyBindFailureOnUnboundProtocols.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5D68 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisReEnumerateProtocolBindings @ 0x1C00DC030 (NdisReEnumerateProtocolBindings.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00EAB6C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisPDStartup @ 0x1C00EECB0 (NdisPDStartup.c)
 *     NdisOpenAdapterEx @ 0x1C00F7950 (NdisOpenAdapterEx.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C00FADCC (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisReferenceProtocolByName @ 0x1C01033F8 (ndisReferenceProtocolByName.c)
 * Callees:
 *     ?ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C000CD84 (-ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     WPP_SF_DqlD @ 0x1C005C4C4 (WPP_SF_DqlD.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

bool __fastcall ndisReferenceProtocol(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  KIRQL v5; // bp
  unsigned __int16 v6; // cx
  struct _NDIS_REFCOUNT_BLOCK *v7; // r8
  bool v8; // bl
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = a1;
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
      v7 = *(struct _NDIS_REFCOUNT_BLOCK **)(v2 + 16);
      *(_WORD *)(v2 + 8) = v6 + 1;
      if ( v7 )
      {
        if ( v7->Type )
        {
          if ( v7->Type == 1 )
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v7->8 + a2, 1u);
        }
        else
        {
          ndisReferenceWithTagCompact(v7, a2);
        }
      }
      v4 = 0;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  v8 = v4 == 0;
  if ( (unsigned __int8)byte_1C009260C >= 4u )
    WPP_SF_DqlD(
      v10,
      *(unsigned __int8 *)(v10 + 42),
      a2,
      &v10,
      *(unsigned __int16 *)(v10 + 40),
      *(unsigned __int8 *)(v10 + 42));
  return v8;
}
