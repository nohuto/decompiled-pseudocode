/*
 * XREFs of ndisReferenceOpenByHandle @ 0x1C001C400
 * Callers:
 *     ndisAllocateReceiveQueue @ 0x1C003AA8C (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003C958 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C0045480 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C00457D0 (ndisMDirectOidRequest.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BF410 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qDL @ 0x1C005F414 (WPP_SF_qDL.c)
 */

unsigned __int8 __fastcall ndisReferenceOpenByHandle(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // bl
  KIRQL v5; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rcx
  KIRQL v7; // r15
  KIRQL v8; // bl
  __int64 v9; // rdx

  v4 = 0;
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qD(111LL, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v7 = v5;
  if ( ndisGlobalOpenList )
  {
    while ( NextGlobalOpen != (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
      if ( !NextGlobalOpen )
        goto LABEL_9;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 696));
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 688), a2);
      ++*(_DWORD *)(a1 + 228);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 696), v8);
      v4 = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
  }
LABEL_9:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v7);
  if ( (unsigned __int8)byte_1C009961B >= 4u )
    WPP_SF_qDL(v4, v9, a1, a2, v4);
  return v4;
}
